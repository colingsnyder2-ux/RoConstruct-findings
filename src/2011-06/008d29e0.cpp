// roc 2011-06 008d29e0  unit: CXTPControlCustom  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d29e0
//
// 008d29e0  56                   push esi
// 008d29e1  8bf1                 mov esi, ecx
// 008d29e3  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008d29e9  85c0                 test eax, eax
// 008d29eb  740b                 je 0x8d29f8
// 008d29ed  50                   push eax
// 008d29ee  ff15201ca400         call dword ptr [0xa41c20]
// 008d29f4  85c0                 test eax, eax
// 008d29f6  750c                 jne 0x8d2a04
// 008d29f8  8b442408             mov eax, dword ptr [esp + 8]
// 008d29fc  50                   push eax
// 008d29fd  8bce                 mov ecx, esi
// 008d29ff  e85ca3f3ff           call 0x80cd60
// 008d2a04  5e                   pop esi
// 008d2a05  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Draw@CXTPControlCustom@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
