// roc 2007-08 00555530  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555530
//
// 00555530  b801000000           mov eax, 1
// 00555535  8405501e8c00         test byte ptr [0x8c1e50], al
// 0055553b  7524                 jne 0x555561
// 0055553d  d90540837a00         fld dword ptr [0x7a8340]
// 00555543  0905501e8c00         or dword ptr [0x8c1e50], eax
// 00555549  d915401e8c00         fst dword ptr [0x8c1e40]
// 0055554f  d915441e8c00         fst dword ptr [0x8c1e44]
// 00555555  d915481e8c00         fst dword ptr [0x8c1e48]
// 0055555b  d91d4c1e8c00         fstp dword ptr [0x8c1e4c]
// 00555561  b8401e8c00           mov eax, 0x8c1e40
// 00555566  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?translucentBackdrop@GuiItem@RBX@@SAABVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
