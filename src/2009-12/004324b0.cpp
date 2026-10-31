// roc 2009-12 004324b0  unit: CPropertyGridItemBrickColor  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004324b0
//
// 004324b0  6aff                 push -1
// 004324b2  68d9a69200           push 0x92a6d9
// 004324b7  64a100000000         mov eax, dword ptr fs:[0]
// 004324bd  50                   push eax
// 004324be  64892500000000       mov dword ptr fs:[0], esp
// 004324c5  83ec08               sub esp, 8
// 004324c8  56                   push esi
// 004324c9  8d442404             lea eax, [esp + 4]
// 004324cd  50                   push eax
// 004324ce  8d4c2420             lea ecx, [esp + 0x20]
// 004324d2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004324da  ff1580de9800         call dword ptr [0x98de80]
// 004324e0  50                   push eax
// 004324e1  8d4c2410             lea ecx, [esp + 0x10]
// 004324e5  51                   push ecx
// 004324e6  e8f5e82700           call 0x6b0de0
// 004324eb  83c408               add esp, 8
// 004324ee  8bc8                 mov ecx, eax
// 004324f0  e8abed2700           call 0x6b12a0
// 004324f5  0fb6742406           movzx esi, byte ptr [esp + 6]
// 004324fa  0fb6542405           movzx edx, byte ptr [esp + 5]
// 004324ff  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00432504  c1e608               shl esi, 8
// 00432507  0bf2                 or esi, edx
// 00432509  c1e608               shl esi, 8
// 0043250c  8d4c241c             lea ecx, [esp + 0x1c]
// 00432510  0bf0                 or esi, eax
// 00432512  ff15c0de9800         call dword ptr [0x98dec0]
// 00432518  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043251c  8bc6                 mov eax, esi
// 0043251e  5e                   pop esi
// 0043251f  64890d00000000       mov dword ptr fs:[0], ecx
// 00432526  83c414               add esp, 0x14
// 00432529  c3                   ret 
// copied from an identical function in another client (function ?roc_property_grid_brick_color@@YAKV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_unit_0e534b6d9cc556c5.cpp