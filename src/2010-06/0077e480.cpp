// from server: 100% by auto
// roc 2010-06 0077e480  unit: seg_00770000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e480
//
// 0077e480  56                   push esi
// 0077e481  8b742410             mov esi, dword ptr [esp + 0x10]
// 0077e485  57                   push edi
// 0077e486  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0077e48a  8b4708               mov eax, dword ptr [edi + 8]
// 0077e48d  3bf0                 cmp esi, eax
// 0077e48f  7641                 jbe 0x77e4d2
// 0077e491  83fe20               cmp esi, 0x20
// 0077e494  7305                 jae 0x77e49b
// 0077e496  be20000000           mov esi, 0x20
// 0077e49b  8d4e01               lea ecx, [esi + 1]
// 0077e49e  83f9fd               cmp ecx, -3
// 0077e4a1  771a                 ja 0x77e4bd
// 0077e4a3  8b17                 mov edx, dword ptr [edi]
// 0077e4a5  56                   push esi
// 0077e4a6  50                   push eax
// 0077e4a7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077e4ab  52                   push edx
// 0077e4ac  50                   push eax
// 0077e4ad  e84e050000           call 0x77ea00
// 0077e4b2  83c410               add esp, 0x10
// 0077e4b5  897708               mov dword ptr [edi + 8], esi
// 0077e4b8  8907                 mov dword ptr [edi], eax
// 0077e4ba  5f                   pop edi
// 0077e4bb  5e                   pop esi
// 0077e4bc  c3                   ret 
// 0077e4bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077e4c1  51                   push ecx
// 0077e4c2  e819050000           call 0x77e9e0
// 0077e4c7  83c404               add esp, 4
// 0077e4ca  897708               mov dword ptr [edi + 8], esi
// 0077e4cd  8907                 mov dword ptr [edi], eax
// 0077e4cf  5f                   pop edi
// 0077e4d0  5e                   pop esi
// 0077e4d1  c3                   ret 
// 0077e4d2  8b07                 mov eax, dword ptr [edi]
// 0077e4d4  5f                   pop edi
// 0077e4d5  5e                   pop esi
// 0077e4d6  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_openspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
