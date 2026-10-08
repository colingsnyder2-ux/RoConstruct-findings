// roc 2009-12 005fa140  unit: G3D::LineSegment  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa140
//
// 005fa140  51                   push ecx
// 005fa141  56                   push esi
// 005fa142  8d7128               lea esi, [ecx + 0x28]
// 005fa145  8d442407             lea eax, [esp + 7]
// 005fa149  50                   push eax
// 005fa14a  8bce                 mov ecx, esi
// 005fa14c  c644240b00           mov byte ptr [esp + 0xb], 0
// 005fa151  e86afeffff           call 0x5f9fc0
// 005fa156  8b0e                 mov ecx, dword ptr [esi]
// 005fa158  51                   push ecx
// 005fa159  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fa15d  ff1500b79800         call dword ptr [0x98b700]
// 005fa163  8b5604               mov edx, dword ptr [esi + 4]
// 005fa166  6a00                 push 0
// 005fa168  4a                   dec edx
// 005fa169  52                   push edx
// 005fa16a  8bce                 mov ecx, esi
// 005fa16c  e85ffdffff           call 0x5f9ed0
// 005fa171  5e                   pop esi
// 005fa172  59                   pop ecx
// 005fa173  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
