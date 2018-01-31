#include <HsFFI.h>
#ifdef __GLASGOW_HASKELL__
#include "Fibonacci_stub.h"
#include <jni.h>
extern void __stginit_Safe(void);
#endif
#include <stdio.h>

JNIEXPORT jint JNICALL Java_HelloHaskell_fibonacci(JNIEnv * env, jclass c, jint n)
{
	int argc;
	char*** argv;
	argc = 0;
    hs_init(&argc, argv);
#ifdef __GLASGOW_HASKELL__
    hs_add_root(__stginit_Safe);
#endif
	int i;
    i = fibonacci_hs(n);
    hs_exit();
    return i;
}