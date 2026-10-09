// roc 2009-12 00838700  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838700
//
// 00838700  e8dbffffff           call 0x8386e0
// 00838705  85c0                 test eax, eax
// 00838707  8b442404             mov eax, dword ptr [esp + 4]
// 0083870b  7413                 je 0x838720
// 0083870d  85c0                 test eax, eax
// 0083870f  7508                 jne 0x838719
// 00838711  b801000000           mov eax, 1
// 00838716  c20400               ret 4
// 00838719  83f801               cmp eax, 1
// 0083871c  7502                 jne 0x838720
// 0083871e  33c0                 xor eax, eax
// 00838720  c20400               ret 4
// copied from an identical function in another client (function ?sub_0066e1e0@ns_ROCX000038@@YGHH@Z)

namespace ns_ROCX000038 {
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
