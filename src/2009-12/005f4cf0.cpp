// roc 2009-12 005f4cf0  unit: seg_005f0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4cf0
//
// 005f4cf0  8b442404             mov eax, dword ptr [esp + 4]
// 005f4cf4  d901                 fld dword ptr [ecx]
// 005f4cf6  d918                 fstp dword ptr [eax]
// 005f4cf8  d94104               fld dword ptr [ecx + 4]
// 005f4cfb  d95804               fstp dword ptr [eax + 4]
// 005f4cfe  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ?x0y0@Rect2D@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
