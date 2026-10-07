// roc 2009-06 0041a8f0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a8f0
//
// 0041a8f0  8b442404             mov eax, dword ptr [esp + 4]
// 0041a8f4  89416c               mov dword ptr [ecx + 0x6c], eax
// 0041a8f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041a8f0 {
    char pad0[108];
    int m_x;
    void f(int a1);
};
void S_func_0041a8f0::f(int a1)
{
    m_x = (int)a1;
}
