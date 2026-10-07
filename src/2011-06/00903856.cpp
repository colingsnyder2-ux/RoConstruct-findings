// roc 2011-06 00903856  unit: CXTIconHandle  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903856
//
// 00903856  8bc1                 mov eax, ecx
// 00903858  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00903856 {

    void* f();
};
void* S_func_00903856::f()
{
    return this;
}
