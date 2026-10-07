// roc 2010-06 00679420  unit: RBX::PrismPoly  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00679420
//
// 00679420  8b89f4000000         mov ecx, dword ptr [ecx + 0xf4]
// 00679426  e9a5f7ffff           jmp 0x678bd0
// auto-matched from its assembly shape

struct P_func_00679420 { void g(); };
struct S_func_00679420 {
    char pad[244];
    P_func_00679420* m_p;
    void f();
};
void S_func_00679420::f()
{
    m_p->g();
}
