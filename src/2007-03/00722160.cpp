// roc 2007-03 00722160  unit: seg_00720000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00722160
//
// 00722160  8b442404             mov eax, dword ptr [esp + 4]
// 00722164  8981b4000000         mov dword ptr [ecx + 0xb4], eax
// 0072216a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00722160 {
    char pad0[180];
    int m_x;
    void f(int a1);
};
void S_func_00722160::f(int a1)
{
    m_x = (int)a1;
}
