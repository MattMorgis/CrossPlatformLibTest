// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from helloworld.djinni

#include "NativeHelloWorld.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeHelloWorld::NativeHelloWorld() : ::djinni::JniInterface<::helloworld::HelloWorld, NativeHelloWorld>("com/mattmorgis/helloworld/HelloWorld$CppProxy") {}

NativeHelloWorld::~NativeHelloWorld() = default;


CJNIEXPORT void JNICALL Java_com_mattmorgis_helloworld_HelloWorld_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::helloworld::HelloWorld>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_mattmorgis_helloworld_HelloWorld_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::helloworld::HelloWorld::create();
        return ::djinni::release(::djinni_generated::NativeHelloWorld::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_mattmorgis_helloworld_HelloWorld_00024CppProxy_native_1getHelloWorld(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::helloworld::HelloWorld>(nativeRef);
        auto r = ref->get_hello_world();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
