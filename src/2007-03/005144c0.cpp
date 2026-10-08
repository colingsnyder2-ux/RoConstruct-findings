// roc 2007-03 005144c0  unit: seg_00510000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005144c0
//
// 005144c0  d9ee                 fldz 
// 005144c2  83ec0c               sub esp, 0xc
// 005144c5  56                   push esi
// 005144c6  8bf1                 mov esi, ecx
// 005144c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005144cc  c7063cfd7900         mov dword ptr [esi], 0x79fd3c
// 005144d2  d95604               fst dword ptr [esi + 4]
// 005144d5  8d442404             lea eax, [esp + 4]
// 005144d9  d95608               fst dword ptr [esi + 8]
// 005144dc  50                   push eax
// 005144dd  d95e0c               fstp dword ptr [esi + 0xc]
// 005144e0  e8ab73fcff           call 0x4db890
// 005144e5  d900                 fld dword ptr [eax]
// 005144e7  d95e04               fstp dword ptr [esi + 4]
// 005144ea  d94004               fld dword ptr [eax + 4]
// 005144ed  d95e08               fstp dword ptr [esi + 8]
// 005144f0  d94008               fld dword ptr [eax + 8]
// 005144f3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005144f7  d95e0c               fstp dword ptr [esi + 0xc]
// 005144fa  d94608               fld dword ptr [esi + 8]
// 005144fd  d84804               fmul dword ptr [eax + 4]
// 00514500  d900                 fld dword ptr [eax]
// 00514502  d84e04               fmul dword ptr [esi + 4]
// 00514505  dec1                 faddp st(1)
// 00514507  d9460c               fld dword ptr [esi + 0xc]
// 0051450a  d84808               fmul dword ptr [eax + 8]
// 0051450d  8bc6                 mov eax, esi
// 0051450f  dec1                 faddp st(1)
// 00514511  d95e10               fstp dword ptr [esi + 0x10]
// 00514514  5e                   pop esi
// 00514515  83c40c               add esp, 0xc
// 00514518  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Plane.cpp (function ??0Plane@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Plane.cpp
