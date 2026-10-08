// roc 2007-08 005b44b0  unit: RBX::Geometry  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b44b0
//
// 005b44b0  56                   push esi
// 005b44b1  e8fa5ff5ff           call 0x50a4b0
// 005b44b6  8b742408             mov esi, dword ptr [esp + 8]
// 005b44ba  50                   push eax
// 005b44bb  8bce                 mov ecx, esi
// 005b44bd  e80e51f5ff           call 0x5095d0
// 005b44c2  8bc6                 mov eax, esi
// 005b44c4  5e                   pop esi
// 005b44c5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
