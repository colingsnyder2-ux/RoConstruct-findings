// from server: 100% by auto
// roc 2007-08 0051e100  unit: seg_00510000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e100
//
// 0051e100  d9ee                 fldz 
// 0051e102  83ec0c               sub esp, 0xc
// 0051e105  56                   push esi
// 0051e106  8bf1                 mov esi, ecx
// 0051e108  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051e10c  c706fc057a00         mov dword ptr [esi], 0x7a05fc
// 0051e112  d95604               fst dword ptr [esi + 4]
// 0051e115  8d442404             lea eax, [esp + 4]
// 0051e119  d95608               fst dword ptr [esi + 8]
// 0051e11c  50                   push eax
// 0051e11d  d95e0c               fstp dword ptr [esi + 0xc]
// 0051e120  e8cb9cfcff           call 0x4e7df0
// 0051e125  d900                 fld dword ptr [eax]
// 0051e127  d95e04               fstp dword ptr [esi + 4]
// 0051e12a  d94004               fld dword ptr [eax + 4]
// 0051e12d  d95e08               fstp dword ptr [esi + 8]
// 0051e130  d94008               fld dword ptr [eax + 8]
// 0051e133  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051e137  d95e0c               fstp dword ptr [esi + 0xc]
// 0051e13a  d94608               fld dword ptr [esi + 8]
// 0051e13d  d84804               fmul dword ptr [eax + 4]
// 0051e140  d900                 fld dword ptr [eax]
// 0051e142  d84e04               fmul dword ptr [esi + 4]
// 0051e145  dec1                 faddp st(1)
// 0051e147  d9460c               fld dword ptr [esi + 0xc]
// 0051e14a  d84808               fmul dword ptr [eax + 8]
// 0051e14d  8bc6                 mov eax, esi
// 0051e14f  dec1                 faddp st(1)
// 0051e151  d95e10               fstp dword ptr [esi + 0x10]
// 0051e154  5e                   pop esi
// 0051e155  83c40c               add esp, 0xc
// 0051e158  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ??0Plane@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
