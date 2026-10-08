// from server: 100% by auto
// roc 2009-06 00579bb0  unit: G3D::LineSegment  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579bb0
//
// 00579bb0  51                   push ecx
// 00579bb1  56                   push esi
// 00579bb2  8d7128               lea esi, [ecx + 0x28]
// 00579bb5  8d442407             lea eax, [esp + 7]
// 00579bb9  50                   push eax
// 00579bba  8bce                 mov ecx, esi
// 00579bbc  c644240b00           mov byte ptr [esp + 0xb], 0
// 00579bc1  e86afeffff           call 0x579a30
// 00579bc6  8b0e                 mov ecx, dword ptr [esi]
// 00579bc8  51                   push ecx
// 00579bc9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00579bcd  ff15a8e48900         call dword ptr [0x89e4a8]
// 00579bd3  8b5604               mov edx, dword ptr [esi + 4]
// 00579bd6  6a00                 push 0
// 00579bd8  4a                   dec edx
// 00579bd9  52                   push edx
// 00579bda  8bce                 mov ecx, esi
// 00579bdc  e84ffdffff           call 0x579930
// 00579be1  5e                   pop esi
// 00579be2  59                   pop ecx
// 00579be3  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
