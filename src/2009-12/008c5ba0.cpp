// roc 2009-12 008c5ba0  unit: CXTPControlCustom  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5ba0
//
// 008c5ba0  56                   push esi
// 008c5ba1  8bf1                 mov esi, ecx
// 008c5ba3  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008c5ba9  85c0                 test eax, eax
// 008c5bab  740b                 je 0x8c5bb8
// 008c5bad  50                   push eax
// 008c5bae  ff1564ca9800         call dword ptr [0x98ca64]
// 008c5bb4  85c0                 test eax, eax
// 008c5bb6  750c                 jne 0x8c5bc4
// 008c5bb8  8b442408             mov eax, dword ptr [esp + 8]
// 008c5bbc  50                   push eax
// 008c5bbd  8bce                 mov ecx, esi
// 008c5bbf  e8cc0af3ff           call 0x7f6690
// 008c5bc4  5e                   pop esi
// 008c5bc5  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Draw@CXTPControlCustom@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
