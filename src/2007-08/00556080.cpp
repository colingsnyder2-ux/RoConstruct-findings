// roc 2007-08 00556080  unit: RBX::TopMenuBar  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00556080
//
// 00556080  8a8110010000         mov al, byte ptr [ecx + 0x110]
// 00556086  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00556080 {
    char pad0[272];
    char m_x;
    char f();
};
char S_func_00556080::f()
{
    return m_x;
}
