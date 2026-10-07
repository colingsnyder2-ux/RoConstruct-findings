// roc 2011-06 006a1ab0  unit: RBX::LuaWebService::UCachedLuaWebServiceInfo::?$AsyncHttpCache  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a1ab0
//
// 006a1ab0  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 006a1ab3  e9f8f80f00           jmp 0x7a13b0
// auto-matched from its assembly shape

struct P_func_006a1ab0 { void g(); };
struct S_func_006a1ab0 {
    char pad[64];
    P_func_006a1ab0* m_p;
    void f();
};
void S_func_006a1ab0::f()
{
    m_p->g();
}
