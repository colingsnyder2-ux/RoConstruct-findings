// roc 2012-06 00a77460  unit: CXTPRibbonControlSystemPopupBarListItem  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77460
//
// 00a77460  6aff                 push -1
// 00a77462  68e990ae00           push 0xae90e9
// 00a77467  64a100000000         mov eax, dword ptr fs:[0]
// 00a7746d  50                   push eax
// 00a7746e  83ec10               sub esp, 0x10
// 00a77471  53                   push ebx
// 00a77472  56                   push esi
// 00a77473  57                   push edi
// 00a77474  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a77479  33c4                 xor eax, esp
// 00a7747b  50                   push eax
// 00a7747c  8d442420             lea eax, [esp + 0x20]
// 00a77480  64a300000000         mov dword ptr fs:[0], eax
// 00a77486  8bf1                 mov esi, ecx
// 00a77488  e863d5f0ff           call 0x9849f0
// 00a7748d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00a77491  8bd8                 mov ebx, eax
// 00a77493  8b03                 mov eax, dword ptr [ebx]
// 00a77495  8b5078               mov edx, dword ptr [eax + 0x78]
// 00a77498  56                   push esi
// 00a77499  57                   push edi
// 00a7749a  8bcb                 mov ecx, ebx
// 00a7749c  ffd2                 call edx
// 00a7749e  8b03                 mov eax, dword ptr [ebx]
// 00a774a0  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00a774a3  56                   push esi
// 00a774a4  8bcb                 mov ecx, ebx
// 00a774a6  ffd2                 call edx
// 00a774a8  8b17                 mov edx, dword ptr [edi]
// 00a774aa  50                   push eax
// 00a774ab  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a774ae  8bcf                 mov ecx, edi
// 00a774b0  ffd0                 call eax
// 00a774b2  6a01                 push 1
// 00a774b4  8bcf                 mov ecx, edi
// 00a774b6  e8ed200200           call 0xa995a8
// 00a774bb  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00a774c1  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00a774c7  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00a774cd  8b9ecc000000         mov ebx, dword ptr [esi + 0xcc]
// 00a774d3  83c007               add eax, 7
// 00a774d6  89542418             mov dword ptr [esp + 0x18], edx
// 00a774da  8b16                 mov edx, dword ptr [esi]
// 00a774dc  8b5258               mov edx, dword ptr [edx + 0x58]
// 00a774df  89442410             mov dword ptr [esp + 0x10], eax
// 00a774e3  8d442430             lea eax, [esp + 0x30]
// 00a774e7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a774eb  50                   push eax
// 00a774ec  8bce                 mov ecx, esi
// 00a774ee  895c2420             mov dword ptr [esp + 0x20], ebx
// 00a774f2  ffd2                 call edx
// 00a774f4  8bf0                 mov esi, eax
// 00a774f6  8b1f                 mov ebx, dword ptr [edi]
// 00a774f8  6a24                 push 0x24
// 00a774fa  8d442414             lea eax, [esp + 0x14]
// 00a774fe  50                   push eax
// 00a774ff  8bce                 mov ecx, esi
// 00a77501  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00a77509  ff155846b200         call dword ptr [0xb24658]
// 00a7750f  50                   push eax
// 00a77510  8bce                 mov ecx, esi
// 00a77512  ff159847b200         call dword ptr [0xb24798]
// 00a77518  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00a7751b  50                   push eax
// 00a7751c  8bcf                 mov ecx, edi
// 00a7751e  ffd2                 call edx
// 00a77520  8d4c2430             lea ecx, [esp + 0x30]
// 00a77524  ff15d047b200         call dword ptr [0xb247d0]
// 00a7752a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a7752e  64890d00000000       mov dword ptr fs:[0], ecx
// 00a77535  59                   pop ecx
// 00a77536  5f                   pop edi
// 00a77537  5e                   pop esi
// 00a77538  5b                   pop ebx
// 00a77539  83c41c               add esp, 0x1c
// 00a7753c  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListItem@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp