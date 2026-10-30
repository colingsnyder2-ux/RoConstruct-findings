// from server: 100% by auto
// roc 2009-06 00582420  unit: seg_00580000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00582420
//
// 00582420  56                   push esi
// 00582421  8b742408             mov esi, dword ptr [esp + 8]
// 00582425  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 0058242c  7521                 jne 0x58244f
// 0058242e  56                   push esi
// 0058242f  e8dc150100           call 0x593a10
// 00582434  83c404               add esp, 4
// 00582437  807e4000             cmp byte ptr [esi + 0x40], 0
// 0058243b  740b                 je 0x582448
// 0058243d  c74614cf000000       mov dword ptr [esi + 0x14], 0xcf
// 00582444  b001                 mov al, 1
// 00582446  5e                   pop esi
// 00582447  c3                   ret 
// 00582448  c74614cb000000       mov dword ptr [esi + 0x14], 0xcb
// 0058244f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00582452  3dcb000000           cmp eax, 0xcb
// 00582457  7570                 jne 0x5824c9
// 00582459  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0058245f  80781000             cmp byte ptr [eax + 0x10], 0
// 00582463  7454                 je 0x5824b9
// 00582465  8b4608               mov eax, dword ptr [esi + 8]
// 00582468  85c0                 test eax, eax
// 0058246a  7408                 je 0x582474
// 0058246c  8b08                 mov ecx, dword ptr [eax]
// 0058246e  56                   push esi
// 0058246f  ffd1                 call ecx
// 00582471  83c404               add esp, 4
// 00582474  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0058247a  8b02                 mov eax, dword ptr [edx]
// 0058247c  56                   push esi
// 0058247d  ffd0                 call eax
// 0058247f  83c404               add esp, 4
// 00582482  85c0                 test eax, eax
// 00582484  742f                 je 0x5824b5
// 00582486  83f802               cmp eax, 2
// 00582489  742e                 je 0x5824b9
// 0058248b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0058248e  85c9                 test ecx, ecx
// 00582490  74d3                 je 0x582465
// 00582492  83f803               cmp eax, 3
// 00582495  7405                 je 0x58249c
// 00582497  83f801               cmp eax, 1
// 0058249a  75c9                 jne 0x582465
// 0058249c  ff4104               inc dword ptr [ecx + 4]
// 0058249f  8b4608               mov eax, dword ptr [esi + 8]
// 005824a2  8b4804               mov ecx, dword ptr [eax + 4]
// 005824a5  3b4808               cmp ecx, dword ptr [eax + 8]
// 005824a8  7cbb                 jl 0x582465
// 005824aa  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 005824b0  015008               add dword ptr [eax + 8], edx
// 005824b3  ebb0                 jmp 0x582465
// 005824b5  32c0                 xor al, al
// 005824b7  5e                   pop esi
// 005824b8  c3                   ret 
// 005824b9  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005824bc  898684000000         mov dword ptr [esi + 0x84], eax
// 005824c2  e8e9fdffff           call 0x5822b0
// 005824c7  5e                   pop esi
// 005824c8  c3                   ret 
// 005824c9  3dcc000000           cmp eax, 0xcc
// 005824ce  741b                 je 0x5824eb
// 005824d0  8b0e                 mov ecx, dword ptr [esi]
// 005824d2  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 005824d9  8b16                 mov edx, dword ptr [esi]
// 005824db  8b4614               mov eax, dword ptr [esi + 0x14]
// 005824de  894218               mov dword ptr [edx + 0x18], eax
// 005824e1  8b0e                 mov ecx, dword ptr [esi]
// 005824e3  8b11                 mov edx, dword ptr [ecx]
// 005824e5  56                   push esi
// 005824e6  ffd2                 call edx
// 005824e8  83c404               add esp, 4
// 005824eb  e8c0fdffff           call 0x5822b0
// 005824f0  5e                   pop esi
// 005824f1  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_start_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
