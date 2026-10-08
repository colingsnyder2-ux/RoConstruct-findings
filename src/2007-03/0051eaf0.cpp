// roc 2007-03 0051eaf0  unit: seg_00510000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051eaf0
//
// 0051eaf0  83ec10               sub esp, 0x10
// 0051eaf3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051eaf7  d900                 fld dword ptr [eax]
// 0051eaf9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051eafd  d821                 fsub dword ptr [ecx]
// 0051eaff  c7042400000000       mov dword ptr [esp], 0
// 0051eb06  d95c2404             fstp dword ptr [esp + 4]
// 0051eb0a  d94004               fld dword ptr [eax + 4]
// 0051eb0d  d86104               fsub dword ptr [ecx + 4]
// 0051eb10  d95c2408             fstp dword ptr [esp + 8]
// 0051eb14  d94008               fld dword ptr [eax + 8]
// 0051eb17  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051eb1b  d86108               fsub dword ptr [ecx + 8]
// 0051eb1e  c70064447a00         mov dword ptr [eax], 0x7a4464
// 0051eb24  d95c240c             fstp dword ptr [esp + 0xc]
// 0051eb28  d901                 fld dword ptr [ecx]
// 0051eb2a  d95804               fstp dword ptr [eax + 4]
// 0051eb2d  d94104               fld dword ptr [ecx + 4]
// 0051eb30  d95808               fstp dword ptr [eax + 8]
// 0051eb33  d94108               fld dword ptr [ecx + 8]
// 0051eb36  d9580c               fstp dword ptr [eax + 0xc]
// 0051eb39  d9442404             fld dword ptr [esp + 4]
// 0051eb3d  d95810               fstp dword ptr [eax + 0x10]
// 0051eb40  d9442408             fld dword ptr [esp + 8]
// 0051eb44  d95814               fstp dword ptr [eax + 0x14]
// 0051eb47  d944240c             fld dword ptr [esp + 0xc]
// 0051eb4b  d95818               fstp dword ptr [eax + 0x18]
// 0051eb4e  83c410               add esp, 0x10
// 0051eb51  c3                   ret 
// library rbxgs/v8datamodel\JointInstance.cpp (function ?fromTwoPoints@LineSegment@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
