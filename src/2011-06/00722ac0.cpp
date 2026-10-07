// roc 2011-06 00722ac0  unit: RBX::P8PVInstance::?$SetImpl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00722ac0
//
// 00722ac0  8b442404             mov eax, dword ptr [esp + 4]
// 00722ac4  898104010000         mov dword ptr [ecx + 0x104], eax
// 00722aca  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00722ac0 {
    char pad0[260];
    int m_x;
    void f(int a1);
};
void S_func_00722ac0::f(int a1)
{
    m_x = (int)a1;
}
