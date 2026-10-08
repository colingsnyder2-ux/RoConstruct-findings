// roc 2007-08 0066e210  unit: CXTPControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e210
//
// 0066e210  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 0066e216  e9b5990600           jmp 0x6d7bd0
// auto-matched from its assembly shape

struct P_func_0066e210 { void g(); };
struct S_func_0066e210 {
    char pad[208];
    P_func_0066e210* m_p;
    void f();
};
void S_func_0066e210::f()
{
    m_p->g();
}
