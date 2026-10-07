// roc 2007-08 00438e80  unit: CXTPPropertyGridItem  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00438e80
//
// 00438e80  8b442404             mov eax, dword ptr [esp + 4]
// 00438e84  898194000000         mov dword ptr [ecx + 0x94], eax
// 00438e8a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00438e80 {
    char pad0[148];
    int m_x;
    void f(int a1);
};
void S_func_00438e80::f(int a1)
{
    m_x = (int)a1;
}
