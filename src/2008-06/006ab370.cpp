// roc 2008-06 006ab370  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab370
//
// 006ab370  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 006ab376  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ab370 {
    char pad0[212];
    int m_x;
    int f();
};
int S_func_006ab370::f()
{
    return m_x;
}
