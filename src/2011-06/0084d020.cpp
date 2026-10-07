// roc 2011-06 0084d020  unit: CXTPCommandBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084d020
//
// 0084d020  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0084d026  e9b5e5ffff           jmp 0x84b5e0
// auto-matched from its assembly shape

struct P_func_0084d020 { void g(); };
struct S_func_0084d020 {
    char pad[252];
    P_func_0084d020* m_p;
    void f();
};
void S_func_0084d020::f()
{
    m_p->g();
}
