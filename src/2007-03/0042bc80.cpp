// roc 2007-03 0042bc80  unit: seg_00420000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042bc80
//
// 0042bc80  b806000280           mov eax, 0x80020006
// 0042bc85  c21800               ret 0x18
// auto-matched from its assembly shape

struct S_func_0042bc80 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6);
};
unsigned int S_func_0042bc80::f(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return 0x80020006u;
}
