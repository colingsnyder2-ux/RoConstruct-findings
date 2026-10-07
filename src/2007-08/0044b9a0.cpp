// roc 2007-08 0044b9a0  unit: CRobloxControlColorSelector  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0044b9a0
//
// 0044b9a0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0044b9a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0044b9a0 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_0044b9a0::f()
{
    return m_x;
}
