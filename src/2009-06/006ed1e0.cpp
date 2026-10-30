// from server: 100% by auto
// roc 2009-06 006ed1e0  unit: seg_006e0000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed1e0
//
// 006ed1e0  56                   push esi
// 006ed1e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ed1e5  57                   push edi
// 006ed1e6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ed1ea  8b4708               mov eax, dword ptr [edi + 8]
// 006ed1ed  3bf0                 cmp esi, eax
// 006ed1ef  7641                 jbe 0x6ed232
// 006ed1f1  83fe20               cmp esi, 0x20
// 006ed1f4  7305                 jae 0x6ed1fb
// 006ed1f6  be20000000           mov esi, 0x20
// 006ed1fb  8d4e01               lea ecx, [esi + 1]
// 006ed1fe  83f9fd               cmp ecx, -3
// 006ed201  771a                 ja 0x6ed21d
// 006ed203  8b17                 mov edx, dword ptr [edi]
// 006ed205  56                   push esi
// 006ed206  50                   push eax
// 006ed207  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ed20b  52                   push edx
// 006ed20c  50                   push eax
// 006ed20d  e84e050000           call 0x6ed760
// 006ed212  83c410               add esp, 0x10
// 006ed215  897708               mov dword ptr [edi + 8], esi
// 006ed218  8907                 mov dword ptr [edi], eax
// 006ed21a  5f                   pop edi
// 006ed21b  5e                   pop esi
// 006ed21c  c3                   ret 
// 006ed21d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ed221  51                   push ecx
// 006ed222  e819050000           call 0x6ed740
// 006ed227  83c404               add esp, 4
// 006ed22a  897708               mov dword ptr [edi + 8], esi
// 006ed22d  8907                 mov dword ptr [edi], eax
// 006ed22f  5f                   pop edi
// 006ed230  5e                   pop esi
// 006ed231  c3                   ret 
// 006ed232  8b07                 mov eax, dword ptr [edi]
// 006ed234  5f                   pop edi
// 006ed235  5e                   pop esi
// 006ed236  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_openspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
