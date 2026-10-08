// roc 2010-06 00526a90  unit: RBX::ViewG3D  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00526a90
//
// 00526a90  8b09                 mov ecx, dword ptr [ecx]
// 00526a92  85c9                 test ecx, ecx
// 00526a94  7409                 je 0x526a9f
// 00526a96  8b01                 mov eax, dword ptr [ecx]
// 00526a98  8b5018               mov edx, dword ptr [eax + 0x18]
// 00526a9b  6a01                 push 1
// 00526a9d  ffd2                 call edx
// 00526a9f  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VSceneManager@Render@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
