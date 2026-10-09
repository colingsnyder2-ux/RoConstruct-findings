// roc 2009-12 00574fa0  unit: RBX::ViewRbxGfx  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00574fa0
//
// 00574fa0  8b09                 mov ecx, dword ptr [ecx]
// 00574fa2  85c9                 test ecx, ecx
// 00574fa4  7409                 je 0x574faf
// 00574fa6  8b01                 mov eax, dword ptr [ecx]
// 00574fa8  8b5018               mov edx, dword ptr [eax + 0x18]
// 00574fab  6a01                 push 1
// 00574fad  ffd2                 call edx
// 00574faf  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VSceneManager@Render@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
