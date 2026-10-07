// roc 2010-06 0080a580  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080a580
//
// 0080a580  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0080a583  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0080a580 {
    char pad0[112];
    int m_x;
    int f();
};
int S_func_0080a580::f()
{
    return m_x;
}
