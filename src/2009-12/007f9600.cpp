// roc 2009-12 007f9600  unit: CPatchedControlComboBox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9600
//
// 007f9600  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 007f9606  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0071b400@ns_ROCX00001c@@QAEHXZ)

namespace ns_ROCX00001c {
struct S_func_0071b400 {
    char pad0[440];
    int m_x;
    int f();
};
int S_func_0071b400::f()
{
    return m_x;
}
}
