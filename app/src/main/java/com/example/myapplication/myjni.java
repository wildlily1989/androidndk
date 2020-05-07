package com.example.myapplication;

public class myjni {
    static {
        System.loadLibrary("firstjni");
    }
    public native String getHelloWord();
}
