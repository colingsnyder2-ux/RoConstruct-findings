// roc 2007-03 0040db30  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040db30
//
// 0040db30  8b442404             mov eax, dword ptr [esp + 4]
// 0040db34  85c0                 test eax, eax
// 0040db36  7509                 jne 0x40db41
// 0040db38  89442404             mov dword ptr [esp + 4], eax
// 0040db3c  e90ff6ffff           jmp 0x40d150
// 0040db41  89442404             mov dword ptr [esp + 4], eax
// 0040db45  e9c6feffff           jmp 0x40da10
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
