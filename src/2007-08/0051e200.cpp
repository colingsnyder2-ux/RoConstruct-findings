// from server: 100% by auto
// roc 2007-08 0051e200  unit: seg_00510000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e200
//
// 0051e200  d94104               fld dword ptr [ecx + 4]
// 0051e203  8b442404             mov eax, dword ptr [esp + 4]
// 0051e207  d918                 fstp dword ptr [eax]
// 0051e209  d94108               fld dword ptr [ecx + 8]
// 0051e20c  d95804               fstp dword ptr [eax + 4]
// 0051e20f  d9410c               fld dword ptr [ecx + 0xc]
// 0051e212  d95808               fstp dword ptr [eax + 8]
// 0051e215  8b442408             mov eax, dword ptr [esp + 8]
// 0051e219  d94110               fld dword ptr [ecx + 0x10]
// 0051e21c  d9e0                 fchs 
// 0051e21e  dd18                 fstp qword ptr [eax]
// 0051e220  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ?getEquation@Plane@G3D@@QBEXAAVVector3@2@AAN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
