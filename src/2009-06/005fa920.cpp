// roc 2009-06 005fa920  unit: RBX::PartChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fa920
//
// 005fa920  8b4174               mov eax, dword ptr [ecx + 0x74]
// 005fa923  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005fa920 {
    char pad0[116];
    int m_x;
    int f();
};
int S_func_005fa920::f()
{
    return m_x;
}
