// roc 2007-08 0042aa00  unit: EventHandler  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0042aa00
//
// 0042aa00  b806000280           mov eax, 0x80020006
// 0042aa05  c21800               ret 0x18
// auto-matched from its assembly shape

struct S_func_0042aa00 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6);
};
unsigned int S_func_0042aa00::f(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return 0x80020006u;
}
