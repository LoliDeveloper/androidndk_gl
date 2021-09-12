#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_lolideveloper_mynativeapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ dude";
    return env->NewStringUTF(hello.c_str());
}