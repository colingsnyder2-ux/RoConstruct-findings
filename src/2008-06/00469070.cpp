// roc 2008-06 00469070  unit: DxUserInput  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00469070
//
// 00469070  8b442404             mov eax, dword ptr [esp + 4]
// 00469074  89415c               mov dword ptr [ecx + 0x5c], eax
// 00469077  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00469070 {
    char pad0[92];
    int m_x;
    void f(int a1);
};
void S_func_00469070::f(int a1)
{
    m_x = (int)a1;
}
