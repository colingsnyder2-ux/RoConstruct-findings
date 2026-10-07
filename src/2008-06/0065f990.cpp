// roc 2008-06 0065f990  unit: seg_00650000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f990
//
// 0065f990  56                   push esi
// 0065f991  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065f995  57                   push edi
// 0065f996  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065f99a  8b4708               mov eax, dword ptr [edi + 8]
// 0065f99d  3bf0                 cmp esi, eax
// 0065f99f  7641                 jbe 0x65f9e2
// 0065f9a1  83fe20               cmp esi, 0x20
// 0065f9a4  7305                 jae 0x65f9ab
// 0065f9a6  be20000000           mov esi, 0x20
// 0065f9ab  8d4e01               lea ecx, [esi + 1]
// 0065f9ae  83f9fd               cmp ecx, -3
// 0065f9b1  771a                 ja 0x65f9cd
// 0065f9b3  8b17                 mov edx, dword ptr [edi]
// 0065f9b5  56                   push esi
// 0065f9b6  50                   push eax
// 0065f9b7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065f9bb  52                   push edx
// 0065f9bc  50                   push eax
// 0065f9bd  e82e0d0000           call 0x6606f0
// 0065f9c2  83c410               add esp, 0x10
// 0065f9c5  897708               mov dword ptr [edi + 8], esi
// 0065f9c8  8907                 mov dword ptr [edi], eax
// 0065f9ca  5f                   pop edi
// 0065f9cb  5e                   pop esi
// 0065f9cc  c3                   ret 
// 0065f9cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f9d1  51                   push ecx
// 0065f9d2  e8f90c0000           call 0x6606d0
// 0065f9d7  83c404               add esp, 4
// 0065f9da  897708               mov dword ptr [edi + 8], esi
// 0065f9dd  8907                 mov dword ptr [edi], eax
// 0065f9df  5f                   pop edi
// 0065f9e0  5e                   pop esi
// 0065f9e1  c3                   ret 
// 0065f9e2  8b07                 mov eax, dword ptr [edi]
// 0065f9e4  5f                   pop edi
// 0065f9e5  5e                   pop esi
// 0065f9e6  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_openspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
