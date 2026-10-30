// roc 2009-12 008e5610  unit: CXTCaptionButton  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5610
//
// 008e5610  6aff                 push -1
// 008e5612  682afa9500           push 0x95fa2a
// 008e5617  64a100000000         mov eax, dword ptr fs:[0]
// 008e561d  50                   push eax
// 008e561e  51                   push ecx
// 008e561f  56                   push esi
// 008e5620  57                   push edi
// 008e5621  a10052b600           mov eax, dword ptr [0xb65200]
// 008e5626  33c4                 xor eax, esp
// 008e5628  50                   push eax
// 008e5629  8d442410             lea eax, [esp + 0x10]
// 008e562d  64a300000000         mov dword ptr fs:[0], eax
// 008e5633  8bf9                 mov edi, ecx
// 008e5635  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008e563d  8b742420             mov esi, dword ptr [esp + 0x20]
// 008e5641  8bce                 mov ecx, esi
// 008e5643  ff1574de9800         call dword ptr [0x98de74]
// 008e5649  56                   push esi
// 008e564a  8bcf                 mov ecx, edi
// 008e564c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008e5654  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008e565c  e8e7e7f0ff           call 0x7f3e48
// 008e5661  837c242400           cmp dword ptr [esp + 0x24], 0
// 008e5666  740e                 je 0x8e5676
// 008e5668  e8337cf6ff           call 0x84d2a0
// 008e566d  56                   push esi
// 008e566e  e8bd4cf6ff           call 0x84a330
// 008e5673  83c404               add esp, 4
// 008e5676  8bc6                 mov eax, esi
// 008e5678  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e567c  64890d00000000       mov dword ptr fs:[0], ecx
// 008e5683  59                   pop ecx
// 008e5684  5f                   pop edi
// 008e5685  5e                   pop esi
// 008e5686  83c410               add esp, 0x10
// 008e5689  c20800               ret 8
// copied from an identical function in another client (function ?GetButtonText@CXTButton@@MAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp