// roc 2012-06 007ba970  unit: RBX::MegaClusterPoly  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ba970
//
// 007ba970  56                   push esi
// 007ba971  e87a2de7ff           call 0x62d6f0
// 007ba976  8b742408             mov esi, dword ptr [esp + 8]
// 007ba97a  50                   push eax
// 007ba97b  8bce                 mov ecx, esi
// 007ba97d  e8ce18e7ff           call 0x62c250
// 007ba982  8bc6                 mov eax, esi
// 007ba984  5e                   pop esi
// 007ba985  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
