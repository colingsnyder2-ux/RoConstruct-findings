// roc 2010-06 00879ca0  unit: CXTPControlCustom  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879ca0
//
// 00879ca0  56                   push esi
// 00879ca1  8bf1                 mov esi, ecx
// 00879ca3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00879ca7  3b8e9c000000         cmp ecx, dword ptr [esi + 0x9c]
// 00879cad  7421                 je 0x879cd0
// 00879caf  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00879cb5  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 00879cbb  85c0                 test eax, eax
// 00879cbd  7408                 je 0x879cc7
// 00879cbf  51                   push ecx
// 00879cc0  50                   push eax
// 00879cc1  ff1544ba9e00         call dword ptr [0x9eba44]
// 00879cc7  6a01                 push 1
// 00879cc9  8bce                 mov ecx, esi
// 00879ccb  e8d00af3ff           call 0x7aa7a0
// 00879cd0  5e                   pop esi
// 00879cd1  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetEnabled@CXTPControlCustom@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
