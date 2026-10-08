// from server: 100% by auto
// roc 2007-08 00523e30  unit: seg_00520000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523e30
//
// 00523e30  83ec10               sub esp, 0x10
// 00523e33  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00523e37  d900                 fld dword ptr [eax]
// 00523e39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00523e3d  d821                 fsub dword ptr [ecx]
// 00523e3f  c7042400000000       mov dword ptr [esp], 0
// 00523e46  d95c2404             fstp dword ptr [esp + 4]
// 00523e4a  d94004               fld dword ptr [eax + 4]
// 00523e4d  d86104               fsub dword ptr [ecx + 4]
// 00523e50  d95c2408             fstp dword ptr [esp + 8]
// 00523e54  d94008               fld dword ptr [eax + 8]
// 00523e57  8b442414             mov eax, dword ptr [esp + 0x14]
// 00523e5b  d86108               fsub dword ptr [ecx + 8]
// 00523e5e  c7007c447a00         mov dword ptr [eax], 0x7a447c
// 00523e64  d95c240c             fstp dword ptr [esp + 0xc]
// 00523e68  d901                 fld dword ptr [ecx]
// 00523e6a  d95804               fstp dword ptr [eax + 4]
// 00523e6d  d94104               fld dword ptr [ecx + 4]
// 00523e70  d95808               fstp dword ptr [eax + 8]
// 00523e73  d94108               fld dword ptr [ecx + 8]
// 00523e76  d9580c               fstp dword ptr [eax + 0xc]
// 00523e79  d9442404             fld dword ptr [esp + 4]
// 00523e7d  d95810               fstp dword ptr [eax + 0x10]
// 00523e80  d9442408             fld dword ptr [esp + 8]
// 00523e84  d95814               fstp dword ptr [eax + 0x14]
// 00523e87  d944240c             fld dword ptr [esp + 0xc]
// 00523e8b  d95818               fstp dword ptr [eax + 0x18]
// 00523e8e  83c410               add esp, 0x10
// 00523e91  c3                   ret 
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?fromTwoPoints@LineSegment@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
