// from server: 100% by auto
// roc 2009-06 005768b0  unit: G3D::BinaryInput  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005768b0
//
// 005768b0  51                   push ecx
// 005768b1  8b442408             mov eax, dword ptr [esp + 8]
// 005768b5  d9ee                 fldz 
// 005768b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005768bb  d95004               fst dword ptr [eax + 4]
// 005768be  d95008               fst dword ptr [eax + 8]
// 005768c1  c7042400000000       mov dword ptr [esp], 0
// 005768c8  d9500c               fst dword ptr [eax + 0xc]
// 005768cb  c7001cb78c00         mov dword ptr [eax], 0x8cb71c
// 005768d1  d95010               fst dword ptr [eax + 0x10]
// 005768d4  d95014               fst dword ptr [eax + 0x14]
// 005768d7  d95818               fstp dword ptr [eax + 0x18]
// 005768da  d901                 fld dword ptr [ecx]
// 005768dc  d95804               fstp dword ptr [eax + 4]
// 005768df  d94104               fld dword ptr [ecx + 4]
// 005768e2  d95808               fstp dword ptr [eax + 8]
// 005768e5  d94108               fld dword ptr [ecx + 8]
// 005768e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005768ec  d9580c               fstp dword ptr [eax + 0xc]
// 005768ef  d901                 fld dword ptr [ecx]
// 005768f1  d95810               fstp dword ptr [eax + 0x10]
// 005768f4  d94104               fld dword ptr [ecx + 4]
// 005768f7  d95814               fstp dword ptr [eax + 0x14]
// 005768fa  d94108               fld dword ptr [ecx + 8]
// 005768fd  d95818               fstp dword ptr [eax + 0x18]
// 00576900  59                   pop ecx
// 00576901  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromOriginAndDirection@Ray@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
