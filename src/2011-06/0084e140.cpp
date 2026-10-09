// roc 2011-06 0084e140  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e140
//
// 0084e140  e8dbffffff           call 0x84e120
// 0084e145  85c0                 test eax, eax
// 0084e147  8b442404             mov eax, dword ptr [esp + 4]
// 0084e14b  7413                 je 0x84e160
// 0084e14d  85c0                 test eax, eax
// 0084e14f  7508                 jne 0x84e159
// 0084e151  b801000000           mov eax, 1
// 0084e156  c20400               ret 4
// 0084e159  83f801               cmp eax, 1
// 0084e15c  7502                 jne 0x84e160
// 0084e15e  33c0                 xor eax, eax
// 0084e160  c20400               ret 4
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
