// roc 2009-12 008490c0  unit: CXTPControlToolbars  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008490c0
//
// 008490c0  6aff                 push -1
// 008490c2  68ca459600           push 0x9645ca
// 008490c7  64a100000000         mov eax, dword ptr fs:[0]
// 008490cd  50                   push eax
// 008490ce  51                   push ecx
// 008490cf  56                   push esi
// 008490d0  a10052b600           mov eax, dword ptr [0xb65200]
// 008490d5  33c4                 xor eax, esp
// 008490d7  50                   push eax
// 008490d8  8d44240c             lea eax, [esp + 0xc]
// 008490dc  64a300000000         mov dword ptr fs:[0], eax
// 008490e2  6874010000           push 0x174
// 008490e7  e874a7faff           call 0x7f3860
// 008490ec  8bf0                 mov esi, eax
// 008490ee  83c404               add esp, 4
// 008490f1  89742408             mov dword ptr [esp + 8], esi
// 008490f5  33c0                 xor eax, eax
// 008490f7  89442414             mov dword ptr [esp + 0x14], eax
// 008490fb  3bf0                 cmp esi, eax
// 008490fd  7416                 je 0x849115
// 008490ff  8bce                 mov ecx, esi
// 00849101  e85a700400           call 0x890160
// 00849106  c70614af9f00         mov dword ptr [esi], 0x9faf14
// 0084910c  c74620b4ae9f00       mov dword ptr [esi + 0x20], 0x9faeb4
// 00849113  8bc6                 mov eax, esi
// 00849115  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00849119  64890d00000000       mov dword ptr fs:[0], ecx
// 00849120  59                   pop ecx
// 00849121  5e                   pop esi
// 00849122  83c410               add esp, 0x10
// 00849125  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlSystemPopupBarButton@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp