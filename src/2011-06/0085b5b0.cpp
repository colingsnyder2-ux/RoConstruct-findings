// roc 2011-06 0085b5b0  unit: CXTPControlSelector  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085b5b0
//
// 0085b5b0  6aff                 push -1
// 0085b5b2  682a5ba000           push 0xa05b2a
// 0085b5b7  64a100000000         mov eax, dword ptr fs:[0]
// 0085b5bd  50                   push eax
// 0085b5be  51                   push ecx
// 0085b5bf  56                   push esi
// 0085b5c0  a12058c900           mov eax, dword ptr [0xc95820]
// 0085b5c5  33c4                 xor eax, esp
// 0085b5c7  50                   push eax
// 0085b5c8  8d44240c             lea eax, [esp + 0xc]
// 0085b5cc  64a300000000         mov dword ptr fs:[0], eax
// 0085b5d2  6874010000           push 0x174
// 0085b5d7  e882eafaff           call 0x80a05e
// 0085b5dc  8bf0                 mov esi, eax
// 0085b5de  83c404               add esp, 4
// 0085b5e1  89742408             mov dword ptr [esp + 8], esi
// 0085b5e5  33c0                 xor eax, eax
// 0085b5e7  89442414             mov dword ptr [esp + 0x14], eax
// 0085b5eb  3bf0                 cmp esi, eax
// 0085b5ed  7416                 je 0x85b605
// 0085b5ef  8bce                 mov ecx, esi
// 0085b5f1  e83a5f0400           call 0x8a1530
// 0085b5f6  c7062c9eac00         mov dword ptr [esi], 0xac9e2c
// 0085b5fc  c74620cc9dac00       mov dword ptr [esi + 0x20], 0xac9dcc
// 0085b603  8bc6                 mov eax, esi
// 0085b605  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085b609  64890d00000000       mov dword ptr fs:[0], ecx
// 0085b610  59                   pop ecx
// 0085b611  5e                   pop esi
// 0085b612  83c410               add esp, 0x10
// 0085b615  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlSystemPopupBarButton@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp