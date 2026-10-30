// roc 2007-08 0071a400  unit: CXTPRibbonControlSystemPopupBarListItem  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071a400
//
// 0071a400  6aff                 push -1
// 0071a402  6869b07600           push 0x76b069
// 0071a407  64a100000000         mov eax, dword ptr fs:[0]
// 0071a40d  50                   push eax
// 0071a40e  83ec10               sub esp, 0x10
// 0071a411  53                   push ebx
// 0071a412  56                   push esi
// 0071a413  57                   push edi
// 0071a414  a188518b00           mov eax, dword ptr [0x8b5188]
// 0071a419  33c4                 xor eax, esp
// 0071a41b  50                   push eax
// 0071a41c  8d442420             lea eax, [esp + 0x20]
// 0071a420  64a300000000         mov dword ptr fs:[0], eax
// 0071a426  8bf1                 mov esi, ecx
// 0071a428  e8d3fbf1ff           call 0x63a000
// 0071a42d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0071a431  8bd8                 mov ebx, eax
// 0071a433  8b03                 mov eax, dword ptr [ebx]
// 0071a435  8b5078               mov edx, dword ptr [eax + 0x78]
// 0071a438  56                   push esi
// 0071a439  57                   push edi
// 0071a43a  8bcb                 mov ecx, ebx
// 0071a43c  ffd2                 call edx
// 0071a43e  8b03                 mov eax, dword ptr [ebx]
// 0071a440  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0071a443  56                   push esi
// 0071a444  8bcb                 mov ecx, ebx
// 0071a446  ffd2                 call edx
// 0071a448  8b17                 mov edx, dword ptr [edi]
// 0071a44a  50                   push eax
// 0071a44b  8b4238               mov eax, dword ptr [edx + 0x38]
// 0071a44e  8bcf                 mov ecx, edi
// 0071a450  ffd0                 call eax
// 0071a452  6a01                 push 1
// 0071a454  8bcf                 mov ecx, edi
// 0071a456  e88ddf0100           call 0x7383e8
// 0071a45b  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0071a461  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0071a467  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0071a46d  8b9ecc000000         mov ebx, dword ptr [esi + 0xcc]
// 0071a473  83c007               add eax, 7
// 0071a476  89542418             mov dword ptr [esp + 0x18], edx
// 0071a47a  8b16                 mov edx, dword ptr [esi]
// 0071a47c  8b5258               mov edx, dword ptr [edx + 0x58]
// 0071a47f  89442410             mov dword ptr [esp + 0x10], eax
// 0071a483  8d442430             lea eax, [esp + 0x30]
// 0071a487  894c2414             mov dword ptr [esp + 0x14], ecx
// 0071a48b  50                   push eax
// 0071a48c  8bce                 mov ecx, esi
// 0071a48e  895c2420             mov dword ptr [esp + 0x20], ebx
// 0071a492  ffd2                 call edx
// 0071a494  8bf0                 mov esi, eax
// 0071a496  8b1f                 mov ebx, dword ptr [edi]
// 0071a498  6a24                 push 0x24
// 0071a49a  8d442414             lea eax, [esp + 0x14]
// 0071a49e  50                   push eax
// 0071a49f  8bce                 mov ecx, esi
// 0071a4a1  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0071a4a9  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0071a4af  50                   push eax
// 0071a4b0  8bce                 mov ecx, esi
// 0071a4b2  ff1598dd7700         call dword ptr [0x77dd98]
// 0071a4b8  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0071a4bb  50                   push eax
// 0071a4bc  8bcf                 mov ecx, edi
// 0071a4be  ffd2                 call edx
// 0071a4c0  8d4c2430             lea ecx, [esp + 0x30]
// 0071a4c4  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0071a4ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071a4ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0071a4d5  59                   pop ecx
// 0071a4d6  5f                   pop edi
// 0071a4d7  5e                   pop esi
// 0071a4d8  5b                   pop ebx
// 0071a4d9  83c41c               add esp, 0x1c
// 0071a4dc  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListItem@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp