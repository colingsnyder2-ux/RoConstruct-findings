// roc 2008-06 006e50b0  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e50b0
//
// 006e50b0  e8dbffffff           call 0x6e5090
// 006e50b5  85c0                 test eax, eax
// 006e50b7  8b442404             mov eax, dword ptr [esp + 4]
// 006e50bb  7413                 je 0x6e50d0
// 006e50bd  85c0                 test eax, eax
// 006e50bf  7508                 jne 0x6e50c9
// 006e50c1  b801000000           mov eax, 1
// 006e50c6  c20400               ret 4
// 006e50c9  83f801               cmp eax, 1
// 006e50cc  7502                 jne 0x6e50d0
// 006e50ce  33c0                 xor eax, eax
// 006e50d0  c20400               ret 4
// copied from an identical function in another client (function ?sub_0066e1e0@ns_ROCX000001@@YGHH@Z)

namespace ns_ROCX000001 {
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
