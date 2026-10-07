// roc 2009-06 0062beb0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062beb0
//
// 0062beb0  8b8950010000         mov ecx, dword ptr [ecx + 0x150]
// 0062beb6  e9152b0500           jmp 0x67e9d0
// auto-matched from its assembly shape

struct P_func_0062beb0 { void g(); };
struct S_func_0062beb0 {
    char pad[336];
    P_func_0062beb0* m_p;
    void f();
};
void S_func_0062beb0::f()
{
    m_p->g();
}
