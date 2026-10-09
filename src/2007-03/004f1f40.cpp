// roc 2007-03 004f1f40  unit: seg_004f0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f1f40
//
// 004f1f40  8b442408             mov eax, dword ptr [esp + 8]
// 004f1f44  57                   push edi
// 004f1f45  8b7c2408             mov edi, dword ptr [esp + 8]
// 004f1f49  3bf8                 cmp edi, eax
// 004f1f4b  0f848b000000         je 0x4f1fdc
// 004f1f51  56                   push esi
// 004f1f52  8d7750               lea esi, [edi + 0x50]
// 004f1f55  3bf0                 cmp esi, eax
// 004f1f57  0f847e000000         je 0x4f1fdb
// 004f1f5d  53                   push ebx
// 004f1f5e  55                   push ebp
// 004f1f5f  8d6e50               lea ebp, [esi + 0x50]
// 004f1f62  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004f1f66  57                   push edi
// 004f1f67  56                   push esi
// 004f1f68  ffd3                 call ebx
// 004f1f6a  83c408               add esp, 8
// 004f1f6d  84c0                 test al, al
// 004f1f6f  7419                 je 0x4f1f8a
// 004f1f71  3bfe                 cmp edi, esi
// 004f1f73  7458                 je 0x4f1fcd
// 004f1f75  3bf5                 cmp esi, ebp
// 004f1f77  7454                 je 0x4f1fcd
// 004f1f79  6a00                 push 0
// 004f1f7b  6a00                 push 0
// 004f1f7d  55                   push ebp
// 004f1f7e  56                   push esi
// 004f1f7f  57                   push edi
// 004f1f80  e8abf0ffff           call 0x4f1030
// 004f1f85  83c414               add esp, 0x14
// 004f1f88  eb43                 jmp 0x4f1fcd
// 004f1f8a  8dbd60ffffff         lea edi, [ebp - 0xa0]
// 004f1f90  57                   push edi
// 004f1f91  56                   push esi
// 004f1f92  ffd3                 call ebx
// 004f1f94  83c408               add esp, 8
// 004f1f97  84c0                 test al, al
// 004f1f99  742e                 je 0x4f1fc9
// 004f1f9b  eb03                 jmp 0x4f1fa0
// 004f1f9d  8d4900               lea ecx, [ecx]
// 004f1fa0  8bdf                 mov ebx, edi
// 004f1fa2  83ef50               sub edi, 0x50
// 004f1fa5  57                   push edi
// 004f1fa6  56                   push esi
// 004f1fa7  ff542424             call dword ptr [esp + 0x24]
// 004f1fab  83c408               add esp, 8
// 004f1fae  84c0                 test al, al
// 004f1fb0  75ee                 jne 0x4f1fa0
// 004f1fb2  3bde                 cmp ebx, esi
// 004f1fb4  7413                 je 0x4f1fc9
// 004f1fb6  3bf5                 cmp esi, ebp
// 004f1fb8  740f                 je 0x4f1fc9
// 004f1fba  6a00                 push 0
// 004f1fbc  6a00                 push 0
// 004f1fbe  55                   push ebp
// 004f1fbf  56                   push esi
// 004f1fc0  53                   push ebx
// 004f1fc1  e86af0ffff           call 0x4f1030
// 004f1fc6  83c414               add esp, 0x14
// 004f1fc9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f1fcd  83c650               add esi, 0x50
// 004f1fd0  83c550               add ebp, 0x50
// 004f1fd3  3b742418             cmp esi, dword ptr [esp + 0x18]
// 004f1fd7  7589                 jne 0x4f1f62
// 004f1fd9  5d                   pop ebp
// 004f1fda  5b                   pop ebx
// 004f1fdb  5e                   pop esi
// 004f1fdc  5f                   pop edi
// 004f1fdd  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Insertion_sort@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
