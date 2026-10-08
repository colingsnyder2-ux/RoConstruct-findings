// roc 2007-08 005b4590  unit: RBX::Ball  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4590
//
// 005b4590  8b442404             mov eax, dword ptr [esp + 4]
// 005b4594  d94110               fld dword ptr [ecx + 0x10]
// 005b4597  d918                 fstp dword ptr [eax]
// 005b4599  d94110               fld dword ptr [ecx + 0x10]
// 005b459c  d95804               fstp dword ptr [eax + 4]
// 005b459f  d94110               fld dword ptr [ecx + 0x10]
// 005b45a2  d95808               fstp dword ptr [eax + 8]
// 005b45a5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getCenterToCorner@Ball@RBX@@UBE?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
