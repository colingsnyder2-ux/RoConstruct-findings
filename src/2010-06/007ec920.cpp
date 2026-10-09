// roc 2010-06 007ec920  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec920
//
// 007ec920  e8dbffffff           call 0x7ec900
// 007ec925  85c0                 test eax, eax
// 007ec927  8b442404             mov eax, dword ptr [esp + 4]
// 007ec92b  7413                 je 0x7ec940
// 007ec92d  85c0                 test eax, eax
// 007ec92f  7508                 jne 0x7ec939
// 007ec931  b801000000           mov eax, 1
// 007ec936  c20400               ret 4
// 007ec939  83f801               cmp eax, 1
// 007ec93c  7502                 jne 0x7ec940
// 007ec93e  33c0                 xor eax, eax
// 007ec940  c20400               ret 4
// copied from an identical function in another client (function ?sub_0066e1e0@ns_ROCX000006@@YGHH@Z)

namespace ns_ROCX000006 {
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
