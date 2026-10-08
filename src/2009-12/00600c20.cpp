// roc 2009-12 00600c20  unit: G3D::_internal::DialogTemplate  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600c20
//
// 00600c20  53                   push ebx
// 00600c21  55                   push ebp
// 00600c22  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00600c26  56                   push esi
// 00600c27  8b742410             mov esi, dword ptr [esp + 0x10]
// 00600c2b  8b06                 mov eax, dword ptr [esi]
// 00600c2d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00600c33  c7401479000000       mov dword ptr [eax + 0x14], 0x79
// 00600c3a  8b0e                 mov ecx, dword ptr [esi]
// 00600c3c  895918               mov dword ptr [ecx + 0x18], ebx
// 00600c3f  8b16                 mov edx, dword ptr [esi]
// 00600c41  57                   push edi
// 00600c42  896a1c               mov dword ptr [edx + 0x1c], ebp
// 00600c45  8b06                 mov eax, dword ptr [esi]
// 00600c47  8b4804               mov ecx, dword ptr [eax + 4]
// 00600c4a  6aff                 push -1
// 00600c4c  56                   push esi
// 00600c4d  ffd1                 call ecx
// 00600c4f  83c408               add esp, 8
// 00600c52  81fbc0000000         cmp ebx, 0xc0
// 00600c58  7d07                 jge 0x600c61
// 00600c5a  bf02000000           mov edi, 2
// 00600c5f  eb55                 jmp 0x600cb6
// 00600c61  8d9330ffffff         lea edx, [ebx - 0xd0]
// 00600c67  83fa07               cmp edx, 7
// 00600c6a  7745                 ja 0x600cb1
// 00600c6c  8d4501               lea eax, [ebp + 1]
// 00600c6f  83e007               and eax, 7
// 00600c72  05d0000000           add eax, 0xd0
// 00600c77  3bd8                 cmp ebx, eax
// 00600c79  7436                 je 0x600cb1
// 00600c7b  8d4d02               lea ecx, [ebp + 2]
// 00600c7e  83e107               and ecx, 7
// 00600c81  81c1d0000000         add ecx, 0xd0
// 00600c87  3bd9                 cmp ebx, ecx
// 00600c89  7426                 je 0x600cb1
// 00600c8b  8d55ff               lea edx, [ebp - 1]
// 00600c8e  83e207               and edx, 7
// 00600c91  81c2d0000000         add edx, 0xd0
// 00600c97  3bda                 cmp ebx, edx
// 00600c99  74bf                 je 0x600c5a
// 00600c9b  8d45fe               lea eax, [ebp - 2]
// 00600c9e  83e007               and eax, 7
// 00600ca1  05d0000000           add eax, 0xd0
// 00600ca6  3bd8                 cmp ebx, eax
// 00600ca8  74b0                 je 0x600c5a
// 00600caa  bf01000000           mov edi, 1
// 00600caf  eb05                 jmp 0x600cb6
// 00600cb1  bf03000000           mov edi, 3
// 00600cb6  8b0e                 mov ecx, dword ptr [esi]
// 00600cb8  c7411461000000       mov dword ptr [ecx + 0x14], 0x61
// 00600cbf  8b16                 mov edx, dword ptr [esi]
// 00600cc1  895a18               mov dword ptr [edx + 0x18], ebx
// 00600cc4  8b06                 mov eax, dword ptr [esi]
// 00600cc6  89781c               mov dword ptr [eax + 0x1c], edi
// 00600cc9  8b0e                 mov ecx, dword ptr [esi]
// 00600ccb  8b5104               mov edx, dword ptr [ecx + 4]
// 00600cce  6a04                 push 4
// 00600cd0  56                   push esi
// 00600cd1  ffd2                 call edx
// 00600cd3  83c408               add esp, 8
// 00600cd6  83ef01               sub edi, 1
// 00600cd9  7434                 je 0x600d0f
// 00600cdb  83ef01               sub edi, 1
// 00600cde  7410                 je 0x600cf0
// 00600ce0  83ef01               sub edi, 1
// 00600ce3  0f8569ffffff         jne 0x600c52
// 00600ce9  5f                   pop edi
// 00600cea  5e                   pop esi
// 00600ceb  5d                   pop ebp
// 00600cec  b001                 mov al, 1
// 00600cee  5b                   pop ebx
// 00600cef  c3                   ret 
// 00600cf0  56                   push esi
// 00600cf1  e84af9ffff           call 0x600640
// 00600cf6  83c404               add esp, 4
// 00600cf9  84c0                 test al, al
// 00600cfb  740b                 je 0x600d08
// 00600cfd  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00600d03  e94affffff           jmp 0x600c52
// 00600d08  5f                   pop edi
// 00600d09  5e                   pop esi
// 00600d0a  5d                   pop ebp
// 00600d0b  32c0                 xor al, al
// 00600d0d  5b                   pop ebx
// 00600d0e  c3                   ret 
// 00600d0f  5f                   pop edi
// 00600d10  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00600d1a  5e                   pop esi
// 00600d1b  5d                   pop ebp
// 00600d1c  b001                 mov al, 1
// 00600d1e  5b                   pop ebx
// 00600d1f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jpeg_resync_to_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
