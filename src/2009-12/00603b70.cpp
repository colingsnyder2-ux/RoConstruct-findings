// roc 2009-12 00603b70  unit: seg_00600000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603b70
//
// 00603b70  8b442408             mov eax, dword ptr [esp + 8]
// 00603b74  53                   push ebx
// 00603b75  55                   push ebp
// 00603b76  56                   push esi
// 00603b77  8b742410             mov esi, dword ptr [esp + 0x10]
// 00603b7b  57                   push edi
// 00603b7c  33ff                 xor edi, edi
// 00603b7e  897e04               mov dword ptr [esi + 4], edi
// 00603b81  83f83e               cmp eax, 0x3e
// 00603b84  7421                 je 0x603ba7
// 00603b86  8b0e                 mov ecx, dword ptr [esi]
// 00603b88  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 00603b8f  8b16                 mov edx, dword ptr [esi]
// 00603b91  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00603b98  8b0e                 mov ecx, dword ptr [esi]
// 00603b9a  89411c               mov dword ptr [ecx + 0x1c], eax
// 00603b9d  8b16                 mov edx, dword ptr [esi]
// 00603b9f  8b02                 mov eax, dword ptr [edx]
// 00603ba1  56                   push esi
// 00603ba2  ffd0                 call eax
// 00603ba4  83c404               add esp, 4
// 00603ba7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00603bab  3db0010000           cmp eax, 0x1b0
// 00603bb0  7421                 je 0x603bd3
// 00603bb2  8b0e                 mov ecx, dword ptr [esi]
// 00603bb4  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 00603bbb  8b16                 mov edx, dword ptr [esi]
// 00603bbd  c74218b0010000       mov dword ptr [edx + 0x18], 0x1b0
// 00603bc4  8b0e                 mov ecx, dword ptr [esi]
// 00603bc6  89411c               mov dword ptr [ecx + 0x1c], eax
// 00603bc9  8b16                 mov edx, dword ptr [esi]
// 00603bcb  8b02                 mov eax, dword ptr [edx]
// 00603bcd  56                   push esi
// 00603bce  ffd0                 call eax
// 00603bd0  83c404               add esp, 4
// 00603bd3  8b1e                 mov ebx, dword ptr [esi]
// 00603bd5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00603bd8  68b0010000           push 0x1b0
// 00603bdd  57                   push edi
// 00603bde  56                   push esi
// 00603bdf  e8c00e1f00           call 0x7f4aa4
// 00603be4  56                   push esi
// 00603be5  891e                 mov dword ptr [esi], ebx
// 00603be7  896e0c               mov dword ptr [esi + 0xc], ebp
// 00603bea  c6461001             mov byte ptr [esi + 0x10], 1
// 00603bee  e85d160100           call 0x615250
// 00603bf3  897e08               mov dword ptr [esi + 8], edi
// 00603bf6  897e18               mov dword ptr [esi + 0x18], edi
// 00603bf9  89be90000000         mov dword ptr [esi + 0x90], edi
// 00603bff  89be94000000         mov dword ptr [esi + 0x94], edi
// 00603c05  89be98000000         mov dword ptr [esi + 0x98], edi
// 00603c0b  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00603c11  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 00603c17  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 00603c1d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00603c23  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00603c29  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 00603c2f  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00603c35  89beac000000         mov dword ptr [esi + 0xac], edi
// 00603c3b  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 00603c41  56                   push esi
// 00603c42  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 00603c48  e803d1ffff           call 0x600d50
// 00603c4d  56                   push esi
// 00603c4e  e89d0a0100           call 0x6146f0
// 00603c53  83c418               add esp, 0x18
// 00603c56  5f                   pop edi
// 00603c57  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 00603c5e  5e                   pop esi
// 00603c5f  5d                   pop ebp
// 00603c60  5b                   pop ebx
// 00603c61  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_CreateDecompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
