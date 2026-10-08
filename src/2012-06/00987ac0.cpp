// from server: 100% by auto
// roc 2012-06 00987ac0  unit: CXTPPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00987ac0
//
// 00987ac0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00987ac4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00987ac8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00987acc  50                   push eax
// 00987acd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00987ad1  6a01                 push 1
// 00987ad3  2bc8                 sub ecx, eax
// 00987ad5  51                   push ecx
// 00987ad6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00987ada  52                   push edx
// 00987adb  50                   push eax
// 00987adc  e8af1a1100           call 0xa99590
// 00987ae1  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?HorizontalLine@CXTPPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
