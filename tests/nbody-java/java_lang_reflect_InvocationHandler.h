#ifndef __JAVA_LANG_REFLECT_INVOCATIONHANDLER__
#define __JAVA_LANG_REFLECT_INVOCATIONHANDLER__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
#define XMLVM_ITABLE_IDX_java_lang_reflect_InvocationHandler_invoke___java_lang_Object_java_lang_reflect_Method_java_lang_Object_1ARRAY 0
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_reflect_Method
#define XMLVM_FORWARD_DECL_java_lang_reflect_Method
XMLVM_FORWARD_DECL(java_lang_reflect_Method)
#endif

XMLVM_DEFINE_CLASS(java_lang_reflect_InvocationHandler, 0, 0)

extern JAVA_OBJECT __CLASS_java_lang_reflect_InvocationHandler;
extern JAVA_OBJECT __CLASS_java_lang_reflect_InvocationHandler_1ARRAY;
extern JAVA_OBJECT __CLASS_java_lang_reflect_InvocationHandler_2ARRAY;
extern JAVA_OBJECT __CLASS_java_lang_reflect_InvocationHandler_3ARRAY;
#ifndef XMLVM_FORWARD_DECL_java_lang_reflect_InvocationHandler
#define XMLVM_FORWARD_DECL_java_lang_reflect_InvocationHandler
typedef struct java_lang_reflect_InvocationHandler java_lang_reflect_InvocationHandler;
#endif

void __INIT_java_lang_reflect_InvocationHandler();
void __INIT_IMPL_java_lang_reflect_InvocationHandler();

#endif
