package com.mark.platinumdlnademo

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.TextView
import com.mark.platinumdlnademo.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    private var upnpLong : Long = 0

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.sampleText.text = stringFromJNI()
        binding.init.setOnClickListener(object : View.OnClickListener{
            override fun onClick(v: View?) {
                upnpLong = initUpnp()
                binding.sampleText.text = "long is " + upnpLong
            }
        })
        binding.start.setOnClickListener(object : View.OnClickListener{
            override fun onClick(v: View?) {
                upnpStart(upnpLong)
            }
        })
        binding.stop.setOnClickListener(object : View.OnClickListener{
            override fun onClick(v: View?) {
                upnpStop(upnpLong)
            }
        })
    }

    external fun stringFromJNI(): String

    external fun initUpnp(): Long
    external fun upnpStart(longStr : Long): Int
    external fun upnpStop(longStr : Long): Int

    external fun startScan(longStr : Long): Int

    companion object {
        init {
            System.loadLibrary("myapplication")
            System.loadLibrary("platinum-jni")
        }
    }
}