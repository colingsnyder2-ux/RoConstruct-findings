// roc 2009-06 0058a110  unit: seg_00580000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a110
//
// 0058a110  8bc1                 mov eax, ecx
// 0058a112  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058a116  d901                 fld dword ptr [ecx]
// 0058a118  d918                 fstp dword ptr [eax]
// 0058a11a  d94104               fld dword ptr [ecx + 4]
// 0058a11d  d95804               fstp dword ptr [eax + 4]
// 0058a120  d94108               fld dword ptr [ecx + 8]
// 0058a123  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058a127  d95808               fstp dword ptr [eax + 8]
// 0058a12a  d901                 fld dword ptr [ecx]
// 0058a12c  d9580c               fstp dword ptr [eax + 0xc]
// 0058a12f  d94104               fld dword ptr [ecx + 4]
// 0058a132  d95810               fstp dword ptr [eax + 0x10]
// 0058a135  d94108               fld dword ptr [ecx + 8]
// 0058a138  d95814               fstp dword ptr [eax + 0x14]
// 0058a13b  dd44240c             fld qword ptr [esp + 0xc]
// 0058a13f  dd5818               fstp qword ptr [eax + 0x18]
// 0058a142  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Capsule@G3D@@QAE@ABVVector3@1@0N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
