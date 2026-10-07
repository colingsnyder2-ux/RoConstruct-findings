// roc 2007-08 0042a9f0  unit: EventHandler  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a9f0
//
// 0042a9f0  b80b000280           mov eax, 0x8002000b
// 0042a9f5  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_0042a9f0 {

    unsigned int f(int a1, int a2, int a3, int a4);
};
unsigned int S_func_0042a9f0::f(int a1, int a2, int a3, int a4)
{
    return 0x8002000bu;
}
