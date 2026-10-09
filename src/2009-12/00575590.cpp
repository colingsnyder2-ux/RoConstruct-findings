// roc 2009-12 00575590  unit: RBX::SimpleSceneManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00575590
//
// 00575590  56                   push esi
// 00575591  8b31                 mov esi, dword ptr [ecx]
// 00575593  85f6                 test esi, esi
// 00575595  7416                 je 0x5755ad
// 00575597  8bce                 mov ecx, esi
// 00575599  c70620ea9a00         mov dword ptr [esi], 0x9aea20
// 0057559f  e8bcefeeff           call 0x464560
// 005755a4  56                   push esi
// 005755a5  e8b0e22700           call 0x7f385a
// 005755aa  83c404               add esp, 4
// 005755ad  5e                   pop esi
// 005755ae  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VTextureManager@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
