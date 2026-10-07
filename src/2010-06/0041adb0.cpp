// roc 2010-06 0041adb0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041adb0
//
// 0041adb0  8b442404             mov eax, dword ptr [esp + 4]
// 0041adb4  89416c               mov dword ptr [ecx + 0x6c], eax
// 0041adb7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041adb0 {
    char pad0[108];
    int m_x;
    void f(int a1);
};
void S_func_0041adb0::f(int a1)
{
    m_x = (int)a1;
}
