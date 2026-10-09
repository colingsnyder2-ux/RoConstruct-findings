// roc 2008-06 0078fe00  unit: CXTShadowHook  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078fe00
//
// 0078fe00  e8ebffffff           call 0x78fdf0
// 0078fe05  85c0                 test eax, eax
// 0078fe07  7403                 je 0x78fe0c
// 0078fe09  33c0                 xor eax, eax
// 0078fe0b  c3                   ret 
// 0078fe0c  e8af0ef8ff           call 0x710cc0
// 0078fe11  33c9                 xor ecx, ecx
// 0078fe13  398844010000         cmp dword ptr [eax + 0x144], ecx
// 0078fe19  0f94c1               sete cl
// 0078fe1c  8bc1                 mov eax, ecx
// 0078fe1e  c3                   ret 
// copied from an identical function in another client (function ?sub_7125a0@ns_ROCX000007@@YAHXZ)

namespace ns_ROCX000007 {
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
