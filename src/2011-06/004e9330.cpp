// roc 2011-06 004e9330  unit: RBX::Assembly  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e9330
//
// 004e9330  8b442404             mov eax, dword ptr [esp + 4]
// 004e9334  894104               mov dword ptr [ecx + 4], eax
// 004e9337  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004e9330 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_004e9330::f(int a1)
{
    m_x = (int)a1;
}
