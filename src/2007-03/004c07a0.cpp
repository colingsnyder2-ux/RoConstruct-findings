// roc 2007-03 004c07a0  unit: seg_004c0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c07a0
//
// 004c07a0  c6815802000000       mov byte ptr [ecx + 0x258], 0
// 004c07a7  c3                   ret 
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?UnsetKey@DataBlockEncryptor@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
