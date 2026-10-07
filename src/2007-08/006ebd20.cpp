// roc 2007-08 006ebd20  unit: CXTPDockingPanePaintManager  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006ebd20
//
// 006ebd20  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006ebd26  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 006ebd2c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006ebd20 {
    char pad[288];
    int m_x;
};
struct S_func_006ebd20 {
    char pad[284];
    I_func_006ebd20* m_p;
    int f();
};
int S_func_006ebd20::f()
{
    return m_p->m_x;
}
