// roc 2010-06 0052f7e0  unit: RBX::PartChunk  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052f7e0
//
// 0052f7e0  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0052f7e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0052f7e0 {
    char pad0[200];
    int m_x;
    int f();
};
int S_func_0052f7e0::f()
{
    return m_x;
}
