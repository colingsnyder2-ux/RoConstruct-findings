// from server: 100% by tester
// roc 2007-03 005519b0  unit: seg_00550000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005519b0
//
// 005519b0  b801000000           mov eax, 1
// 005519b5  840520c08b00         test byte ptr [0x8bc020], al
// 005519bb  752a                 jne 0x5519e7
// 005519bd  d905d0037a00         fld dword ptr [0x7a03d0]
// 005519c3  090520c08b00         or dword ptr [0x8bc020], eax
// 005519c9  d91510c08b00         fst dword ptr [0x8bc010]
// 005519cf  d91514c08b00         fst dword ptr [0x8bc014]
// 005519d5  d91d18c08b00         fstp dword ptr [0x8bc018]
// 005519db  d9058c727900         fld dword ptr [0x79728c]
// 005519e1  d91d1cc08b00         fstp dword ptr [0x8bc01c]
// 005519e7  b810c08b00           mov eax, 0x8bc010
// 005519ec  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?disabledFill@GuiItem@RBX@@SAABVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
