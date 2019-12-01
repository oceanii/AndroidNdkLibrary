package com.example.xzy.androidndkinvokesharedwithjnilibrary;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import com.example.xzy.cjsoninterface.JniCjsonInterface;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView = findViewById(R.id.tv_show);
        String cjsonVersionStr = JniCjsonInterface.nativeGetCjsonVersion();
        Log.d(TAG, "onCreate: nativeGetCjsonVersion:" + cjsonVersionStr);
        textView.setText(cjsonVersionStr);
    }
}
