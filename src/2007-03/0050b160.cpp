// roc 2007-03 0050b160  unit: seg_00500000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050b160
//
// 0050b160  56                   push esi
// 0050b161  8b742408             mov esi, dword ptr [esp + 8]
// 0050b165  8b4614               mov eax, dword ptr [esi + 0x14]
// 0050b168  3dc8000000           cmp eax, 0xc8
// 0050b16d  7422                 je 0x50b191
// 0050b16f  3dc9000000           cmp eax, 0xc9
// 0050b174  741b                 je 0x50b191
// 0050b176  8b06                 mov eax, dword ptr [esi]
// 0050b178  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0050b17f  8b0e                 mov ecx, dword ptr [esi]
// 0050b181  8b5614               mov edx, dword ptr [esi + 0x14]
// 0050b184  895118               mov dword ptr [ecx + 0x18], edx
// 0050b187  8b06                 mov eax, dword ptr [esi]
// 0050b189  8b08                 mov ecx, dword ptr [eax]
// 0050b18b  56                   push esi
// 0050b18c  ffd1                 call ecx
// 0050b18e  83c404               add esp, 4
// 0050b191  56                   push esi
// 0050b192  e829feffff           call 0x50afc0
// 0050b197  8bc8                 mov ecx, eax
// 0050b199  83c404               add esp, 4
// 0050b19c  83e901               sub ecx, 1
// 0050b19f  742f                 je 0x50b1d0
// 0050b1a1  83e901               sub ecx, 1
// 0050b1a4  752f                 jne 0x50b1d5
// 0050b1a6  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0050b1ab  7413                 je 0x50b1c0
// 0050b1ad  8b16                 mov edx, dword ptr [esi]
// 0050b1af  c7421433000000       mov dword ptr [edx + 0x14], 0x33
// 0050b1b6  8b06                 mov eax, dword ptr [esi]
// 0050b1b8  8b08                 mov ecx, dword ptr [eax]
// 0050b1ba  56                   push esi
// 0050b1bb  ffd1                 call ecx
// 0050b1bd  83c404               add esp, 4
// 0050b1c0  56                   push esi
// 0050b1c1  e8ca9c0000           call 0x514e90
// 0050b1c6  83c404               add esp, 4
// 0050b1c9  b802000000           mov eax, 2
// 0050b1ce  5e                   pop esi
// 0050b1cf  c3                   ret 
// 0050b1d0  b801000000           mov eax, 1
// 0050b1d5  5e                   pop esi
// 0050b1d6  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_read_header)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
