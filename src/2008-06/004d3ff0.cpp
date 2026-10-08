// roc 2008-06 004d3ff0  unit: seg_004d0000  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3ff0
//
// 004d3ff0  833d70d09300ff       cmp dword ptr [0x93d070], -1
// 004d3ff7  53                   push ebx
// 004d3ff8  55                   push ebp
// 004d3ff9  56                   push esi
// 004d3ffa  57                   push edi
// 004d3ffb  bf381d9700           mov edi, 0x971d38
// 004d4000  be401d9700           mov esi, 0x971d40
// 004d4005  7d0d                 jge 0x4d4014
// 004d4007  6805110000           push 0x1105
// 004d400c  e89fffffff           call 0x4d3fb0
// 004d4011  83c404               add esp, 4
// 004d4014  8b0d381d9700         mov ecx, dword ptr [0x971d38]
// 004d401a  a13c1d9700           mov eax, dword ptr [0x971d3c]
// 004d401f  c70570d093006f020000 mov dword ptr [0x93d070], 0x26f
// 004d4029  c705fc2697003c1d9700 mov dword ptr [0x9726fc], 0x971d3c
// 004d4033  bae3000000           mov edx, 0xe3
// 004d4038  eb06                 jmp 0x4d4040
// 004d403a  8d9b00000000         lea ebx, [ebx]
// 004d4040  8bd8                 mov ebx, eax
// 004d4042  33d9                 xor ebx, ecx
// 004d4044  81e3feffff7f         and ebx, 0x7ffffffe
// 004d404a  33d9                 xor ebx, ecx
// 004d404c  8bc8                 mov ecx, eax
// 004d404e  80e101               and cl, 1
// 004d4051  0fb6c9               movzx ecx, cl
// 004d4054  d1eb                 shr ebx, 1
// 004d4056  f7d9                 neg ecx
// 004d4058  1bc9                 sbb ecx, ecx
// 004d405a  81e1dfb00899         and ecx, 0x9908b0df
// 004d4060  33d9                 xor ebx, ecx
// 004d4062  339e2c060000         xor ebx, dword ptr [esi + 0x62c]
// 004d4068  8bc8                 mov ecx, eax
// 004d406a  891f                 mov dword ptr [edi], ebx
// 004d406c  8b06                 mov eax, dword ptr [esi]
// 004d406e  83c704               add edi, 4
// 004d4071  83c604               add esi, 4
// 004d4074  83ea01               sub edx, 1
// 004d4077  75c7                 jne 0x4d4040
// 004d4079  bb381d9700           mov ebx, 0x971d38
// 004d407e  bd8c010000           mov ebp, 0x18c
// 004d4083  8bd0                 mov edx, eax
// 004d4085  33d1                 xor edx, ecx
// 004d4087  81e2feffff7f         and edx, 0x7ffffffe
// 004d408d  33d1                 xor edx, ecx
// 004d408f  8bc8                 mov ecx, eax
// 004d4091  80e101               and cl, 1
// 004d4094  0fb6c9               movzx ecx, cl
// 004d4097  d1ea                 shr edx, 1
// 004d4099  f7d9                 neg ecx
// 004d409b  1bc9                 sbb ecx, ecx
// 004d409d  81e1dfb00899         and ecx, 0x9908b0df
// 004d40a3  33d1                 xor edx, ecx
// 004d40a5  3313                 xor edx, dword ptr [ebx]
// 004d40a7  8bc8                 mov ecx, eax
// 004d40a9  8917                 mov dword ptr [edi], edx
// 004d40ab  8b06                 mov eax, dword ptr [esi]
// 004d40ad  83c704               add edi, 4
// 004d40b0  83c304               add ebx, 4
// 004d40b3  83c604               add esi, 4
// 004d40b6  83ed01               sub ebp, 1
// 004d40b9  75c8                 jne 0x4d4083
// 004d40bb  8b35381d9700         mov esi, dword ptr [0x971d38]
// 004d40c1  8bc6                 mov eax, esi
// 004d40c3  33c1                 xor eax, ecx
// 004d40c5  25feffff7f           and eax, 0x7ffffffe
// 004d40ca  33c1                 xor eax, ecx
// 004d40cc  d1e8                 shr eax, 1
// 004d40ce  8bce                 mov ecx, esi
// 004d40d0  80e101               and cl, 1
// 004d40d3  0fb6c9               movzx ecx, cl
// 004d40d6  f7d9                 neg ecx
// 004d40d8  1bc9                 sbb ecx, ecx
// 004d40da  81e1dfb00899         and ecx, 0x9908b0df
// 004d40e0  33c1                 xor eax, ecx
// 004d40e2  3303                 xor eax, dword ptr [ebx]
// 004d40e4  8bd6                 mov edx, esi
// 004d40e6  8907                 mov dword ptr [edi], eax
// 004d40e8  8bc2                 mov eax, edx
// 004d40ea  c1e80b               shr eax, 0xb
// 004d40ed  33d0                 xor edx, eax
// 004d40ef  8bca                 mov ecx, edx
// 004d40f1  81e1ad583aff         and ecx, 0xff3a58ad
// 004d40f7  c1e107               shl ecx, 7
// 004d40fa  33d1                 xor edx, ecx
// 004d40fc  8bc2                 mov eax, edx
// 004d40fe  258cdfffff           and eax, 0xffffdf8c
// 004d4103  c1e00f               shl eax, 0xf
// 004d4106  33d0                 xor edx, eax
// 004d4108  5f                   pop edi
// 004d4109  5e                   pop esi
// 004d410a  8bc2                 mov eax, edx
// 004d410c  c1e812               shr eax, 0x12
// 004d410f  5d                   pop ebp
// 004d4110  33c2                 xor eax, edx
// 004d4112  5b                   pop ebx
// 004d4113  c3                   ret 
// library rbxgs-raknet/Rand.cpp (function ?reloadMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet Rand.cpp
