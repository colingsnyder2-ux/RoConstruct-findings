// roc 2010-06 008a8570  unit: DxUserInput  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a8570
//
// 008a8570  8b442404             mov eax, dword ptr [esp + 4]
// 008a8574  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 008a857a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008a8570 {
    char pad0[160];
    int m_x;
    void f(int a1);
};
void S_func_008a8570::f(int a1)
{
    m_x = (int)a1;
}
