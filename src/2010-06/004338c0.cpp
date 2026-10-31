// roc 2010-06 004338c0  unit: CPropertyGridItemBrickColor  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004338c0
//
// 004338c0  6aff                 push -1
// 004338c2  6819119800           push 0x981119
// 004338c7  64a100000000         mov eax, dword ptr fs:[0]
// 004338cd  50                   push eax
// 004338ce  64892500000000       mov dword ptr fs:[0], esp
// 004338d5  83ec08               sub esp, 8
// 004338d8  56                   push esi
// 004338d9  8d442404             lea eax, [esp + 4]
// 004338dd  50                   push eax
// 004338de  8d4c2420             lea ecx, [esp + 0x20]
// 004338e2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004338ea  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 004338f0  50                   push eax
// 004338f1  8d4c2410             lea ecx, [esp + 0x10]
// 004338f5  51                   push ecx
// 004338f6  e855b21e00           call 0x61eb50
// 004338fb  83c408               add esp, 8
// 004338fe  8bc8                 mov ecx, eax
// 00433900  e80bb71e00           call 0x61f010
// 00433905  0fb6742406           movzx esi, byte ptr [esp + 6]
// 0043390a  0fb6542405           movzx edx, byte ptr [esp + 5]
// 0043390f  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00433914  c1e608               shl esi, 8
// 00433917  0bf2                 or esi, edx
// 00433919  c1e608               shl esi, 8
// 0043391c  8d4c241c             lea ecx, [esp + 0x1c]
// 00433920  0bf0                 or esi, eax
// 00433922  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00433928  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043392c  8bc6                 mov eax, esi
// 0043392e  5e                   pop esi
// 0043392f  64890d00000000       mov dword ptr fs:[0], ecx
// 00433936  83c414               add esp, 0x14
// 00433939  c3                   ret 
// copied from an identical function in another client (function ?roc_property_grid_brick_color@@YAKV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_unit_0e534b6d9cc556c5.cpp