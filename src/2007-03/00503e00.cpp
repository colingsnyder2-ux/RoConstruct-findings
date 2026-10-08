// roc 2007-03 00503e00  unit: seg_00500000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503e00
//
// 00503e00  83ec0c               sub esp, 0xc
// 00503e03  8b442410             mov eax, dword ptr [esp + 0x10]
// 00503e07  d900                 fld dword ptr [eax]
// 00503e09  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00503e0d  d91c24               fstp dword ptr [esp]
// 00503e10  d94004               fld dword ptr [eax + 4]
// 00503e13  d95c2404             fstp dword ptr [esp + 4]
// 00503e17  d94008               fld dword ptr [eax + 8]
// 00503e1a  d95c2408             fstp dword ptr [esp + 8]
// 00503e1e  d901                 fld dword ptr [ecx]
// 00503e20  d918                 fstp dword ptr [eax]
// 00503e22  d94104               fld dword ptr [ecx + 4]
// 00503e25  d95804               fstp dword ptr [eax + 4]
// 00503e28  d94108               fld dword ptr [ecx + 8]
// 00503e2b  d95808               fstp dword ptr [eax + 8]
// 00503e2e  d90424               fld dword ptr [esp]
// 00503e31  d919                 fstp dword ptr [ecx]
// 00503e33  d9442404             fld dword ptr [esp + 4]
// 00503e37  d95904               fstp dword ptr [ecx + 4]
// 00503e3a  d9442408             fld dword ptr [esp + 8]
// 00503e3e  d95908               fstp dword ptr [ecx + 8]
// 00503e41  83c40c               add esp, 0xc
// 00503e44  c3                   ret 
// library rbxgs/v8world\RotateJoint.cpp (function ??$swap@VVector3@G3D@@@std@@YAXAAVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RotateJoint.cpp
