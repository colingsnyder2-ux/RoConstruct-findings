// roc 2012-06 004aab70  unit: DxUserInput  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004aab70
//
// 004aab70  8b442404             mov eax, dword ptr [esp + 4]
// 004aab74  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 004aab7a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004aab70 {
    char pad0[168];
    int m_x;
    void f(int a1);
};
void S_func_004aab70::f(int a1)
{
    m_x = (int)a1;
}
