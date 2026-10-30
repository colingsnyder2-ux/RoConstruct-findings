// roc 2009-12 0088c4a0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c4a0
//
// 0088c4a0  6aff                 push -1
// 0088c4a2  684a8e9500           push 0x958e4a
// 0088c4a7  64a100000000         mov eax, dword ptr fs:[0]
// 0088c4ad  50                   push eax
// 0088c4ae  51                   push ecx
// 0088c4af  53                   push ebx
// 0088c4b0  56                   push esi
// 0088c4b1  57                   push edi
// 0088c4b2  a10052b600           mov eax, dword ptr [0xb65200]
// 0088c4b7  33c4                 xor eax, esp
// 0088c4b9  50                   push eax
// 0088c4ba  8d442414             lea eax, [esp + 0x14]
// 0088c4be  64a300000000         mov dword ptr fs:[0], eax
// 0088c4c4  8bf1                 mov esi, ecx
// 0088c4c6  33db                 xor ebx, ebx
// 0088c4c8  895c2410             mov dword ptr [esp + 0x10], ebx
// 0088c4cc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0088c4d0  8bcf                 mov ecx, edi
// 0088c4d2  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088c4d8  84c0                 test al, al
// 0088c4da  741b                 je 0x88c4f7
// 0088c4dc  8d442424             lea eax, [esp + 0x24]
// 0088c4e0  50                   push eax
// 0088c4e1  8bce                 mov ecx, esi
// 0088c4e3  e858edffff           call 0x88b240
// 0088c4e8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0088c4ec  bb01000000           mov ebx, 1
// 0088c4f1  895c2410             mov dword ptr [esp + 0x10], ebx
// 0088c4f5  eb02                 jmp 0x88c4f9
// 0088c4f7  8bc7                 mov eax, edi
// 0088c4f9  50                   push eax
// 0088c4fa  8bce                 mov ecx, esi
// 0088c4fc  e87ff0ffff           call 0x88b580
// 0088c501  f6c301               test bl, 1
// 0088c504  740a                 je 0x88c510
// 0088c506  8d4c2424             lea ecx, [esp + 0x24]
// 0088c50a  ff15c0de9800         call dword ptr [0x98dec0]
// 0088c510  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088c514  64890d00000000       mov dword ptr fs:[0], ecx
// 0088c51b  59                   pop ecx
// 0088c51c  5f                   pop edi
// 0088c51d  5e                   pop esi
// 0088c51e  5b                   pop ebx
// 0088c51f  83c410               add esp, 0x10
// 0088c522  c20400               ret 4
// copied from an identical function in another client (function ?SetEditText@CXTPControlComboBox@@QAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp