// roc 2007-03 0041e510  unit: seg_00410000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041e510
//
// 0041e510  8b442404             mov eax, dword ptr [esp + 4]
// 0041e514  894168               mov dword ptr [ecx + 0x68], eax
// 0041e517  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041e510 {
    char pad0[104];
    int m_x;
    void f(int a1);
};
void S_func_0041e510::f(int a1)
{
    m_x = (int)a1;
}
