// roc 2008-06 0042ae30  unit: EventHandler  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ae30
//
// 0042ae30  b80b000280           mov eax, 0x8002000b
// 0042ae35  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_0042ae30 {

    unsigned int f(int a1, int a2, int a3, int a4);
};
unsigned int S_func_0042ae30::f(int a1, int a2, int a3, int a4)
{
    return 0x8002000bu;
}
