// roc 2012-06 0046fb50  unit: CRobloxModule  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046fb50
//
// 0046fb50  56                   push esi
// 0046fb51  8bf1                 mov esi, ecx
// 0046fb53  837e0400             cmp dword ptr [esi + 4], 0
// 0046fb57  57                   push edi
// 0046fb58  8d7e04               lea edi, [esi + 4]
// 0046fb5b  7432                 je 0x46fb8f
// 0046fb5d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0046fb61  740d                 je 0x46fb70
// 0046fb63  57                   push edi
// 0046fb64  e837cdffff           call 0x46c8a0
// 0046fb69  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0046fb70  8b4628               mov eax, dword ptr [esi + 0x28]
// 0046fb73  85c0                 test eax, eax
// 0046fb75  7408                 je 0x46fb7f
// 0046fb77  8b08                 mov ecx, dword ptr [eax]
// 0046fb79  8b5108               mov edx, dword ptr [ecx + 8]
// 0046fb7c  50                   push eax
// 0046fb7d  ffd2                 call edx
// 0046fb7f  8d4610               lea eax, [esi + 0x10]
// 0046fb82  50                   push eax
// 0046fb83  ff15d821b200         call dword ptr [0xb221d8]
// 0046fb89  c70700000000         mov dword ptr [edi], 0
// 0046fb8f  f644240c01           test byte ptr [esp + 0xc], 1
// 0046fb94  7409                 je 0x46fb9f
// 0046fb96  56                   push esi
// 0046fb97  e878255100           call 0x982114
// 0046fb9c  83c404               add esp, 4
// 0046fb9f  5f                   pop edi
// 0046fba0  8bc6                 mov eax, esi
// 0046fba2  5e                   pop esi
// 0046fba3  c20400               ret 4
// copied from an identical function in another client (function ??_GRocAtlModule@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp