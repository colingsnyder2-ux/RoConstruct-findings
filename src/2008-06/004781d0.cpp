// roc 2008-06 004781d0  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004781d0
//
// 004781d0  8b4174               mov eax, dword ptr [ecx + 0x74]
// 004781d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004781d0 {
    char pad0[116];
    int m_x;
    int f();
};
int S_func_004781d0::f()
{
    return m_x;
}
