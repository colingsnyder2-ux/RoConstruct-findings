// roc 2008-06 00416df0  unit: VCContent::?$CComAggObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416df0
//
// 00416df0  8b442404             mov eax, dword ptr [esp + 4]
// 00416df4  85c0                 test eax, eax
// 00416df6  7509                 jne 0x416e01
// 00416df8  89442404             mov dword ptr [esp + 4], eax
// 00416dfc  e9bffcffff           jmp 0x416ac0
// 00416e01  89442404             mov dword ptr [esp + 4], eax
// 00416e05  e916ffffff           jmp 0x416d20
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
