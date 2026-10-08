// from server: 100% by auto
// roc 2007-08 0051d890  unit: seg_00510000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d890
//
// 0051d890  51                   push ecx
// 0051d891  8b442408             mov eax, dword ptr [esp + 8]
// 0051d895  d9ee                 fldz 
// 0051d897  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051d89b  d95004               fst dword ptr [eax + 4]
// 0051d89e  d95008               fst dword ptr [eax + 8]
// 0051d8a1  c7042400000000       mov dword ptr [esp], 0
// 0051d8a8  d9500c               fst dword ptr [eax + 0xc]
// 0051d8ab  c70004067a00         mov dword ptr [eax], 0x7a0604
// 0051d8b1  d95010               fst dword ptr [eax + 0x10]
// 0051d8b4  d95014               fst dword ptr [eax + 0x14]
// 0051d8b7  d95818               fstp dword ptr [eax + 0x18]
// 0051d8ba  d901                 fld dword ptr [ecx]
// 0051d8bc  d95804               fstp dword ptr [eax + 4]
// 0051d8bf  d94104               fld dword ptr [ecx + 4]
// 0051d8c2  d95808               fstp dword ptr [eax + 8]
// 0051d8c5  d94108               fld dword ptr [ecx + 8]
// 0051d8c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051d8cc  d9580c               fstp dword ptr [eax + 0xc]
// 0051d8cf  d901                 fld dword ptr [ecx]
// 0051d8d1  d95810               fstp dword ptr [eax + 0x10]
// 0051d8d4  d94104               fld dword ptr [ecx + 4]
// 0051d8d7  d95814               fstp dword ptr [eax + 0x14]
// 0051d8da  d94108               fld dword ptr [ecx + 8]
// 0051d8dd  d95818               fstp dword ptr [eax + 0x18]
// 0051d8e0  59                   pop ecx
// 0051d8e1  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromOriginAndDirection@Ray@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
