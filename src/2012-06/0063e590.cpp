// from server: 100% by auto
// roc 2012-06 0063e590  unit: seg_00630000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063e590
//
// 0063e590  8b442404             mov eax, dword ptr [esp + 4]
// 0063e594  85c0                 test eax, eax
// 0063e596  7501                 jne 0x63e599
// 0063e598  c3                   ret 
// 0063e599  8b8844020000         mov ecx, dword ptr [eax + 0x244]
// 0063e59f  8b9048020000         mov edx, dword ptr [eax + 0x248]
// 0063e5a5  56                   push esi
// 0063e5a6  51                   push ecx
// 0063e5a7  52                   push edx
// 0063e5a8  6a02                 push 2
// 0063e5aa  e8b1fd0000           call 0x64e360
// 0063e5af  8bf0                 mov esi, eax
// 0063e5b1  83c40c               add esp, 0xc
// 0063e5b4  85f6                 test esi, esi
// 0063e5b6  7410                 je 0x63e5c8
// 0063e5b8  6820010000           push 0x120
// 0063e5bd  6a00                 push 0
// 0063e5bf  56                   push esi
// 0063e5c0  e8af4d3400           call 0x983374
// 0063e5c5  83c40c               add esp, 0xc
// 0063e5c8  8bc6                 mov eax, esi
// 0063e5ca  5e                   pop esi
// 0063e5cb  c3                   ret 
// library libpng-1.2.5/png.c (function _png_create_info_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
