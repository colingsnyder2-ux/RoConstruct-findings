// roc 2008-06 004d71c0  unit: RBX::ViewNew::ViewRbxGfx  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d71c0
//
// 004d71c0  8b09                 mov ecx, dword ptr [ecx]
// 004d71c2  85c9                 test ecx, ecx
// 004d71c4  7409                 je 0x4d71cf
// 004d71c6  8b01                 mov eax, dword ptr [ecx]
// 004d71c8  8b5018               mov edx, dword ptr [eax + 0x18]
// 004d71cb  6a01                 push 1
// 004d71cd  ffd2                 call edx
// 004d71cf  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VSceneManager@Render@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
