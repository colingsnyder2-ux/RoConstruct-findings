// roc 2009-06 006fa230  unit: RBX::GroupDragTool  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa230
//
// 006fa230  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fa234  49                   dec ecx
// 006fa235  b81f85eb51           mov eax, 0x51eb851f
// 006fa23a  f7e9                 imul ecx
// 006fa23c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fa240  c1fa04               sar edx, 4
// 006fa243  8bc2                 mov eax, edx
// 006fa245  c1e81f               shr eax, 0x1f
// 006fa248  56                   push esi
// 006fa249  8b742408             mov esi, dword ptr [esp + 8]
// 006fa24d  57                   push edi
// 006fa24e  8d7c0201             lea edi, [edx + eax + 1]
// 006fa252  8bc1                 mov eax, ecx
// 006fa254  40                   inc eax
// 006fa255  f7d8                 neg eax
// 006fa257  1bc0                 sbb eax, eax
// 006fa259  23c1                 and eax, ecx
// 006fa25b  81ffff010000         cmp edi, 0x1ff
// 006fa261  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fa264  8b5108               mov edx, dword ptr [ecx + 8]
// 006fa267  7f25                 jg 0x6fa28e
// 006fa269  c1e009               shl eax, 9
// 006fa26c  0bc7                 or eax, edi
// 006fa26e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006fa272  c1e008               shl eax, 8
// 006fa275  0bc7                 or eax, edi
// 006fa277  c1e006               shl eax, 6
// 006fa27a  52                   push edx
// 006fa27b  83c822               or eax, 0x22
// 006fa27e  50                   push eax
// 006fa27f  e8acfeffff           call 0x6fa130
// 006fa284  83c408               add esp, 8
// 006fa287  47                   inc edi
// 006fa288  897e24               mov dword ptr [esi + 0x24], edi
// 006fa28b  5f                   pop edi
// 006fa28c  5e                   pop esi
// 006fa28d  c3                   ret 
// 006fa28e  53                   push ebx
// 006fa28f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006fa293  c1e011               shl eax, 0x11
// 006fa296  0bc3                 or eax, ebx
// 006fa298  c1e006               shl eax, 6
// 006fa29b  52                   push edx
// 006fa29c  83c822               or eax, 0x22
// 006fa29f  50                   push eax
// 006fa2a0  e88bfeffff           call 0x6fa130
// 006fa2a5  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fa2a8  8b4808               mov ecx, dword ptr [eax + 8]
// 006fa2ab  51                   push ecx
// 006fa2ac  57                   push edi
// 006fa2ad  e87efeffff           call 0x6fa130
// 006fa2b2  83c410               add esp, 0x10
// 006fa2b5  43                   inc ebx
// 006fa2b6  895e24               mov dword ptr [esi + 0x24], ebx
// 006fa2b9  5b                   pop ebx
// 006fa2ba  5f                   pop edi
// 006fa2bb  5e                   pop esi
// 006fa2bc  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
