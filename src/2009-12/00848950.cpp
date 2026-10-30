// roc 2009-12 00848950  unit: CXTPControlRadioButton  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848950
//
// 00848950  6aff                 push -1
// 00848952  68ca459600           push 0x9645ca
// 00848957  64a100000000         mov eax, dword ptr fs:[0]
// 0084895d  50                   push eax
// 0084895e  51                   push ecx
// 0084895f  56                   push esi
// 00848960  a10052b600           mov eax, dword ptr [0xb65200]
// 00848965  33c4                 xor eax, esp
// 00848967  50                   push eax
// 00848968  8d44240c             lea eax, [esp + 0xc]
// 0084896c  64a300000000         mov dword ptr fs:[0], eax
// 00848972  6874010000           push 0x174
// 00848977  e8e4aefaff           call 0x7f3860
// 0084897c  8bf0                 mov esi, eax
// 0084897e  83c404               add esp, 4
// 00848981  89742408             mov dword ptr [esp + 8], esi
// 00848985  33c0                 xor eax, eax
// 00848987  89442414             mov dword ptr [esp + 0x14], eax
// 0084898b  3bf0                 cmp esi, eax
// 0084898d  7416                 je 0x8489a5
// 0084898f  8bce                 mov ecx, esi
// 00848991  e8ca770400           call 0x890160
// 00848996  c706eca99f00         mov dword ptr [esi], 0x9fa9ec
// 0084899c  c746208ca99f00       mov dword ptr [esi + 0x20], 0x9fa98c
// 008489a3  8bc6                 mov eax, esi
// 008489a5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008489a9  64890d00000000       mov dword ptr fs:[0], ecx
// 008489b0  59                   pop ecx
// 008489b1  5e                   pop esi
// 008489b2  83c410               add esp, 0x10
// 008489b5  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlSystemPopupBarButton@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp