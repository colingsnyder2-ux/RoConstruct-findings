// roc 2007-03 005591c0  unit: seg_00550000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005591c0
//
// 005591c0  8bc1                 mov eax, ecx
// 005591c2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005591c0 {

    void* f(int a1);
};
void* S_func_005591c0::f(int a1)
{
    return this;
}
