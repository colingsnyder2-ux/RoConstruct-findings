// roc 2010-06 0056dbd0  unit: G3D::LineSegment  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056dbd0
//
// 0056dbd0  8bc1                 mov eax, ecx
// 0056dbd2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056dbd6  d901                 fld dword ptr [ecx]
// 0056dbd8  d918                 fstp dword ptr [eax]
// 0056dbda  d94104               fld dword ptr [ecx + 4]
// 0056dbdd  d95804               fstp dword ptr [eax + 4]
// 0056dbe0  d94108               fld dword ptr [ecx + 8]
// 0056dbe3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056dbe7  d95808               fstp dword ptr [eax + 8]
// 0056dbea  d901                 fld dword ptr [ecx]
// 0056dbec  d9580c               fstp dword ptr [eax + 0xc]
// 0056dbef  d94104               fld dword ptr [ecx + 4]
// 0056dbf2  d95810               fstp dword ptr [eax + 0x10]
// 0056dbf5  d94108               fld dword ptr [ecx + 8]
// 0056dbf8  d95814               fstp dword ptr [eax + 0x14]
// 0056dbfb  dd44240c             fld qword ptr [esp + 0xc]
// 0056dbff  dd5818               fstp qword ptr [eax + 0x18]
// 0056dc02  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Capsule@G3D@@QAE@ABVVector3@1@0N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
