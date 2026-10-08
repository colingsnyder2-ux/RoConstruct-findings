// roc 2007-08 004ca220  unit: seg_004c0000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca220
//
// 004ca220  833dc02f8900ff       cmp dword ptr [0x892fc0], -1
// 004ca227  53                   push ebx
// 004ca228  55                   push ebp
// 004ca229  56                   push esi
// 004ca22a  57                   push edi
// 004ca22b  bff0ef8b00           mov edi, 0x8beff0
// 004ca230  bef8ef8b00           mov esi, 0x8beff8
// 004ca235  7d0d                 jge 0x4ca244
// 004ca237  6805110000           push 0x1105
// 004ca23c  e89fffffff           call 0x4ca1e0
// 004ca241  83c404               add esp, 4
// 004ca244  8b0df0ef8b00         mov ecx, dword ptr [0x8beff0]
// 004ca24a  a1f4ef8b00           mov eax, dword ptr [0x8beff4]
// 004ca24f  c705c02f89006f020000 mov dword ptr [0x892fc0], 0x26f
// 004ca259  c705b4f98b00f4ef8b00 mov dword ptr [0x8bf9b4], 0x8beff4
// 004ca263  bae3000000           mov edx, 0xe3
// 004ca268  eb06                 jmp 0x4ca270
// 004ca26a  8d9b00000000         lea ebx, [ebx]
// 004ca270  8bd8                 mov ebx, eax
// 004ca272  33d9                 xor ebx, ecx
// 004ca274  81e3feffff7f         and ebx, 0x7ffffffe
// 004ca27a  33d9                 xor ebx, ecx
// 004ca27c  8bc8                 mov ecx, eax
// 004ca27e  80e101               and cl, 1
// 004ca281  d1eb                 shr ebx, 1
// 004ca283  f6d9                 neg cl
// 004ca285  1bc9                 sbb ecx, ecx
// 004ca287  81e1dfb00899         and ecx, 0x9908b0df
// 004ca28d  33d9                 xor ebx, ecx
// 004ca28f  339e2c060000         xor ebx, dword ptr [esi + 0x62c]
// 004ca295  8bc8                 mov ecx, eax
// 004ca297  891f                 mov dword ptr [edi], ebx
// 004ca299  8b06                 mov eax, dword ptr [esi]
// 004ca29b  83c704               add edi, 4
// 004ca29e  83c604               add esi, 4
// 004ca2a1  83ea01               sub edx, 1
// 004ca2a4  75ca                 jne 0x4ca270
// 004ca2a6  bbf0ef8b00           mov ebx, 0x8beff0
// 004ca2ab  bd8c010000           mov ebp, 0x18c
// 004ca2b0  8bd0                 mov edx, eax
// 004ca2b2  33d1                 xor edx, ecx
// 004ca2b4  81e2feffff7f         and edx, 0x7ffffffe
// 004ca2ba  33d1                 xor edx, ecx
// 004ca2bc  8bc8                 mov ecx, eax
// 004ca2be  80e101               and cl, 1
// 004ca2c1  d1ea                 shr edx, 1
// 004ca2c3  f6d9                 neg cl
// 004ca2c5  1bc9                 sbb ecx, ecx
// 004ca2c7  81e1dfb00899         and ecx, 0x9908b0df
// 004ca2cd  33d1                 xor edx, ecx
// 004ca2cf  3313                 xor edx, dword ptr [ebx]
// 004ca2d1  8bc8                 mov ecx, eax
// 004ca2d3  8917                 mov dword ptr [edi], edx
// 004ca2d5  8b06                 mov eax, dword ptr [esi]
// 004ca2d7  83c704               add edi, 4
// 004ca2da  83c304               add ebx, 4
// 004ca2dd  83c604               add esi, 4
// 004ca2e0  83ed01               sub ebp, 1
// 004ca2e3  75cb                 jne 0x4ca2b0
// 004ca2e5  8b35f0ef8b00         mov esi, dword ptr [0x8beff0]
// 004ca2eb  8bc6                 mov eax, esi
// 004ca2ed  33c1                 xor eax, ecx
// 004ca2ef  25feffff7f           and eax, 0x7ffffffe
// 004ca2f4  33c1                 xor eax, ecx
// 004ca2f6  d1e8                 shr eax, 1
// 004ca2f8  8bce                 mov ecx, esi
// 004ca2fa  80e101               and cl, 1
// 004ca2fd  f6d9                 neg cl
// 004ca2ff  8bd6                 mov edx, esi
// 004ca301  1bc9                 sbb ecx, ecx
// 004ca303  81e1dfb00899         and ecx, 0x9908b0df
// 004ca309  33c1                 xor eax, ecx
// 004ca30b  3303                 xor eax, dword ptr [ebx]
// 004ca30d  8907                 mov dword ptr [edi], eax
// 004ca30f  8bc2                 mov eax, edx
// 004ca311  c1e80b               shr eax, 0xb
// 004ca314  33d0                 xor edx, eax
// 004ca316  8bca                 mov ecx, edx
// 004ca318  81e1ad583aff         and ecx, 0xff3a58ad
// 004ca31e  c1e107               shl ecx, 7
// 004ca321  33d1                 xor edx, ecx
// 004ca323  8bc2                 mov eax, edx
// 004ca325  258cdfffff           and eax, 0xffffdf8c
// 004ca32a  c1e00f               shl eax, 0xf
// 004ca32d  33d0                 xor edx, eax
// 004ca32f  5f                   pop edi
// 004ca330  5e                   pop esi
// 004ca331  8bc2                 mov eax, edx
// 004ca333  c1e812               shr eax, 0x12
// 004ca336  5d                   pop ebp
// 004ca337  33c2                 xor eax, edx
// 004ca339  5b                   pop ebx
// 004ca33a  c3                   ret 
// library rbxgs-raknet/Rand.cpp (function ?reloadMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet Rand.cpp
