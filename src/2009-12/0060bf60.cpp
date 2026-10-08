// roc 2009-12 0060bf60  unit: seg_00600000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bf60
//
// 0060bf60  8bc1                 mov eax, ecx
// 0060bf62  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bf66  d901                 fld dword ptr [ecx]
// 0060bf68  d918                 fstp dword ptr [eax]
// 0060bf6a  d94104               fld dword ptr [ecx + 4]
// 0060bf6d  d95804               fstp dword ptr [eax + 4]
// 0060bf70  d94108               fld dword ptr [ecx + 8]
// 0060bf73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060bf77  d95808               fstp dword ptr [eax + 8]
// 0060bf7a  d901                 fld dword ptr [ecx]
// 0060bf7c  d9580c               fstp dword ptr [eax + 0xc]
// 0060bf7f  d94104               fld dword ptr [ecx + 4]
// 0060bf82  d95810               fstp dword ptr [eax + 0x10]
// 0060bf85  d94108               fld dword ptr [ecx + 8]
// 0060bf88  d95814               fstp dword ptr [eax + 0x14]
// 0060bf8b  dd44240c             fld qword ptr [esp + 0xc]
// 0060bf8f  dd5818               fstp qword ptr [eax + 0x18]
// 0060bf92  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Capsule@G3D@@QAE@ABVVector3@1@0N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
