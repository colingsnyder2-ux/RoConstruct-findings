// from server: 100% by auto
// roc 2010-06 0078fbc0  unit: RBX::GroupDragTool  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fbc0
//
// 0078fbc0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078fbc4  49                   dec ecx
// 0078fbc5  b81f85eb51           mov eax, 0x51eb851f
// 0078fbca  f7e9                 imul ecx
// 0078fbcc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078fbd0  c1fa04               sar edx, 4
// 0078fbd3  8bc2                 mov eax, edx
// 0078fbd5  c1e81f               shr eax, 0x1f
// 0078fbd8  56                   push esi
// 0078fbd9  8b742408             mov esi, dword ptr [esp + 8]
// 0078fbdd  57                   push edi
// 0078fbde  8d7c0201             lea edi, [edx + eax + 1]
// 0078fbe2  8bc1                 mov eax, ecx
// 0078fbe4  40                   inc eax
// 0078fbe5  f7d8                 neg eax
// 0078fbe7  1bc0                 sbb eax, eax
// 0078fbe9  23c1                 and eax, ecx
// 0078fbeb  81ffff010000         cmp edi, 0x1ff
// 0078fbf1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0078fbf4  8b5108               mov edx, dword ptr [ecx + 8]
// 0078fbf7  7f25                 jg 0x78fc1e
// 0078fbf9  c1e009               shl eax, 9
// 0078fbfc  0bc7                 or eax, edi
// 0078fbfe  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0078fc02  c1e008               shl eax, 8
// 0078fc05  0bc7                 or eax, edi
// 0078fc07  c1e006               shl eax, 6
// 0078fc0a  52                   push edx
// 0078fc0b  83c822               or eax, 0x22
// 0078fc0e  50                   push eax
// 0078fc0f  e8acfeffff           call 0x78fac0
// 0078fc14  83c408               add esp, 8
// 0078fc17  47                   inc edi
// 0078fc18  897e24               mov dword ptr [esi + 0x24], edi
// 0078fc1b  5f                   pop edi
// 0078fc1c  5e                   pop esi
// 0078fc1d  c3                   ret 
// 0078fc1e  53                   push ebx
// 0078fc1f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0078fc23  c1e011               shl eax, 0x11
// 0078fc26  0bc3                 or eax, ebx
// 0078fc28  c1e006               shl eax, 6
// 0078fc2b  52                   push edx
// 0078fc2c  83c822               or eax, 0x22
// 0078fc2f  50                   push eax
// 0078fc30  e88bfeffff           call 0x78fac0
// 0078fc35  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078fc38  8b4808               mov ecx, dword ptr [eax + 8]
// 0078fc3b  51                   push ecx
// 0078fc3c  57                   push edi
// 0078fc3d  e87efeffff           call 0x78fac0
// 0078fc42  83c410               add esp, 0x10
// 0078fc45  43                   inc ebx
// 0078fc46  895e24               mov dword ptr [esi + 0x24], ebx
// 0078fc49  5b                   pop ebx
// 0078fc4a  5f                   pop edi
// 0078fc4b  5e                   pop esi
// 0078fc4c  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
