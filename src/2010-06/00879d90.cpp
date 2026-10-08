// roc 2010-06 00879d90  unit: CXTPControlCustom  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879d90
//
// 00879d90  56                   push esi
// 00879d91  8bf1                 mov esi, ecx
// 00879d93  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00879d99  85c0                 test eax, eax
// 00879d9b  7416                 je 0x879db3
// 00879d9d  50                   push eax
// 00879d9e  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 00879da4  85c0                 test eax, eax
// 00879da6  740b                 je 0x879db3
// 00879da8  8bce                 mov ecx, esi
// 00879daa  e84102f3ff           call 0x7a9ff0
// 00879daf  85c0                 test eax, eax
// 00879db1  7416                 je 0x879dc9
// 00879db3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00879db7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00879dbb  8b542408             mov edx, dword ptr [esp + 8]
// 00879dbf  50                   push eax
// 00879dc0  51                   push ecx
// 00879dc1  52                   push edx
// 00879dc2  8bce                 mov ecx, esi
// 00879dc4  e827a7fcff           call 0x8444f0
// 00879dc9  5e                   pop esi
// 00879dca  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnClick@CXTPControlCustom@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
