// roc 2009-06 005769f0  unit: G3D::Line  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005769f0
//
// 005769f0  51                   push ecx
// 005769f1  8b442410             mov eax, dword ptr [esp + 0x10]
// 005769f5  d900                 fld dword ptr [eax]
// 005769f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005769fb  d821                 fsub dword ptr [ecx]
// 005769fd  c7042400000000       mov dword ptr [esp], 0
// 00576a04  d94004               fld dword ptr [eax + 4]
// 00576a07  d86104               fsub dword ptr [ecx + 4]
// 00576a0a  d94008               fld dword ptr [eax + 8]
// 00576a0d  8b442408             mov eax, dword ptr [esp + 8]
// 00576a11  d86108               fsub dword ptr [ecx + 8]
// 00576a14  c70094b88c00         mov dword ptr [eax], 0x8cb894
// 00576a1a  d901                 fld dword ptr [ecx]
// 00576a1c  d95804               fstp dword ptr [eax + 4]
// 00576a1f  d94104               fld dword ptr [ecx + 4]
// 00576a22  d95808               fstp dword ptr [eax + 8]
// 00576a25  d94108               fld dword ptr [ecx + 8]
// 00576a28  d9580c               fstp dword ptr [eax + 0xc]
// 00576a2b  d9ca                 fxch st(2)
// 00576a2d  d95810               fstp dword ptr [eax + 0x10]
// 00576a30  d95814               fstp dword ptr [eax + 0x14]
// 00576a33  d95818               fstp dword ptr [eax + 0x18]
// 00576a36  59                   pop ecx
// 00576a37  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ?fromTwoPoints@LineSegment@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
