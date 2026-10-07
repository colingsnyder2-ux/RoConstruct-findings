// roc 2007-08 005154d0  unit: G3D::_internal::DialogTemplate  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005154d0
//
// 005154d0  8b442408             mov eax, dword ptr [esp + 8]
// 005154d4  53                   push ebx
// 005154d5  55                   push ebp
// 005154d6  56                   push esi
// 005154d7  8b742410             mov esi, dword ptr [esp + 0x10]
// 005154db  57                   push edi
// 005154dc  33ff                 xor edi, edi
// 005154de  83f83e               cmp eax, 0x3e
// 005154e1  897e04               mov dword ptr [esi + 4], edi
// 005154e4  7421                 je 0x515507
// 005154e6  8b0e                 mov ecx, dword ptr [esi]
// 005154e8  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 005154ef  8b16                 mov edx, dword ptr [esi]
// 005154f1  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 005154f8  8b0e                 mov ecx, dword ptr [esi]
// 005154fa  89411c               mov dword ptr [ecx + 0x1c], eax
// 005154fd  8b16                 mov edx, dword ptr [esi]
// 005154ff  8b02                 mov eax, dword ptr [edx]
// 00515501  56                   push esi
// 00515502  ffd0                 call eax
// 00515504  83c404               add esp, 4
// 00515507  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051550b  3db0010000           cmp eax, 0x1b0
// 00515510  7421                 je 0x515533
// 00515512  8b0e                 mov ecx, dword ptr [esi]
// 00515514  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 0051551b  8b16                 mov edx, dword ptr [esi]
// 0051551d  c74218b0010000       mov dword ptr [edx + 0x18], 0x1b0
// 00515524  8b0e                 mov ecx, dword ptr [esi]
// 00515526  89411c               mov dword ptr [ecx + 0x1c], eax
// 00515529  8b16                 mov edx, dword ptr [esi]
// 0051552b  8b02                 mov eax, dword ptr [edx]
// 0051552d  56                   push esi
// 0051552e  ffd0                 call eax
// 00515530  83c404               add esp, 4
// 00515533  8b1e                 mov ebx, dword ptr [esi]
// 00515535  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00515538  68b0010000           push 0x1b0
// 0051553d  57                   push edi
// 0051553e  56                   push esi
// 0051553f  e848b61100           call 0x630b8c
// 00515544  56                   push esi
// 00515545  891e                 mov dword ptr [esi], ebx
// 00515547  896e0c               mov dword ptr [esi + 0xc], ebp
// 0051554a  c6461001             mov byte ptr [esi + 0x10], 1
// 0051554e  e8dda80000           call 0x51fe30
// 00515553  897e08               mov dword ptr [esi + 8], edi
// 00515556  897e18               mov dword ptr [esi + 0x18], edi
// 00515559  89be90000000         mov dword ptr [esi + 0x90], edi
// 0051555f  89be94000000         mov dword ptr [esi + 0x94], edi
// 00515565  89be98000000         mov dword ptr [esi + 0x98], edi
// 0051556b  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00515571  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 00515577  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 0051557d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00515583  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00515589  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 0051558f  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00515595  89beac000000         mov dword ptr [esi + 0xac], edi
// 0051559b  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 005155a1  56                   push esi
// 005155a2  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 005155a8  e883e2ffff           call 0x513830
// 005155ad  56                   push esi
// 005155ae  e83d9d0000           call 0x51f2f0
// 005155b3  83c418               add esp, 0x18
// 005155b6  5f                   pop edi
// 005155b7  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 005155be  5e                   pop esi
// 005155bf  5d                   pop ebp
// 005155c0  5b                   pop ebx
// 005155c1  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_CreateDecompress)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
