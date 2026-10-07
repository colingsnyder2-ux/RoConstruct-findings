// roc 2012-06 00667890  unit: seg_00660000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667890
//
// 00667890  55                   push ebp
// 00667891  56                   push esi
// 00667892  57                   push edi
// 00667893  8bf8                 mov edi, eax
// 00667895  8b442414             mov eax, dword ptr [esp + 0x14]
// 00667899  0fbf00               movsx eax, word ptr [eax]
// 0066789c  2b442418             sub eax, dword ptr [esp + 0x18]
// 006678a0  7902                 jns 0x6678a4
// 006678a2  f7d8                 neg eax
// 006678a4  33f6                 xor esi, esi
// 006678a6  85c0                 test eax, eax
// 006678a8  7427                 je 0x6678d1
// 006678aa  8d9b00000000         lea ebx, [ebx]
// 006678b0  46                   inc esi
// 006678b1  d1f8                 sar eax, 1
// 006678b3  75fb                 jne 0x6678b0
// 006678b5  83fe0b               cmp esi, 0xb
// 006678b8  7e17                 jle 0x6678d1
// 006678ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 006678be  8b08                 mov ecx, dword ptr [eax]
// 006678c0  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 006678c7  8b10                 mov edx, dword ptr [eax]
// 006678c9  50                   push eax
// 006678ca  8b02                 mov eax, dword ptr [edx]
// 006678cc  ffd0                 call eax
// 006678ce  83c404               add esp, 4
// 006678d1  ff04b7               inc dword ptr [edi + esi*4]
// 006678d4  33f6                 xor esi, esi
// 006678d6  bd4497b800           mov ebp, 0xb89744
// 006678db  eb03                 jmp 0x6678e0
// 006678dd  8d4900               lea ecx, [ecx]
// 006678e0  8b4d00               mov ecx, dword ptr [ebp]
// 006678e3  8b542414             mov edx, dword ptr [esp + 0x14]
// 006678e7  0fbf0c4a             movsx ecx, word ptr [edx + ecx*2]
// 006678eb  85c9                 test ecx, ecx
// 006678ed  7503                 jne 0x6678f2
// 006678ef  46                   inc esi
// 006678f0  eb60                 jmp 0x667952
// 006678f2  83fe0f               cmp esi, 0xf
// 006678f5  7e1e                 jle 0x667915
// 006678f7  8b93c0030000         mov edx, dword ptr [ebx + 0x3c0]
// 006678fd  8d46f0               lea eax, [esi - 0x10]
// 00667900  c1e804               shr eax, 4
// 00667903  40                   inc eax
// 00667904  8bf8                 mov edi, eax
// 00667906  f7df                 neg edi
// 00667908  c1e704               shl edi, 4
// 0066790b  03f7                 add esi, edi
// 0066790d  03d0                 add edx, eax
// 0066790f  8993c0030000         mov dword ptr [ebx + 0x3c0], edx
// 00667915  85c9                 test ecx, ecx
// 00667917  7d02                 jge 0x66791b
// 00667919  f7d9                 neg ecx
// 0066791b  d1f9                 sar ecx, 1
// 0066791d  bf01000000           mov edi, 1
// 00667922  7421                 je 0x667945
// 00667924  47                   inc edi
// 00667925  d1f9                 sar ecx, 1
// 00667927  75fb                 jne 0x667924
// 00667929  83ff0a               cmp edi, 0xa
// 0066792c  7e17                 jle 0x667945
// 0066792e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00667932  8b08                 mov ecx, dword ptr [eax]
// 00667934  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 0066793b  8b10                 mov edx, dword ptr [eax]
// 0066793d  50                   push eax
// 0066793e  8b02                 mov eax, dword ptr [edx]
// 00667940  ffd0                 call eax
// 00667942  83c404               add esp, 4
// 00667945  c1e604               shl esi, 4
// 00667948  03f7                 add esi, edi
// 0066794a  ff04b3               inc dword ptr [ebx + esi*4]
// 0066794d  8d04b3               lea eax, [ebx + esi*4]
// 00667950  33f6                 xor esi, esi
// 00667952  83c504               add ebp, 4
// 00667955  81fd4098b800         cmp ebp, 0xb89840
// 0066795b  7c83                 jl 0x6678e0
// 0066795d  5f                   pop edi
// 0066795e  85f6                 test esi, esi
// 00667960  5e                   pop esi
// 00667961  5d                   pop ebp
// 00667962  7e02                 jle 0x667966
// 00667964  ff03                 inc dword ptr [ebx]
// 00667966  c3                   ret 
// library jpeg-6b/jchuff.c (function _htest_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
