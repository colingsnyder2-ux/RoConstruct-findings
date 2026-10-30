// from server: 100% by auto
// roc 2007-08 00513670  unit: G3D::_internal::DialogTemplate  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513670
//
// 00513670  56                   push esi
// 00513671  8b742408             mov esi, dword ptr [esp + 8]
// 00513675  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0051367c  7511                 jne 0x51368f
// 0051367e  56                   push esi
// 0051367f  e88cfaffff           call 0x513110
// 00513684  83c404               add esp, 4
// 00513687  84c0                 test al, al
// 00513689  7504                 jne 0x51368f
// 0051368b  32c0                 xor al, al
// 0051368d  5e                   pop esi
// 0051368e  c3                   ret 
// 0051368f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00513695  8b4010               mov eax, dword ptr [eax + 0x10]
// 00513698  8d88d0000000         lea ecx, [eax + 0xd0]
// 0051369e  398e7c010000         cmp dword ptr [esi + 0x17c], ecx
// 005136a4  7530                 jne 0x5136d6
// 005136a6  8b16                 mov edx, dword ptr [esi]
// 005136a8  c7421462000000       mov dword ptr [edx + 0x14], 0x62
// 005136af  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005136b5  8b0e                 mov ecx, dword ptr [esi]
// 005136b7  8b5010               mov edx, dword ptr [eax + 0x10]
// 005136ba  895118               mov dword ptr [ecx + 0x18], edx
// 005136bd  8b06                 mov eax, dword ptr [esi]
// 005136bf  8b4804               mov ecx, dword ptr [eax + 4]
// 005136c2  6a03                 push 3
// 005136c4  56                   push esi
// 005136c5  ffd1                 call ecx
// 005136c7  83c408               add esp, 8
// 005136ca  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 005136d4  eb11                 jmp 0x5136e7
// 005136d6  8b5618               mov edx, dword ptr [esi + 0x18]
// 005136d9  50                   push eax
// 005136da  8b4214               mov eax, dword ptr [edx + 0x14]
// 005136dd  56                   push esi
// 005136de  ffd0                 call eax
// 005136e0  83c408               add esp, 8
// 005136e3  84c0                 test al, al
// 005136e5  74a4                 je 0x51368b
// 005136e7  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 005136ed  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005136f0  83c101               add ecx, 1
// 005136f3  83e107               and ecx, 7
// 005136f6  894e10               mov dword ptr [esi + 0x10], ecx
// 005136f9  b001                 mov al, 1
// 005136fb  5e                   pop esi
// 005136fc  c3                   ret 
// library jpeg-6b/jdmarker.c (function _read_restart_marker)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
