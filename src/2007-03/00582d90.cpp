// roc 2007-03 00582d90  unit: seg_00580000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00582d90
//
// 00582d90  51                   push ecx
// 00582d91  e88affffff           call 0x582d20
// 00582d96  8bc8                 mov ecx, eax
// 00582d98  83c144               add ecx, 0x44
// 00582d9b  e880e4ffff           call 0x581220
// 00582da0  8b00                 mov eax, dword ptr [eax]
// 00582da2  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?getClosestPaletteIndex@BrickColor@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
