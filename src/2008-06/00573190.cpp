// roc 2008-06 00573190  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573190
//
// 00573190  b801000000           mov eax, 1
// 00573195  8405004e9700         test byte ptr [0x974e00], al
// 0057319b  752a                 jne 0x5731c7
// 0057319d  d905b8888200         fld dword ptr [0x8288b8]
// 005731a3  0905004e9700         or dword ptr [0x974e00], eax
// 005731a9  d915f04d9700         fst dword ptr [0x974df0]
// 005731af  d915f44d9700         fst dword ptr [0x974df4]
// 005731b5  d91df84d9700         fstp dword ptr [0x974df8]
// 005731bb  d905ac9b8100         fld dword ptr [0x819bac]
// 005731c1  d91dfc4d9700         fstp dword ptr [0x974dfc]
// 005731c7  b8f04d9700           mov eax, 0x974df0
// 005731cc  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?disabledFill@GuiItem@RBX@@SAABVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
