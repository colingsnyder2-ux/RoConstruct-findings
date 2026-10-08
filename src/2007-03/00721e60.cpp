// roc 2007-03 00721e60  unit: seg_00720000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721e60
//
// 00721e60  8b442404             mov eax, dword ptr [esp + 4]
// 00721e64  894158               mov dword ptr [ecx + 0x58], eax
// 00721e67  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00721e60 {
    char pad0[88];
    int m_x;
    void f(int a1);
};
void S_func_00721e60::f(int a1)
{
    m_x = (int)a1;
}
