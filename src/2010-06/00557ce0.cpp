// from server: 100% by auto
// roc 2010-06 00557ce0  unit: seg_00550000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557ce0
//
// 00557ce0  51                   push ecx
// 00557ce1  56                   push esi
// 00557ce2  8d7128               lea esi, [ecx + 0x28]
// 00557ce5  8d442407             lea eax, [esp + 7]
// 00557ce9  50                   push eax
// 00557cea  8bce                 mov ecx, esi
// 00557cec  c644240b00           mov byte ptr [esp + 0xb], 0
// 00557cf1  e86afeffff           call 0x557b60
// 00557cf6  8b0e                 mov ecx, dword ptr [esi]
// 00557cf8  51                   push ecx
// 00557cf9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00557cfd  ff151ca49e00         call dword ptr [0x9ea41c]
// 00557d03  8b5604               mov edx, dword ptr [esi + 4]
// 00557d06  6a00                 push 0
// 00557d08  4a                   dec edx
// 00557d09  52                   push edx
// 00557d0a  8bce                 mov ecx, esi
// 00557d0c  e85ffdffff           call 0x557a70
// 00557d11  5e                   pop esi
// 00557d12  59                   pop ecx
// 00557d13  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
