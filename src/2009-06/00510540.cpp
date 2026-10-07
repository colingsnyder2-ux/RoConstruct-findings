// roc 2009-06 00510540  unit: CSHA1  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510540
//
// 00510540  53                   push ebx
// 00510541  55                   push ebp
// 00510542  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00510546  837d00ff             cmp dword ptr [ebp], -1
// 0051054a  56                   push esi
// 0051054b  57                   push edi
// 0051054c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00510550  8d7708               lea esi, [edi + 8]
// 00510553  8d9f34060000         lea ebx, [edi + 0x634]
// 00510559  7d0d                 jge 0x510568
// 0051055b  6805110000           push 0x1105
// 00510560  e89bffffff           call 0x510500
// 00510565  83c404               add esp, 4
// 00510568  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051056c  c745006f020000       mov dword ptr [ebp], 0x26f
// 00510573  8d4704               lea eax, [edi + 4]
// 00510576  8901                 mov dword ptr [ecx], eax
// 00510578  8b0f                 mov ecx, dword ptr [edi]
// 0051057a  8b00                 mov eax, dword ptr [eax]
// 0051057c  8bd3                 mov edx, ebx
// 0051057e  bde3000000           mov ebp, 0xe3
// 00510583  2bd6                 sub edx, esi
// 00510585  8bd8                 mov ebx, eax
// 00510587  33d9                 xor ebx, ecx
// 00510589  81e3feffff7f         and ebx, 0x7ffffffe
// 0051058f  33d9                 xor ebx, ecx
// 00510591  8bc8                 mov ecx, eax
// 00510593  80e101               and cl, 1
// 00510596  0fb6c9               movzx ecx, cl
// 00510599  d1eb                 shr ebx, 1
// 0051059b  f7d9                 neg ecx
// 0051059d  1bc9                 sbb ecx, ecx
// 0051059f  81e1dfb00899         and ecx, 0x9908b0df
// 005105a5  33d9                 xor ebx, ecx
// 005105a7  331c32               xor ebx, dword ptr [edx + esi]
// 005105aa  8bc8                 mov ecx, eax
// 005105ac  891f                 mov dword ptr [edi], ebx
// 005105ae  8b06                 mov eax, dword ptr [esi]
// 005105b0  83c704               add edi, 4
// 005105b3  83c604               add esi, 4
// 005105b6  83ed01               sub ebp, 1
// 005105b9  75ca                 jne 0x510585
// 005105bb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005105bf  bd8c010000           mov ebp, 0x18c
// 005105c4  8bd0                 mov edx, eax
// 005105c6  33d1                 xor edx, ecx
// 005105c8  81e2feffff7f         and edx, 0x7ffffffe
// 005105ce  33d1                 xor edx, ecx
// 005105d0  8bc8                 mov ecx, eax
// 005105d2  80e101               and cl, 1
// 005105d5  0fb6c9               movzx ecx, cl
// 005105d8  d1ea                 shr edx, 1
// 005105da  f7d9                 neg ecx
// 005105dc  1bc9                 sbb ecx, ecx
// 005105de  81e1dfb00899         and ecx, 0x9908b0df
// 005105e4  33d1                 xor edx, ecx
// 005105e6  3313                 xor edx, dword ptr [ebx]
// 005105e8  8bc8                 mov ecx, eax
// 005105ea  8917                 mov dword ptr [edi], edx
// 005105ec  8b06                 mov eax, dword ptr [esi]
// 005105ee  83c704               add edi, 4
// 005105f1  83c304               add ebx, 4
// 005105f4  83c604               add esi, 4
// 005105f7  83ed01               sub ebp, 1
// 005105fa  75c8                 jne 0x5105c4
// 005105fc  8b542414             mov edx, dword ptr [esp + 0x14]
// 00510600  8b12                 mov edx, dword ptr [edx]
// 00510602  8bc2                 mov eax, edx
// 00510604  33c1                 xor eax, ecx
// 00510606  25feffff7f           and eax, 0x7ffffffe
// 0051060b  33c1                 xor eax, ecx
// 0051060d  8bca                 mov ecx, edx
// 0051060f  80e101               and cl, 1
// 00510612  d1e8                 shr eax, 1
// 00510614  0fb6c9               movzx ecx, cl
// 00510617  f7d9                 neg ecx
// 00510619  1bc9                 sbb ecx, ecx
// 0051061b  81e1dfb00899         and ecx, 0x9908b0df
// 00510621  33c1                 xor eax, ecx
// 00510623  3303                 xor eax, dword ptr [ebx]
// 00510625  8907                 mov dword ptr [edi], eax
// 00510627  8bc2                 mov eax, edx
// 00510629  c1e80b               shr eax, 0xb
// 0051062c  33d0                 xor edx, eax
// 0051062e  8bca                 mov ecx, edx
// 00510630  81e1ad583aff         and ecx, 0xff3a58ad
// 00510636  c1e107               shl ecx, 7
// 00510639  33d1                 xor edx, ecx
// 0051063b  8bc2                 mov eax, edx
// 0051063d  258cdfffff           and eax, 0xffffdf8c
// 00510642  c1e00f               shl eax, 0xf
// 00510645  33d0                 xor edx, eax
// 00510647  5f                   pop edi
// 00510648  5e                   pop esi
// 00510649  8bc2                 mov eax, edx
// 0051064b  c1e812               shr eax, 0x12
// 0051064e  5d                   pop ebp
// 0051064f  33c2                 xor eax, edx
// 00510651  5b                   pop ebx
// 00510652  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?reloadMT@@YAIPAIAAPAIAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
