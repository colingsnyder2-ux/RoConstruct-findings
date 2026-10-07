// roc 2008-06 00420950  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420950
//
// 00420950  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00420953  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00420950 {
    char pad0[108];
    int m_x;
    int f();
};
int S_func_00420950::f()
{
    return m_x;
}
