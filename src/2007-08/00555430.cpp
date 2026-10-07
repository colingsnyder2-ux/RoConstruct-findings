// roc 2007-08 00555430  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555430
//
// 00555430  b801000000           mov eax, 1
// 00555435  8405001e8c00         test byte ptr [0x8c1e00], al
// 0055543b  752a                 jne 0x555467
// 0055543d  d905e00b7a00         fld dword ptr [0x7a0be0]
// 00555443  0905001e8c00         or dword ptr [0x8c1e00], eax
// 00555449  d915f01d8c00         fst dword ptr [0x8c1df0]
// 0055544f  d915f41d8c00         fst dword ptr [0x8c1df4]
// 00555455  d91df81d8c00         fstp dword ptr [0x8c1df8]
// 0055545b  d9059c7e7900         fld dword ptr [0x797e9c]
// 00555461  d91dfc1d8c00         fstp dword ptr [0x8c1dfc]
// 00555467  b8f01d8c00           mov eax, 0x8c1df0
// 0055546c  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?disabledFill@GuiItem@RBX@@SAABVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
