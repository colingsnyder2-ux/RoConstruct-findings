// roc 2011-06 006a19e0  unit: RBX::LuaWebService::UCachedLuaWebServiceInfo::?$AsyncHttpCache  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a19e0
//
// 006a19e0  c7410403000000       mov dword ptr [ecx + 4], 3
// 006a19e7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a19e0 {
    char pad0[4];
    int m_x;
    void f();
};
void S_func_006a19e0::f()
{
    m_x = (int)3;
}
