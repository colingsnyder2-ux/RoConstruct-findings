// roc 2007-03 00438e60  unit: seg_00430000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00438e60
//
// 00438e60  8b442404             mov eax, dword ptr [esp + 4]
// 00438e64  898194000000         mov dword ptr [ecx + 0x94], eax
// 00438e6a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00438e60 {
    char pad0[148];
    int m_x;
    void f(int a1);
};
void S_func_00438e60::f(int a1)
{
    m_x = (int)a1;
}
