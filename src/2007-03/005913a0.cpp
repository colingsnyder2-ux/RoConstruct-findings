// roc 2007-03 005913a0  unit: seg_00590000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005913a0
//
// 005913a0  8b442404             mov eax, dword ptr [esp + 4]
// 005913a4  d98114010000         fld dword ptr [ecx + 0x114]
// 005913aa  d918                 fstp dword ptr [eax]
// 005913ac  d98118010000         fld dword ptr [ecx + 0x118]
// 005913b2  d95804               fstp dword ptr [eax + 4]
// 005913b5  d9811c010000         fld dword ptr [ecx + 0x11c]
// 005913bb  d95808               fstp dword ptr [eax + 8]
// 005913be  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?getLightColor@Lighting@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
