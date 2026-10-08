// from server: 100% by auto
// roc 2008-06 0066b290  unit: RBX::GroupDragTool  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b290
//
// 0066b290  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066b294  49                   dec ecx
// 0066b295  b81f85eb51           mov eax, 0x51eb851f
// 0066b29a  f7e9                 imul ecx
// 0066b29c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066b2a0  c1fa04               sar edx, 4
// 0066b2a3  8bc2                 mov eax, edx
// 0066b2a5  c1e81f               shr eax, 0x1f
// 0066b2a8  56                   push esi
// 0066b2a9  8b742408             mov esi, dword ptr [esp + 8]
// 0066b2ad  57                   push edi
// 0066b2ae  8d7c0201             lea edi, [edx + eax + 1]
// 0066b2b2  8bc1                 mov eax, ecx
// 0066b2b4  40                   inc eax
// 0066b2b5  f7d8                 neg eax
// 0066b2b7  1bc0                 sbb eax, eax
// 0066b2b9  23c1                 and eax, ecx
// 0066b2bb  81ffff010000         cmp edi, 0x1ff
// 0066b2c1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066b2c4  8b5108               mov edx, dword ptr [ecx + 8]
// 0066b2c7  7f25                 jg 0x66b2ee
// 0066b2c9  c1e009               shl eax, 9
// 0066b2cc  0bc7                 or eax, edi
// 0066b2ce  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066b2d2  c1e008               shl eax, 8
// 0066b2d5  0bc7                 or eax, edi
// 0066b2d7  c1e006               shl eax, 6
// 0066b2da  52                   push edx
// 0066b2db  83c822               or eax, 0x22
// 0066b2de  50                   push eax
// 0066b2df  e8acfeffff           call 0x66b190
// 0066b2e4  83c408               add esp, 8
// 0066b2e7  47                   inc edi
// 0066b2e8  897e24               mov dword ptr [esi + 0x24], edi
// 0066b2eb  5f                   pop edi
// 0066b2ec  5e                   pop esi
// 0066b2ed  c3                   ret 
// 0066b2ee  53                   push ebx
// 0066b2ef  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066b2f3  c1e011               shl eax, 0x11
// 0066b2f6  0bc3                 or eax, ebx
// 0066b2f8  c1e006               shl eax, 6
// 0066b2fb  52                   push edx
// 0066b2fc  83c822               or eax, 0x22
// 0066b2ff  50                   push eax
// 0066b300  e88bfeffff           call 0x66b190
// 0066b305  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066b308  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b30b  51                   push ecx
// 0066b30c  57                   push edi
// 0066b30d  e87efeffff           call 0x66b190
// 0066b312  83c410               add esp, 0x10
// 0066b315  43                   inc ebx
// 0066b316  895e24               mov dword ptr [esi + 0x24], ebx
// 0066b319  5b                   pop ebx
// 0066b31a  5f                   pop edi
// 0066b31b  5e                   pop esi
// 0066b31c  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
