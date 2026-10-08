// from server: 100% by auto
// roc 2010-06 005654a0  unit: seg_00560000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005654a0
//
// 005654a0  8b442404             mov eax, dword ptr [esp + 4]
// 005654a4  85c0                 test eax, eax
// 005654a6  7501                 jne 0x5654a9
// 005654a8  c3                   ret 
// 005654a9  8b8844020000         mov ecx, dword ptr [eax + 0x244]
// 005654af  8b9048020000         mov edx, dword ptr [eax + 0x248]
// 005654b5  56                   push esi
// 005654b6  51                   push ecx
// 005654b7  52                   push edx
// 005654b8  6a02                 push 2
// 005654ba  e881cf0000           call 0x572440
// 005654bf  8bf0                 mov esi, eax
// 005654c1  83c40c               add esp, 0xc
// 005654c4  85f6                 test esi, esi
// 005654c6  7410                 je 0x5654d8
// 005654c8  6820010000           push 0x120
// 005654cd  6a00                 push 0
// 005654cf  56                   push esi
// 005654d0  e80f372400           call 0x7a8be4
// 005654d5  83c40c               add esp, 0xc
// 005654d8  8bc6                 mov eax, esi
// 005654da  5e                   pop esi
// 005654db  c3                   ret 
// library libpng-1.2.5/png.c (function _png_create_info_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
