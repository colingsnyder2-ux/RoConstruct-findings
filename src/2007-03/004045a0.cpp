// roc 2007-03 004045a0  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004045a0
//
// 004045a0  8b442404             mov eax, dword ptr [esp + 4]
// 004045a4  85c0                 test eax, eax
// 004045a6  7509                 jne 0x4045b1
// 004045a8  89442404             mov dword ptr [esp + 4], eax
// 004045ac  e99fe6ffff           jmp 0x402c50
// 004045b1  89442404             mov dword ptr [esp + 4], eax
// 004045b5  e9f6f1ffff           jmp 0x4037b0
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
