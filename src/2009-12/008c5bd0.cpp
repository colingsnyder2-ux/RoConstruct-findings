// roc 2009-12 008c5bd0  unit: CXTPControlCustom  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5bd0
//
// 008c5bd0  56                   push esi
// 008c5bd1  8bf1                 mov esi, ecx
// 008c5bd3  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008c5bd9  85c0                 test eax, eax
// 008c5bdb  7416                 je 0x8c5bf3
// 008c5bdd  50                   push eax
// 008c5bde  ff1564ca9800         call dword ptr [0x98ca64]
// 008c5be4  85c0                 test eax, eax
// 008c5be6  740b                 je 0x8c5bf3
// 008c5be8  8bce                 mov ecx, esi
// 008c5bea  e8c102f3ff           call 0x7f5eb0
// 008c5bef  85c0                 test eax, eax
// 008c5bf1  7416                 je 0x8c5c09
// 008c5bf3  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c5bf7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c5bfb  8b542408             mov edx, dword ptr [esp + 8]
// 008c5bff  50                   push eax
// 008c5c00  51                   push ecx
// 008c5c01  52                   push edx
// 008c5c02  8bce                 mov ecx, esi
// 008c5c04  e8e7a6fcff           call 0x8902f0
// 008c5c09  5e                   pop esi
// 008c5c0a  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnClick@CXTPControlCustom@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
