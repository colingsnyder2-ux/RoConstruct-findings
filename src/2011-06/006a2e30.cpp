// roc 2011-06 006a2e30  unit: RBX::Geometry  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a2e30
//
// 006a2e30  56                   push esi
// 006a2e31  e8aae5e9ff           call 0x5413e0
// 006a2e36  8b742408             mov esi, dword ptr [esp + 8]
// 006a2e3a  50                   push eax
// 006a2e3b  8bce                 mov ecx, esi
// 006a2e3d  e80ed2e9ff           call 0x540050
// 006a2e42  8bc6                 mov eax, esi
// 006a2e44  5e                   pop esi
// 006a2e45  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
