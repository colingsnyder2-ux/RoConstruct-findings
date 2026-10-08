// roc 2007-03 004c2190  unit: seg_004c0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2190
//
// 004c2190  8b09                 mov ecx, dword ptr [ecx]
// 004c2192  85c9                 test ecx, ecx
// 004c2194  7409                 je 0x4c219f
// 004c2196  8b01                 mov eax, dword ptr [ecx]
// 004c2198  8b5018               mov edx, dword ptr [eax + 0x18]
// 004c219b  6a01                 push 1
// 004c219d  ffd2                 call edx
// 004c219f  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VSceneManager@Render@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
