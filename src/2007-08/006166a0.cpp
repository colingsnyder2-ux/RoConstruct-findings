// from server: 100% by auto
// roc 2007-08 006166a0  unit: seg_00610000  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006166a0
//
// 006166a0  53                   push ebx
// 006166a1  56                   push esi
// 006166a2  8bf0                 mov esi, eax
// 006166a4  8b4610               mov eax, dword ptr [esi + 0x10]
// 006166a7  05fefeffff           add eax, 0xfffffefe
// 006166ac  83f813               cmp eax, 0x13
// 006166af  57                   push edi
// 006166b0  8b7e04               mov edi, dword ptr [esi + 4]
// 006166b3  0f87e2000000         ja 0x61679b
// 006166b9  0fb680d0676100       movzx eax, byte ptr [eax + 0x6167d0]
// 006166c0  ff2485a8676100       jmp dword ptr [eax*4 + 0x6167a8]
// 006166c7  57                   push edi
// 006166c8  8bc6                 mov eax, esi
// 006166ca  e831faffff           call 0x616100
// 006166cf  83c404               add esp, 4
// 006166d2  5f                   pop edi
// 006166d3  5e                   pop esi
// 006166d4  33c0                 xor eax, eax
// 006166d6  5b                   pop ebx
// 006166d7  c3                   ret 
// 006166d8  57                   push edi
// 006166d9  8bc6                 mov eax, esi
// 006166db  e8c0efffff           call 0x6156a0
// 006166e0  83c404               add esp, 4
// 006166e3  5f                   pop edi
// 006166e4  5e                   pop esi
// 006166e5  33c0                 xor eax, eax
// 006166e7  5b                   pop ebx
// 006166e8  c3                   ret 
// 006166e9  56                   push esi
// 006166ea  e801230000           call 0x6189f0
// 006166ef  8bc6                 mov eax, esi
// 006166f1  e83aedffff           call 0x615430
// 006166f6  8bc7                 mov eax, edi
// 006166f8  6803010000           push 0x103
// 006166fd  bf06010000           mov edi, 0x106
// 00616702  e819d4ffff           call 0x613b20
// 00616707  83c408               add esp, 8
// 0061670a  5f                   pop edi
// 0061670b  5e                   pop esi
// 0061670c  33c0                 xor eax, eax
// 0061670e  5b                   pop ebx
// 0061670f  c3                   ret 
// 00616710  57                   push edi
// 00616711  8bc6                 mov eax, esi
// 00616713  e848f8ffff           call 0x615f60
// 00616718  83c404               add esp, 4
// 0061671b  5f                   pop edi
// 0061671c  5e                   pop esi
// 0061671d  33c0                 xor eax, eax
// 0061671f  5b                   pop ebx
// 00616720  c3                   ret 
// 00616721  57                   push edi
// 00616722  8bde                 mov ebx, esi
// 00616724  e8a7f0ffff           call 0x6157d0
// 00616729  83c404               add esp, 4
// 0061672c  5f                   pop edi
// 0061672d  5e                   pop esi
// 0061672e  33c0                 xor eax, eax
// 00616730  5b                   pop ebx
// 00616731  c3                   ret 
// 00616732  e899fdffff           call 0x6164d0
// 00616737  5f                   pop edi
// 00616738  5e                   pop esi
// 00616739  33c0                 xor eax, eax
// 0061673b  5b                   pop ebx
// 0061673c  c3                   ret 
// 0061673d  56                   push esi
// 0061673e  e8ad220000           call 0x6189f0
// 00616743  83c404               add esp, 4
// 00616746  817e1009010000       cmp dword ptr [esi + 0x10], 0x109
// 0061674d  7516                 jne 0x616765
// 0061674f  56                   push esi
// 00616750  e89b220000           call 0x6189f0
// 00616755  83c404               add esp, 4
// 00616758  8bde                 mov ebx, esi
// 0061675a  e861faffff           call 0x6161c0
// 0061675f  5f                   pop edi
// 00616760  5e                   pop esi
// 00616761  33c0                 xor eax, eax
// 00616763  5b                   pop ebx
// 00616764  c3                   ret 
// 00616765  8bc6                 mov eax, esi
// 00616767  e864fbffff           call 0x6162d0
// 0061676c  5f                   pop edi
// 0061676d  5e                   pop esi
// 0061676e  33c0                 xor eax, eax
// 00616770  5b                   pop ebx
// 00616771  c3                   ret 
// 00616772  8bc6                 mov eax, esi
// 00616774  e807feffff           call 0x616580
// 00616779  5f                   pop edi
// 0061677a  5e                   pop esi
// 0061677b  b801000000           mov eax, 1
// 00616780  5b                   pop ebx
// 00616781  c3                   ret 
// 00616782  56                   push esi
// 00616783  e868220000           call 0x6189f0
// 00616788  83c404               add esp, 4
// 0061678b  8bc6                 mov eax, esi
// 0061678d  e8aeeeffff           call 0x615640
// 00616792  5f                   pop edi
// 00616793  5e                   pop esi
// 00616794  b801000000           mov eax, 1
// 00616799  5b                   pop ebx
// 0061679a  c3                   ret 
// 0061679b  8bc6                 mov eax, esi
// 0061679d  e87efdffff           call 0x616520
// 006167a2  5f                   pop edi
// 006167a3  5e                   pop esi
// 006167a4  33c0                 xor eax, eax
// 006167a6  5b                   pop ebx
// 006167a7  c3                   ret 
// 006167a8  82676100             and byte ptr [edi + 0x61], 0
// 006167ac  e966610010           jmp 0x1061c917
// 006167b1  6761                 popal 
// 006167b3  0032                 add byte ptr [edx], dh
// 006167b5  6761                 popal 
// 006167b7  00c7                 add bh, al
// 006167b9  6661                 popaw 
// 006167bb  003d67610021         add byte ptr [0x21006167], bh
// 006167c1  6761                 popal 
// 006167c3  007267               add byte ptr [edx + 0x67], dh
// 006167c6  61                   popal 
// 006167c7  00d8                 add al, bl
// 006167c9  6661                 popaw 
// 006167cb  009b67610000         add byte ptr [ebx + 0x6167], bl
// 006167d1  0109                 add dword ptr [ecx], ecx
// 006167d3  0909                 or dword ptr [ecx], ecx
// 006167d5  0902                 or dword ptr [edx], eax
// 006167d7  030409               add eax, dword ptr [ecx + ecx]
// 006167da  0509090906           add eax, 0x6090909
// 006167df  07                   pop es
// 006167e0  0909                 or dword ptr [ecx], ecx
// 006167e2  0908                 or dword ptr [eax], ecx
// library lua-5.1.4/lparser.c (function _statement)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
