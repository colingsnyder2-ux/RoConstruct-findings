// roc 2009-12 007fbf10  unit: CXTPControlComboBox  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fbf10
//
// 007fbf10  6aff                 push -1
// 007fbf12  684a8e9500           push 0x958e4a
// 007fbf17  64a100000000         mov eax, dword ptr fs:[0]
// 007fbf1d  50                   push eax
// 007fbf1e  51                   push ecx
// 007fbf1f  53                   push ebx
// 007fbf20  56                   push esi
// 007fbf21  57                   push edi
// 007fbf22  a10052b600           mov eax, dword ptr [0xb65200]
// 007fbf27  33c4                 xor eax, esp
// 007fbf29  50                   push eax
// 007fbf2a  8d442414             lea eax, [esp + 0x14]
// 007fbf2e  64a300000000         mov dword ptr fs:[0], eax
// 007fbf34  8bf1                 mov esi, ecx
// 007fbf36  33db                 xor ebx, ebx
// 007fbf38  895c2410             mov dword ptr [esp + 0x10], ebx
// 007fbf3c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007fbf40  8bcf                 mov ecx, edi
// 007fbf42  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fbf48  84c0                 test al, al
// 007fbf4a  741b                 je 0x7fbf67
// 007fbf4c  8d442424             lea eax, [esp + 0x24]
// 007fbf50  50                   push eax
// 007fbf51  8bce                 mov ecx, esi
// 007fbf53  e838d4ffff           call 0x7f9390
// 007fbf58  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007fbf5c  bb01000000           mov ebx, 1
// 007fbf61  895c2410             mov dword ptr [esp + 0x10], ebx
// 007fbf65  eb02                 jmp 0x7fbf69
// 007fbf67  8bc7                 mov eax, edi
// 007fbf69  50                   push eax
// 007fbf6a  8bce                 mov ecx, esi
// 007fbf6c  e8efe3ffff           call 0x7fa360
// 007fbf71  f6c301               test bl, 1
// 007fbf74  740a                 je 0x7fbf80
// 007fbf76  8d4c2424             lea ecx, [esp + 0x24]
// 007fbf7a  ff15c0de9800         call dword ptr [0x98dec0]
// 007fbf80  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fbf84  64890d00000000       mov dword ptr fs:[0], ecx
// 007fbf8b  59                   pop ecx
// 007fbf8c  5f                   pop edi
// 007fbf8d  5e                   pop esi
// 007fbf8e  5b                   pop ebx
// 007fbf8f  83c410               add esp, 0x10
// 007fbf92  c20400               ret 4
// copied from an identical function in another client (function ?SetEditText@CXTPControlComboBox@@QAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp