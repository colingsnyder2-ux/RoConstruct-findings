// from server: 100% by auto
// roc 2010-06 005654e0  unit: seg_00560000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005654e0
//
// 005654e0  8b442408             mov eax, dword ptr [esp + 8]
// 005654e4  53                   push ebx
// 005654e5  55                   push ebp
// 005654e6  56                   push esi
// 005654e7  8b742410             mov esi, dword ptr [esp + 0x10]
// 005654eb  57                   push edi
// 005654ec  33ff                 xor edi, edi
// 005654ee  897e04               mov dword ptr [esi + 4], edi
// 005654f1  83f83e               cmp eax, 0x3e
// 005654f4  7421                 je 0x565517
// 005654f6  8b0e                 mov ecx, dword ptr [esi]
// 005654f8  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 005654ff  8b16                 mov edx, dword ptr [esi]
// 00565501  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00565508  8b0e                 mov ecx, dword ptr [esi]
// 0056550a  89411c               mov dword ptr [ecx + 0x1c], eax
// 0056550d  8b16                 mov edx, dword ptr [esi]
// 0056550f  8b02                 mov eax, dword ptr [edx]
// 00565511  56                   push esi
// 00565512  ffd0                 call eax
// 00565514  83c404               add esp, 4
// 00565517  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056551b  3db0010000           cmp eax, 0x1b0
// 00565520  7421                 je 0x565543
// 00565522  8b0e                 mov ecx, dword ptr [esi]
// 00565524  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 0056552b  8b16                 mov edx, dword ptr [esi]
// 0056552d  c74218b0010000       mov dword ptr [edx + 0x18], 0x1b0
// 00565534  8b0e                 mov ecx, dword ptr [esi]
// 00565536  89411c               mov dword ptr [ecx + 0x1c], eax
// 00565539  8b16                 mov edx, dword ptr [esi]
// 0056553b  8b02                 mov eax, dword ptr [edx]
// 0056553d  56                   push esi
// 0056553e  ffd0                 call eax
// 00565540  83c404               add esp, 4
// 00565543  8b1e                 mov ebx, dword ptr [esi]
// 00565545  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00565548  68b0010000           push 0x1b0
// 0056554d  57                   push edi
// 0056554e  56                   push esi
// 0056554f  e890362400           call 0x7a8be4
// 00565554  56                   push esi
// 00565555  891e                 mov dword ptr [esi], ebx
// 00565557  896e0c               mov dword ptr [esi + 0xc], ebp
// 0056555a  c6461001             mov byte ptr [esi + 0x10], 1
// 0056555e  e80d160100           call 0x576b70
// 00565563  897e08               mov dword ptr [esi + 8], edi
// 00565566  897e18               mov dword ptr [esi + 0x18], edi
// 00565569  89be90000000         mov dword ptr [esi + 0x90], edi
// 0056556f  89be94000000         mov dword ptr [esi + 0x94], edi
// 00565575  89be98000000         mov dword ptr [esi + 0x98], edi
// 0056557b  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00565581  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 00565587  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 0056558d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00565593  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00565599  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 0056559f  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 005655a5  89beac000000         mov dword ptr [esi + 0xac], edi
// 005655ab  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 005655b1  56                   push esi
// 005655b2  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 005655b8  e803d1ffff           call 0x5626c0
// 005655bd  56                   push esi
// 005655be  e84d0a0100           call 0x576010
// 005655c3  83c418               add esp, 0x18
// 005655c6  5f                   pop edi
// 005655c7  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 005655ce  5e                   pop esi
// 005655cf  5d                   pop ebp
// 005655d0  5b                   pop ebx
// 005655d1  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_CreateDecompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
