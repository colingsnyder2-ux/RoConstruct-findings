// roc 2008-06 00584940  unit: RBX::ModelInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584940
//
// 00584940  d905c86f8200         fld dword ptr [0x826fc8]
// 00584946  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?getLerp@ICameraSubject@RBX@@UBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
