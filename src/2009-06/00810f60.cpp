// roc 2009-06 00810f60  unit: CXTPScrollBase  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810f60
//
// 00810f60  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00810f63  e9d8eaffff           jmp 0x80fa40
// auto-matched from its assembly shape

struct P_func_00810f60 { void g(); };
struct S_func_00810f60 {
    char pad[52];
    P_func_00810f60* m_p;
    void f();
};
void S_func_00810f60::f()
{
    m_p->g();
}
