// roc 2008-06 00525ad0  unit: seg_00520000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525ad0
//
// 00525ad0  d94104               fld dword ptr [ecx + 4]
// 00525ad3  8b442404             mov eax, dword ptr [esp + 4]
// 00525ad7  d918                 fstp dword ptr [eax]
// 00525ad9  d94108               fld dword ptr [ecx + 8]
// 00525adc  d95804               fstp dword ptr [eax + 4]
// 00525adf  d9410c               fld dword ptr [ecx + 0xc]
// 00525ae2  d95808               fstp dword ptr [eax + 8]
// 00525ae5  8b442408             mov eax, dword ptr [esp + 8]
// 00525ae9  d94110               fld dword ptr [ecx + 0x10]
// 00525aec  d9e0                 fchs 
// 00525aee  d918                 fstp dword ptr [eax]
// 00525af0  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ?getEquation@Plane@G3D@@QBEXAAVVector3@2@AAM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
