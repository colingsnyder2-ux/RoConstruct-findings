// from server: 100% by auto
// roc 2012-06 009369e0  unit: seg_00930000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009369e0
//
// 009369e0  56                   push esi
// 009369e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 009369e5  57                   push edi
// 009369e6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009369ea  8b4708               mov eax, dword ptr [edi + 8]
// 009369ed  3bf0                 cmp esi, eax
// 009369ef  7641                 jbe 0x936a32
// 009369f1  83fe20               cmp esi, 0x20
// 009369f4  7305                 jae 0x9369fb
// 009369f6  be20000000           mov esi, 0x20
// 009369fb  8d4e01               lea ecx, [esi + 1]
// 009369fe  83f9fd               cmp ecx, -3
// 00936a01  771a                 ja 0x936a1d
// 00936a03  8b17                 mov edx, dword ptr [edi]
// 00936a05  56                   push esi
// 00936a06  50                   push eax
// 00936a07  8b442414             mov eax, dword ptr [esp + 0x14]
// 00936a0b  52                   push edx
// 00936a0c  50                   push eax
// 00936a0d  e84e050000           call 0x936f60
// 00936a12  83c410               add esp, 0x10
// 00936a15  897708               mov dword ptr [edi + 8], esi
// 00936a18  8907                 mov dword ptr [edi], eax
// 00936a1a  5f                   pop edi
// 00936a1b  5e                   pop esi
// 00936a1c  c3                   ret 
// 00936a1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00936a21  51                   push ecx
// 00936a22  e819050000           call 0x936f40
// 00936a27  83c404               add esp, 4
// 00936a2a  897708               mov dword ptr [edi + 8], esi
// 00936a2d  8907                 mov dword ptr [edi], eax
// 00936a2f  5f                   pop edi
// 00936a30  5e                   pop esi
// 00936a31  c3                   ret 
// 00936a32  8b07                 mov eax, dword ptr [edi]
// 00936a34  5f                   pop edi
// 00936a35  5e                   pop esi
// 00936a36  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_openspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
