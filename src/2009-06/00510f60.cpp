// roc 2009-06 00510f60  unit: CSHA1  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510f60
//
// 00510f60  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00510f63  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00510f60 {
    char pad0[28];
    int m_x;
    int f();
};
int S_func_00510f60::f()
{
    return m_x;
}
