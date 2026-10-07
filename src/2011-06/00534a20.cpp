// roc 2011-06 00534a20  unit: seg_00530000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00534a20
//
// 00534a20  53                   push ebx
// 00534a21  55                   push ebp
// 00534a22  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00534a26  837d00ff             cmp dword ptr [ebp], -1
// 00534a2a  56                   push esi
// 00534a2b  57                   push edi
// 00534a2c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00534a30  8d7708               lea esi, [edi + 8]
// 00534a33  8d9f34060000         lea ebx, [edi + 0x634]
// 00534a39  7d0d                 jge 0x534a48
// 00534a3b  6805110000           push 0x1105
// 00534a40  e89bffffff           call 0x5349e0
// 00534a45  83c404               add esp, 4
// 00534a48  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00534a4c  c745006f020000       mov dword ptr [ebp], 0x26f
// 00534a53  8d4704               lea eax, [edi + 4]
// 00534a56  8901                 mov dword ptr [ecx], eax
// 00534a58  8b0f                 mov ecx, dword ptr [edi]
// 00534a5a  8b00                 mov eax, dword ptr [eax]
// 00534a5c  8bd3                 mov edx, ebx
// 00534a5e  bde3000000           mov ebp, 0xe3
// 00534a63  2bd6                 sub edx, esi
// 00534a65  8bd8                 mov ebx, eax
// 00534a67  33d9                 xor ebx, ecx
// 00534a69  81e3feffff7f         and ebx, 0x7ffffffe
// 00534a6f  33d9                 xor ebx, ecx
// 00534a71  8bc8                 mov ecx, eax
// 00534a73  80e101               and cl, 1
// 00534a76  0fb6c9               movzx ecx, cl
// 00534a79  d1eb                 shr ebx, 1
// 00534a7b  f7d9                 neg ecx
// 00534a7d  1bc9                 sbb ecx, ecx
// 00534a7f  81e1dfb00899         and ecx, 0x9908b0df
// 00534a85  33d9                 xor ebx, ecx
// 00534a87  331c32               xor ebx, dword ptr [edx + esi]
// 00534a8a  8bc8                 mov ecx, eax
// 00534a8c  891f                 mov dword ptr [edi], ebx
// 00534a8e  8b06                 mov eax, dword ptr [esi]
// 00534a90  83c704               add edi, 4
// 00534a93  83c604               add esi, 4
// 00534a96  83ed01               sub ebp, 1
// 00534a99  75ca                 jne 0x534a65
// 00534a9b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00534a9f  bd8c010000           mov ebp, 0x18c
// 00534aa4  8bd0                 mov edx, eax
// 00534aa6  33d1                 xor edx, ecx
// 00534aa8  81e2feffff7f         and edx, 0x7ffffffe
// 00534aae  33d1                 xor edx, ecx
// 00534ab0  8bc8                 mov ecx, eax
// 00534ab2  80e101               and cl, 1
// 00534ab5  0fb6c9               movzx ecx, cl
// 00534ab8  d1ea                 shr edx, 1
// 00534aba  f7d9                 neg ecx
// 00534abc  1bc9                 sbb ecx, ecx
// 00534abe  81e1dfb00899         and ecx, 0x9908b0df
// 00534ac4  33d1                 xor edx, ecx
// 00534ac6  3313                 xor edx, dword ptr [ebx]
// 00534ac8  8bc8                 mov ecx, eax
// 00534aca  8917                 mov dword ptr [edi], edx
// 00534acc  8b06                 mov eax, dword ptr [esi]
// 00534ace  83c704               add edi, 4
// 00534ad1  83c304               add ebx, 4
// 00534ad4  83c604               add esi, 4
// 00534ad7  83ed01               sub ebp, 1
// 00534ada  75c8                 jne 0x534aa4
// 00534adc  8b542414             mov edx, dword ptr [esp + 0x14]
// 00534ae0  8b12                 mov edx, dword ptr [edx]
// 00534ae2  8bc2                 mov eax, edx
// 00534ae4  33c1                 xor eax, ecx
// 00534ae6  25feffff7f           and eax, 0x7ffffffe
// 00534aeb  33c1                 xor eax, ecx
// 00534aed  8bca                 mov ecx, edx
// 00534aef  80e101               and cl, 1
// 00534af2  d1e8                 shr eax, 1
// 00534af4  0fb6c9               movzx ecx, cl
// 00534af7  f7d9                 neg ecx
// 00534af9  1bc9                 sbb ecx, ecx
// 00534afb  81e1dfb00899         and ecx, 0x9908b0df
// 00534b01  33c1                 xor eax, ecx
// 00534b03  3303                 xor eax, dword ptr [ebx]
// 00534b05  8907                 mov dword ptr [edi], eax
// 00534b07  8bc2                 mov eax, edx
// 00534b09  c1e80b               shr eax, 0xb
// 00534b0c  33d0                 xor edx, eax
// 00534b0e  8bca                 mov ecx, edx
// 00534b10  81e1ad583aff         and ecx, 0xff3a58ad
// 00534b16  c1e107               shl ecx, 7
// 00534b19  33d1                 xor edx, ecx
// 00534b1b  8bc2                 mov eax, edx
// 00534b1d  258cdfffff           and eax, 0xffffdf8c
// 00534b22  c1e00f               shl eax, 0xf
// 00534b25  33d0                 xor edx, eax
// 00534b27  5f                   pop edi
// 00534b28  5e                   pop esi
// 00534b29  8bc2                 mov eax, edx
// 00534b2b  c1e812               shr eax, 0x12
// 00534b2e  5d                   pop ebp
// 00534b2f  33c2                 xor eax, edx
// 00534b31  5b                   pop ebx
// 00534b32  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?reloadMT@@YAIPAIAAPAIAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
