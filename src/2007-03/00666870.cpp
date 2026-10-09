// roc 2007-03 00666870  unit: seg_00660000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666870
//
// 00666870  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00666873  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00666877  50                   push eax
// 00666878  51                   push ecx
// 00666879  e822ffffff           call 0x6667a0
// 0066687e  83c408               add esp, 8
// 00666881  c20400               ret 4
// copied from an identical function in another client (function ?Forward@CXTPPropExchange@ns_ROCX000005@@QAEXH@Z)

namespace ns_ROCX000005 {
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
}
