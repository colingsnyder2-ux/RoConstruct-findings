// roc 2012-06 00644230  unit: seg_00640000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644230
//
// 00644230  56                   push esi
// 00644231  8b742408             mov esi, dword ptr [esp + 8]
// 00644235  8b4614               mov eax, dword ptr [esi + 0x14]
// 00644238  3dc8000000           cmp eax, 0xc8
// 0064423d  7422                 je 0x644261
// 0064423f  3dc9000000           cmp eax, 0xc9
// 00644244  741b                 je 0x644261
// 00644246  8b06                 mov eax, dword ptr [esi]
// 00644248  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0064424f  8b0e                 mov ecx, dword ptr [esi]
// 00644251  8b5614               mov edx, dword ptr [esi + 0x14]
// 00644254  895118               mov dword ptr [ecx + 0x18], edx
// 00644257  8b06                 mov eax, dword ptr [esi]
// 00644259  8b08                 mov ecx, dword ptr [eax]
// 0064425b  56                   push esi
// 0064425c  ffd1                 call ecx
// 0064425e  83c404               add esp, 4
// 00644261  56                   push esi
// 00644262  e829feffff           call 0x644090
// 00644267  8bc8                 mov ecx, eax
// 00644269  83c404               add esp, 4
// 0064426c  83e901               sub ecx, 1
// 0064426f  742e                 je 0x64429f
// 00644271  83e901               sub ecx, 1
// 00644274  752e                 jne 0x6442a4
// 00644276  384c240c             cmp byte ptr [esp + 0xc], cl
// 0064427a  7413                 je 0x64428f
// 0064427c  8b16                 mov edx, dword ptr [esi]
// 0064427e  c7421433000000       mov dword ptr [edx + 0x14], 0x33
// 00644285  8b06                 mov eax, dword ptr [esi]
// 00644287  8b08                 mov ecx, dword ptr [eax]
// 00644289  56                   push esi
// 0064428a  ffd1                 call ecx
// 0064428c  83c404               add esp, 4
// 0064428f  56                   push esi
// 00644290  e86bf10000           call 0x653400
// 00644295  83c404               add esp, 4
// 00644298  b802000000           mov eax, 2
// 0064429d  5e                   pop esi
// 0064429e  c3                   ret 
// 0064429f  b801000000           mov eax, 1
// 006442a4  5e                   pop esi
// 006442a5  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_read_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
