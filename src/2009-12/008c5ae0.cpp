// roc 2009-12 008c5ae0  unit: CXTPControlCustom  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5ae0
//
// 008c5ae0  56                   push esi
// 008c5ae1  8bf1                 mov esi, ecx
// 008c5ae3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c5ae7  3b8e9c000000         cmp ecx, dword ptr [esi + 0x9c]
// 008c5aed  7421                 je 0x8c5b10
// 008c5aef  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008c5af5  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 008c5afb  85c0                 test eax, eax
// 008c5afd  7408                 je 0x8c5b07
// 008c5aff  51                   push ecx
// 008c5b00  50                   push eax
// 008c5b01  ff15b4cb9800         call dword ptr [0x98cbb4]
// 008c5b07  6a01                 push 1
// 008c5b09  8bce                 mov ecx, esi
// 008c5b0b  e8b00bf3ff           call 0x7f66c0
// 008c5b10  5e                   pop esi
// 008c5b11  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetEnabled@CXTPControlCustom@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
