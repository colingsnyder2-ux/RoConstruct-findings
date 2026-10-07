// roc 2008-06 0042ae40  unit: EventHandler  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ae40
//
// 0042ae40  b806000280           mov eax, 0x80020006
// 0042ae45  c21800               ret 0x18
// auto-matched from its assembly shape

struct S_func_0042ae40 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6);
};
unsigned int S_func_0042ae40::f(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return 0x80020006u;
}
