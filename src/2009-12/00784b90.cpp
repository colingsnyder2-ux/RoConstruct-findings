// roc 2009-12 00784b90  unit: RBX::ScriptMouseCommand  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00784b90
//
// 00784b90  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00784b93  e9b86bfeff           jmp 0x76b750
// copied from an identical function in another client (function ?f@S_func_006b5a60@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct P_func_006b5a60 { void g(); };
struct S_func_006b5a60 {
    char pad[28];
    P_func_006b5a60* m_p;
    void f();
};
void S_func_006b5a60::f()
{
    m_p->g();
}
}
