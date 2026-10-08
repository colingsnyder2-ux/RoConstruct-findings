// roc 2008-06 004d87c0  unit: G3D::VVector3::?$Table  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d87c0
//
// 004d87c0  56                   push esi
// 004d87c1  8b31                 mov esi, dword ptr [ecx]
// 004d87c3  85f6                 test esi, esi
// 004d87c5  7416                 je 0x4d87dd
// 004d87c7  8bce                 mov ecx, esi
// 004d87c9  c706d89c8100         mov dword ptr [esi], 0x819cd8
// 004d87cf  e8ac3ef8ff           call 0x45c680
// 004d87d4  56                   push esi
// 004d87d5  e8a07e1c00           call 0x6a067a
// 004d87da  83c404               add esp, 4
// 004d87dd  5e                   pop esi
// 004d87de  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VTextureManager@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
