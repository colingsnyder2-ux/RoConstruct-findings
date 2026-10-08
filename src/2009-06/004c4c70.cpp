// roc 2009-06 004c4c70  unit: RBX::Network::Players::Plugin  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4c70
//
// 004c4c70  83ec08               sub esp, 8
// 004c4c73  56                   push esi
// 004c4c74  8bf1                 mov esi, ecx
// 004c4c76  8b4604               mov eax, dword ptr [esi + 4]
// 004c4c79  3b4608               cmp eax, dword ptr [esi + 8]
// 004c4c7c  8b0e                 mov ecx, dword ptr [esi]
// 004c4c7e  7d1f                 jge 0x4c4c9f
// 004c4c80  8d04c1               lea eax, [ecx + eax*8]
// 004c4c83  85c0                 test eax, eax
// 004c4c85  740e                 je 0x4c4c95
// 004c4c87  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c4c8b  d901                 fld dword ptr [ecx]
// 004c4c8d  d918                 fstp dword ptr [eax]
// 004c4c8f  d94104               fld dword ptr [ecx + 4]
// 004c4c92  d95804               fstp dword ptr [eax + 4]
// 004c4c95  ff4604               inc dword ptr [esi + 4]
// 004c4c98  5e                   pop esi
// 004c4c99  83c408               add esp, 8
// 004c4c9c  c20400               ret 4
// 004c4c9f  57                   push edi
// 004c4ca0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c4ca4  3bf9                 cmp edi, ecx
// 004c4ca6  7228                 jb 0x4c4cd0
// 004c4ca8  8d14c1               lea edx, [ecx + eax*8]
// 004c4cab  3bfa                 cmp edi, edx
// 004c4cad  7321                 jae 0x4c4cd0
// 004c4caf  d907                 fld dword ptr [edi]
// 004c4cb1  8d442408             lea eax, [esp + 8]
// 004c4cb5  d95c2408             fstp dword ptr [esp + 8]
// 004c4cb9  50                   push eax
// 004c4cba  d94704               fld dword ptr [edi + 4]
// 004c4cbd  8bce                 mov ecx, esi
// 004c4cbf  d95c2410             fstp dword ptr [esp + 0x10]
// 004c4cc3  e8a8ffffff           call 0x4c4c70
// 004c4cc8  5f                   pop edi
// 004c4cc9  5e                   pop esi
// 004c4cca  83c408               add esp, 8
// 004c4ccd  c20400               ret 4
// 004c4cd0  6a00                 push 0
// 004c4cd2  40                   inc eax
// 004c4cd3  50                   push eax
// 004c4cd4  8bce                 mov ecx, esi
// 004c4cd6  e875fbffff           call 0x4c4850
// 004c4cdb  d907                 fld dword ptr [edi]
// 004c4cdd  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c4ce0  8b16                 mov edx, dword ptr [esi]
// 004c4ce2  d95ccaf8             fstp dword ptr [edx + ecx*8 - 8]
// 004c4ce6  d94704               fld dword ptr [edi + 4]
// 004c4ce9  8d44caf8             lea eax, [edx + ecx*8 - 8]
// 004c4ced  5f                   pop edi
// 004c4cee  d95804               fstp dword ptr [eax + 4]
// 004c4cf1  5e                   pop esi
// 004c4cf2  83c408               add esp, 8
// 004c4cf5  c20400               ret 4
// library rbxgs-render/Mesh.cpp (function ?append@?$Array@VVector2@G3D@@@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
