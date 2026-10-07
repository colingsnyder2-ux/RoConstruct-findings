// roc 2012-06 0047dc20  unit: CRobloxDoc  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047dc20
//
// 0047dc20  8b01                 mov eax, dword ptr [ecx]
// 0047dc22  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0047dc20 {
    int m_x;
    int f();
};
int S_func_0047dc20::f()
{
    return m_x;
}
