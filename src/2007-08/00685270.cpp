// from server: 100% by colin
// roc 2007-08 00685270  unit: CXTPPropExchange  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685270
//
// 00685270  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00685273  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685277  50                   push eax
// 00685278  51                   push ecx
// 00685279  e822ffffff           call 0x6851a0
// 0068527e  83c408               add esp, 8
// 00685281  c20400               ret 4

struct CXTPPropExchange {
    char pad[0x24];
    int m_field;
    void Forward(int a);
};

extern "C" void __cdecl sub_6851a0(int, int);

void CXTPPropExchange::Forward(int a)
{
    sub_6851a0(a, m_field);
}
