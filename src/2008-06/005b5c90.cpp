// roc 2008-06 005b5c90  unit: RBX::VHat::?$FactoryProduct  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b5c90
//
// 005b5c90  51                   push ecx
// 005b5c91  e88affffff           call 0x5b5c20
// 005b5c96  8bc8                 mov ecx, eax
// 005b5c98  81c190000000         add ecx, 0x90
// 005b5c9e  e82d77ebff           call 0x46d3d0
// 005b5ca3  8b00                 mov eax, dword ptr [eax]
// 005b5ca5  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?getClosestPaletteIndex@BrickColor@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
