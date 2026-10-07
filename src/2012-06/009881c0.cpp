// roc 2012-06 009881c0  unit: CXTPPaintManager  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009881c0
//
// 009881c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 009881c4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009881c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 009881cc  50                   push eax
// 009881cd  8b442410             mov eax, dword ptr [esp + 0x10]
// 009881d1  51                   push ecx
// 009881d2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009881d6  52                   push edx
// 009881d7  8b542410             mov edx, dword ptr [esp + 0x10]
// 009881db  50                   push eax
// 009881dc  51                   push ecx
// 009881dd  52                   push edx
// 009881de  e8adef0400           call 0x9d7190
// 009881e3  8bc8                 mov ecx, eax
// 009881e5  e8a6f00400           call 0x9d7290
// 009881ea  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GradientFill@CXTPPaintManager@@QAEXPAVCDC@@PAUtagRECT@@KKHPBU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
