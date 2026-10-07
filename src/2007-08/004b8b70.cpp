// roc 2007-08 004b8b70  unit: RakPeer  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8b70
//
// 004b8b70  8b81f8080000         mov eax, dword ptr [ecx + 0x8f8]
// 004b8b76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b8b70 {
    char pad0[2296];
    int m_x;
    int f();
};
int S_func_004b8b70::f()
{
    return m_x;
}
