// roc 2007-03 0050b350  unit: seg_00500000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050b350
//
// 0050b350  56                   push esi
// 0050b351  8b742408             mov esi, dword ptr [esp + 8]
// 0050b355  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 0050b35c  7521                 jne 0x50b37f
// 0050b35e  56                   push esi
// 0050b35f  e8ccf50000           call 0x51a930
// 0050b364  83c404               add esp, 4
// 0050b367  807e4000             cmp byte ptr [esi + 0x40], 0
// 0050b36b  740b                 je 0x50b378
// 0050b36d  c74614cf000000       mov dword ptr [esi + 0x14], 0xcf
// 0050b374  b001                 mov al, 1
// 0050b376  5e                   pop esi
// 0050b377  c3                   ret 
// 0050b378  c74614cb000000       mov dword ptr [esi + 0x14], 0xcb
// 0050b37f  8b4614               mov eax, dword ptr [esi + 0x14]
// 0050b382  3dcb000000           cmp eax, 0xcb
// 0050b387  7571                 jne 0x50b3fa
// 0050b389  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0050b38f  80781000             cmp byte ptr [eax + 0x10], 0
// 0050b393  7455                 je 0x50b3ea
// 0050b395  8b4608               mov eax, dword ptr [esi + 8]
// 0050b398  85c0                 test eax, eax
// 0050b39a  7408                 je 0x50b3a4
// 0050b39c  8b08                 mov ecx, dword ptr [eax]
// 0050b39e  56                   push esi
// 0050b39f  ffd1                 call ecx
// 0050b3a1  83c404               add esp, 4
// 0050b3a4  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0050b3aa  8b02                 mov eax, dword ptr [edx]
// 0050b3ac  56                   push esi
// 0050b3ad  ffd0                 call eax
// 0050b3af  83c404               add esp, 4
// 0050b3b2  85c0                 test eax, eax
// 0050b3b4  7430                 je 0x50b3e6
// 0050b3b6  83f802               cmp eax, 2
// 0050b3b9  742f                 je 0x50b3ea
// 0050b3bb  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050b3be  85c9                 test ecx, ecx
// 0050b3c0  74d3                 je 0x50b395
// 0050b3c2  83f803               cmp eax, 3
// 0050b3c5  7405                 je 0x50b3cc
// 0050b3c7  83f801               cmp eax, 1
// 0050b3ca  75c9                 jne 0x50b395
// 0050b3cc  83410401             add dword ptr [ecx + 4], 1
// 0050b3d0  8b4608               mov eax, dword ptr [esi + 8]
// 0050b3d3  8b4804               mov ecx, dword ptr [eax + 4]
// 0050b3d6  3b4808               cmp ecx, dword ptr [eax + 8]
// 0050b3d9  7cba                 jl 0x50b395
// 0050b3db  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 0050b3e1  015008               add dword ptr [eax + 8], edx
// 0050b3e4  ebaf                 jmp 0x50b395
// 0050b3e6  32c0                 xor al, al
// 0050b3e8  5e                   pop esi
// 0050b3e9  c3                   ret 
// 0050b3ea  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0050b3ed  898684000000         mov dword ptr [esi + 0x84], eax
// 0050b3f3  e8e8fdffff           call 0x50b1e0
// 0050b3f8  5e                   pop esi
// 0050b3f9  c3                   ret 
// 0050b3fa  3dcc000000           cmp eax, 0xcc
// 0050b3ff  741b                 je 0x50b41c
// 0050b401  8b0e                 mov ecx, dword ptr [esi]
// 0050b403  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 0050b40a  8b16                 mov edx, dword ptr [esi]
// 0050b40c  8b4614               mov eax, dword ptr [esi + 0x14]
// 0050b40f  894218               mov dword ptr [edx + 0x18], eax
// 0050b412  8b0e                 mov ecx, dword ptr [esi]
// 0050b414  8b11                 mov edx, dword ptr [ecx]
// 0050b416  56                   push esi
// 0050b417  ffd2                 call edx
// 0050b419  83c404               add esp, 4
// 0050b41c  e8bffdffff           call 0x50b1e0
// 0050b421  5e                   pop esi
// 0050b422  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_start_decompress)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
