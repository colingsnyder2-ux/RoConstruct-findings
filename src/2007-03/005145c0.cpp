// roc 2007-03 005145c0  unit: seg_00510000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005145c0
//
// 005145c0  d94104               fld dword ptr [ecx + 4]
// 005145c3  8b442404             mov eax, dword ptr [esp + 4]
// 005145c7  d918                 fstp dword ptr [eax]
// 005145c9  d94108               fld dword ptr [ecx + 8]
// 005145cc  d95804               fstp dword ptr [eax + 4]
// 005145cf  d9410c               fld dword ptr [ecx + 0xc]
// 005145d2  d95808               fstp dword ptr [eax + 8]
// 005145d5  8b442408             mov eax, dword ptr [esp + 8]
// 005145d9  d94110               fld dword ptr [ecx + 0x10]
// 005145dc  d9e0                 fchs 
// 005145de  dd18                 fstp qword ptr [eax]
// 005145e0  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Plane.cpp (function ?getEquation@Plane@G3D@@QBEXAAVVector3@2@AAN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Plane.cpp
