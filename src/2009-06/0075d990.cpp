// roc 2009-06 0075d990  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d990
//
// 0075d990  e8dbffffff           call 0x75d970
// 0075d995  85c0                 test eax, eax
// 0075d997  8b442404             mov eax, dword ptr [esp + 4]
// 0075d99b  7413                 je 0x75d9b0
// 0075d99d  85c0                 test eax, eax
// 0075d99f  7508                 jne 0x75d9a9
// 0075d9a1  b801000000           mov eax, 1
// 0075d9a6  c20400               ret 4
// 0075d9a9  83f801               cmp eax, 1
// 0075d9ac  7502                 jne 0x75d9b0
// 0075d9ae  33c0                 xor eax, eax
// 0075d9b0  c20400               ret 4
// copied from an identical function in another client (function ?sub_0066e1e0@ns_ROCX00000b@@YGHH@Z)

namespace ns_ROCX00000b {
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
