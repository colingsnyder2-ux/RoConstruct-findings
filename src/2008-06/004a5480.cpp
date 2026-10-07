// roc 2008-06 004a5480  unit: RBX::VHint::?$FactoryProduct::Creator  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5480
//
// 004a5480  8b442404             mov eax, dword ptr [esp + 4]
// 004a5484  8901                 mov dword ptr [ecx], eax
// 004a5486  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004a5480 {
    int m_x;
    void f(int a1);
};
void S_func_004a5480::f(int a1)
{
    m_x = (int)a1;
}
