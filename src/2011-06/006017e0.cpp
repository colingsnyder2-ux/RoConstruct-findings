// roc 2011-06 006017e0  unit: RBX::TopMenuBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006017e0
//
// 006017e0  8a81b8000000         mov al, byte ptr [ecx + 0xb8]
// 006017e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006017e0 {
    char pad0[184];
    char m_x;
    char f();
};
char S_func_006017e0::f()
{
    return m_x;
}
