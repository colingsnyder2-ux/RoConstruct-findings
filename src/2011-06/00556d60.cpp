// roc 2011-06 00556d60  unit: seg_00550000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556d60
//
// 00556d60  53                   push ebx
// 00556d61  55                   push ebp
// 00556d62  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00556d66  56                   push esi
// 00556d67  8b742410             mov esi, dword ptr [esp + 0x10]
// 00556d6b  8b06                 mov eax, dword ptr [esi]
// 00556d6d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00556d73  c7401479000000       mov dword ptr [eax + 0x14], 0x79
// 00556d7a  8b0e                 mov ecx, dword ptr [esi]
// 00556d7c  895918               mov dword ptr [ecx + 0x18], ebx
// 00556d7f  8b16                 mov edx, dword ptr [esi]
// 00556d81  57                   push edi
// 00556d82  896a1c               mov dword ptr [edx + 0x1c], ebp
// 00556d85  8b06                 mov eax, dword ptr [esi]
// 00556d87  8b4804               mov ecx, dword ptr [eax + 4]
// 00556d8a  6aff                 push -1
// 00556d8c  56                   push esi
// 00556d8d  ffd1                 call ecx
// 00556d8f  83c408               add esp, 8
// 00556d92  81fbc0000000         cmp ebx, 0xc0
// 00556d98  7d07                 jge 0x556da1
// 00556d9a  bf02000000           mov edi, 2
// 00556d9f  eb55                 jmp 0x556df6
// 00556da1  8d9330ffffff         lea edx, [ebx - 0xd0]
// 00556da7  83fa07               cmp edx, 7
// 00556daa  7745                 ja 0x556df1
// 00556dac  8d4501               lea eax, [ebp + 1]
// 00556daf  83e007               and eax, 7
// 00556db2  05d0000000           add eax, 0xd0
// 00556db7  3bd8                 cmp ebx, eax
// 00556db9  7436                 je 0x556df1
// 00556dbb  8d4d02               lea ecx, [ebp + 2]
// 00556dbe  83e107               and ecx, 7
// 00556dc1  81c1d0000000         add ecx, 0xd0
// 00556dc7  3bd9                 cmp ebx, ecx
// 00556dc9  7426                 je 0x556df1
// 00556dcb  8d55ff               lea edx, [ebp - 1]
// 00556dce  83e207               and edx, 7
// 00556dd1  81c2d0000000         add edx, 0xd0
// 00556dd7  3bda                 cmp ebx, edx
// 00556dd9  74bf                 je 0x556d9a
// 00556ddb  8d45fe               lea eax, [ebp - 2]
// 00556dde  83e007               and eax, 7
// 00556de1  05d0000000           add eax, 0xd0
// 00556de6  3bd8                 cmp ebx, eax
// 00556de8  74b0                 je 0x556d9a
// 00556dea  bf01000000           mov edi, 1
// 00556def  eb05                 jmp 0x556df6
// 00556df1  bf03000000           mov edi, 3
// 00556df6  8b0e                 mov ecx, dword ptr [esi]
// 00556df8  c7411461000000       mov dword ptr [ecx + 0x14], 0x61
// 00556dff  8b16                 mov edx, dword ptr [esi]
// 00556e01  895a18               mov dword ptr [edx + 0x18], ebx
// 00556e04  8b06                 mov eax, dword ptr [esi]
// 00556e06  89781c               mov dword ptr [eax + 0x1c], edi
// 00556e09  8b0e                 mov ecx, dword ptr [esi]
// 00556e0b  8b5104               mov edx, dword ptr [ecx + 4]
// 00556e0e  6a04                 push 4
// 00556e10  56                   push esi
// 00556e11  ffd2                 call edx
// 00556e13  83c408               add esp, 8
// 00556e16  83ef01               sub edi, 1
// 00556e19  7434                 je 0x556e4f
// 00556e1b  83ef01               sub edi, 1
// 00556e1e  7410                 je 0x556e30
// 00556e20  83ef01               sub edi, 1
// 00556e23  0f8569ffffff         jne 0x556d92
// 00556e29  5f                   pop edi
// 00556e2a  5e                   pop esi
// 00556e2b  5d                   pop ebp
// 00556e2c  b001                 mov al, 1
// 00556e2e  5b                   pop ebx
// 00556e2f  c3                   ret 
// 00556e30  56                   push esi
// 00556e31  e84af9ffff           call 0x556780
// 00556e36  83c404               add esp, 4
// 00556e39  84c0                 test al, al
// 00556e3b  740b                 je 0x556e48
// 00556e3d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00556e43  e94affffff           jmp 0x556d92
// 00556e48  5f                   pop edi
// 00556e49  5e                   pop esi
// 00556e4a  5d                   pop ebp
// 00556e4b  32c0                 xor al, al
// 00556e4d  5b                   pop ebx
// 00556e4e  c3                   ret 
// 00556e4f  5f                   pop edi
// 00556e50  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00556e5a  5e                   pop esi
// 00556e5b  5d                   pop ebp
// 00556e5c  b001                 mov al, 1
// 00556e5e  5b                   pop ebx
// 00556e5f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jpeg_resync_to_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
