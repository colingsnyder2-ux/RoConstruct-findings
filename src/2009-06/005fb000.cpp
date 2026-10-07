// roc 2009-06 005fb000  unit: RBX::DataModel  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fb000
//
// 005fb000  8b8914020000         mov ecx, dword ptr [ecx + 0x214]
// 005fb006  e9e5a6fdff           jmp 0x5d56f0
// auto-matched from its assembly shape

struct P_func_005fb000 { void g(); };
struct S_func_005fb000 {
    char pad[532];
    P_func_005fb000* m_p;
    void f();
};
void S_func_005fb000::f()
{
    m_p->g();
}
