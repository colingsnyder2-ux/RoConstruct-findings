// roc 2009-12 006144f0  unit: seg_00610000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006144f0
//
// 006144f0  83ec08               sub esp, 8
// 006144f3  83bb2401000000       cmp dword ptr [ebx + 0x124], 0
// 006144fa  c744240400000000     mov dword ptr [esp + 4], 0
// 00614502  0f8e83000000         jle 0x61458b
// 00614508  55                   push ebp
// 00614509  8d8328010000         lea eax, [ebx + 0x128]
// 0061450f  56                   push esi
// 00614510  89442408             mov dword ptr [esp + 8], eax
// 00614514  57                   push edi
// 00614515  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00614519  8b29                 mov ebp, dword ptr [ecx]
// 0061451b  837d4c00             cmp dword ptr [ebp + 0x4c], 0
// 0061451f  7551                 jne 0x614572
// 00614521  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00614524  83fe03               cmp esi, 3
// 00614527  770a                 ja 0x614533
// 00614529  83bcb39000000000     cmp dword ptr [ebx + esi*4 + 0x90], 0
// 00614531  7518                 jne 0x61454b
// 00614533  8b13                 mov edx, dword ptr [ebx]
// 00614535  c7421434000000       mov dword ptr [edx + 0x14], 0x34
// 0061453c  8b03                 mov eax, dword ptr [ebx]
// 0061453e  897018               mov dword ptr [eax + 0x18], esi
// 00614541  8b0b                 mov ecx, dword ptr [ebx]
// 00614543  8b11                 mov edx, dword ptr [ecx]
// 00614545  53                   push ebx
// 00614546  ffd2                 call edx
// 00614548  83c404               add esp, 4
// 0061454b  8b4304               mov eax, dword ptr [ebx + 4]
// 0061454e  8b08                 mov ecx, dword ptr [eax]
// 00614550  6882000000           push 0x82
// 00614555  6a01                 push 1
// 00614557  53                   push ebx
// 00614558  ffd1                 call ecx
// 0061455a  8bb4b390000000       mov esi, dword ptr [ebx + esi*4 + 0x90]
// 00614561  b920000000           mov ecx, 0x20
// 00614566  8bf8                 mov edi, eax
// 00614568  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0061456a  66a5                 movsw word ptr es:[edi], word ptr [esi]
// 0061456c  83c40c               add esp, 0xc
// 0061456f  89454c               mov dword ptr [ebp + 0x4c], eax
// 00614572  8b442410             mov eax, dword ptr [esp + 0x10]
// 00614576  8344240c04           add dword ptr [esp + 0xc], 4
// 0061457b  40                   inc eax
// 0061457c  3b8324010000         cmp eax, dword ptr [ebx + 0x124]
// 00614582  89442410             mov dword ptr [esp + 0x10], eax
// 00614586  7c8d                 jl 0x614515
// 00614588  5f                   pop edi
// 00614589  5e                   pop esi
// 0061458a  5d                   pop ebp
// 0061458b  83c408               add esp, 8
// 0061458e  c3                   ret 
// library jpeg-6b/jdinput.c (function _latch_quant_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
