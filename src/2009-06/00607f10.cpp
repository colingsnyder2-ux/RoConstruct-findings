// roc 2009-06 00607f10  unit: RBX::TopMenuBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00607f10
//
// 00607f10  8a81b4000000         mov al, byte ptr [ecx + 0xb4]
// 00607f16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00607f10 {
    char pad0[180];
    char m_x;
    char f();
};
char S_func_00607f10::f()
{
    return m_x;
}
