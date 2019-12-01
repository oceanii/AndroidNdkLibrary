package com.example.xzy.cjsoninterface;

/**
 * Created by xzy on 2019/10/13.
 */

public class JniCjsonInterface {

    static {
        System.loadLibrary("cjsoninterface");
    }

    public static native String nativeGetCjsonVersion();
}
