// roc 2009-12 008f4630  unit: CXTButtonThemeOffice2003  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4630
//
// 008f4630  6aff                 push -1
// 008f4632  68ca459600           push 0x9645ca
// 008f4637  64a100000000         mov eax, dword ptr fs:[0]
// 008f463d  50                   push eax
// 008f463e  51                   push ecx
// 008f463f  56                   push esi
// 008f4640  a10052b600           mov eax, dword ptr [0xb65200]
// 008f4645  33c4                 xor eax, esp
// 008f4647  50                   push eax
// 008f4648  8d44240c             lea eax, [esp + 0xc]
// 008f464c  64a300000000         mov dword ptr fs:[0], eax
// 008f4652  6a14                 push 0x14
// 008f4654  e807f2efff           call 0x7f3860
// 008f4659  8bf0                 mov esi, eax
// 008f465b  83c404               add esp, 4
// 008f465e  89742408             mov dword ptr [esp + 8], esi
// 008f4662  33c0                 xor eax, eax
// 008f4664  89442414             mov dword ptr [esp + 0x14], eax
// 008f4668  3bf0                 cmp esi, eax
// 008f466a  740f                 je 0x8f467b
// 008f466c  8bce                 mov ecx, esi
// 008f466e  e82d5ff6ff           call 0x85a5a0
// 008f4673  c70644fba000         mov dword ptr [esi], 0xa0fb44
// 008f4679  8bc6                 mov eax, esi
// 008f467b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f467f  64890d00000000       mov dword ptr fs:[0], ecx
// 008f4686  59                   pop ecx
// 008f4687  5e                   pop esi
// 008f4688  83c410               add esp, 0x10
// 008f468b  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTButtonThemeFactory@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp