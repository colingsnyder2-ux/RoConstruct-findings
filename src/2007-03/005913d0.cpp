// roc 2007-03 005913d0  unit: seg_00590000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005913d0
//
// 005913d0  8b442404             mov eax, dword ptr [esp + 4]
// 005913d4  d98104020000         fld dword ptr [ecx + 0x204]
// 005913da  d918                 fstp dword ptr [eax]
// 005913dc  d98108020000         fld dword ptr [ecx + 0x208]
// 005913e2  d95804               fstp dword ptr [eax + 4]
// 005913e5  d9810c020000         fld dword ptr [ecx + 0x20c]
// 005913eb  d95808               fstp dword ptr [eax + 8]
// 005913ee  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?getClearColor3@Lighting@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
