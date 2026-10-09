// roc 2010-06 00897250  unit: CXTShadowHook  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897250
//
// 00897250  e8ebffffff           call 0x897240
// 00897255  85c0                 test eax, eax
// 00897257  7403                 je 0x89725c
// 00897259  33c0                 xor eax, eax
// 0089725b  c3                   ret 
// 0089725c  e85f12f8ff           call 0x8184c0
// 00897261  33c9                 xor ecx, ecx
// 00897263  398844010000         cmp dword ptr [eax + 0x144], ecx
// 00897269  0f94c1               sete cl
// 0089726c  8bc1                 mov eax, ecx
// 0089726e  c3                   ret 
// copied from an identical function in another client (function ?sub_7125a0@ns_ROCX000066@@YAHXZ)

namespace ns_ROCX000066 {
extern "C" int __cdecl sub_712590();
extern "C" char *__cdecl sub_6978f0();

int sub_7125a0()
{
    if (sub_712590())
        return 0;
    char *p = sub_6978f0();
    return *(int *)(p + 0x144) == 0;
}
}
