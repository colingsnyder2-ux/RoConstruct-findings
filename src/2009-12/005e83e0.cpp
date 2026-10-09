// roc 2009-12 005e83e0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e83e0
//
// 005e83e0  83ec50               sub esp, 0x50
// 005e83e3  53                   push ebx
// 005e83e4  55                   push ebp
// 005e83e5  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 005e83e9  56                   push esi
// 005e83ea  8b742464             mov esi, dword ptr [esp + 0x64]
// 005e83ee  57                   push edi
// 005e83ef  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 005e83f3  57                   push edi
// 005e83f4  56                   push esi
// 005e83f5  ffd5                 call ebp
// 005e83f7  83c408               add esp, 8
// 005e83fa  84c0                 test al, al
// 005e83fc  7422                 je 0x5e8420
// 005e83fe  3bf7                 cmp esi, edi
// 005e8400  741e                 je 0x5e8420
// 005e8402  56                   push esi
// 005e8403  8d4c2414             lea ecx, [esp + 0x14]
// 005e8407  e82435eeff           call 0x4cb930
// 005e840c  57                   push edi
// 005e840d  8bce                 mov ecx, esi
// 005e840f  e8fc21eeff           call 0x4ca610
// 005e8414  8d442410             lea eax, [esp + 0x10]
// 005e8418  50                   push eax
// 005e8419  8bcf                 mov ecx, edi
// 005e841b  e8f021eeff           call 0x4ca610
// 005e8420  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 005e8424  56                   push esi
// 005e8425  53                   push ebx
// 005e8426  ffd5                 call ebp
// 005e8428  83c408               add esp, 8
// 005e842b  84c0                 test al, al
// 005e842d  7422                 je 0x5e8451
// 005e842f  3bde                 cmp ebx, esi
// 005e8431  741e                 je 0x5e8451
// 005e8433  53                   push ebx
// 005e8434  8d4c2414             lea ecx, [esp + 0x14]
// 005e8438  e8f334eeff           call 0x4cb930
// 005e843d  56                   push esi
// 005e843e  8bcb                 mov ecx, ebx
// 005e8440  e8cb21eeff           call 0x4ca610
// 005e8445  8d4c2410             lea ecx, [esp + 0x10]
// 005e8449  51                   push ecx
// 005e844a  8bce                 mov ecx, esi
// 005e844c  e8bf21eeff           call 0x4ca610
// 005e8451  57                   push edi
// 005e8452  56                   push esi
// 005e8453  ffd5                 call ebp
// 005e8455  83c408               add esp, 8
// 005e8458  84c0                 test al, al
// 005e845a  7422                 je 0x5e847e
// 005e845c  3bf7                 cmp esi, edi
// 005e845e  741e                 je 0x5e847e
// 005e8460  56                   push esi
// 005e8461  8d4c2414             lea ecx, [esp + 0x14]
// 005e8465  e8c634eeff           call 0x4cb930
// 005e846a  57                   push edi
// 005e846b  8bce                 mov ecx, esi
// 005e846d  e89e21eeff           call 0x4ca610
// 005e8472  8d542410             lea edx, [esp + 0x10]
// 005e8476  52                   push edx
// 005e8477  8bcf                 mov ecx, edi
// 005e8479  e89221eeff           call 0x4ca610
// 005e847e  5f                   pop edi
// 005e847f  5e                   pop esi
// 005e8480  5d                   pop ebp
// 005e8481  5b                   pop ebx
// 005e8482  83c450               add esp, 0x50
// 005e8485  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Med3@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
