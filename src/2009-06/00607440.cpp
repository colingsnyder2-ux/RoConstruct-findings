// from server: 100% by tester
// roc 2007-03 00551ab0  unit: seg_00550000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551ab0
//
// 00551ab0  b801000000           mov eax, 1
// 00551ab5  840570c08b00         test byte ptr [0x8bc070], al
// 00551abb  7524                 jne 0x551ae1
// 00551abd  d905c8827a00         fld dword ptr [0x7a82c8]
// 00551ac3  090570c08b00         or dword ptr [0x8bc070], eax
// 00551ac9  d91560c08b00         fst dword ptr [0x8bc060]
// 00551acf  d91564c08b00         fst dword ptr [0x8bc064]
// 00551ad5  d91568c08b00         fst dword ptr [0x8bc068]
// 00551adb  d91d6cc08b00         fstp dword ptr [0x8bc06c]
// 00551ae1  b860c08b00           mov eax, 0x8bc060
// 00551ae6  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?translucentBackdrop@GuiItem@RBX@@SAABVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
