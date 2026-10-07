// roc 2008-06 0051e240  unit: seg_00510000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e240
//
// 0051e240  8b442404             mov eax, dword ptr [esp + 4]
// 0051e244  85c0                 test eax, eax
// 0051e246  7501                 jne 0x51e249
// 0051e248  c3                   ret 
// 0051e249  8b8844020000         mov ecx, dword ptr [eax + 0x244]
// 0051e24f  8b9048020000         mov edx, dword ptr [eax + 0x248]
// 0051e255  56                   push esi
// 0051e256  51                   push ecx
// 0051e257  52                   push edx
// 0051e258  6a02                 push 2
// 0051e25a  e8e1c00000           call 0x52a340
// 0051e25f  8bf0                 mov esi, eax
// 0051e261  83c40c               add esp, 0xc
// 0051e264  85f6                 test esi, esi
// 0051e266  7410                 je 0x51e278
// 0051e268  6820010000           push 0x120
// 0051e26d  6a00                 push 0
// 0051e26f  56                   push esi
// 0051e270  e88f341800           call 0x6a1704
// 0051e275  83c40c               add esp, 0xc
// 0051e278  8bc6                 mov eax, esi
// 0051e27a  5e                   pop esi
// 0051e27b  c3                   ret 
// library libpng-1.2.5/png.c (function _png_create_info_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
