// from server: 100% by auto
// roc 2008-06 005187a0  unit: G3D::TextInput::WrongSymbol  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005187a0
//
// 005187a0  8b442408             mov eax, dword ptr [esp + 8]
// 005187a4  56                   push esi
// 005187a5  8b742408             mov esi, dword ptr [esp + 8]
// 005187a9  50                   push eax
// 005187aa  56                   push esi
// 005187ab  e8d0ddf5ff           call 0x476580
// 005187b0  8bc6                 mov eax, esi
// 005187b2  5e                   pop esi
// 005187b3  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?normalToWorldSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
