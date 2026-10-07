// roc 2008-06 00573290  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573290
//
// 00573290  b801000000           mov eax, 1
// 00573295  8405504e9700         test byte ptr [0x974e50], al
// 0057329b  7524                 jne 0x5732c1
// 0057329d  d90538f88200         fld dword ptr [0x82f838]
// 005732a3  0905504e9700         or dword ptr [0x974e50], eax
// 005732a9  d915404e9700         fst dword ptr [0x974e40]
// 005732af  d915444e9700         fst dword ptr [0x974e44]
// 005732b5  d915484e9700         fst dword ptr [0x974e48]
// 005732bb  d91d4c4e9700         fstp dword ptr [0x974e4c]
// 005732c1  b8404e9700           mov eax, 0x974e40
// 005732c6  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?translucentBackdrop@GuiItem@RBX@@SAABVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
