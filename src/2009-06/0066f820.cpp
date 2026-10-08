// roc 2009-06 0066f820  unit: RBX::Ball  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f820
//
// 0066f820  8b442404             mov eax, dword ptr [esp + 4]
// 0066f824  d94110               fld dword ptr [ecx + 0x10]
// 0066f827  d918                 fstp dword ptr [eax]
// 0066f829  d94110               fld dword ptr [ecx + 0x10]
// 0066f82c  d95804               fstp dword ptr [eax + 4]
// 0066f82f  d94110               fld dword ptr [ecx + 0x10]
// 0066f832  d95808               fstp dword ptr [eax + 8]
// 0066f835  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getCenterToCorner@Ball@RBX@@UBE?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
