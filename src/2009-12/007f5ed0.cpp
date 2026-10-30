// roc 2009-12 007f5ed0  unit: CRobloxControlColorSelector  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5ed0
//
// 007f5ed0  56                   push esi
// 007f5ed1  8bf1                 mov esi, ecx
// 007f5ed3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f5ed9  6a00                 push 0
// 007f5edb  6aff                 push -1
// 007f5edd  e8be060100           call 0x8065a0
// 007f5ee2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f5ee8  8b01                 mov eax, dword ptr [ecx]
// 007f5eea  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007f5ef0  6a00                 push 0
// 007f5ef2  6aff                 push -1
// 007f5ef4  ffd2                 call edx
// 007f5ef6  5e                   pop esi
// 007f5ef7  c21000               ret 0x10
// copied from an identical function in another client (function ?OnCustomizeDragOver@CXTPControl@@MAEXPAV1@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp