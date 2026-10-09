// roc 2011-06 008efd20  unit: CXTShadowHook  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008efd20
//
// 008efd20  e8ebffffff           call 0x8efd10
// 008efd25  85c0                 test eax, eax
// 008efd27  7403                 je 0x8efd2c
// 008efd29  33c0                 xor eax, eax
// 008efd2b  c3                   ret 
// 008efd2c  e8bf5ff8ff           call 0x875cf0
// 008efd31  33c9                 xor ecx, ecx
// 008efd33  398844010000         cmp dword ptr [eax + 0x144], ecx
// 008efd39  0f94c1               sete cl
// 008efd3c  8bc1                 mov eax, ecx
// 008efd3e  c3                   ret 
// copied from an identical function in another client (function ?sub_7125a0@ns_ROCX000038@@YAHXZ)

namespace ns_ROCX000038 {
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
