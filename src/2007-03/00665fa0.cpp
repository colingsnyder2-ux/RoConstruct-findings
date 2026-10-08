// roc 2007-03 00665fa0  unit: seg_00660000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00665fa0
//
// 00665fa0  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00665fa6  e975f7ffff           jmp 0x665720
// auto-matched from its assembly shape

struct P_func_00665fa0 { void g(); };
struct S_func_00665fa0 {
    char pad[252];
    P_func_00665fa0* m_p;
    void f();
};
void S_func_00665fa0::f()
{
    m_p->g();
}
