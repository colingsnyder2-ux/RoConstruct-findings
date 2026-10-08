// from server: 100% by auto
// roc 2007-08 00524850  unit: G3D::Line  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524850
//
// 00524850  83ec10               sub esp, 0x10
// 00524853  53                   push ebx
// 00524854  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00524858  8b8318010000         mov eax, dword ptr [ebx + 0x118]
// 0052485e  55                   push ebp
// 0052485f  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 00524865  56                   push esi
// 00524866  33f6                 xor esi, esi
// 00524868  397324               cmp dword ptr [ebx + 0x24], esi
// 0052486b  57                   push edi
// 0052486c  8bbb84010000         mov edi, dword ptr [ebx + 0x184]
// 00524872  897c2418             mov dword ptr [esp + 0x18], edi
// 00524876  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052487a  89742410             mov dword ptr [esp + 0x10], esi
// 0052487e  0f8e9b000000         jle 0x52491f
// 00524884  83c50c               add ebp, 0xc
// 00524887  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052488b  eb07                 jmp 0x524894
// 0052488d  8d4900               lea ecx, [ecx]
// 00524890  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00524894  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00524897  0faf4500             imul eax, dword ptr [ebp]
// 0052489b  99                   cdq 
// 0052489c  f7bb18010000         idiv dword ptr [ebx + 0x118]
// 005248a2  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 005248a5  8b573c               mov edx, dword ptr [edi + 0x3c]
// 005248a8  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 005248ab  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 005248ae  85c0                 test eax, eax
// 005248b0  7e56                 jle 0x524908
// 005248b2  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005248b6  8d5602               lea edx, [esi + 2]
// 005248b9  0fafd0               imul edx, eax
// 005248bc  83c601               add esi, 1
// 005248bf  0faff0               imul esi, eax
// 005248c2  8d1c97               lea ebx, [edi + edx*4]
// 005248c5  8d148500000000       lea edx, [eax*4]
// 005248cc  8bea                 mov ebp, edx
// 005248ce  8bd7                 mov edx, edi
// 005248d0  2bd5                 sub edx, ebp
// 005248d2  8d34b7               lea esi, [edi + esi*4]
// 005248d5  2bcf                 sub ecx, edi
// 005248d7  8b2c31               mov ebp, dword ptr [ecx + esi]
// 005248da  892c11               mov dword ptr [ecx + edx], ebp
// 005248dd  8b2e                 mov ebp, dword ptr [esi]
// 005248df  892a                 mov dword ptr [edx], ebp
// 005248e1  8b2c39               mov ebp, dword ptr [ecx + edi]
// 005248e4  892c19               mov dword ptr [ecx + ebx], ebp
// 005248e7  8b2f                 mov ebp, dword ptr [edi]
// 005248e9  892b                 mov dword ptr [ebx], ebp
// 005248eb  83c604               add esi, 4
// 005248ee  83c204               add edx, 4
// 005248f1  83c704               add edi, 4
// 005248f4  83c304               add ebx, 4
// 005248f7  83e801               sub eax, 1
// 005248fa  75db                 jne 0x5248d7
// 005248fc  8b742410             mov esi, dword ptr [esp + 0x10]
// 00524900  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00524904  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00524908  83c601               add esi, 1
// 0052490b  83c554               add ebp, 0x54
// 0052490e  3b7324               cmp esi, dword ptr [ebx + 0x24]
// 00524911  89742410             mov dword ptr [esp + 0x10], esi
// 00524915  896c2414             mov dword ptr [esp + 0x14], ebp
// 00524919  0f8c71ffffff         jl 0x524890
// 0052491f  5f                   pop edi
// 00524920  5e                   pop esi
// 00524921  5d                   pop ebp
// 00524922  5b                   pop ebx
// 00524923  83c410               add esp, 0x10
// 00524926  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_wraparound_pointers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
