// roc 2011-06 006eeeb0  unit: RBX::P8GuiObject::?$GetSetImpl  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eeeb0
//
// 006eeeb0  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 006eeeb6  83c074               add eax, 0x74
// 006eeeb9  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006eeeb0 {
    char pad0[216];
    int m_x;
    int f();
};
int S_func_006eeeb0::f()
{
    return m_x + 0x74;
}
