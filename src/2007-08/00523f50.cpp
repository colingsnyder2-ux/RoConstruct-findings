// from server: 100% by auto
// roc 2007-08 00523f50  unit: G3D::Line  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523f50
//
// 00523f50  8bc1                 mov eax, ecx
// 00523f52  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00523f56  d901                 fld dword ptr [ecx]
// 00523f58  d918                 fstp dword ptr [eax]
// 00523f5a  d94104               fld dword ptr [ecx + 4]
// 00523f5d  d95804               fstp dword ptr [eax + 4]
// 00523f60  d94108               fld dword ptr [ecx + 8]
// 00523f63  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00523f67  d95808               fstp dword ptr [eax + 8]
// 00523f6a  d901                 fld dword ptr [ecx]
// 00523f6c  d9580c               fstp dword ptr [eax + 0xc]
// 00523f6f  d94104               fld dword ptr [ecx + 4]
// 00523f72  d95810               fstp dword ptr [eax + 0x10]
// 00523f75  d94108               fld dword ptr [ecx + 8]
// 00523f78  d95814               fstp dword ptr [eax + 0x14]
// 00523f7b  dd44240c             fld qword ptr [esp + 0xc]
// 00523f7f  dd5818               fstp qword ptr [eax + 0x18]
// 00523f82  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Capsule@G3D@@QAE@ABVVector3@1@0N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
