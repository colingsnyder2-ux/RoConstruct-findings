// roc 2010-06 006e78d0  unit: RBX::P8PVInstance::?$SetImpl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e78d0
//
// 006e78d0  8b442404             mov eax, dword ptr [esp + 4]
// 006e78d4  898108010000         mov dword ptr [ecx + 0x108], eax
// 006e78da  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006e78d0 {
    char pad0[264];
    int m_x;
    void f(int a1);
};
void S_func_006e78d0::f(int a1)
{
    m_x = (int)a1;
}
