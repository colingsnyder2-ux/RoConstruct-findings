// roc 2007-08 004cd5d0  unit: G3D::_WeakPtr  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd5d0
//
// 004cd5d0  8b09                 mov ecx, dword ptr [ecx]
// 004cd5d2  85c9                 test ecx, ecx
// 004cd5d4  7409                 je 0x4cd5df
// 004cd5d6  8b01                 mov eax, dword ptr [ecx]
// 004cd5d8  8b5018               mov edx, dword ptr [eax + 0x18]
// 004cd5db  6a01                 push 1
// 004cd5dd  ffd2                 call edx
// 004cd5df  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VSceneManager@Render@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
