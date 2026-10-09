// roc 2007-03 004138b0  unit: seg_00410000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004138b0
//
// 004138b0  8b442404             mov eax, dword ptr [esp + 4]
// 004138b4  85c0                 test eax, eax
// 004138b6  7509                 jne 0x4138c1
// 004138b8  89442404             mov dword ptr [esp + 4], eax
// 004138bc  e95ffcffff           jmp 0x413520
// 004138c1  89442404             mov dword ptr [esp + 4], eax
// 004138c5  e916ffffff           jmp 0x4137e0
// copied from an identical function in another client (function ?sub_4046A0@ns_ROCX000012@@YGXPAX@Z)

namespace ns_ROCX000012 {
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
