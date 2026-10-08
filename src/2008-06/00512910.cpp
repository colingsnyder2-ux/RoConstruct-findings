// from server: 100% by auto
// roc 2008-06 00512910  unit: G3D::GCamera  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512910
//
// 00512910  51                   push ecx
// 00512911  56                   push esi
// 00512912  8d7128               lea esi, [ecx + 0x28]
// 00512915  8d442407             lea eax, [esp + 7]
// 00512919  50                   push eax
// 0051291a  8bce                 mov ecx, esi
// 0051291c  c644240b00           mov byte ptr [esp + 0xb], 0
// 00512921  e86afeffff           call 0x512790
// 00512926  8b0e                 mov ecx, dword ptr [esi]
// 00512928  51                   push ecx
// 00512929  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051292d  ff154c248000         call dword ptr [0x80244c]
// 00512933  8b5604               mov edx, dword ptr [esi + 4]
// 00512936  6a00                 push 0
// 00512938  4a                   dec edx
// 00512939  52                   push edx
// 0051293a  8bce                 mov ecx, esi
// 0051293c  e84ffdffff           call 0x512690
// 00512941  5e                   pop esi
// 00512942  59                   pop ecx
// 00512943  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
