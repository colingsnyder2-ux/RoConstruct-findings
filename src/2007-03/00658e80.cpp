// roc 2007-03 00658e80  unit: seg_00650000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00658e80
//
// 00658e80  8b89f4000000         mov ecx, dword ptr [ecx + 0xf4]
// 00658e86  e9f5e7ffff           jmp 0x657680
// auto-matched from its assembly shape

struct P_func_00658e80 { void g(); };
struct S_func_00658e80 {
    char pad[244];
    P_func_00658e80* m_p;
    void f();
};
void S_func_00658e80::f()
{
    m_p->g();
}
