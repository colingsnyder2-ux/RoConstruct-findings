// roc 2009-12 008ecab0  unit: CXTPDialogBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ecab0
//
// 008ecab0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 008ecab3  e978daffff           jmp 0x8ea530
// copied from an identical function in another client (function ?f@S_func_00810f60@ns_ROCX000090@@QAEXXZ)

namespace ns_ROCX000090 {
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
}
