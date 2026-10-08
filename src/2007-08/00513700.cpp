// from server: 100% by auto
// roc 2007-08 00513700  unit: G3D::_internal::DialogTemplate  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513700
//
// 00513700  53                   push ebx
// 00513701  55                   push ebp
// 00513702  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00513706  56                   push esi
// 00513707  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051370b  8b06                 mov eax, dword ptr [esi]
// 0051370d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00513713  c7401479000000       mov dword ptr [eax + 0x14], 0x79
// 0051371a  8b0e                 mov ecx, dword ptr [esi]
// 0051371c  895918               mov dword ptr [ecx + 0x18], ebx
// 0051371f  8b16                 mov edx, dword ptr [esi]
// 00513721  57                   push edi
// 00513722  896a1c               mov dword ptr [edx + 0x1c], ebp
// 00513725  8b06                 mov eax, dword ptr [esi]
// 00513727  8b4804               mov ecx, dword ptr [eax + 4]
// 0051372a  6aff                 push -1
// 0051372c  56                   push esi
// 0051372d  ffd1                 call ecx
// 0051372f  83c408               add esp, 8
// 00513732  81fbc0000000         cmp ebx, 0xc0
// 00513738  7d07                 jge 0x513741
// 0051373a  bf02000000           mov edi, 2
// 0051373f  eb55                 jmp 0x513796
// 00513741  8d9330ffffff         lea edx, [ebx - 0xd0]
// 00513747  83fa07               cmp edx, 7
// 0051374a  7745                 ja 0x513791
// 0051374c  8d4501               lea eax, [ebp + 1]
// 0051374f  83e007               and eax, 7
// 00513752  05d0000000           add eax, 0xd0
// 00513757  3bd8                 cmp ebx, eax
// 00513759  7436                 je 0x513791
// 0051375b  8d4d02               lea ecx, [ebp + 2]
// 0051375e  83e107               and ecx, 7
// 00513761  81c1d0000000         add ecx, 0xd0
// 00513767  3bd9                 cmp ebx, ecx
// 00513769  7426                 je 0x513791
// 0051376b  8d55ff               lea edx, [ebp - 1]
// 0051376e  83e207               and edx, 7
// 00513771  81c2d0000000         add edx, 0xd0
// 00513777  3bda                 cmp ebx, edx
// 00513779  74bf                 je 0x51373a
// 0051377b  8d45fe               lea eax, [ebp - 2]
// 0051377e  83e007               and eax, 7
// 00513781  05d0000000           add eax, 0xd0
// 00513786  3bd8                 cmp ebx, eax
// 00513788  74b0                 je 0x51373a
// 0051378a  bf01000000           mov edi, 1
// 0051378f  eb05                 jmp 0x513796
// 00513791  bf03000000           mov edi, 3
// 00513796  8b0e                 mov ecx, dword ptr [esi]
// 00513798  c7411461000000       mov dword ptr [ecx + 0x14], 0x61
// 0051379f  8b16                 mov edx, dword ptr [esi]
// 005137a1  895a18               mov dword ptr [edx + 0x18], ebx
// 005137a4  8b06                 mov eax, dword ptr [esi]
// 005137a6  89781c               mov dword ptr [eax + 0x1c], edi
// 005137a9  8b0e                 mov ecx, dword ptr [esi]
// 005137ab  8b5104               mov edx, dword ptr [ecx + 4]
// 005137ae  6a04                 push 4
// 005137b0  56                   push esi
// 005137b1  ffd2                 call edx
// 005137b3  83c408               add esp, 8
// 005137b6  83ef01               sub edi, 1
// 005137b9  7434                 je 0x5137ef
// 005137bb  83ef01               sub edi, 1
// 005137be  7410                 je 0x5137d0
// 005137c0  83ef01               sub edi, 1
// 005137c3  0f8569ffffff         jne 0x513732
// 005137c9  5f                   pop edi
// 005137ca  5e                   pop esi
// 005137cb  5d                   pop ebp
// 005137cc  b001                 mov al, 1
// 005137ce  5b                   pop ebx
// 005137cf  c3                   ret 
// 005137d0  56                   push esi
// 005137d1  e83af9ffff           call 0x513110
// 005137d6  83c404               add esp, 4
// 005137d9  84c0                 test al, al
// 005137db  740b                 je 0x5137e8
// 005137dd  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 005137e3  e94affffff           jmp 0x513732
// 005137e8  5f                   pop edi
// 005137e9  5e                   pop esi
// 005137ea  5d                   pop ebp
// 005137eb  32c0                 xor al, al
// 005137ed  5b                   pop ebx
// 005137ee  c3                   ret 
// 005137ef  5f                   pop edi
// 005137f0  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 005137fa  5e                   pop esi
// 005137fb  5d                   pop ebp
// 005137fc  b001                 mov al, 1
// 005137fe  5b                   pop ebx
// 005137ff  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jpeg_resync_to_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
