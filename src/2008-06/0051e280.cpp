// roc 2008-06 0051e280  unit: seg_00510000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e280
//
// 0051e280  8b442408             mov eax, dword ptr [esp + 8]
// 0051e284  53                   push ebx
// 0051e285  55                   push ebp
// 0051e286  56                   push esi
// 0051e287  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051e28b  57                   push edi
// 0051e28c  33ff                 xor edi, edi
// 0051e28e  897e04               mov dword ptr [esi + 4], edi
// 0051e291  83f83e               cmp eax, 0x3e
// 0051e294  7421                 je 0x51e2b7
// 0051e296  8b0e                 mov ecx, dword ptr [esi]
// 0051e298  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 0051e29f  8b16                 mov edx, dword ptr [esi]
// 0051e2a1  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 0051e2a8  8b0e                 mov ecx, dword ptr [esi]
// 0051e2aa  89411c               mov dword ptr [ecx + 0x1c], eax
// 0051e2ad  8b16                 mov edx, dword ptr [esi]
// 0051e2af  8b02                 mov eax, dword ptr [edx]
// 0051e2b1  56                   push esi
// 0051e2b2  ffd0                 call eax
// 0051e2b4  83c404               add esp, 4
// 0051e2b7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051e2bb  3db0010000           cmp eax, 0x1b0
// 0051e2c0  7421                 je 0x51e2e3
// 0051e2c2  8b0e                 mov ecx, dword ptr [esi]
// 0051e2c4  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 0051e2cb  8b16                 mov edx, dword ptr [esi]
// 0051e2cd  c74218b0010000       mov dword ptr [edx + 0x18], 0x1b0
// 0051e2d4  8b0e                 mov ecx, dword ptr [esi]
// 0051e2d6  89411c               mov dword ptr [ecx + 0x1c], eax
// 0051e2d9  8b16                 mov edx, dword ptr [esi]
// 0051e2db  8b02                 mov eax, dword ptr [edx]
// 0051e2dd  56                   push esi
// 0051e2de  ffd0                 call eax
// 0051e2e0  83c404               add esp, 4
// 0051e2e3  8b1e                 mov ebx, dword ptr [esi]
// 0051e2e5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0051e2e8  68b0010000           push 0x1b0
// 0051e2ed  57                   push edi
// 0051e2ee  56                   push esi
// 0051e2ef  e810341800           call 0x6a1704
// 0051e2f4  56                   push esi
// 0051e2f5  891e                 mov dword ptr [esi], ebx
// 0051e2f7  896e0c               mov dword ptr [esi + 0xc], ebp
// 0051e2fa  c6461001             mov byte ptr [esi + 0x10], 1
// 0051e2fe  e85dd30000           call 0x52b660
// 0051e303  897e08               mov dword ptr [esi + 8], edi
// 0051e306  897e18               mov dword ptr [esi + 0x18], edi
// 0051e309  89be90000000         mov dword ptr [esi + 0x90], edi
// 0051e30f  89be94000000         mov dword ptr [esi + 0x94], edi
// 0051e315  89be98000000         mov dword ptr [esi + 0x98], edi
// 0051e31b  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 0051e321  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 0051e327  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 0051e32d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 0051e333  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 0051e339  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 0051e33f  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0051e345  89beac000000         mov dword ptr [esi + 0xac], edi
// 0051e34b  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 0051e351  56                   push esi
// 0051e352  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 0051e358  e873d2ffff           call 0x51b5d0
// 0051e35d  56                   push esi
// 0051e35e  e89dc70000           call 0x52ab00
// 0051e363  83c418               add esp, 0x18
// 0051e366  5f                   pop edi
// 0051e367  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 0051e36e  5e                   pop esi
// 0051e36f  5d                   pop ebp
// 0051e370  5b                   pop ebx
// 0051e371  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_CreateDecompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
