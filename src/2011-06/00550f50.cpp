// from server: 100% by auto
// roc 2011-06 00550f50  unit: seg_00550000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00550f50
//
// 00550f50  8b442404             mov eax, dword ptr [esp + 4]
// 00550f54  85c0                 test eax, eax
// 00550f56  7501                 jne 0x550f59
// 00550f58  c3                   ret 
// 00550f59  8b8844020000         mov ecx, dword ptr [eax + 0x244]
// 00550f5f  8b9048020000         mov edx, dword ptr [eax + 0x248]
// 00550f65  56                   push esi
// 00550f66  51                   push ecx
// 00550f67  52                   push edx
// 00550f68  6a02                 push 2
// 00550f6a  e871050100           call 0x5614e0
// 00550f6f  8bf0                 mov esi, eax
// 00550f71  83c40c               add esp, 0xc
// 00550f74  85f6                 test esi, esi
// 00550f76  7410                 je 0x550f88
// 00550f78  6820010000           push 0x120
// 00550f7d  6a00                 push 0
// 00550f7f  56                   push esi
// 00550f80  e85fa32b00           call 0x80b2e4
// 00550f85  83c40c               add esp, 0xc
// 00550f88  8bc6                 mov eax, esi
// 00550f8a  5e                   pop esi
// 00550f8b  c3                   ret 
// library libpng-1.2.5/png.c (function _png_create_info_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
