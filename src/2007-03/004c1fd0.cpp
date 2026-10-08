// roc 2007-03 004c1fd0  unit: seg_004c0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c1fd0
//
// 004c1fd0  8b442404             mov eax, dword ptr [esp + 4]
// 004c1fd4  d981e8010000         fld dword ptr [ecx + 0x1e8]
// 004c1fda  d918                 fstp dword ptr [eax]
// 004c1fdc  d981ec010000         fld dword ptr [ecx + 0x1ec]
// 004c1fe2  d95804               fstp dword ptr [eax + 4]
// 004c1fe5  d981f0010000         fld dword ptr [ecx + 0x1f0]
// 004c1feb  d95808               fstp dword ptr [eax + 8]
// 004c1fee  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?getAmbientTop@Lighting@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
