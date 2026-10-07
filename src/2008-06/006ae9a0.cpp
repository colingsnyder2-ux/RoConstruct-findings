// roc 2008-06 006ae9a0  unit: CXTPPaintManager  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae9a0
//
// 006ae9a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ae9a4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ae9a8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ae9ac  50                   push eax
// 006ae9ad  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ae9b1  51                   push ecx
// 006ae9b2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ae9b6  52                   push edx
// 006ae9b7  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ae9bb  50                   push eax
// 006ae9bc  51                   push ecx
// 006ae9bd  52                   push edx
// 006ae9be  e80db20400           call 0x6f9bd0
// 006ae9c3  8bc8                 mov ecx, eax
// 006ae9c5  e806b30400           call 0x6f9cd0
// 006ae9ca  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GradientFill@CXTPPaintManager@@QAEXPAVCDC@@PAUtagRECT@@KKHPBU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
