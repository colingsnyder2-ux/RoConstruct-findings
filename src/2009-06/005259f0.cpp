// roc 2009-06 005259f0  unit: RBX::ViewRbxGfx  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005259f0
//
// 005259f0  8b09                 mov ecx, dword ptr [ecx]
// 005259f2  85c9                 test ecx, ecx
// 005259f4  7409                 je 0x5259ff
// 005259f6  8b01                 mov eax, dword ptr [ecx]
// 005259f8  8b5018               mov edx, dword ptr [eax + 0x18]
// 005259fb  6a01                 push 1
// 005259fd  ffd2                 call edx
// 005259ff  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VSceneManager@Render@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
