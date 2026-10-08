// roc 2007-03 00638ba0  unit: seg_00630000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638ba0
//
// 00638ba0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00638ba6  8b4014               mov eax, dword ptr [eax + 0x14]
// 00638ba9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00638ba0 {
    char pad[20];
    int m_x;
};
struct S_func_00638ba0 {
    char pad[376];
    I_func_00638ba0* m_p;
    int f();
};
int S_func_00638ba0::f()
{
    return m_p->m_x;
}
