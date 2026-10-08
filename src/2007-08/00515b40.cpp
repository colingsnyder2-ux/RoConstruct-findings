// from server: 100% by auto
// roc 2007-08 00515b40  unit: seg_00510000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515b40
//
// 00515b40  56                   push esi
// 00515b41  8b742408             mov esi, dword ptr [esp + 8]
// 00515b45  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 00515b4c  7521                 jne 0x515b6f
// 00515b4e  56                   push esi
// 00515b4f  e8bcaa0000           call 0x520610
// 00515b54  83c404               add esp, 4
// 00515b57  807e4000             cmp byte ptr [esi + 0x40], 0
// 00515b5b  740b                 je 0x515b68
// 00515b5d  c74614cf000000       mov dword ptr [esi + 0x14], 0xcf
// 00515b64  b001                 mov al, 1
// 00515b66  5e                   pop esi
// 00515b67  c3                   ret 
// 00515b68  c74614cb000000       mov dword ptr [esi + 0x14], 0xcb
// 00515b6f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00515b72  3dcb000000           cmp eax, 0xcb
// 00515b77  7571                 jne 0x515bea
// 00515b79  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00515b7f  80781000             cmp byte ptr [eax + 0x10], 0
// 00515b83  7455                 je 0x515bda
// 00515b85  8b4608               mov eax, dword ptr [esi + 8]
// 00515b88  85c0                 test eax, eax
// 00515b8a  7408                 je 0x515b94
// 00515b8c  8b08                 mov ecx, dword ptr [eax]
// 00515b8e  56                   push esi
// 00515b8f  ffd1                 call ecx
// 00515b91  83c404               add esp, 4
// 00515b94  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00515b9a  8b02                 mov eax, dword ptr [edx]
// 00515b9c  56                   push esi
// 00515b9d  ffd0                 call eax
// 00515b9f  83c404               add esp, 4
// 00515ba2  85c0                 test eax, eax
// 00515ba4  7430                 je 0x515bd6
// 00515ba6  83f802               cmp eax, 2
// 00515ba9  742f                 je 0x515bda
// 00515bab  8b4e08               mov ecx, dword ptr [esi + 8]
// 00515bae  85c9                 test ecx, ecx
// 00515bb0  74d3                 je 0x515b85
// 00515bb2  83f803               cmp eax, 3
// 00515bb5  7405                 je 0x515bbc
// 00515bb7  83f801               cmp eax, 1
// 00515bba  75c9                 jne 0x515b85
// 00515bbc  83410401             add dword ptr [ecx + 4], 1
// 00515bc0  8b4608               mov eax, dword ptr [esi + 8]
// 00515bc3  8b4804               mov ecx, dword ptr [eax + 4]
// 00515bc6  3b4808               cmp ecx, dword ptr [eax + 8]
// 00515bc9  7cba                 jl 0x515b85
// 00515bcb  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 00515bd1  015008               add dword ptr [eax + 8], edx
// 00515bd4  ebaf                 jmp 0x515b85
// 00515bd6  32c0                 xor al, al
// 00515bd8  5e                   pop esi
// 00515bd9  c3                   ret 
// 00515bda  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00515bdd  898684000000         mov dword ptr [esi + 0x84], eax
// 00515be3  e8e8fdffff           call 0x5159d0
// 00515be8  5e                   pop esi
// 00515be9  c3                   ret 
// 00515bea  3dcc000000           cmp eax, 0xcc
// 00515bef  741b                 je 0x515c0c
// 00515bf1  8b0e                 mov ecx, dword ptr [esi]
// 00515bf3  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 00515bfa  8b16                 mov edx, dword ptr [esi]
// 00515bfc  8b4614               mov eax, dword ptr [esi + 0x14]
// 00515bff  894218               mov dword ptr [edx + 0x18], eax
// 00515c02  8b0e                 mov ecx, dword ptr [esi]
// 00515c04  8b11                 mov edx, dword ptr [ecx]
// 00515c06  56                   push esi
// 00515c07  ffd2                 call edx
// 00515c09  83c404               add esp, 4
// 00515c0c  e8bffdffff           call 0x5159d0
// 00515c11  5e                   pop esi
// 00515c12  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_start_decompress)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
