// from server: 100% by tester
// roc 2007-03 004978e0  unit: seg_00490000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004978e0
//
// 004978e0  c70100000000         mov dword ptr [ecx], 0
// 004978e6  c7410800000000       mov dword ptr [ecx + 8], 0
// 004978ed  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?Reset@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
