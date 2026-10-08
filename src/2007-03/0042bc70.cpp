// roc 2007-03 0042bc70  unit: seg_00420000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042bc70
//
// 0042bc70  b80b000280           mov eax, 0x8002000b
// 0042bc75  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_0042bc70 {

    unsigned int f(int a1, int a2, int a3, int a4);
};
unsigned int S_func_0042bc70::f(int a1, int a2, int a3, int a4)
{
    return 0x8002000bu;
}
