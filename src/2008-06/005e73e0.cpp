// roc 2008-06 005e73e0  unit: RBX::Ball  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e73e0
//
// 005e73e0  8b442404             mov eax, dword ptr [esp + 4]
// 005e73e4  d94110               fld dword ptr [ecx + 0x10]
// 005e73e7  d918                 fstp dword ptr [eax]
// 005e73e9  d94110               fld dword ptr [ecx + 0x10]
// 005e73ec  d95804               fstp dword ptr [eax + 4]
// 005e73ef  d94110               fld dword ptr [ecx + 0x10]
// 005e73f2  d95808               fstp dword ptr [eax + 8]
// 005e73f5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getCenterToCorner@Ball@RBX@@UBE?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
