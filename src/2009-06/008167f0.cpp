// roc 2009-06 008167f0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008167f0
//
// 008167f0  6aff                 push -1
// 008167f2  6869278800           push 0x882769
// 008167f7  64a100000000         mov eax, dword ptr fs:[0]
// 008167fd  50                   push eax
// 008167fe  83ec10               sub esp, 0x10
// 00816801  53                   push ebx
// 00816802  56                   push esi
// 00816803  57                   push edi
// 00816804  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00816809  33c4                 xor eax, esp
// 0081680b  50                   push eax
// 0081680c  8d442420             lea eax, [esp + 0x20]
// 00816810  64a300000000         mov dword ptr fs:[0], eax
// 00816816  8bf1                 mov esi, ecx
// 00816818  e80391f0ff           call 0x71f920
// 0081681d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00816821  8bd8                 mov ebx, eax
// 00816823  8b03                 mov eax, dword ptr [ebx]
// 00816825  8b5078               mov edx, dword ptr [eax + 0x78]
// 00816828  56                   push esi
// 00816829  57                   push edi
// 0081682a  8bcb                 mov ecx, ebx
// 0081682c  ffd2                 call edx
// 0081682e  8b03                 mov eax, dword ptr [ebx]
// 00816830  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00816833  56                   push esi
// 00816834  8bcb                 mov ecx, ebx
// 00816836  ffd2                 call edx
// 00816838  8b17                 mov edx, dword ptr [edi]
// 0081683a  50                   push eax
// 0081683b  8b4238               mov eax, dword ptr [edx + 0x38]
// 0081683e  8bcf                 mov ecx, edi
// 00816840  ffd0                 call eax
// 00816842  6a01                 push 1
// 00816844  8bcf                 mov ecx, edi
// 00816846  e8bb560300           call 0x84bf06
// 0081684b  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00816851  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00816857  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0081685d  8b9ecc000000         mov ebx, dword ptr [esi + 0xcc]
// 00816863  83c007               add eax, 7
// 00816866  89542418             mov dword ptr [esp + 0x18], edx
// 0081686a  8b16                 mov edx, dword ptr [esi]
// 0081686c  8b5258               mov edx, dword ptr [edx + 0x58]
// 0081686f  89442410             mov dword ptr [esp + 0x10], eax
// 00816873  8d442430             lea eax, [esp + 0x30]
// 00816877  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081687b  50                   push eax
// 0081687c  8bce                 mov ecx, esi
// 0081687e  895c2420             mov dword ptr [esp + 0x20], ebx
// 00816882  ffd2                 call edx
// 00816884  8bf0                 mov esi, eax
// 00816886  8b1f                 mov ebx, dword ptr [edi]
// 00816888  6a24                 push 0x24
// 0081688a  8d442414             lea eax, [esp + 0x14]
// 0081688e  50                   push eax
// 0081688f  8bce                 mov ecx, esi
// 00816891  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00816899  ff1554fb8900         call dword ptr [0x89fb54]
// 0081689f  50                   push eax
// 008168a0  8bce                 mov ecx, esi
// 008168a2  ff15d0fc8900         call dword ptr [0x89fcd0]
// 008168a8  8b5370               mov edx, dword ptr [ebx + 0x70]
// 008168ab  50                   push eax
// 008168ac  8bcf                 mov ecx, edi
// 008168ae  ffd2                 call edx
// 008168b0  8d4c2430             lea ecx, [esp + 0x30]
// 008168b4  ff1510fd8900         call dword ptr [0x89fd10]
// 008168ba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008168be  64890d00000000       mov dword ptr fs:[0], ecx
// 008168c5  59                   pop ecx
// 008168c6  5f                   pop edi
// 008168c7  5e                   pop esi
// 008168c8  5b                   pop ebx
// 008168c9  83c41c               add esp, 0x1c
// 008168cc  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListItem@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp