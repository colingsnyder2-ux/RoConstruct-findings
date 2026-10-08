// roc 2007-08 004a63e0  unit: FilePacketLogger  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a63e0
//
// 004a63e0  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 004a63e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a63e0 {
    char pad0[248];
    int m_x;
    int f();
};
int S_func_004a63e0::f()
{
    return m_x;
}
