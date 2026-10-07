// roc 2010-06 0051ead0  unit: CSHA1  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ead0
//
// 0051ead0  53                   push ebx
// 0051ead1  55                   push ebp
// 0051ead2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051ead6  837d00ff             cmp dword ptr [ebp], -1
// 0051eada  56                   push esi
// 0051eadb  57                   push edi
// 0051eadc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051eae0  8d7708               lea esi, [edi + 8]
// 0051eae3  8d9f34060000         lea ebx, [edi + 0x634]
// 0051eae9  7d0d                 jge 0x51eaf8
// 0051eaeb  6805110000           push 0x1105
// 0051eaf0  e89bffffff           call 0x51ea90
// 0051eaf5  83c404               add esp, 4
// 0051eaf8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051eafc  c745006f020000       mov dword ptr [ebp], 0x26f
// 0051eb03  8d4704               lea eax, [edi + 4]
// 0051eb06  8901                 mov dword ptr [ecx], eax
// 0051eb08  8b0f                 mov ecx, dword ptr [edi]
// 0051eb0a  8b00                 mov eax, dword ptr [eax]
// 0051eb0c  8bd3                 mov edx, ebx
// 0051eb0e  bde3000000           mov ebp, 0xe3
// 0051eb13  2bd6                 sub edx, esi
// 0051eb15  8bd8                 mov ebx, eax
// 0051eb17  33d9                 xor ebx, ecx
// 0051eb19  81e3feffff7f         and ebx, 0x7ffffffe
// 0051eb1f  33d9                 xor ebx, ecx
// 0051eb21  8bc8                 mov ecx, eax
// 0051eb23  80e101               and cl, 1
// 0051eb26  0fb6c9               movzx ecx, cl
// 0051eb29  d1eb                 shr ebx, 1
// 0051eb2b  f7d9                 neg ecx
// 0051eb2d  1bc9                 sbb ecx, ecx
// 0051eb2f  81e1dfb00899         and ecx, 0x9908b0df
// 0051eb35  33d9                 xor ebx, ecx
// 0051eb37  331c32               xor ebx, dword ptr [edx + esi]
// 0051eb3a  8bc8                 mov ecx, eax
// 0051eb3c  891f                 mov dword ptr [edi], ebx
// 0051eb3e  8b06                 mov eax, dword ptr [esi]
// 0051eb40  83c704               add edi, 4
// 0051eb43  83c604               add esi, 4
// 0051eb46  83ed01               sub ebp, 1
// 0051eb49  75ca                 jne 0x51eb15
// 0051eb4b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0051eb4f  bd8c010000           mov ebp, 0x18c
// 0051eb54  8bd0                 mov edx, eax
// 0051eb56  33d1                 xor edx, ecx
// 0051eb58  81e2feffff7f         and edx, 0x7ffffffe
// 0051eb5e  33d1                 xor edx, ecx
// 0051eb60  8bc8                 mov ecx, eax
// 0051eb62  80e101               and cl, 1
// 0051eb65  0fb6c9               movzx ecx, cl
// 0051eb68  d1ea                 shr edx, 1
// 0051eb6a  f7d9                 neg ecx
// 0051eb6c  1bc9                 sbb ecx, ecx
// 0051eb6e  81e1dfb00899         and ecx, 0x9908b0df
// 0051eb74  33d1                 xor edx, ecx
// 0051eb76  3313                 xor edx, dword ptr [ebx]
// 0051eb78  8bc8                 mov ecx, eax
// 0051eb7a  8917                 mov dword ptr [edi], edx
// 0051eb7c  8b06                 mov eax, dword ptr [esi]
// 0051eb7e  83c704               add edi, 4
// 0051eb81  83c304               add ebx, 4
// 0051eb84  83c604               add esi, 4
// 0051eb87  83ed01               sub ebp, 1
// 0051eb8a  75c8                 jne 0x51eb54
// 0051eb8c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051eb90  8b12                 mov edx, dword ptr [edx]
// 0051eb92  8bc2                 mov eax, edx
// 0051eb94  33c1                 xor eax, ecx
// 0051eb96  25feffff7f           and eax, 0x7ffffffe
// 0051eb9b  33c1                 xor eax, ecx
// 0051eb9d  8bca                 mov ecx, edx
// 0051eb9f  80e101               and cl, 1
// 0051eba2  d1e8                 shr eax, 1
// 0051eba4  0fb6c9               movzx ecx, cl
// 0051eba7  f7d9                 neg ecx
// 0051eba9  1bc9                 sbb ecx, ecx
// 0051ebab  81e1dfb00899         and ecx, 0x9908b0df
// 0051ebb1  33c1                 xor eax, ecx
// 0051ebb3  3303                 xor eax, dword ptr [ebx]
// 0051ebb5  8907                 mov dword ptr [edi], eax
// 0051ebb7  8bc2                 mov eax, edx
// 0051ebb9  c1e80b               shr eax, 0xb
// 0051ebbc  33d0                 xor edx, eax
// 0051ebbe  8bca                 mov ecx, edx
// 0051ebc0  81e1ad583aff         and ecx, 0xff3a58ad
// 0051ebc6  c1e107               shl ecx, 7
// 0051ebc9  33d1                 xor edx, ecx
// 0051ebcb  8bc2                 mov eax, edx
// 0051ebcd  258cdfffff           and eax, 0xffffdf8c
// 0051ebd2  c1e00f               shl eax, 0xf
// 0051ebd5  33d0                 xor edx, eax
// 0051ebd7  5f                   pop edi
// 0051ebd8  5e                   pop esi
// 0051ebd9  8bc2                 mov eax, edx
// 0051ebdb  c1e812               shr eax, 0x12
// 0051ebde  5d                   pop ebp
// 0051ebdf  33c2                 xor eax, edx
// 0051ebe1  5b                   pop ebx
// 0051ebe2  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?reloadMT@@YAIPAIAAPAIAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
