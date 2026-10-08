// from server: 100% by auto
// roc 2008-06 00525fe0  unit: G3D::Line  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525fe0
//
// 00525fe0  8bc1                 mov eax, ecx
// 00525fe2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00525fe6  d901                 fld dword ptr [ecx]
// 00525fe8  d918                 fstp dword ptr [eax]
// 00525fea  d94104               fld dword ptr [ecx + 4]
// 00525fed  d95804               fstp dword ptr [eax + 4]
// 00525ff0  d94108               fld dword ptr [ecx + 8]
// 00525ff3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00525ff7  d95808               fstp dword ptr [eax + 8]
// 00525ffa  d901                 fld dword ptr [ecx]
// 00525ffc  d9580c               fstp dword ptr [eax + 0xc]
// 00525fff  d94104               fld dword ptr [ecx + 4]
// 00526002  d95810               fstp dword ptr [eax + 0x10]
// 00526005  d94108               fld dword ptr [ecx + 8]
// 00526008  d95814               fstp dword ptr [eax + 0x14]
// 0052600b  dd44240c             fld qword ptr [esp + 0xc]
// 0052600f  dd5818               fstp qword ptr [eax + 0x18]
// 00526012  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Capsule@G3D@@QAE@ABVVector3@1@0N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
