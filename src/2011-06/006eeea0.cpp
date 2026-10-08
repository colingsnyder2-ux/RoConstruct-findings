// roc 2011-06 006eeea0  unit: RBX::P8GuiObject::?$GetSetImpl  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eeea0
//
// 006eeea0  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 006eeea6  83c05c               add eax, 0x5c
// 006eeea9  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006eeea0 {
    char pad0[216];
    int m_x;
    int f();
};
int S_func_006eeea0::f()
{
    return m_x + 0x5c;
}
