// roc 2011-06 006eee90  unit: RBX::P8GuiObject::?$GetSetImpl  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eee90
//
// 006eee90  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 006eee96  83c068               add eax, 0x68
// 006eee99  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006eee90 {
    char pad0[216];
    int m_x;
    int f();
};
int S_func_006eee90::f()
{
    return m_x + 0x68;
}
