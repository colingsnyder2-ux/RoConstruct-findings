// roc 2009-06 005a2340  unit: seg_005a0000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2340
//
// 005a2340  55                   push ebp
// 005a2341  56                   push esi
// 005a2342  57                   push edi
// 005a2343  8bf8                 mov edi, eax
// 005a2345  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a2349  0fbf00               movsx eax, word ptr [eax]
// 005a234c  2b442418             sub eax, dword ptr [esp + 0x18]
// 005a2350  7902                 jns 0x5a2354
// 005a2352  f7d8                 neg eax
// 005a2354  33f6                 xor esi, esi
// 005a2356  85c0                 test eax, eax
// 005a2358  7427                 je 0x5a2381
// 005a235a  8d9b00000000         lea ebx, [ebx]
// 005a2360  46                   inc esi
// 005a2361  d1f8                 sar eax, 1
// 005a2363  75fb                 jne 0x5a2360
// 005a2365  83fe0b               cmp esi, 0xb
// 005a2368  7e17                 jle 0x5a2381
// 005a236a  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a236e  8b08                 mov ecx, dword ptr [eax]
// 005a2370  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 005a2377  8b10                 mov edx, dword ptr [eax]
// 005a2379  50                   push eax
// 005a237a  8b02                 mov eax, dword ptr [edx]
// 005a237c  ffd0                 call eax
// 005a237e  83c404               add esp, 4
// 005a2381  ff04b7               inc dword ptr [edi + esi*4]
// 005a2384  33f6                 xor esi, esi
// 005a2386  bdfce88c00           mov ebp, 0x8ce8fc
// 005a238b  eb03                 jmp 0x5a2390
// 005a238d  8d4900               lea ecx, [ecx]
// 005a2390  8b4d00               mov ecx, dword ptr [ebp]
// 005a2393  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a2397  0fbf0c4a             movsx ecx, word ptr [edx + ecx*2]
// 005a239b  85c9                 test ecx, ecx
// 005a239d  7503                 jne 0x5a23a2
// 005a239f  46                   inc esi
// 005a23a0  eb60                 jmp 0x5a2402
// 005a23a2  83fe0f               cmp esi, 0xf
// 005a23a5  7e1e                 jle 0x5a23c5
// 005a23a7  8b93c0030000         mov edx, dword ptr [ebx + 0x3c0]
// 005a23ad  8d46f0               lea eax, [esi - 0x10]
// 005a23b0  c1e804               shr eax, 4
// 005a23b3  40                   inc eax
// 005a23b4  8bf8                 mov edi, eax
// 005a23b6  f7df                 neg edi
// 005a23b8  c1e704               shl edi, 4
// 005a23bb  03f7                 add esi, edi
// 005a23bd  03d0                 add edx, eax
// 005a23bf  8993c0030000         mov dword ptr [ebx + 0x3c0], edx
// 005a23c5  85c9                 test ecx, ecx
// 005a23c7  7d02                 jge 0x5a23cb
// 005a23c9  f7d9                 neg ecx
// 005a23cb  d1f9                 sar ecx, 1
// 005a23cd  bf01000000           mov edi, 1
// 005a23d2  7421                 je 0x5a23f5
// 005a23d4  47                   inc edi
// 005a23d5  d1f9                 sar ecx, 1
// 005a23d7  75fb                 jne 0x5a23d4
// 005a23d9  83ff0a               cmp edi, 0xa
// 005a23dc  7e17                 jle 0x5a23f5
// 005a23de  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a23e2  8b08                 mov ecx, dword ptr [eax]
// 005a23e4  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 005a23eb  8b10                 mov edx, dword ptr [eax]
// 005a23ed  50                   push eax
// 005a23ee  8b02                 mov eax, dword ptr [edx]
// 005a23f0  ffd0                 call eax
// 005a23f2  83c404               add esp, 4
// 005a23f5  c1e604               shl esi, 4
// 005a23f8  03f7                 add esi, edi
// 005a23fa  ff04b3               inc dword ptr [ebx + esi*4]
// 005a23fd  8d04b3               lea eax, [ebx + esi*4]
// 005a2400  33f6                 xor esi, esi
// 005a2402  83c504               add ebp, 4
// 005a2405  81fdf8e98c00         cmp ebp, 0x8ce9f8
// 005a240b  7c83                 jl 0x5a2390
// 005a240d  5f                   pop edi
// 005a240e  85f6                 test esi, esi
// 005a2410  5e                   pop esi
// 005a2411  5d                   pop ebp
// 005a2412  7e02                 jle 0x5a2416
// 005a2414  ff03                 inc dword ptr [ebx]
// 005a2416  c3                   ret 
// library jpeg-6b/jchuff.c (function _htest_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
