// roc 2011-06 006f3010  unit: RBX::VirtualUser  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f3010
//
// 006f3010  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 006f3016  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f3010 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_006f3010::f()
{
    return m_x;
}
