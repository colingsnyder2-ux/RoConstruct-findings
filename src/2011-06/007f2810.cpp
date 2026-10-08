// from server: 100% by auto
// roc 2011-06 007f2810  unit: RBX::AdvLuaDragTool  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2810
//
// 007f2810  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f2814  49                   dec ecx
// 007f2815  b81f85eb51           mov eax, 0x51eb851f
// 007f281a  f7e9                 imul ecx
// 007f281c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f2820  c1fa04               sar edx, 4
// 007f2823  8bc2                 mov eax, edx
// 007f2825  c1e81f               shr eax, 0x1f
// 007f2828  56                   push esi
// 007f2829  8b742408             mov esi, dword ptr [esp + 8]
// 007f282d  57                   push edi
// 007f282e  8d7c0201             lea edi, [edx + eax + 1]
// 007f2832  8bc1                 mov eax, ecx
// 007f2834  40                   inc eax
// 007f2835  f7d8                 neg eax
// 007f2837  1bc0                 sbb eax, eax
// 007f2839  23c1                 and eax, ecx
// 007f283b  81ffff010000         cmp edi, 0x1ff
// 007f2841  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f2844  8b5108               mov edx, dword ptr [ecx + 8]
// 007f2847  7f25                 jg 0x7f286e
// 007f2849  c1e009               shl eax, 9
// 007f284c  0bc7                 or eax, edi
// 007f284e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007f2852  c1e008               shl eax, 8
// 007f2855  0bc7                 or eax, edi
// 007f2857  c1e006               shl eax, 6
// 007f285a  52                   push edx
// 007f285b  83c822               or eax, 0x22
// 007f285e  50                   push eax
// 007f285f  e8acfeffff           call 0x7f2710
// 007f2864  83c408               add esp, 8
// 007f2867  47                   inc edi
// 007f2868  897e24               mov dword ptr [esi + 0x24], edi
// 007f286b  5f                   pop edi
// 007f286c  5e                   pop esi
// 007f286d  c3                   ret 
// 007f286e  53                   push ebx
// 007f286f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007f2873  c1e011               shl eax, 0x11
// 007f2876  0bc3                 or eax, ebx
// 007f2878  c1e006               shl eax, 6
// 007f287b  52                   push edx
// 007f287c  83c822               or eax, 0x22
// 007f287f  50                   push eax
// 007f2880  e88bfeffff           call 0x7f2710
// 007f2885  8b460c               mov eax, dword ptr [esi + 0xc]
// 007f2888  8b4808               mov ecx, dword ptr [eax + 8]
// 007f288b  51                   push ecx
// 007f288c  57                   push edi
// 007f288d  e87efeffff           call 0x7f2710
// 007f2892  83c410               add esp, 0x10
// 007f2895  43                   inc ebx
// 007f2896  895e24               mov dword ptr [esi + 0x24], ebx
// 007f2899  5b                   pop ebx
// 007f289a  5f                   pop edi
// 007f289b  5e                   pop esi
// 007f289c  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
