// from server: 100% by auto
// roc 2010-06 00585ed0  unit: seg_00580000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585ed0
//
// 00585ed0  55                   push ebp
// 00585ed1  56                   push esi
// 00585ed2  57                   push edi
// 00585ed3  8bf8                 mov edi, eax
// 00585ed5  8b442414             mov eax, dword ptr [esp + 0x14]
// 00585ed9  0fbf00               movsx eax, word ptr [eax]
// 00585edc  2b442418             sub eax, dword ptr [esp + 0x18]
// 00585ee0  7902                 jns 0x585ee4
// 00585ee2  f7d8                 neg eax
// 00585ee4  33f6                 xor esi, esi
// 00585ee6  85c0                 test eax, eax
// 00585ee8  7427                 je 0x585f11
// 00585eea  8d9b00000000         lea ebx, [ebx]
// 00585ef0  46                   inc esi
// 00585ef1  d1f8                 sar eax, 1
// 00585ef3  75fb                 jne 0x585ef0
// 00585ef5  83fe0b               cmp esi, 0xb
// 00585ef8  7e17                 jle 0x585f11
// 00585efa  8b442410             mov eax, dword ptr [esp + 0x10]
// 00585efe  8b08                 mov ecx, dword ptr [eax]
// 00585f00  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00585f07  8b10                 mov edx, dword ptr [eax]
// 00585f09  50                   push eax
// 00585f0a  8b02                 mov eax, dword ptr [edx]
// 00585f0c  ffd0                 call eax
// 00585f0e  83c404               add esp, 4
// 00585f11  ff04b7               inc dword ptr [edi + esi*4]
// 00585f14  33f6                 xor esi, esi
// 00585f16  bdfc34a200           mov ebp, 0xa234fc
// 00585f1b  eb03                 jmp 0x585f20
// 00585f1d  8d4900               lea ecx, [ecx]
// 00585f20  8b4d00               mov ecx, dword ptr [ebp]
// 00585f23  8b542414             mov edx, dword ptr [esp + 0x14]
// 00585f27  0fbf0c4a             movsx ecx, word ptr [edx + ecx*2]
// 00585f2b  85c9                 test ecx, ecx
// 00585f2d  7503                 jne 0x585f32
// 00585f2f  46                   inc esi
// 00585f30  eb60                 jmp 0x585f92
// 00585f32  83fe0f               cmp esi, 0xf
// 00585f35  7e1e                 jle 0x585f55
// 00585f37  8b93c0030000         mov edx, dword ptr [ebx + 0x3c0]
// 00585f3d  8d46f0               lea eax, [esi - 0x10]
// 00585f40  c1e804               shr eax, 4
// 00585f43  40                   inc eax
// 00585f44  8bf8                 mov edi, eax
// 00585f46  f7df                 neg edi
// 00585f48  c1e704               shl edi, 4
// 00585f4b  03f7                 add esi, edi
// 00585f4d  03d0                 add edx, eax
// 00585f4f  8993c0030000         mov dword ptr [ebx + 0x3c0], edx
// 00585f55  85c9                 test ecx, ecx
// 00585f57  7d02                 jge 0x585f5b
// 00585f59  f7d9                 neg ecx
// 00585f5b  d1f9                 sar ecx, 1
// 00585f5d  bf01000000           mov edi, 1
// 00585f62  7421                 je 0x585f85
// 00585f64  47                   inc edi
// 00585f65  d1f9                 sar ecx, 1
// 00585f67  75fb                 jne 0x585f64
// 00585f69  83ff0a               cmp edi, 0xa
// 00585f6c  7e17                 jle 0x585f85
// 00585f6e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00585f72  8b08                 mov ecx, dword ptr [eax]
// 00585f74  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00585f7b  8b10                 mov edx, dword ptr [eax]
// 00585f7d  50                   push eax
// 00585f7e  8b02                 mov eax, dword ptr [edx]
// 00585f80  ffd0                 call eax
// 00585f82  83c404               add esp, 4
// 00585f85  c1e604               shl esi, 4
// 00585f88  03f7                 add esi, edi
// 00585f8a  ff04b3               inc dword ptr [ebx + esi*4]
// 00585f8d  8d04b3               lea eax, [ebx + esi*4]
// 00585f90  33f6                 xor esi, esi
// 00585f92  83c504               add ebp, 4
// 00585f95  81fdf835a200         cmp ebp, 0xa235f8
// 00585f9b  7c83                 jl 0x585f20
// 00585f9d  5f                   pop edi
// 00585f9e  85f6                 test esi, esi
// 00585fa0  5e                   pop esi
// 00585fa1  5d                   pop ebp
// 00585fa2  7e02                 jle 0x585fa6
// 00585fa4  ff03                 inc dword ptr [ebx]
// 00585fa6  c3                   ret 
// library jpeg-6b/jchuff.c (function _htest_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
