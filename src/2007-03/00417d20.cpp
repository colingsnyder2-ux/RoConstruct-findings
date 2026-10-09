// roc 2007-03 00417d20  unit: seg_00410000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00417d20
//
// 00417d20  8b442404             mov eax, dword ptr [esp + 4]
// 00417d24  85c0                 test eax, eax
// 00417d26  7509                 jne 0x417d31
// 00417d28  89442404             mov dword ptr [esp + 4], eax
// 00417d2c  e91ff1ffff           jmp 0x416e50
// 00417d31  89442404             mov dword ptr [esp + 4], eax
// 00417d35  e9a6faffff           jmp 0x4177e0
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
