// roc 2007-03 004c2000  unit: seg_004c0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2000
//
// 004c2000  8b442404             mov eax, dword ptr [esp + 4]
// 004c2004  d981f4010000         fld dword ptr [ecx + 0x1f4]
// 004c200a  d918                 fstp dword ptr [eax]
// 004c200c  d981f8010000         fld dword ptr [ecx + 0x1f8]
// 004c2012  d95804               fstp dword ptr [eax + 4]
// 004c2015  d981fc010000         fld dword ptr [ecx + 0x1fc]
// 004c201b  d95808               fstp dword ptr [eax + 8]
// 004c201e  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?getAmbientBottom@Lighting@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
