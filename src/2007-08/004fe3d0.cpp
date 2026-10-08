// roc 2007-08 004fe3d0  unit: RBX::Render::AggregateChunk  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fe3d0
//
// 004fe3d0  8b442408             mov eax, dword ptr [esp + 8]
// 004fe3d4  57                   push edi
// 004fe3d5  8b7c2408             mov edi, dword ptr [esp + 8]
// 004fe3d9  3bf8                 cmp edi, eax
// 004fe3db  0f848b000000         je 0x4fe46c
// 004fe3e1  56                   push esi
// 004fe3e2  8d7750               lea esi, [edi + 0x50]
// 004fe3e5  3bf0                 cmp esi, eax
// 004fe3e7  0f847e000000         je 0x4fe46b
// 004fe3ed  53                   push ebx
// 004fe3ee  55                   push ebp
// 004fe3ef  8d6e50               lea ebp, [esi + 0x50]
// 004fe3f2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004fe3f6  57                   push edi
// 004fe3f7  56                   push esi
// 004fe3f8  ffd3                 call ebx
// 004fe3fa  83c408               add esp, 8
// 004fe3fd  84c0                 test al, al
// 004fe3ff  7419                 je 0x4fe41a
// 004fe401  3bfe                 cmp edi, esi
// 004fe403  7458                 je 0x4fe45d
// 004fe405  3bf5                 cmp esi, ebp
// 004fe407  7454                 je 0x4fe45d
// 004fe409  6a00                 push 0
// 004fe40b  6a00                 push 0
// 004fe40d  55                   push ebp
// 004fe40e  56                   push esi
// 004fe40f  57                   push edi
// 004fe410  e8abf0ffff           call 0x4fd4c0
// 004fe415  83c414               add esp, 0x14
// 004fe418  eb43                 jmp 0x4fe45d
// 004fe41a  8dbd60ffffff         lea edi, [ebp - 0xa0]
// 004fe420  57                   push edi
// 004fe421  56                   push esi
// 004fe422  ffd3                 call ebx
// 004fe424  83c408               add esp, 8
// 004fe427  84c0                 test al, al
// 004fe429  742e                 je 0x4fe459
// 004fe42b  eb03                 jmp 0x4fe430
// 004fe42d  8d4900               lea ecx, [ecx]
// 004fe430  8bdf                 mov ebx, edi
// 004fe432  83ef50               sub edi, 0x50
// 004fe435  57                   push edi
// 004fe436  56                   push esi
// 004fe437  ff542424             call dword ptr [esp + 0x24]
// 004fe43b  83c408               add esp, 8
// 004fe43e  84c0                 test al, al
// 004fe440  75ee                 jne 0x4fe430
// 004fe442  3bde                 cmp ebx, esi
// 004fe444  7413                 je 0x4fe459
// 004fe446  3bf5                 cmp esi, ebp
// 004fe448  740f                 je 0x4fe459
// 004fe44a  6a00                 push 0
// 004fe44c  6a00                 push 0
// 004fe44e  55                   push ebp
// 004fe44f  56                   push esi
// 004fe450  53                   push ebx
// 004fe451  e86af0ffff           call 0x4fd4c0
// 004fe456  83c414               add esp, 0x14
// 004fe459  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004fe45d  83c650               add esi, 0x50
// 004fe460  83c550               add ebp, 0x50
// 004fe463  3b742418             cmp esi, dword ptr [esp + 0x18]
// 004fe467  7589                 jne 0x4fe3f2
// 004fe469  5d                   pop ebp
// 004fe46a  5b                   pop ebx
// 004fe46b  5e                   pop esi
// 004fe46c  5f                   pop edi
// 004fe46d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Insertion_sort@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
