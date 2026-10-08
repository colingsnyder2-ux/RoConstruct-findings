// roc 2007-03 0062f670  unit: seg_00620000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f670
//
// 0062f670  8b442404             mov eax, dword ptr [esp + 4]
// 0062f674  8981d4000000         mov dword ptr [ecx + 0xd4], eax
// 0062f67a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0062f670 {
    char pad0[212];
    int m_x;
    void f(int a1);
};
void S_func_0062f670::f(int a1)
{
    m_x = (int)a1;
}
