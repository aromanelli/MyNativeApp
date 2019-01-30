// https://developer.android.com/studio/projects/add-native-code

#include <jni.h>
#include <string>
#include <math.h>

extern "C" JNIEXPORT jstring JNICALL
Java_info_romanelli_mynativeapp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */ ) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

// https://code.tutsplus.com/tutorials/how-to-get-started-with-androids-native-development-kit--cms-27605
extern "C" JNIEXPORT jstring JNICALL
Java_info_romanelli_mynativeapp_MainActivity_calculateArea(
        JNIEnv *env,
        jobject, /* this */
        jdouble radius ) {
    jdouble area = M_PI * radius * radius;
    char output[40];
    sprintf(output, "The area is %f sqm", area);
    return env->NewStringUTF(output);
}