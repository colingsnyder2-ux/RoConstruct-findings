// roc 2007-03 00507e30  unit: seg_00500000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00507e30
//
// 00507e30  53                   push ebx
// 00507e31  55                   push ebp
// 00507e32  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00507e36  56                   push esi
// 00507e37  8b742410             mov esi, dword ptr [esp + 0x10]
// 00507e3b  8b06                 mov eax, dword ptr [esi]
// 00507e3d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00507e43  c7401479000000       mov dword ptr [eax + 0x14], 0x79
// 00507e4a  8b0e                 mov ecx, dword ptr [esi]
// 00507e4c  895918               mov dword ptr [ecx + 0x18], ebx
// 00507e4f  8b16                 mov edx, dword ptr [esi]
// 00507e51  57                   push edi
// 00507e52  896a1c               mov dword ptr [edx + 0x1c], ebp
// 00507e55  8b06                 mov eax, dword ptr [esi]
// 00507e57  8b4804               mov ecx, dword ptr [eax + 4]
// 00507e5a  6aff                 push -1
// 00507e5c  56                   push esi
// 00507e5d  ffd1                 call ecx
// 00507e5f  83c408               add esp, 8
// 00507e62  81fbc0000000         cmp ebx, 0xc0
// 00507e68  7d07                 jge 0x507e71
// 00507e6a  bf02000000           mov edi, 2
// 00507e6f  eb55                 jmp 0x507ec6
// 00507e71  8d9330ffffff         lea edx, [ebx - 0xd0]
// 00507e77  83fa07               cmp edx, 7
// 00507e7a  7745                 ja 0x507ec1
// 00507e7c  8d4501               lea eax, [ebp + 1]
// 00507e7f  83e007               and eax, 7
// 00507e82  05d0000000           add eax, 0xd0
// 00507e87  3bd8                 cmp ebx, eax
// 00507e89  7436                 je 0x507ec1
// 00507e8b  8d4d02               lea ecx, [ebp + 2]
// 00507e8e  83e107               and ecx, 7
// 00507e91  81c1d0000000         add ecx, 0xd0
// 00507e97  3bd9                 cmp ebx, ecx
// 00507e99  7426                 je 0x507ec1
// 00507e9b  8d55ff               lea edx, [ebp - 1]
// 00507e9e  83e207               and edx, 7
// 00507ea1  81c2d0000000         add edx, 0xd0
// 00507ea7  3bda                 cmp ebx, edx
// 00507ea9  74bf                 je 0x507e6a
// 00507eab  8d45fe               lea eax, [ebp - 2]
// 00507eae  83e007               and eax, 7
// 00507eb1  05d0000000           add eax, 0xd0
// 00507eb6  3bd8                 cmp ebx, eax
// 00507eb8  74b0                 je 0x507e6a
// 00507eba  bf01000000           mov edi, 1
// 00507ebf  eb05                 jmp 0x507ec6
// 00507ec1  bf03000000           mov edi, 3
// 00507ec6  8b0e                 mov ecx, dword ptr [esi]
// 00507ec8  c7411461000000       mov dword ptr [ecx + 0x14], 0x61
// 00507ecf  8b16                 mov edx, dword ptr [esi]
// 00507ed1  895a18               mov dword ptr [edx + 0x18], ebx
// 00507ed4  8b06                 mov eax, dword ptr [esi]
// 00507ed6  89781c               mov dword ptr [eax + 0x1c], edi
// 00507ed9  8b0e                 mov ecx, dword ptr [esi]
// 00507edb  8b5104               mov edx, dword ptr [ecx + 4]
// 00507ede  6a04                 push 4
// 00507ee0  56                   push esi
// 00507ee1  ffd2                 call edx
// 00507ee3  83c408               add esp, 8
// 00507ee6  83ef01               sub edi, 1
// 00507ee9  7434                 je 0x507f1f
// 00507eeb  83ef01               sub edi, 1
// 00507eee  7410                 je 0x507f00
// 00507ef0  83ef01               sub edi, 1
// 00507ef3  0f8569ffffff         jne 0x507e62
// 00507ef9  5f                   pop edi
// 00507efa  5e                   pop esi
// 00507efb  5d                   pop ebp
// 00507efc  b001                 mov al, 1
// 00507efe  5b                   pop ebx
// 00507eff  c3                   ret 
// 00507f00  56                   push esi
// 00507f01  e83af9ffff           call 0x507840
// 00507f06  83c404               add esp, 4
// 00507f09  84c0                 test al, al
// 00507f0b  740b                 je 0x507f18
// 00507f0d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00507f13  e94affffff           jmp 0x507e62
// 00507f18  5f                   pop edi
// 00507f19  5e                   pop esi
// 00507f1a  5d                   pop ebp
// 00507f1b  32c0                 xor al, al
// 00507f1d  5b                   pop ebx
// 00507f1e  c3                   ret 
// 00507f1f  5f                   pop edi
// 00507f20  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00507f2a  5e                   pop esi
// 00507f2b  5d                   pop ebp
// 00507f2c  b001                 mov al, 1
// 00507f2e  5b                   pop ebx
// 00507f2f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jpeg_resync_to_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
