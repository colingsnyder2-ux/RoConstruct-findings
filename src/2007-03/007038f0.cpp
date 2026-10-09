// roc 2007-03 007038f0  unit: seg_00700000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007038f0
//
// 007038f0  e8ebffffff           call 0x7038e0
// 007038f5  85c0                 test eax, eax
// 007038f7  7403                 je 0x7038fc
// 007038f9  33c0                 xor eax, eax
// 007038fb  c3                   ret 
// 007038fc  e8dff3f7ff           call 0x682ce0
// 00703901  33c9                 xor ecx, ecx
// 00703903  398844010000         cmp dword ptr [eax + 0x144], ecx
// 00703909  0f94c1               sete cl
// 0070390c  8bc1                 mov eax, ecx
// 0070390e  c3                   ret 
// copied from an identical function in another client (function ?sub_7125a0@ns_ROCX0000ed@@YAHXZ)

namespace ns_ROCX0000ed {
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
