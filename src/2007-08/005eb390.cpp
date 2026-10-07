// roc 2007-08 005eb390  unit: RBX::FlagStand  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005eb390
//
// 005eb390  c6811801000000       mov byte ptr [ecx + 0x118], 0
// 005eb397  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005eb390 {
    char pad0[280];
    char m_x;
    void f(int a1);
};
void S_func_005eb390::f(int a1)
{
    m_x = (char)0;
}
