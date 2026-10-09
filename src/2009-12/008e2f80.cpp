// roc 2009-12 008e2f80  unit: CXTShadowHook  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2f80
//
// 008e2f80  e8ebffffff           call 0x8e2f70
// 008e2f85  85c0                 test eax, eax
// 008e2f87  7403                 je 0x8e2f8c
// 008e2f89  33c0                 xor eax, eax
// 008e2f8b  c3                   ret 
// 008e2f8c  e84f15f8ff           call 0x8644e0
// 008e2f91  33c9                 xor ecx, ecx
// 008e2f93  398844010000         cmp dword ptr [eax + 0x144], ecx
// 008e2f99  0f94c1               sete cl
// 008e2f9c  8bc1                 mov eax, ecx
// 008e2f9e  c3                   ret 
// copied from an identical function in another client (function ?sub_7125a0@ns_ROCX0000e7@@YAHXZ)

namespace ns_ROCX0000e7 {
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
