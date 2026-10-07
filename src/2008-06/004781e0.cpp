// roc 2008-06 004781e0  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004781e0
//
// 004781e0  8b4178               mov eax, dword ptr [ecx + 0x78]
// 004781e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004781e0 {
    char pad0[120];
    int m_x;
    int f();
};
int S_func_004781e0::f()
{
    return m_x;
}
