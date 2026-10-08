// roc 2008-06 006e5030  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5030
//
// 006e5030  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006e5036  83c028               add eax, 0x28
// 006e5039  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e5030 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_006e5030::f()
{
    return m_x + 0x28;
}
