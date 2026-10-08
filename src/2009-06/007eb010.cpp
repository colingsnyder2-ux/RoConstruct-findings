// roc 2009-06 007eb010  unit: CXTPControlCustom  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb010
//
// 007eb010  56                   push esi
// 007eb011  8bf1                 mov esi, ecx
// 007eb013  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 007eb019  85c0                 test eax, eax
// 007eb01b  740b                 je 0x7eb028
// 007eb01d  50                   push eax
// 007eb01e  ff15c8ed8900         call dword ptr [0x89edc8]
// 007eb024  85c0                 test eax, eax
// 007eb026  750c                 jne 0x7eb034
// 007eb028  8b442408             mov eax, dword ptr [esp + 8]
// 007eb02c  50                   push eax
// 007eb02d  8bce                 mov ecx, esi
// 007eb02f  e84c4ff3ff           call 0x71ff80
// 007eb034  5e                   pop esi
// 007eb035  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Draw@CXTPControlCustom@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
