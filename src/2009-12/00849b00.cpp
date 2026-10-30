// roc 2009-12 00849b00  unit: CXTPControlSelector  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849b00
//
// 00849b00  6aff                 push -1
// 00849b02  68ca459600           push 0x9645ca
// 00849b07  64a100000000         mov eax, dword ptr fs:[0]
// 00849b0d  50                   push eax
// 00849b0e  51                   push ecx
// 00849b0f  56                   push esi
// 00849b10  a10052b600           mov eax, dword ptr [0xb65200]
// 00849b15  33c4                 xor eax, esp
// 00849b17  50                   push eax
// 00849b18  8d44240c             lea eax, [esp + 0xc]
// 00849b1c  64a300000000         mov dword ptr fs:[0], eax
// 00849b22  6874010000           push 0x174
// 00849b27  e8349dfaff           call 0x7f3860
// 00849b2c  8bf0                 mov esi, eax
// 00849b2e  83c404               add esp, 4
// 00849b31  89742408             mov dword ptr [esp + 8], esi
// 00849b35  33c0                 xor eax, eax
// 00849b37  89442414             mov dword ptr [esp + 0x14], eax
// 00849b3b  3bf0                 cmp esi, eax
// 00849b3d  7416                 je 0x849b55
// 00849b3f  8bce                 mov ecx, esi
// 00849b41  e81a660400           call 0x890160
// 00849b46  c7067cb29f00         mov dword ptr [esi], 0x9fb27c
// 00849b4c  c746201cb29f00       mov dword ptr [esi + 0x20], 0x9fb21c
// 00849b53  8bc6                 mov eax, esi
// 00849b55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00849b59  64890d00000000       mov dword ptr fs:[0], ecx
// 00849b60  59                   pop ecx
// 00849b61  5e                   pop esi
// 00849b62  83c410               add esp, 0x10
// 00849b65  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlSystemPopupBarButton@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp