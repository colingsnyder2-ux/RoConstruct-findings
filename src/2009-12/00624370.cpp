// roc 2009-12 00624370  unit: seg_00620000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624370
//
// 00624370  55                   push ebp
// 00624371  56                   push esi
// 00624372  57                   push edi
// 00624373  8bf8                 mov edi, eax
// 00624375  8b442414             mov eax, dword ptr [esp + 0x14]
// 00624379  0fbf00               movsx eax, word ptr [eax]
// 0062437c  2b442418             sub eax, dword ptr [esp + 0x18]
// 00624380  7902                 jns 0x624384
// 00624382  f7d8                 neg eax
// 00624384  33f6                 xor esi, esi
// 00624386  85c0                 test eax, eax
// 00624388  7427                 je 0x6243b1
// 0062438a  8d9b00000000         lea ebx, [ebx]
// 00624390  46                   inc esi
// 00624391  d1f8                 sar eax, 1
// 00624393  75fb                 jne 0x624390
// 00624395  83fe0b               cmp esi, 0xb
// 00624398  7e17                 jle 0x6243b1
// 0062439a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062439e  8b08                 mov ecx, dword ptr [eax]
// 006243a0  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 006243a7  8b10                 mov edx, dword ptr [eax]
// 006243a9  50                   push eax
// 006243aa  8b02                 mov eax, dword ptr [edx]
// 006243ac  ffd0                 call eax
// 006243ae  83c404               add esp, 4
// 006243b1  ff04b7               inc dword ptr [edi + esi*4]
// 006243b4  33f6                 xor esi, esi
// 006243b6  bd9c579c00           mov ebp, 0x9c579c
// 006243bb  eb03                 jmp 0x6243c0
// 006243bd  8d4900               lea ecx, [ecx]
// 006243c0  8b4d00               mov ecx, dword ptr [ebp]
// 006243c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 006243c7  0fbf0c4a             movsx ecx, word ptr [edx + ecx*2]
// 006243cb  85c9                 test ecx, ecx
// 006243cd  7503                 jne 0x6243d2
// 006243cf  46                   inc esi
// 006243d0  eb60                 jmp 0x624432
// 006243d2  83fe0f               cmp esi, 0xf
// 006243d5  7e1e                 jle 0x6243f5
// 006243d7  8b93c0030000         mov edx, dword ptr [ebx + 0x3c0]
// 006243dd  8d46f0               lea eax, [esi - 0x10]
// 006243e0  c1e804               shr eax, 4
// 006243e3  40                   inc eax
// 006243e4  8bf8                 mov edi, eax
// 006243e6  f7df                 neg edi
// 006243e8  c1e704               shl edi, 4
// 006243eb  03f7                 add esi, edi
// 006243ed  03d0                 add edx, eax
// 006243ef  8993c0030000         mov dword ptr [ebx + 0x3c0], edx
// 006243f5  85c9                 test ecx, ecx
// 006243f7  7d02                 jge 0x6243fb
// 006243f9  f7d9                 neg ecx
// 006243fb  d1f9                 sar ecx, 1
// 006243fd  bf01000000           mov edi, 1
// 00624402  7421                 je 0x624425
// 00624404  47                   inc edi
// 00624405  d1f9                 sar ecx, 1
// 00624407  75fb                 jne 0x624404
// 00624409  83ff0a               cmp edi, 0xa
// 0062440c  7e17                 jle 0x624425
// 0062440e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00624412  8b08                 mov ecx, dword ptr [eax]
// 00624414  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 0062441b  8b10                 mov edx, dword ptr [eax]
// 0062441d  50                   push eax
// 0062441e  8b02                 mov eax, dword ptr [edx]
// 00624420  ffd0                 call eax
// 00624422  83c404               add esp, 4
// 00624425  c1e604               shl esi, 4
// 00624428  03f7                 add esi, edi
// 0062442a  ff04b3               inc dword ptr [ebx + esi*4]
// 0062442d  8d04b3               lea eax, [ebx + esi*4]
// 00624430  33f6                 xor esi, esi
// 00624432  83c504               add ebp, 4
// 00624435  81fd98589c00         cmp ebp, 0x9c5898
// 0062443b  7c83                 jl 0x6243c0
// 0062443d  5f                   pop edi
// 0062443e  85f6                 test esi, esi
// 00624440  5e                   pop esi
// 00624441  5d                   pop ebp
// 00624442  7e02                 jle 0x624446
// 00624444  ff03                 inc dword ptr [ebx]
// 00624446  c3                   ret 
// library jpeg-6b/jchuff.c (function _htest_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
