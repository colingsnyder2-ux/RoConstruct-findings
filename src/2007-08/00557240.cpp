// roc 2007-08 00557240  unit: ChatEnter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557240
//
// 00557240  8b4178               mov eax, dword ptr [ecx + 0x78]
// 00557243  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00557240 {
    char pad0[120];
    int m_x;
    int f();
};
int S_func_00557240::f()
{
    return m_x;
}
