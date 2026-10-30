// from server: 100% by auto
// roc 2012-06 00644420  unit: seg_00640000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644420
//
// 00644420  56                   push esi
// 00644421  8b742408             mov esi, dword ptr [esp + 8]
// 00644425  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 0064442c  7521                 jne 0x64444f
// 0064442e  56                   push esi
// 0064442f  e84c0c0100           call 0x655080
// 00644434  83c404               add esp, 4
// 00644437  807e4000             cmp byte ptr [esi + 0x40], 0
// 0064443b  740b                 je 0x644448
// 0064443d  c74614cf000000       mov dword ptr [esi + 0x14], 0xcf
// 00644444  b001                 mov al, 1
// 00644446  5e                   pop esi
// 00644447  c3                   ret 
// 00644448  c74614cb000000       mov dword ptr [esi + 0x14], 0xcb
// 0064444f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00644452  3dcb000000           cmp eax, 0xcb
// 00644457  7570                 jne 0x6444c9
// 00644459  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0064445f  80781000             cmp byte ptr [eax + 0x10], 0
// 00644463  7454                 je 0x6444b9
// 00644465  8b4608               mov eax, dword ptr [esi + 8]
// 00644468  85c0                 test eax, eax
// 0064446a  7408                 je 0x644474
// 0064446c  8b08                 mov ecx, dword ptr [eax]
// 0064446e  56                   push esi
// 0064446f  ffd1                 call ecx
// 00644471  83c404               add esp, 4
// 00644474  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0064447a  8b02                 mov eax, dword ptr [edx]
// 0064447c  56                   push esi
// 0064447d  ffd0                 call eax
// 0064447f  83c404               add esp, 4
// 00644482  85c0                 test eax, eax
// 00644484  742f                 je 0x6444b5
// 00644486  83f802               cmp eax, 2
// 00644489  742e                 je 0x6444b9
// 0064448b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064448e  85c9                 test ecx, ecx
// 00644490  74d3                 je 0x644465
// 00644492  83f803               cmp eax, 3
// 00644495  7405                 je 0x64449c
// 00644497  83f801               cmp eax, 1
// 0064449a  75c9                 jne 0x644465
// 0064449c  ff4104               inc dword ptr [ecx + 4]
// 0064449f  8b4608               mov eax, dword ptr [esi + 8]
// 006444a2  8b4804               mov ecx, dword ptr [eax + 4]
// 006444a5  3b4808               cmp ecx, dword ptr [eax + 8]
// 006444a8  7cbb                 jl 0x644465
// 006444aa  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 006444b0  015008               add dword ptr [eax + 8], edx
// 006444b3  ebb0                 jmp 0x644465
// 006444b5  32c0                 xor al, al
// 006444b7  5e                   pop esi
// 006444b8  c3                   ret 
// 006444b9  8b467c               mov eax, dword ptr [esi + 0x7c]
// 006444bc  898684000000         mov dword ptr [esi + 0x84], eax
// 006444c2  e8e9fdffff           call 0x6442b0
// 006444c7  5e                   pop esi
// 006444c8  c3                   ret 
// 006444c9  3dcc000000           cmp eax, 0xcc
// 006444ce  741b                 je 0x6444eb
// 006444d0  8b0e                 mov ecx, dword ptr [esi]
// 006444d2  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 006444d9  8b16                 mov edx, dword ptr [esi]
// 006444db  8b4614               mov eax, dword ptr [esi + 0x14]
// 006444de  894218               mov dword ptr [edx + 0x18], eax
// 006444e1  8b0e                 mov ecx, dword ptr [esi]
// 006444e3  8b11                 mov edx, dword ptr [ecx]
// 006444e5  56                   push esi
// 006444e6  ffd2                 call edx
// 006444e8  83c404               add esp, 4
// 006444eb  e8c0fdffff           call 0x6442b0
// 006444f0  5e                   pop esi
// 006444f1  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_start_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
