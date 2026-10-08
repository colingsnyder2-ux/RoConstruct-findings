// roc 2007-08 0052fcc0  unit: RBX::ICameraSubject  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052fcc0
//
// 0052fcc0  d905c44c7a00         fld dword ptr [0x7a4cc4]
// 0052fcc6  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?getLerp@ICameraSubject@RBX@@UBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
