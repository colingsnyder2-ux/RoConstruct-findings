// roc 2009-12 0085b610  unit: CXTPStatusBar::CStatusCmdUI  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b610
//
// 0085b610  6aff                 push -1
// 0085b612  6899e39500           push 0x95e399
// 0085b617  64a100000000         mov eax, dword ptr fs:[0]
// 0085b61d  50                   push eax
// 0085b61e  56                   push esi
// 0085b61f  57                   push edi
// 0085b620  a10052b600           mov eax, dword ptr [0xb65200]
// 0085b625  33c4                 xor eax, esp
// 0085b627  50                   push eax
// 0085b628  8d44240c             lea eax, [esp + 0xc]
// 0085b62c  64a300000000         mov dword ptr fs:[0], eax
// 0085b632  8bf1                 mov esi, ecx
// 0085b634  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0085b637  85ff                 test edi, edi
// 0085b639  7433                 je 0x85b66e
// 0085b63b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085b63f  50                   push eax
// 0085b640  8d4c2420             lea ecx, [esp + 0x20]
// 0085b644  ff15b8de9800         call dword ptr [0x98deb8]
// 0085b64a  8b5608               mov edx, dword ptr [esi + 8]
// 0085b64d  6a01                 push 1
// 0085b64f  8d4c2420             lea ecx, [esp + 0x20]
// 0085b653  51                   push ecx
// 0085b654  52                   push edx
// 0085b655  8bcf                 mov ecx, edi
// 0085b657  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0085b65f  e89cfdffff           call 0x85b400
// 0085b664  8d4c241c             lea ecx, [esp + 0x1c]
// 0085b668  ff15c0de9800         call dword ptr [0x98dec0]
// 0085b66e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085b672  64890d00000000       mov dword ptr fs:[0], ecx
// 0085b679  59                   pop ecx
// 0085b67a  5f                   pop edi
// 0085b67b  5e                   pop esi
// 0085b67c  83c40c               add esp, 0xc
// 0085b67f  c20400               ret 4
// copied from an identical function in another client (function ?SetText@CStatusCmdUI@CXTPStatusBar@@UAEXPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp