// roc 2007-08 00586620  unit: RBX::VHat::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586620
//
// 00586620  51                   push ecx
// 00586621  e88affffff           call 0x5865b0
// 00586626  8bc8                 mov ecx, eax
// 00586628  83c144               add ecx, 0x44
// 0058662b  e870e3ffff           call 0x5849a0
// 00586630  8b00                 mov eax, dword ptr [eax]
// 00586632  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?getClosestPaletteIndex@BrickColor@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
