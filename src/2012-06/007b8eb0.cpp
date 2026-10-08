// roc 2012-06 007b8eb0  unit: RBX::Geometry  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b8eb0
//
// 007b8eb0  56                   push esi
// 007b8eb1  e8ca47e7ff           call 0x62d680
// 007b8eb6  8b742408             mov esi, dword ptr [esp + 8]
// 007b8eba  50                   push eax
// 007b8ebb  8bce                 mov ecx, esi
// 007b8ebd  e88e33e7ff           call 0x62c250
// 007b8ec2  8bc6                 mov eax, esi
// 007b8ec4  5e                   pop esi
// 007b8ec5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
