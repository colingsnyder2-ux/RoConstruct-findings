// roc 2012-06 00454d10  unit: CXTPTabClientWnd::CWorkspace  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00454d10
//
// 00454d10  6aff                 push -1
// 00454d12  68e9f5a900           push 0xa9f5e9
// 00454d17  64a100000000         mov eax, dword ptr fs:[0]
// 00454d1d  50                   push eax
// 00454d1e  64892500000000       mov dword ptr fs:[0], esp
// 00454d25  83ec08               sub esp, 8
// 00454d28  56                   push esi
// 00454d29  8d442404             lea eax, [esp + 4]
// 00454d2d  50                   push eax
// 00454d2e  8d4c2420             lea ecx, [esp + 0x20]
// 00454d32  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00454d3a  ff159847b200         call dword ptr [0xb24798]
// 00454d40  50                   push eax
// 00454d41  8d4c2410             lea ecx, [esp + 0x10]
// 00454d45  51                   push ecx
// 00454d46  e855dd2e00           call 0x742aa0
// 00454d4b  83c408               add esp, 8
// 00454d4e  8bc8                 mov ecx, eax
// 00454d50  e8ebe02e00           call 0x742e40
// 00454d55  0fb6742406           movzx esi, byte ptr [esp + 6]
// 00454d5a  0fb6542405           movzx edx, byte ptr [esp + 5]
// 00454d5f  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00454d64  c1e608               shl esi, 8
// 00454d67  0bf2                 or esi, edx
// 00454d69  c1e608               shl esi, 8
// 00454d6c  8d4c241c             lea ecx, [esp + 0x1c]
// 00454d70  0bf0                 or esi, eax
// 00454d72  ff15d047b200         call dword ptr [0xb247d0]
// 00454d78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00454d7c  8bc6                 mov eax, esi
// 00454d7e  5e                   pop esi
// 00454d7f  64890d00000000       mov dword ptr fs:[0], ecx
// 00454d86  83c414               add esp, 0x14
// 00454d89  c3                   ret 
// copied from an identical function in another client (function ?roc_property_grid_brick_color@@YAKV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_unit_0e534b6d9cc556c5.cpp