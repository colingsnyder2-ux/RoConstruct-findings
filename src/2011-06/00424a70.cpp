// roc 2011-06 00424a70  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424a70
//
// 00424a70  8b442404             mov eax, dword ptr [esp + 4]
// 00424a74  894170               mov dword ptr [ecx + 0x70], eax
// 00424a77  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00424a70 {
    char pad0[112];
    int m_x;
    void f(int a1);
};
void S_func_00424a70::f(int a1)
{
    m_x = (int)a1;
}
