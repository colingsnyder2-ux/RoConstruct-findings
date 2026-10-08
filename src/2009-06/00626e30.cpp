// roc 2009-06 00626e30  unit: RBX::Tool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00626e30
//
// 00626e30  8b442404             mov eax, dword ptr [esp + 4]
// 00626e34  d9814c010000         fld dword ptr [ecx + 0x14c]
// 00626e3a  d918                 fstp dword ptr [eax]
// 00626e3c  d98150010000         fld dword ptr [ecx + 0x150]
// 00626e42  d95804               fstp dword ptr [eax + 4]
// 00626e45  d98154010000         fld dword ptr [ecx + 0x154]
// 00626e4b  d95808               fstp dword ptr [eax + 8]
// 00626e4e  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?getLightColor@Lighting@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
