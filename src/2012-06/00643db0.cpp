// from server: 100% by auto
// roc 2012-06 00643db0  unit: seg_00640000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643db0
//
// 00643db0  8b442408             mov eax, dword ptr [esp + 8]
// 00643db4  53                   push ebx
// 00643db5  55                   push ebp
// 00643db6  56                   push esi
// 00643db7  8b742410             mov esi, dword ptr [esp + 0x10]
// 00643dbb  57                   push edi
// 00643dbc  33ff                 xor edi, edi
// 00643dbe  897e04               mov dword ptr [esi + 4], edi
// 00643dc1  83f83e               cmp eax, 0x3e
// 00643dc4  7421                 je 0x643de7
// 00643dc6  8b0e                 mov ecx, dword ptr [esi]
// 00643dc8  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 00643dcf  8b16                 mov edx, dword ptr [esi]
// 00643dd1  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00643dd8  8b0e                 mov ecx, dword ptr [esi]
// 00643dda  89411c               mov dword ptr [ecx + 0x1c], eax
// 00643ddd  8b16                 mov edx, dword ptr [esi]
// 00643ddf  8b02                 mov eax, dword ptr [edx]
// 00643de1  56                   push esi
// 00643de2  ffd0                 call eax
// 00643de4  83c404               add esp, 4
// 00643de7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00643deb  3db0010000           cmp eax, 0x1b0
// 00643df0  7421                 je 0x643e13
// 00643df2  8b0e                 mov ecx, dword ptr [esi]
// 00643df4  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 00643dfb  8b16                 mov edx, dword ptr [esi]
// 00643dfd  c74218b0010000       mov dword ptr [edx + 0x18], 0x1b0
// 00643e04  8b0e                 mov ecx, dword ptr [esi]
// 00643e06  89411c               mov dword ptr [ecx + 0x1c], eax
// 00643e09  8b16                 mov edx, dword ptr [esi]
// 00643e0b  8b02                 mov eax, dword ptr [edx]
// 00643e0d  56                   push esi
// 00643e0e  ffd0                 call eax
// 00643e10  83c404               add esp, 4
// 00643e13  8b1e                 mov ebx, dword ptr [esi]
// 00643e15  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00643e18  68b0010000           push 0x1b0
// 00643e1d  57                   push edi
// 00643e1e  56                   push esi
// 00643e1f  e850f53300           call 0x983374
// 00643e24  56                   push esi
// 00643e25  891e                 mov dword ptr [esi], ebx
// 00643e27  896e0c               mov dword ptr [esi + 0xc], ebp
// 00643e2a  c6461001             mov byte ptr [esi + 0x10], 1
// 00643e2e  e87d0a0100           call 0x6548b0
// 00643e33  897e08               mov dword ptr [esi + 8], edi
// 00643e36  897e18               mov dword ptr [esi + 0x18], edi
// 00643e39  89be90000000         mov dword ptr [esi + 0x90], edi
// 00643e3f  89be94000000         mov dword ptr [esi + 0x94], edi
// 00643e45  89be98000000         mov dword ptr [esi + 0x98], edi
// 00643e4b  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00643e51  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 00643e57  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 00643e5d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00643e63  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00643e69  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 00643e6f  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00643e75  89beac000000         mov dword ptr [esi + 0xac], edi
// 00643e7b  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 00643e81  56                   push esi
// 00643e82  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 00643e88  e883feffff           call 0x643d10
// 00643e8d  56                   push esi
// 00643e8e  e8bdfe0000           call 0x653d50
// 00643e93  83c418               add esp, 0x18
// 00643e96  5f                   pop edi
// 00643e97  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 00643e9e  5e                   pop esi
// 00643e9f  5d                   pop ebp
// 00643ea0  5b                   pop ebx
// 00643ea1  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_CreateDecompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
