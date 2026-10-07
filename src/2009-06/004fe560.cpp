// roc 2009-06 004fe560  unit: RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fe560
//
// 004fe560  8b81800b0000         mov eax, dword ptr [ecx + 0xb80]
// 004fe566  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004fe560 {
    char pad0[2944];
    int m_x;
    int f();
};
int S_func_004fe560::f()
{
    return m_x;
}
