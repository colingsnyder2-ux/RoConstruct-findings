// roc 2007-03 00641c60  unit: seg_00640000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00641c60
//
// 00641c60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00641c63  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00641c60 {
    char pad0[88];
    int m_x;
    int f(int a1);
};
int S_func_00641c60::f(int a1)
{
    return m_x;
}
