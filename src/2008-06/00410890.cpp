// roc 2008-06 00410890  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00410890
//
// 00410890  8b442404             mov eax, dword ptr [esp + 4]
// 00410894  85c0                 test eax, eax
// 00410896  7509                 jne 0x4108a1
// 00410898  89442404             mov dword ptr [esp + 4], eax
// 0041089c  e9fff0ffff           jmp 0x40f9a0
// 004108a1  89442404             mov dword ptr [esp + 4], eax
// 004108a5  e936fbffff           jmp 0x4103e0
// copied from an identical function in another client (function ?sub_4046A0@ns_ROCX000022@@YGXPAX@Z)

namespace ns_ROCX000022 {
void __stdcall sub_402CA0(void* p);
void __stdcall sub_403930(void* p);

void __stdcall sub_4046A0(void* p)
{
    if (p == 0)
        sub_402CA0(p);
    else
        sub_403930(p);
}
}
