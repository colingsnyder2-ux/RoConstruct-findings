// roc 2009-06 005fa910  unit: RBX::PartChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fa910
//
// 005fa910  8b4178               mov eax, dword ptr [ecx + 0x78]
// 005fa913  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005fa910 {
    char pad0[120];
    int m_x;
    int f();
};
int S_func_005fa910::f()
{
    return m_x;
}
