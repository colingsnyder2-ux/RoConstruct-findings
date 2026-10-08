// roc 2012-06 00a4ad10  unit: CXTPControlCustom  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ad10
//
// 00a4ad10  56                   push esi
// 00a4ad11  8bf1                 mov esi, ecx
// 00a4ad13  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00a4ad19  85c0                 test eax, eax
// 00a4ad1b  740b                 je 0xa4ad28
// 00a4ad1d  50                   push eax
// 00a4ad1e  ff153c3bb200         call dword ptr [0xb23b3c]
// 00a4ad24  85c0                 test eax, eax
// 00a4ad26  750c                 jne 0xa4ad34
// 00a4ad28  8b442408             mov eax, dword ptr [esp + 8]
// 00a4ad2c  50                   push eax
// 00a4ad2d  8bce                 mov ecx, esi
// 00a4ad2f  e8cca2f3ff           call 0x985000
// 00a4ad34  5e                   pop esi
// 00a4ad35  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Draw@CXTPControlCustom@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
