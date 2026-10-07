// roc 2011-06 0057c180  unit: seg_00570000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c180
//
// 0057c180  55                   push ebp
// 0057c181  56                   push esi
// 0057c182  57                   push edi
// 0057c183  8bf8                 mov edi, eax
// 0057c185  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057c189  0fbf00               movsx eax, word ptr [eax]
// 0057c18c  2b442418             sub eax, dword ptr [esp + 0x18]
// 0057c190  7902                 jns 0x57c194
// 0057c192  f7d8                 neg eax
// 0057c194  33f6                 xor esi, esi
// 0057c196  85c0                 test eax, eax
// 0057c198  7427                 je 0x57c1c1
// 0057c19a  8d9b00000000         lea ebx, [ebx]
// 0057c1a0  46                   inc esi
// 0057c1a1  d1f8                 sar eax, 1
// 0057c1a3  75fb                 jne 0x57c1a0
// 0057c1a5  83fe0b               cmp esi, 0xb
// 0057c1a8  7e17                 jle 0x57c1c1
// 0057c1aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057c1ae  8b08                 mov ecx, dword ptr [eax]
// 0057c1b0  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 0057c1b7  8b10                 mov edx, dword ptr [eax]
// 0057c1b9  50                   push eax
// 0057c1ba  8b02                 mov eax, dword ptr [edx]
// 0057c1bc  ffd0                 call eax
// 0057c1be  83c404               add esp, 4
// 0057c1c1  ff04b7               inc dword ptr [edi + esi*4]
// 0057c1c4  33f6                 xor esi, esi
// 0057c1c6  bdf458a800           mov ebp, 0xa858f4
// 0057c1cb  eb03                 jmp 0x57c1d0
// 0057c1cd  8d4900               lea ecx, [ecx]
// 0057c1d0  8b4d00               mov ecx, dword ptr [ebp]
// 0057c1d3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057c1d7  0fbf0c4a             movsx ecx, word ptr [edx + ecx*2]
// 0057c1db  85c9                 test ecx, ecx
// 0057c1dd  7503                 jne 0x57c1e2
// 0057c1df  46                   inc esi
// 0057c1e0  eb60                 jmp 0x57c242
// 0057c1e2  83fe0f               cmp esi, 0xf
// 0057c1e5  7e1e                 jle 0x57c205
// 0057c1e7  8b93c0030000         mov edx, dword ptr [ebx + 0x3c0]
// 0057c1ed  8d46f0               lea eax, [esi - 0x10]
// 0057c1f0  c1e804               shr eax, 4
// 0057c1f3  40                   inc eax
// 0057c1f4  8bf8                 mov edi, eax
// 0057c1f6  f7df                 neg edi
// 0057c1f8  c1e704               shl edi, 4
// 0057c1fb  03f7                 add esi, edi
// 0057c1fd  03d0                 add edx, eax
// 0057c1ff  8993c0030000         mov dword ptr [ebx + 0x3c0], edx
// 0057c205  85c9                 test ecx, ecx
// 0057c207  7d02                 jge 0x57c20b
// 0057c209  f7d9                 neg ecx
// 0057c20b  d1f9                 sar ecx, 1
// 0057c20d  bf01000000           mov edi, 1
// 0057c212  7421                 je 0x57c235
// 0057c214  47                   inc edi
// 0057c215  d1f9                 sar ecx, 1
// 0057c217  75fb                 jne 0x57c214
// 0057c219  83ff0a               cmp edi, 0xa
// 0057c21c  7e17                 jle 0x57c235
// 0057c21e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057c222  8b08                 mov ecx, dword ptr [eax]
// 0057c224  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 0057c22b  8b10                 mov edx, dword ptr [eax]
// 0057c22d  50                   push eax
// 0057c22e  8b02                 mov eax, dword ptr [edx]
// 0057c230  ffd0                 call eax
// 0057c232  83c404               add esp, 4
// 0057c235  c1e604               shl esi, 4
// 0057c238  03f7                 add esi, edi
// 0057c23a  ff04b3               inc dword ptr [ebx + esi*4]
// 0057c23d  8d04b3               lea eax, [ebx + esi*4]
// 0057c240  33f6                 xor esi, esi
// 0057c242  83c504               add ebp, 4
// 0057c245  81fdf059a800         cmp ebp, 0xa859f0
// 0057c24b  7c83                 jl 0x57c1d0
// 0057c24d  5f                   pop edi
// 0057c24e  85f6                 test esi, esi
// 0057c250  5e                   pop esi
// 0057c251  5d                   pop ebp
// 0057c252  7e02                 jle 0x57c256
// 0057c254  ff03                 inc dword ptr [ebx]
// 0057c256  c3                   ret 
// library jpeg-6b/jchuff.c (function _htest_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
