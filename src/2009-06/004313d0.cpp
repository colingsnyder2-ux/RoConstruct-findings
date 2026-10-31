// roc 2009-06 004313d0  unit: CPropertyGridItemBrickColor  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004313d0
//
// 004313d0  6aff                 push -1
// 004313d2  68d9f88400           push 0x84f8d9
// 004313d7  64a100000000         mov eax, dword ptr fs:[0]
// 004313dd  50                   push eax
// 004313de  64892500000000       mov dword ptr fs:[0], esp
// 004313e5  83ec08               sub esp, 8
// 004313e8  56                   push esi
// 004313e9  8d442404             lea eax, [esp + 4]
// 004313ed  50                   push eax
// 004313ee  8d4c2420             lea ecx, [esp + 0x20]
// 004313f2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004313fa  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00431400  50                   push eax
// 00431401  8d4c2410             lea ecx, [esp + 0x10]
// 00431405  51                   push ecx
// 00431406  e835122100           call 0x642640
// 0043140b  83c408               add esp, 8
// 0043140e  8bc8                 mov ecx, eax
// 00431410  e80b172100           call 0x642b20
// 00431415  0fb6742406           movzx esi, byte ptr [esp + 6]
// 0043141a  0fb6542405           movzx edx, byte ptr [esp + 5]
// 0043141f  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00431424  c1e608               shl esi, 8
// 00431427  0bf2                 or esi, edx
// 00431429  c1e608               shl esi, 8
// 0043142c  8d4c241c             lea ecx, [esp + 0x1c]
// 00431430  0bf0                 or esi, eax
// 00431432  ff1510fd8900         call dword ptr [0x89fd10]
// 00431438  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043143c  8bc6                 mov eax, esi
// 0043143e  5e                   pop esi
// 0043143f  64890d00000000       mov dword ptr fs:[0], ecx
// 00431446  83c414               add esp, 0x14
// 00431449  c3                   ret 
// copied from an identical function in another client (function ?roc_property_grid_brick_color@@YAKV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_unit_0e534b6d9cc556c5.cpp