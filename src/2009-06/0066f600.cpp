// roc 2009-06 0066f600  unit: RBX::Geometry  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f600
//
// 0066f600  56                   push esi
// 0066f601  e82a91f0ff           call 0x578730
// 0066f606  8b742408             mov esi, dword ptr [esp + 8]
// 0066f60a  50                   push eax
// 0066f60b  8bce                 mov ecx, esi
// 0066f60d  e86ea9e2ff           call 0x499f80
// 0066f612  8bc6                 mov eax, esi
// 0066f614  5e                   pop esi
// 0066f615  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
