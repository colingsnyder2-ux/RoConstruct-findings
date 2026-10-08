// roc 2007-03 005ae5e0  unit: seg_005a0000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae5e0
//
// 005ae5e0  32c0                 xor al, al
// 005ae5e2  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_005ae5e0 {

    bool f(int a1, int a2, int a3);
};
bool S_func_005ae5e0::f(int a1, int a2, int a3)
{
    return false;
}
