// roc 2009-12 008c0350  unit: PAVCXTPDockingPaneBase::?$CList  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0350
//
// 008c0350  53                   push ebx
// 008c0351  56                   push esi
// 008c0352  57                   push edi
// 008c0353  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c0357  8b4718               mov eax, dword ptr [edi + 0x18]
// 008c035a  f7d0                 not eax
// 008c035c  8bd9                 mov ebx, ecx
// 008c035e  a801                 test al, 1
// 008c0360  742a                 je 0x8c038c
// 008c0362  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008c0365  51                   push ecx
// 008c0366  8bcf                 mov ecx, edi
// 008c0368  e88740f3ff           call 0x7f43f4
// 008c036d  8b7304               mov esi, dword ptr [ebx + 4]
// 008c0370  85f6                 test esi, esi
// 008c0372  744a                 je 0x8c03be
// 008c0374  6a01                 push 1
// 008c0376  8d5608               lea edx, [esi + 8]
// 008c0379  52                   push edx
// 008c037a  57                   push edi
// 008c037b  e820a60200           call 0x8ea9a0
// 008c0380  8b36                 mov esi, dword ptr [esi]
// 008c0382  85f6                 test esi, esi
// 008c0384  75ee                 jne 0x8c0374
// 008c0386  5f                   pop edi
// 008c0387  5e                   pop esi
// 008c0388  5b                   pop ebx
// 008c0389  c20400               ret 4
// 008c038c  8bcf                 mov ecx, edi
// 008c038e  e85b40f3ff           call 0x7f43ee
// 008c0393  8bf0                 mov esi, eax
// 008c0395  85f6                 test esi, esi
// 008c0397  7425                 je 0x8c03be
// 008c0399  8da42400000000       lea esp, [esp]
// 008c03a0  6a01                 push 1
// 008c03a2  8d442414             lea eax, [esp + 0x14]
// 008c03a6  50                   push eax
// 008c03a7  57                   push edi
// 008c03a8  4e                   dec esi
// 008c03a9  e8f2a50200           call 0x8ea9a0
// 008c03ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c03b2  51                   push ecx
// 008c03b3  8bcb                 mov ecx, ebx
// 008c03b5  e8c6370000           call 0x8c3b80
// 008c03ba  85f6                 test esi, esi
// 008c03bc  75e2                 jne 0x8c03a0
// 008c03be  5f                   pop edi
// 008c03bf  5e                   pop esi
// 008c03c0  5b                   pop ebx
// 008c03c1  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@?$CList@PAVCXTPHookManagerHookAble@@PAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp