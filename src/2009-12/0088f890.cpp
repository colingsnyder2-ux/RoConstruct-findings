// roc 2009-12 0088f890  unit: ATL::D::DV?$ChTraitsCRT::DV?$StrTraitMFC_DLL::IIV?$CStringT::?$CMap  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088f890
//
// 0088f890  6aff                 push -1
// 0088f892  68f3119600           push 0x9611f3
// 0088f897  64a100000000         mov eax, dword ptr fs:[0]
// 0088f89d  50                   push eax
// 0088f89e  51                   push ecx
// 0088f89f  56                   push esi
// 0088f8a0  57                   push edi
// 0088f8a1  a10052b600           mov eax, dword ptr [0xb65200]
// 0088f8a6  33c4                 xor eax, esp
// 0088f8a8  50                   push eax
// 0088f8a9  8d442410             lea eax, [esp + 0x10]
// 0088f8ad  64a300000000         mov dword ptr fs:[0], eax
// 0088f8b3  8bf1                 mov esi, ecx
// 0088f8b5  8974240c             mov dword ptr [esp + 0xc], esi
// 0088f8b9  e8846b0900           call 0x926442
// 0088f8be  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088f8c2  33ff                 xor edi, edi
// 0088f8c4  6a1c                 push 0x1c
// 0088f8c6  897c241c             mov dword ptr [esp + 0x1c], edi
// 0088f8ca  c7069437a000         mov dword ptr [esi], 0xa03794
// 0088f8d0  89462c               mov dword ptr [esi + 0x2c], eax
// 0088f8d3  897e30               mov dword ptr [esi + 0x30], edi
// 0088f8d6  897e34               mov dword ptr [esi + 0x34], edi
// 0088f8d9  897e20               mov dword ptr [esi + 0x20], edi
// 0088f8dc  897e24               mov dword ptr [esi + 0x24], edi
// 0088f8df  e87c3ff6ff           call 0x7f3860
// 0088f8e4  83c404               add esp, 4
// 0088f8e7  89442420             mov dword ptr [esp + 0x20], eax
// 0088f8eb  c644241801           mov byte ptr [esp + 0x18], 1
// 0088f8f0  3bc7                 cmp eax, edi
// 0088f8f2  7409                 je 0x88f8fd
// 0088f8f4  8bc8                 mov ecx, eax
// 0088f8f6  e815ffffff           call 0x88f810
// 0088f8fb  eb02                 jmp 0x88f8ff
// 0088f8fd  33c0                 xor eax, eax
// 0088f8ff  894638               mov dword ptr [esi + 0x38], eax
// 0088f902  897e28               mov dword ptr [esi + 0x28], edi
// 0088f905  8bc6                 mov eax, esi
// 0088f907  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088f90b  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f912  59                   pop ecx
// 0088f913  5f                   pop edi
// 0088f914  5e                   pop esi
// 0088f915  83c410               add esp, 0x10
// 0088f918  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPShortcutManager@@QAE@PAVCXTPCommandBars@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp