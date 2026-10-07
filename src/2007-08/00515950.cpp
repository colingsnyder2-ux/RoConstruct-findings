// roc 2007-08 00515950  unit: seg_00510000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515950
//
// 00515950  56                   push esi
// 00515951  8b742408             mov esi, dword ptr [esp + 8]
// 00515955  8b4614               mov eax, dword ptr [esi + 0x14]
// 00515958  3dc8000000           cmp eax, 0xc8
// 0051595d  7422                 je 0x515981
// 0051595f  3dc9000000           cmp eax, 0xc9
// 00515964  741b                 je 0x515981
// 00515966  8b06                 mov eax, dword ptr [esi]
// 00515968  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0051596f  8b0e                 mov ecx, dword ptr [esi]
// 00515971  8b5614               mov edx, dword ptr [esi + 0x14]
// 00515974  895118               mov dword ptr [ecx + 0x18], edx
// 00515977  8b06                 mov eax, dword ptr [esi]
// 00515979  8b08                 mov ecx, dword ptr [eax]
// 0051597b  56                   push esi
// 0051597c  ffd1                 call ecx
// 0051597e  83c404               add esp, 4
// 00515981  56                   push esi
// 00515982  e829feffff           call 0x5157b0
// 00515987  8bc8                 mov ecx, eax
// 00515989  83c404               add esp, 4
// 0051598c  83e901               sub ecx, 1
// 0051598f  742f                 je 0x5159c0
// 00515991  83e901               sub ecx, 1
// 00515994  752f                 jne 0x5159c5
// 00515996  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0051599b  7413                 je 0x5159b0
// 0051599d  8b16                 mov edx, dword ptr [esi]
// 0051599f  c7421433000000       mov dword ptr [edx + 0x14], 0x33
// 005159a6  8b06                 mov eax, dword ptr [esi]
// 005159a8  8b08                 mov ecx, dword ptr [eax]
// 005159aa  56                   push esi
// 005159ab  ffd1                 call ecx
// 005159ad  83c404               add esp, 4
// 005159b0  56                   push esi
// 005159b1  e8fadeffff           call 0x5138b0
// 005159b6  83c404               add esp, 4
// 005159b9  b802000000           mov eax, 2
// 005159be  5e                   pop esi
// 005159bf  c3                   ret 
// 005159c0  b801000000           mov eax, 1
// 005159c5  5e                   pop esi
// 005159c6  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_read_header)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
