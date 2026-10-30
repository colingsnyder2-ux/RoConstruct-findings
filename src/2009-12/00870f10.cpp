// roc 2009-12 00870f10  unit: CXTPHookManager::CHookSink  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870f10
//
// 00870f10  56                   push esi
// 00870f11  57                   push edi
// 00870f12  8bf1                 mov esi, ecx
// 00870f14  e897f7ffff           call 0x8706b0
// 00870f19  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00870f1d  57                   push edi
// 00870f1e  c706980da000         mov dword ptr [esi], 0xa00d98
// 00870f24  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00870f2b  ff1588cb9800         call dword ptr [0x98cb88]
// 00870f31  6afc                 push -4
// 00870f33  89461c               mov dword ptr [esi + 0x1c], eax
// 00870f36  897e18               mov dword ptr [esi + 0x18], edi
// 00870f39  57                   push edi
// 00870f3a  85c0                 test eax, eax
// 00870f3c  741e                 je 0x870f5c
// 00870f3e  ff15f4c99800         call dword ptr [0x98c9f4]
// 00870f44  68e00b8700           push 0x870be0
// 00870f49  6afc                 push -4
// 00870f4b  57                   push edi
// 00870f4c  894614               mov dword ptr [esi + 0x14], eax
// 00870f4f  ff1590c99800         call dword ptr [0x98c990]
// 00870f55  5f                   pop edi
// 00870f56  8bc6                 mov eax, esi
// 00870f58  5e                   pop esi
// 00870f59  c20400               ret 4
// 00870f5c  ff15d8c99800         call dword ptr [0x98c9d8]
// 00870f62  68e00b8700           push 0x870be0
// 00870f67  6afc                 push -4
// 00870f69  57                   push edi
// 00870f6a  894614               mov dword ptr [esi + 0x14], eax
// 00870f6d  ff15c0c99800         call dword ptr [0x98c9c0]
// 00870f73  5f                   pop edi
// 00870f74  8bc6                 mov eax, esi
// 00870f76  5e                   pop esi
// 00870f77  c20400               ret 4
// copied from an identical function in another client (function ??0CHookSink@CXTPHookManager@@QAE@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp