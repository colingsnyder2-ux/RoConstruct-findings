// roc 2007-03 004c0740  unit: seg_004c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0740
//
// 004c0740  8a8158020000         mov al, byte ptr [ecx + 0x258]
// 004c0746  c3                   ret 
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?IsKeySet@DataBlockEncryptor@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
