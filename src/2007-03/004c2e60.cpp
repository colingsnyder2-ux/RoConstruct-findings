// roc 2007-03 004c2e60  unit: seg_004c0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2e60
//
// 004c2e60  56                   push esi
// 004c2e61  8b31                 mov esi, dword ptr [ecx]
// 004c2e63  85f6                 test esi, esi
// 004c2e65  7416                 je 0x4c2e7d
// 004c2e67  8bce                 mov ecx, esi
// 004c2e69  c706d8e57900         mov dword ptr [esi], 0x79e5d8
// 004c2e6f  e88cf9ffff           call 0x4c2800
// 004c2e74  56                   push esi
// 004c2e75  e876b21500           call 0x61e0f0
// 004c2e7a  83c404               add esp, 4
// 004c2e7d  5e                   pop esi
// 004c2e7e  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VTextureManager@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
