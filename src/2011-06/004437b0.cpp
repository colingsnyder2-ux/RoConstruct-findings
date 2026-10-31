// roc 2011-06 004437b0  unit: CPropertyGridItemBrickColor  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004437b0
//
// 004437b0  6aff                 push -1
// 004437b2  68491a9d00           push 0x9d1a49
// 004437b7  64a100000000         mov eax, dword ptr fs:[0]
// 004437bd  50                   push eax
// 004437be  64892500000000       mov dword ptr fs:[0], esp
// 004437c5  83ec08               sub esp, 8
// 004437c8  56                   push esi
// 004437c9  8d442404             lea eax, [esp + 4]
// 004437cd  50                   push eax
// 004437ce  8d4c2420             lea ecx, [esp + 0x20]
// 004437d2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004437da  ff15c82da400         call dword ptr [0xa42dc8]
// 004437e0  50                   push eax
// 004437e1  8d4c2410             lea ecx, [esp + 0x10]
// 004437e5  51                   push ecx
// 004437e6  e845ba2000           call 0x64f230
// 004437eb  83c408               add esp, 8
// 004437ee  8bc8                 mov ecx, eax
// 004437f0  e87bbd2000           call 0x64f570
// 004437f5  0fb6742406           movzx esi, byte ptr [esp + 6]
// 004437fa  0fb6542405           movzx edx, byte ptr [esp + 5]
// 004437ff  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00443804  c1e608               shl esi, 8
// 00443807  0bf2                 or esi, edx
// 00443809  c1e608               shl esi, 8
// 0044380c  8d4c241c             lea ecx, [esp + 0x1c]
// 00443810  0bf0                 or esi, eax
// 00443812  ff15082ea400         call dword ptr [0xa42e08]
// 00443818  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044381c  8bc6                 mov eax, esi
// 0044381e  5e                   pop esi
// 0044381f  64890d00000000       mov dword ptr fs:[0], ecx
// 00443826  83c414               add esp, 0x14
// 00443829  c3                   ret 
// copied from an identical function in another client (function ?roc_property_grid_brick_color@@YAKV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_unit_0e534b6d9cc556c5.cpp