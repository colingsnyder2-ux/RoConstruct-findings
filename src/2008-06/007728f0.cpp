// roc 2008-06 007728f0  unit: CXTPControlCustom  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007728f0
//
// 007728f0  56                   push esi
// 007728f1  8bf1                 mov esi, ecx
// 007728f3  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 007728f9  85c0                 test eax, eax
// 007728fb  740b                 je 0x772908
// 007728fd  50                   push eax
// 007728fe  ff153c2d8000         call dword ptr [0x802d3c]
// 00772904  85c0                 test eax, eax
// 00772906  750c                 jne 0x772914
// 00772908  8b442408             mov eax, dword ptr [esp + 8]
// 0077290c  50                   push eax
// 0077290d  8bce                 mov ecx, esi
// 0077290f  e88c8ff3ff           call 0x6ab8a0
// 00772914  5e                   pop esi
// 00772915  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Draw@CXTPControlCustom@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
