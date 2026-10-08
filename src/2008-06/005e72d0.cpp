// roc 2008-06 005e72d0  unit: RBX::Geometry  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e72d0
//
// 005e72d0  56                   push esi
// 005e72d1  e8eacaf2ff           call 0x513dc0
// 005e72d6  8b742408             mov esi, dword ptr [esp + 8]
// 005e72da  50                   push eax
// 005e72db  8bce                 mov ecx, esi
// 005e72dd  e83ebff2ff           call 0x513220
// 005e72e2  8bc6                 mov eax, esi
// 005e72e4  5e                   pop esi
// 005e72e5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
