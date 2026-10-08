// roc 2007-03 004fe0c0  unit: seg_004f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe0c0
//
// 004fe0c0  51                   push ecx
// 004fe0c1  56                   push esi
// 004fe0c2  8d7128               lea esi, [ecx + 0x28]
// 004fe0c5  8d442407             lea eax, [esp + 7]
// 004fe0c9  50                   push eax
// 004fe0ca  8bce                 mov ecx, esi
// 004fe0cc  c644240b00           mov byte ptr [esp + 0xb], 0
// 004fe0d1  e86afeffff           call 0x4fdf40
// 004fe0d6  8b0e                 mov ecx, dword ptr [esi]
// 004fe0d8  51                   push ecx
// 004fe0d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fe0dd  ff15f0e67700         call dword ptr [0x77e6f0]
// 004fe0e3  8b5604               mov edx, dword ptr [esi + 4]
// 004fe0e6  6a00                 push 0
// 004fe0e8  83ea01               sub edx, 1
// 004fe0eb  52                   push edx
// 004fe0ec  8bce                 mov ecx, esi
// 004fe0ee  e83dfdffff           call 0x4fde30
// 004fe0f3  5e                   pop esi
// 004fe0f4  59                   pop ecx
// 004fe0f5  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp
