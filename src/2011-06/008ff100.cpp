// roc 2011-06 008ff100  unit: CXTPRibbonControlSystemPopupBarListItem  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ff100
//
// 008ff100  6aff                 push -1
// 008ff102  68f9f4a000           push 0xa0f4f9
// 008ff107  64a100000000         mov eax, dword ptr fs:[0]
// 008ff10d  50                   push eax
// 008ff10e  83ec10               sub esp, 0x10
// 008ff111  53                   push ebx
// 008ff112  56                   push esi
// 008ff113  57                   push edi
// 008ff114  a12058c900           mov eax, dword ptr [0xc95820]
// 008ff119  33c4                 xor eax, esp
// 008ff11b  50                   push eax
// 008ff11c  8d442420             lea eax, [esp + 0x20]
// 008ff120  64a300000000         mov dword ptr fs:[0], eax
// 008ff126  8bf1                 mov esi, ecx
// 008ff128  e833d6f0ff           call 0x80c760
// 008ff12d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008ff131  8bd8                 mov ebx, eax
// 008ff133  8b03                 mov eax, dword ptr [ebx]
// 008ff135  8b5078               mov edx, dword ptr [eax + 0x78]
// 008ff138  56                   push esi
// 008ff139  57                   push edi
// 008ff13a  8bcb                 mov ecx, ebx
// 008ff13c  ffd2                 call edx
// 008ff13e  8b03                 mov eax, dword ptr [ebx]
// 008ff140  8b507c               mov edx, dword ptr [eax + 0x7c]
// 008ff143  56                   push esi
// 008ff144  8bcb                 mov ecx, ebx
// 008ff146  ffd2                 call edx
// 008ff148  8b17                 mov edx, dword ptr [edi]
// 008ff14a  50                   push eax
// 008ff14b  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ff14e  8bcf                 mov ecx, edi
// 008ff150  ffd0                 call eax
// 008ff152  6a01                 push 1
// 008ff154  8bcf                 mov ecx, edi
// 008ff156  e893d40c00           call 0x9cc5ee
// 008ff15b  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 008ff161  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008ff167  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 008ff16d  8b9ecc000000         mov ebx, dword ptr [esi + 0xcc]
// 008ff173  83c007               add eax, 7
// 008ff176  89542418             mov dword ptr [esp + 0x18], edx
// 008ff17a  8b16                 mov edx, dword ptr [esi]
// 008ff17c  8b5258               mov edx, dword ptr [edx + 0x58]
// 008ff17f  89442410             mov dword ptr [esp + 0x10], eax
// 008ff183  8d442430             lea eax, [esp + 0x30]
// 008ff187  894c2414             mov dword ptr [esp + 0x14], ecx
// 008ff18b  50                   push eax
// 008ff18c  8bce                 mov ecx, esi
// 008ff18e  895c2420             mov dword ptr [esp + 0x20], ebx
// 008ff192  ffd2                 call edx
// 008ff194  8bf0                 mov esi, eax
// 008ff196  8b1f                 mov ebx, dword ptr [edi]
// 008ff198  6a24                 push 0x24
// 008ff19a  8d442414             lea eax, [esp + 0x14]
// 008ff19e  50                   push eax
// 008ff19f  8bce                 mov ecx, esi
// 008ff1a1  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008ff1a9  ff15a826a400         call dword ptr [0xa426a8]
// 008ff1af  50                   push eax
// 008ff1b0  8bce                 mov ecx, esi
// 008ff1b2  ff15c82da400         call dword ptr [0xa42dc8]
// 008ff1b8  8b5370               mov edx, dword ptr [ebx + 0x70]
// 008ff1bb  50                   push eax
// 008ff1bc  8bcf                 mov ecx, edi
// 008ff1be  ffd2                 call edx
// 008ff1c0  8d4c2430             lea ecx, [esp + 0x30]
// 008ff1c4  ff15082ea400         call dword ptr [0xa42e08]
// 008ff1ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ff1ce  64890d00000000       mov dword ptr fs:[0], ecx
// 008ff1d5  59                   pop ecx
// 008ff1d6  5f                   pop edi
// 008ff1d7  5e                   pop esi
// 008ff1d8  5b                   pop ebx
// 008ff1d9  83c41c               add esp, 0x1c
// 008ff1dc  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListItem@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp