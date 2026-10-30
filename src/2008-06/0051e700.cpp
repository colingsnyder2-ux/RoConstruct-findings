// from server: 100% by auto
// roc 2008-06 0051e700  unit: seg_00510000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e700
//
// 0051e700  56                   push esi
// 0051e701  8b742408             mov esi, dword ptr [esp + 8]
// 0051e705  8b4614               mov eax, dword ptr [esi + 0x14]
// 0051e708  3dc8000000           cmp eax, 0xc8
// 0051e70d  7422                 je 0x51e731
// 0051e70f  3dc9000000           cmp eax, 0xc9
// 0051e714  741b                 je 0x51e731
// 0051e716  8b06                 mov eax, dword ptr [esi]
// 0051e718  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0051e71f  8b0e                 mov ecx, dword ptr [esi]
// 0051e721  8b5614               mov edx, dword ptr [esi + 0x14]
// 0051e724  895118               mov dword ptr [ecx + 0x18], edx
// 0051e727  8b06                 mov eax, dword ptr [esi]
// 0051e729  8b08                 mov ecx, dword ptr [eax]
// 0051e72b  56                   push esi
// 0051e72c  ffd1                 call ecx
// 0051e72e  83c404               add esp, 4
// 0051e731  56                   push esi
// 0051e732  e829feffff           call 0x51e560
// 0051e737  8bc8                 mov ecx, eax
// 0051e739  83c404               add esp, 4
// 0051e73c  83e901               sub ecx, 1
// 0051e73f  742e                 je 0x51e76f
// 0051e741  83e901               sub ecx, 1
// 0051e744  752e                 jne 0x51e774
// 0051e746  384c240c             cmp byte ptr [esp + 0xc], cl
// 0051e74a  7413                 je 0x51e75f
// 0051e74c  8b16                 mov edx, dword ptr [esi]
// 0051e74e  c7421433000000       mov dword ptr [edx + 0x14], 0x33
// 0051e755  8b06                 mov eax, dword ptr [esi]
// 0051e757  8b08                 mov ecx, dword ptr [eax]
// 0051e759  56                   push esi
// 0051e75a  ffd1                 call ecx
// 0051e75c  83c404               add esp, 4
// 0051e75f  56                   push esi
// 0051e760  e80bcfffff           call 0x51b670
// 0051e765  83c404               add esp, 4
// 0051e768  b802000000           mov eax, 2
// 0051e76d  5e                   pop esi
// 0051e76e  c3                   ret 
// 0051e76f  b801000000           mov eax, 1
// 0051e774  5e                   pop esi
// 0051e775  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_read_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
