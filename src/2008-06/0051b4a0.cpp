// roc 2008-06 0051b4a0  unit: G3D::_internal::DialogTemplate  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b4a0
//
// 0051b4a0  53                   push ebx
// 0051b4a1  55                   push ebp
// 0051b4a2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051b4a6  56                   push esi
// 0051b4a7  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051b4ab  8b06                 mov eax, dword ptr [esi]
// 0051b4ad  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 0051b4b3  c7401479000000       mov dword ptr [eax + 0x14], 0x79
// 0051b4ba  8b0e                 mov ecx, dword ptr [esi]
// 0051b4bc  895918               mov dword ptr [ecx + 0x18], ebx
// 0051b4bf  8b16                 mov edx, dword ptr [esi]
// 0051b4c1  57                   push edi
// 0051b4c2  896a1c               mov dword ptr [edx + 0x1c], ebp
// 0051b4c5  8b06                 mov eax, dword ptr [esi]
// 0051b4c7  8b4804               mov ecx, dword ptr [eax + 4]
// 0051b4ca  6aff                 push -1
// 0051b4cc  56                   push esi
// 0051b4cd  ffd1                 call ecx
// 0051b4cf  83c408               add esp, 8
// 0051b4d2  81fbc0000000         cmp ebx, 0xc0
// 0051b4d8  7d07                 jge 0x51b4e1
// 0051b4da  bf02000000           mov edi, 2
// 0051b4df  eb55                 jmp 0x51b536
// 0051b4e1  8d9330ffffff         lea edx, [ebx - 0xd0]
// 0051b4e7  83fa07               cmp edx, 7
// 0051b4ea  7745                 ja 0x51b531
// 0051b4ec  8d4501               lea eax, [ebp + 1]
// 0051b4ef  83e007               and eax, 7
// 0051b4f2  05d0000000           add eax, 0xd0
// 0051b4f7  3bd8                 cmp ebx, eax
// 0051b4f9  7436                 je 0x51b531
// 0051b4fb  8d4d02               lea ecx, [ebp + 2]
// 0051b4fe  83e107               and ecx, 7
// 0051b501  81c1d0000000         add ecx, 0xd0
// 0051b507  3bd9                 cmp ebx, ecx
// 0051b509  7426                 je 0x51b531
// 0051b50b  8d55ff               lea edx, [ebp - 1]
// 0051b50e  83e207               and edx, 7
// 0051b511  81c2d0000000         add edx, 0xd0
// 0051b517  3bda                 cmp ebx, edx
// 0051b519  74bf                 je 0x51b4da
// 0051b51b  8d45fe               lea eax, [ebp - 2]
// 0051b51e  83e007               and eax, 7
// 0051b521  05d0000000           add eax, 0xd0
// 0051b526  3bd8                 cmp ebx, eax
// 0051b528  74b0                 je 0x51b4da
// 0051b52a  bf01000000           mov edi, 1
// 0051b52f  eb05                 jmp 0x51b536
// 0051b531  bf03000000           mov edi, 3
// 0051b536  8b0e                 mov ecx, dword ptr [esi]
// 0051b538  c7411461000000       mov dword ptr [ecx + 0x14], 0x61
// 0051b53f  8b16                 mov edx, dword ptr [esi]
// 0051b541  895a18               mov dword ptr [edx + 0x18], ebx
// 0051b544  8b06                 mov eax, dword ptr [esi]
// 0051b546  89781c               mov dword ptr [eax + 0x1c], edi
// 0051b549  8b0e                 mov ecx, dword ptr [esi]
// 0051b54b  8b5104               mov edx, dword ptr [ecx + 4]
// 0051b54e  6a04                 push 4
// 0051b550  56                   push esi
// 0051b551  ffd2                 call edx
// 0051b553  83c408               add esp, 8
// 0051b556  83ef01               sub edi, 1
// 0051b559  7434                 je 0x51b58f
// 0051b55b  83ef01               sub edi, 1
// 0051b55e  7410                 je 0x51b570
// 0051b560  83ef01               sub edi, 1
// 0051b563  0f8569ffffff         jne 0x51b4d2
// 0051b569  5f                   pop edi
// 0051b56a  5e                   pop esi
// 0051b56b  5d                   pop ebp
// 0051b56c  b001                 mov al, 1
// 0051b56e  5b                   pop ebx
// 0051b56f  c3                   ret 
// 0051b570  56                   push esi
// 0051b571  e84af9ffff           call 0x51aec0
// 0051b576  83c404               add esp, 4
// 0051b579  84c0                 test al, al
// 0051b57b  740b                 je 0x51b588
// 0051b57d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 0051b583  e94affffff           jmp 0x51b4d2
// 0051b588  5f                   pop edi
// 0051b589  5e                   pop esi
// 0051b58a  5d                   pop ebp
// 0051b58b  32c0                 xor al, al
// 0051b58d  5b                   pop ebx
// 0051b58e  c3                   ret 
// 0051b58f  5f                   pop edi
// 0051b590  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 0051b59a  5e                   pop esi
// 0051b59b  5d                   pop ebp
// 0051b59c  b001                 mov al, 1
// 0051b59e  5b                   pop ebx
// 0051b59f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jpeg_resync_to_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
