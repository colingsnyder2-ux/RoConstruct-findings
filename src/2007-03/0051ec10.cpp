// roc 2007-03 0051ec10  unit: seg_00510000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051ec10
//
// 0051ec10  8bc1                 mov eax, ecx
// 0051ec12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051ec16  d901                 fld dword ptr [ecx]
// 0051ec18  d918                 fstp dword ptr [eax]
// 0051ec1a  d94104               fld dword ptr [ecx + 4]
// 0051ec1d  d95804               fstp dword ptr [eax + 4]
// 0051ec20  d94108               fld dword ptr [ecx + 8]
// 0051ec23  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051ec27  d95808               fstp dword ptr [eax + 8]
// 0051ec2a  d901                 fld dword ptr [ecx]
// 0051ec2c  d9580c               fstp dword ptr [eax + 0xc]
// 0051ec2f  d94104               fld dword ptr [ecx + 4]
// 0051ec32  d95810               fstp dword ptr [eax + 0x10]
// 0051ec35  d94108               fld dword ptr [ecx + 8]
// 0051ec38  d95814               fstp dword ptr [eax + 0x14]
// 0051ec3b  dd44240c             fld qword ptr [esp + 0xc]
// 0051ec3f  dd5818               fstp qword ptr [eax + 0x18]
// 0051ec42  c21000               ret 0x10
// library rbxgs-g3d/G3Dcpp\Capsule.cpp (function ??0Capsule@G3D@@QAE@ABVVector3@1@0N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Capsule.cpp
