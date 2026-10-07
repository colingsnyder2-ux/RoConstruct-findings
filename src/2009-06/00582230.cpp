// roc 2009-06 00582230  unit: seg_00580000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00582230
//
// 00582230  56                   push esi
// 00582231  8b742408             mov esi, dword ptr [esp + 8]
// 00582235  8b4614               mov eax, dword ptr [esi + 0x14]
// 00582238  3dc8000000           cmp eax, 0xc8
// 0058223d  7422                 je 0x582261
// 0058223f  3dc9000000           cmp eax, 0xc9
// 00582244  741b                 je 0x582261
// 00582246  8b06                 mov eax, dword ptr [esi]
// 00582248  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0058224f  8b0e                 mov ecx, dword ptr [esi]
// 00582251  8b5614               mov edx, dword ptr [esi + 0x14]
// 00582254  895118               mov dword ptr [ecx + 0x18], edx
// 00582257  8b06                 mov eax, dword ptr [esi]
// 00582259  8b08                 mov ecx, dword ptr [eax]
// 0058225b  56                   push esi
// 0058225c  ffd1                 call ecx
// 0058225e  83c404               add esp, 4
// 00582261  56                   push esi
// 00582262  e829feffff           call 0x582090
// 00582267  8bc8                 mov ecx, eax
// 00582269  83c404               add esp, 4
// 0058226c  83e901               sub ecx, 1
// 0058226f  742e                 je 0x58229f
// 00582271  83e901               sub ecx, 1
// 00582274  752e                 jne 0x5822a4
// 00582276  384c240c             cmp byte ptr [esp + 0xc], cl
// 0058227a  7413                 je 0x58228f
// 0058227c  8b16                 mov edx, dword ptr [esi]
// 0058227e  c7421433000000       mov dword ptr [edx + 0x14], 0x33
// 00582285  8b06                 mov eax, dword ptr [esi]
// 00582287  8b08                 mov ecx, dword ptr [eax]
// 00582289  56                   push esi
// 0058228a  ffd1                 call ecx
// 0058228c  83c404               add esp, 4
// 0058228f  56                   push esi
// 00582290  e87bcdffff           call 0x57f010
// 00582295  83c404               add esp, 4
// 00582298  b802000000           mov eax, 2
// 0058229d  5e                   pop esi
// 0058229e  c3                   ret 
// 0058229f  b801000000           mov eax, 1
// 005822a4  5e                   pop esi
// 005822a5  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_read_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
