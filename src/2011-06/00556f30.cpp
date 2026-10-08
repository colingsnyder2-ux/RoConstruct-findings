// from server: 100% by auto
// roc 2011-06 00556f30  unit: seg_00550000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556f30
//
// 00556f30  8b442408             mov eax, dword ptr [esp + 8]
// 00556f34  53                   push ebx
// 00556f35  55                   push ebp
// 00556f36  56                   push esi
// 00556f37  8b742410             mov esi, dword ptr [esp + 0x10]
// 00556f3b  57                   push edi
// 00556f3c  33ff                 xor edi, edi
// 00556f3e  897e04               mov dword ptr [esi + 4], edi
// 00556f41  83f83e               cmp eax, 0x3e
// 00556f44  7421                 je 0x556f67
// 00556f46  8b0e                 mov ecx, dword ptr [esi]
// 00556f48  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 00556f4f  8b16                 mov edx, dword ptr [esi]
// 00556f51  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00556f58  8b0e                 mov ecx, dword ptr [esi]
// 00556f5a  89411c               mov dword ptr [ecx + 0x1c], eax
// 00556f5d  8b16                 mov edx, dword ptr [esi]
// 00556f5f  8b02                 mov eax, dword ptr [edx]
// 00556f61  56                   push esi
// 00556f62  ffd0                 call eax
// 00556f64  83c404               add esp, 4
// 00556f67  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00556f6b  3db0010000           cmp eax, 0x1b0
// 00556f70  7421                 je 0x556f93
// 00556f72  8b0e                 mov ecx, dword ptr [esi]
// 00556f74  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 00556f7b  8b16                 mov edx, dword ptr [esi]
// 00556f7d  c74218b0010000       mov dword ptr [edx + 0x18], 0x1b0
// 00556f84  8b0e                 mov ecx, dword ptr [esi]
// 00556f86  89411c               mov dword ptr [ecx + 0x1c], eax
// 00556f89  8b16                 mov edx, dword ptr [esi]
// 00556f8b  8b02                 mov eax, dword ptr [edx]
// 00556f8d  56                   push esi
// 00556f8e  ffd0                 call eax
// 00556f90  83c404               add esp, 4
// 00556f93  8b1e                 mov ebx, dword ptr [esi]
// 00556f95  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00556f98  68b0010000           push 0x1b0
// 00556f9d  57                   push edi
// 00556f9e  56                   push esi
// 00556f9f  e840432b00           call 0x80b2e4
// 00556fa4  56                   push esi
// 00556fa5  891e                 mov dword ptr [esi], ebx
// 00556fa7  896e0c               mov dword ptr [esi + 0xc], ebp
// 00556faa  c6461001             mov byte ptr [esi + 0x10], 1
// 00556fae  e8ed210100           call 0x5691a0
// 00556fb3  897e08               mov dword ptr [esi + 8], edi
// 00556fb6  897e18               mov dword ptr [esi + 0x18], edi
// 00556fb9  89be90000000         mov dword ptr [esi + 0x90], edi
// 00556fbf  89be94000000         mov dword ptr [esi + 0x94], edi
// 00556fc5  89be98000000         mov dword ptr [esi + 0x98], edi
// 00556fcb  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00556fd1  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 00556fd7  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 00556fdd  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00556fe3  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00556fe9  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 00556fef  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00556ff5  89beac000000         mov dword ptr [esi + 0xac], edi
// 00556ffb  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 00557001  56                   push esi
// 00557002  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 00557008  e883feffff           call 0x556e90
// 0055700d  56                   push esi
// 0055700e  e82d160100           call 0x568640
// 00557013  83c418               add esp, 0x18
// 00557016  5f                   pop edi
// 00557017  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 0055701e  5e                   pop esi
// 0055701f  5d                   pop ebp
// 00557020  5b                   pop ebx
// 00557021  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_CreateDecompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
