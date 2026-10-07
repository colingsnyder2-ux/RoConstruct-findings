// roc 2011-06 007da8c0  unit: seg_007d0000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da8c0
//
// 007da8c0  56                   push esi
// 007da8c1  8b742410             mov esi, dword ptr [esp + 0x10]
// 007da8c5  57                   push edi
// 007da8c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007da8ca  8b4708               mov eax, dword ptr [edi + 8]
// 007da8cd  3bf0                 cmp esi, eax
// 007da8cf  7641                 jbe 0x7da912
// 007da8d1  83fe20               cmp esi, 0x20
// 007da8d4  7305                 jae 0x7da8db
// 007da8d6  be20000000           mov esi, 0x20
// 007da8db  8d4e01               lea ecx, [esi + 1]
// 007da8de  83f9fd               cmp ecx, -3
// 007da8e1  771a                 ja 0x7da8fd
// 007da8e3  8b17                 mov edx, dword ptr [edi]
// 007da8e5  56                   push esi
// 007da8e6  50                   push eax
// 007da8e7  8b442414             mov eax, dword ptr [esp + 0x14]
// 007da8eb  52                   push edx
// 007da8ec  50                   push eax
// 007da8ed  e84e050000           call 0x7dae40
// 007da8f2  83c410               add esp, 0x10
// 007da8f5  897708               mov dword ptr [edi + 8], esi
// 007da8f8  8907                 mov dword ptr [edi], eax
// 007da8fa  5f                   pop edi
// 007da8fb  5e                   pop esi
// 007da8fc  c3                   ret 
// 007da8fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007da901  51                   push ecx
// 007da902  e819050000           call 0x7dae20
// 007da907  83c404               add esp, 4
// 007da90a  897708               mov dword ptr [edi + 8], esi
// 007da90d  8907                 mov dword ptr [edi], eax
// 007da90f  5f                   pop edi
// 007da910  5e                   pop esi
// 007da911  c3                   ret 
// 007da912  8b07                 mov eax, dword ptr [edi]
// 007da914  5f                   pop edi
// 007da915  5e                   pop esi
// 007da916  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_openspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
