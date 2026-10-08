// roc 2007-03 0063d180  unit: seg_00630000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0063d180
//
// 0063d180  8b442404             mov eax, dword ptr [esp + 4]
// 0063d184  8981e4000000         mov dword ptr [ecx + 0xe4], eax
// 0063d18a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0063d180 {
    char pad0[228];
    int m_x;
    void f(int a1);
};
void S_func_0063d180::f(int a1)
{
    m_x = (int)a1;
}
