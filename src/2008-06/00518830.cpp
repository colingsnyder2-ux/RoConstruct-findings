// roc 2008-06 00518830  unit: G3D::TextInput::WrongSymbol  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518830
//
// 00518830  51                   push ecx
// 00518831  8b442408             mov eax, dword ptr [esp + 8]
// 00518835  d9ee                 fldz 
// 00518837  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051883b  d95004               fst dword ptr [eax + 4]
// 0051883e  d95008               fst dword ptr [eax + 8]
// 00518841  c7042400000000       mov dword ptr [esp], 0
// 00518848  d9500c               fst dword ptr [eax + 0xc]
// 0051884b  c700c4828200         mov dword ptr [eax], 0x8282c4
// 00518851  d95010               fst dword ptr [eax + 0x10]
// 00518854  d95014               fst dword ptr [eax + 0x14]
// 00518857  d95818               fstp dword ptr [eax + 0x18]
// 0051885a  d901                 fld dword ptr [ecx]
// 0051885c  d95804               fstp dword ptr [eax + 4]
// 0051885f  d94104               fld dword ptr [ecx + 4]
// 00518862  d95808               fstp dword ptr [eax + 8]
// 00518865  d94108               fld dword ptr [ecx + 8]
// 00518868  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051886c  d9580c               fstp dword ptr [eax + 0xc]
// 0051886f  d901                 fld dword ptr [ecx]
// 00518871  d95810               fstp dword ptr [eax + 0x10]
// 00518874  d94104               fld dword ptr [ecx + 4]
// 00518877  d95814               fstp dword ptr [eax + 0x14]
// 0051887a  d94108               fld dword ptr [ecx + 8]
// 0051887d  d95818               fstp dword ptr [eax + 0x18]
// 00518880  59                   pop ecx
// 00518881  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromOriginAndDirection@Ray@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
