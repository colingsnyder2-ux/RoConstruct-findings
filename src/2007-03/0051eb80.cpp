// roc 2007-03 0051eb80  unit: seg_00510000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051eb80
//
// 0051eb80  d9ee                 fldz 
// 0051eb82  8b442404             mov eax, dword ptr [esp + 4]
// 0051eb86  83ec0c               sub esp, 0xc
// 0051eb89  56                   push esi
// 0051eb8a  8bf1                 mov esi, ecx
// 0051eb8c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051eb90  d95604               fst dword ptr [esi + 4]
// 0051eb93  d95608               fst dword ptr [esi + 8]
// 0051eb96  c7066c447a00         mov dword ptr [esi], 0x7a446c
// 0051eb9c  d9560c               fst dword ptr [esi + 0xc]
// 0051eb9f  d95610               fst dword ptr [esi + 0x10]
// 0051eba2  d95614               fst dword ptr [esi + 0x14]
// 0051eba5  d95e18               fstp dword ptr [esi + 0x18]
// 0051eba8  d900                 fld dword ptr [eax]
// 0051ebaa  d95e04               fstp dword ptr [esi + 4]
// 0051ebad  d94004               fld dword ptr [eax + 4]
// 0051ebb0  d95e08               fstp dword ptr [esi + 8]
// 0051ebb3  d94008               fld dword ptr [eax + 8]
// 0051ebb6  8d442404             lea eax, [esp + 4]
// 0051ebba  50                   push eax
// 0051ebbb  d95e0c               fstp dword ptr [esi + 0xc]
// 0051ebbe  e8cdccfbff           call 0x4db890
// 0051ebc3  d900                 fld dword ptr [eax]
// 0051ebc5  d95e10               fstp dword ptr [esi + 0x10]
// 0051ebc8  d94004               fld dword ptr [eax + 4]
// 0051ebcb  d95e14               fstp dword ptr [esi + 0x14]
// 0051ebce  d94008               fld dword ptr [eax + 8]
// 0051ebd1  8bc6                 mov eax, esi
// 0051ebd3  d95e18               fstp dword ptr [esi + 0x18]
// 0051ebd6  5e                   pop esi
// 0051ebd7  83c40c               add esp, 0xc
// 0051ebda  c20800               ret 8
// library rbxgs/util\Math.cpp (function ??0Line@G3D@@IAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
