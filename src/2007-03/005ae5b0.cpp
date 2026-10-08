// roc 2007-03 005ae5b0  unit: seg_005a0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae5b0
//
// 005ae5b0  56                   push esi
// 005ae5b1  e80a16f5ff           call 0x4ffbc0
// 005ae5b6  8b742408             mov esi, dword ptr [esp + 8]
// 005ae5ba  50                   push eax
// 005ae5bb  8bce                 mov ecx, esi
// 005ae5bd  e8be03f5ff           call 0x4fe980
// 005ae5c2  8bc6                 mov eax, esi
// 005ae5c4  5e                   pop esi
// 005ae5c5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
