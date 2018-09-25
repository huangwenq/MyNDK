package com.ndk.archermind.myndk;

/**
 * @auther:HWQ
 * @description:
 * @date:2018-09-25
 * @time:22:04
 */
//创建JNI类
public class JNITest {
    //加载类库名称    稍后生成的so文件与此处命名有关联
    static {
        System.loadLibrary("MyNDK");
    }

    //写一个测试JNI类的native方法    这里就写一个求和方法    最开始创建时报红是正常的
    public native int getSum(int a, int b);
}
