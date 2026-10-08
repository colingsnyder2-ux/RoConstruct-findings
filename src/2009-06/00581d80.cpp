// from server: 100% by auto
// roc 2009-06 00581d80  unit: seg_00580000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00581d80
//
// 00581d80  8b442404             mov eax, dword ptr [esp + 4]
// 00581d84  85c0                 test eax, eax
// 00581d86  7501                 jne 0x581d89
// 00581d88  c3                   ret 
// 00581d89  8b8844020000         mov ecx, dword ptr [eax + 0x244]
// 00581d8f  8b9048020000         mov edx, dword ptr [eax + 0x248]
// 00581d95  56                   push esi
// 00581d96  51                   push ecx
// 00581d97  52                   push edx
// 00581d98  6a02                 push 2
// 00581d9a  e851cd0000           call 0x58eaf0
// 00581d9f  8bf0                 mov esi, eax
// 00581da1  83c40c               add esp, 0xc
// 00581da4  85f6                 test esi, esi
// 00581da6  7410                 je 0x581db8
// 00581da8  6820010000           push 0x120
// 00581dad  6a00                 push 0
// 00581daf  56                   push esi
// 00581db0  e8bf7e1900           call 0x719c74
// 00581db5  83c40c               add esp, 0xc
// 00581db8  8bc6                 mov eax, esi
// 00581dba  5e                   pop esi
// 00581dbb  c3                   ret 
// library libpng-1.2.5/png.c (function _png_create_info_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
