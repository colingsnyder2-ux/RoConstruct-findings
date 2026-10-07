// roc 2007-08 005b44d0  unit: RBX::ICameraSubject  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b44d0
//
// 005b44d0  32c0                 xor al, al
// 005b44d2  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_005b44d0 {

    bool f(int a1, int a2, int a3);
};
bool S_func_005b44d0::f(int a1, int a2, int a3)
{
    return false;
}
