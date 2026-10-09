// roc 2007-03 0065a1a0  unit: seg_00650000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a1a0
//
// 0065a1a0  e8dbffffff           call 0x65a180
// 0065a1a5  85c0                 test eax, eax
// 0065a1a7  8b442404             mov eax, dword ptr [esp + 4]
// 0065a1ab  7413                 je 0x65a1c0
// 0065a1ad  85c0                 test eax, eax
// 0065a1af  7508                 jne 0x65a1b9
// 0065a1b1  b801000000           mov eax, 1
// 0065a1b6  c20400               ret 4
// 0065a1b9  83f801               cmp eax, 1
// 0065a1bc  7502                 jne 0x65a1c0
// 0065a1be  33c0                 xor eax, eax
// 0065a1c0  c20400               ret 4
// copied from an identical function in another client (function ?sub_0066e1e0@ns_ROCX000003@@YGHH@Z)

namespace ns_ROCX000003 {
extern int __cdecl sub_0066e1c0();

int __stdcall sub_0066e1e0(int a)
{
    if (sub_0066e1c0())
    {
        if (a == 0)
            return 1;
        if (a == 1)
            return 0;
    }
    return a;
}
}
