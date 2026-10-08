// roc 2007-03 00722130  unit: seg_00720000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00722130
//
// 00722130  8b442404             mov eax, dword ptr [esp + 4]
// 00722134  898190000000         mov dword ptr [ecx + 0x90], eax
// 0072213a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00722130 {
    char pad0[144];
    int m_x;
    void f(int a1);
};
void S_func_00722130::f(int a1)
{
    m_x = (int)a1;
}
