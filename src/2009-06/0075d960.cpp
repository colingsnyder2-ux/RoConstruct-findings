// roc 2009-06 0075d960  unit: CXTPControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d960
//
// 0075d960  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0075d966  e925b1fdff           jmp 0x738a90
// auto-matched from its assembly shape

struct P_func_0075d960 { void g(); };
struct S_func_0075d960 {
    char pad[228];
    P_func_0075d960* m_p;
    void f();
};
void S_func_0075d960::f()
{
    m_p->g();
}
