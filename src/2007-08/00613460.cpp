// roc 2007-08 00613460  unit: seg_00610000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613460
//
// 00613460  56                   push esi
// 00613461  8b742410             mov esi, dword ptr [esp + 0x10]
// 00613465  57                   push edi
// 00613466  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061346a  8b4708               mov eax, dword ptr [edi + 8]
// 0061346d  3bf0                 cmp esi, eax
// 0061346f  7641                 jbe 0x6134b2
// 00613471  83fe20               cmp esi, 0x20
// 00613474  7305                 jae 0x61347b
// 00613476  be20000000           mov esi, 0x20
// 0061347b  8d4e01               lea ecx, [esi + 1]
// 0061347e  83f9fd               cmp ecx, -3
// 00613481  771a                 ja 0x61349d
// 00613483  8b17                 mov edx, dword ptr [edi]
// 00613485  56                   push esi
// 00613486  50                   push eax
// 00613487  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061348b  52                   push edx
// 0061348c  50                   push eax
// 0061348d  e85e050000           call 0x6139f0
// 00613492  83c410               add esp, 0x10
// 00613495  897708               mov dword ptr [edi + 8], esi
// 00613498  8907                 mov dword ptr [edi], eax
// 0061349a  5f                   pop edi
// 0061349b  5e                   pop esi
// 0061349c  c3                   ret 
// 0061349d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006134a1  51                   push ecx
// 006134a2  e829050000           call 0x6139d0
// 006134a7  83c404               add esp, 4
// 006134aa  897708               mov dword ptr [edi + 8], esi
// 006134ad  8907                 mov dword ptr [edi], eax
// 006134af  5f                   pop edi
// 006134b0  5e                   pop esi
// 006134b1  c3                   ret 
// 006134b2  8b07                 mov eax, dword ptr [edi]
// 006134b4  5f                   pop edi
// 006134b5  5e                   pop esi
// 006134b6  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_openspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
