// roc 2009-06 0062bea0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062bea0
//
// 0062bea0  8b8950010000         mov ecx, dword ptr [ecx + 0x150]
// 0062bea6  e9853f0500           jmp 0x67fe30
// auto-matched from its assembly shape

struct P_func_0062bea0 { void g(); };
struct S_func_0062bea0 {
    char pad[336];
    P_func_0062bea0* m_p;
    void f();
};
void S_func_0062bea0::f()
{
    m_p->g();
}
