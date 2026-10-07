// roc 2011-06 00773460  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00773460
//
// 00773460  c6410401             mov byte ptr [ecx + 4], 1
// 00773464  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00773460 {
    char pad0[4];
    char m_x;
    void f();
};
void S_func_00773460::f()
{
    m_x = (char)1;
}
