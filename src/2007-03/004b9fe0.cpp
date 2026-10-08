// roc 2007-03 004b9fe0  unit: seg_004b0000  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9fe0
//
// 004b9fe0  8bc1                 mov eax, ecx
// 004b9fe2  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b9fe0 {

    void* f();
};
void* S_func_004b9fe0::f()
{
    return this;
}
