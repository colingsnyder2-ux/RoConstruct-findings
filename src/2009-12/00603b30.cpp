// roc 2009-12 00603b30  unit: seg_00600000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603b30
//
// 00603b30  8b442404             mov eax, dword ptr [esp + 4]
// 00603b34  85c0                 test eax, eax
// 00603b36  7501                 jne 0x603b39
// 00603b38  c3                   ret 
// 00603b39  8b8844020000         mov ecx, dword ptr [eax + 0x244]
// 00603b3f  8b9048020000         mov edx, dword ptr [eax + 0x248]
// 00603b45  56                   push esi
// 00603b46  51                   push ecx
// 00603b47  52                   push edx
// 00603b48  6a02                 push 2
// 00603b4a  e8d1cf0000           call 0x610b20
// 00603b4f  8bf0                 mov esi, eax
// 00603b51  83c40c               add esp, 0xc
// 00603b54  85f6                 test esi, esi
// 00603b56  7410                 je 0x603b68
// 00603b58  6820010000           push 0x120
// 00603b5d  6a00                 push 0
// 00603b5f  56                   push esi
// 00603b60  e83f0f1f00           call 0x7f4aa4
// 00603b65  83c40c               add esp, 0xc
// 00603b68  8bc6                 mov eax, esi
// 00603b6a  5e                   pop esi
// 00603b6b  c3                   ret 
// library libpng-1.2.5/png.c (function _png_create_info_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
