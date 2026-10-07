// roc 2012-06 009677b0  unit: RBX::CellContact  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009677b0
//
// 009677b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009677b4  49                   dec ecx
// 009677b5  b81f85eb51           mov eax, 0x51eb851f
// 009677ba  f7e9                 imul ecx
// 009677bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009677c0  c1fa04               sar edx, 4
// 009677c3  8bc2                 mov eax, edx
// 009677c5  c1e81f               shr eax, 0x1f
// 009677c8  56                   push esi
// 009677c9  8b742408             mov esi, dword ptr [esp + 8]
// 009677cd  57                   push edi
// 009677ce  8d7c0201             lea edi, [edx + eax + 1]
// 009677d2  8bc1                 mov eax, ecx
// 009677d4  40                   inc eax
// 009677d5  f7d8                 neg eax
// 009677d7  1bc0                 sbb eax, eax
// 009677d9  23c1                 and eax, ecx
// 009677db  81ffff010000         cmp edi, 0x1ff
// 009677e1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009677e4  8b5108               mov edx, dword ptr [ecx + 8]
// 009677e7  7f25                 jg 0x96780e
// 009677e9  c1e009               shl eax, 9
// 009677ec  0bc7                 or eax, edi
// 009677ee  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009677f2  c1e008               shl eax, 8
// 009677f5  0bc7                 or eax, edi
// 009677f7  c1e006               shl eax, 6
// 009677fa  52                   push edx
// 009677fb  83c822               or eax, 0x22
// 009677fe  50                   push eax
// 009677ff  e8acfeffff           call 0x9676b0
// 00967804  83c408               add esp, 8
// 00967807  47                   inc edi
// 00967808  897e24               mov dword ptr [esi + 0x24], edi
// 0096780b  5f                   pop edi
// 0096780c  5e                   pop esi
// 0096780d  c3                   ret 
// 0096780e  53                   push ebx
// 0096780f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00967813  c1e011               shl eax, 0x11
// 00967816  0bc3                 or eax, ebx
// 00967818  c1e006               shl eax, 6
// 0096781b  52                   push edx
// 0096781c  83c822               or eax, 0x22
// 0096781f  50                   push eax
// 00967820  e88bfeffff           call 0x9676b0
// 00967825  8b460c               mov eax, dword ptr [esi + 0xc]
// 00967828  8b4808               mov ecx, dword ptr [eax + 8]
// 0096782b  51                   push ecx
// 0096782c  57                   push edi
// 0096782d  e87efeffff           call 0x9676b0
// 00967832  83c410               add esp, 0x10
// 00967835  43                   inc ebx
// 00967836  895e24               mov dword ptr [esi + 0x24], ebx
// 00967839  5b                   pop ebx
// 0096783a  5f                   pop edi
// 0096783b  5e                   pop esi
// 0096783c  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
