// roc 2011-06 0084e110  unit: CXTPControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e110
//
// 0084e110  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0084e116  e97579fdff           jmp 0x825a90
// auto-matched from its assembly shape

struct P_func_0084e110 { void g(); };
struct S_func_0084e110 {
    char pad[228];
    P_func_0084e110* m_p;
    void f();
};
void S_func_0084e110::f()
{
    m_p->g();
}
