// roc 2011-06 005e79d0  unit: RBX::DataModel  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e79d0
//
// 005e79d0  8b89d40a0000         mov ecx, dword ptr [ecx + 0xad4]
// 005e79d6  e91515fbff           jmp 0x598ef0
// auto-matched from its assembly shape

struct P_func_005e79d0 { void g(); };
struct S_func_005e79d0 {
    char pad[2772];
    P_func_005e79d0* m_p;
    void f();
};
void S_func_005e79d0::f()
{
    m_p->g();
}
