// roc 2010-06 00879d60  unit: CXTPControlCustom  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879d60
//
// 00879d60  56                   push esi
// 00879d61  8bf1                 mov esi, ecx
// 00879d63  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00879d69  85c0                 test eax, eax
// 00879d6b  740b                 je 0x879d78
// 00879d6d  50                   push eax
// 00879d6e  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 00879d74  85c0                 test eax, eax
// 00879d76  750c                 jne 0x879d84
// 00879d78  8b442408             mov eax, dword ptr [esp + 8]
// 00879d7c  50                   push eax
// 00879d7d  8bce                 mov ecx, esi
// 00879d7f  e8ec09f3ff           call 0x7aa770
// 00879d84  5e                   pop esi
// 00879d85  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Draw@CXTPControlCustom@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
