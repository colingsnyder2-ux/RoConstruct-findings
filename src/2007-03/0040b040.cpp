// roc 2007-03 0040b040  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040b040
//
// 0040b040  8b442404             mov eax, dword ptr [esp + 4]
// 0040b044  85c0                 test eax, eax
// 0040b046  7509                 jne 0x40b051
// 0040b048  89442404             mov dword ptr [esp + 4], eax
// 0040b04c  e98ff6ffff           jmp 0x40a6e0
// 0040b051  89442404             mov dword ptr [esp + 4], eax
// 0040b055  e9e6fcffff           jmp 0x40ad40
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
