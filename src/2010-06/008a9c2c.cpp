// roc 2010-06 008a9c2c  unit: CXTIconHandle  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9c2c
//
// 008a9c2c  8bc1                 mov eax, ecx
// 008a9c2e  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008a9c2c {

    void* f();
};
void* S_func_008a9c2c::f()
{
    return this;
}
