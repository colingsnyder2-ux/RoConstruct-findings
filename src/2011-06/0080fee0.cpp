// from server: 100% by auto
// roc 2011-06 0080fee0  unit: CXTPPaintManager  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080fee0
//
// 0080fee0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080fee4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080fee8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080feec  50                   push eax
// 0080feed  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080fef1  51                   push ecx
// 0080fef2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080fef6  52                   push edx
// 0080fef7  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080fefb  50                   push eax
// 0080fefc  51                   push ecx
// 0080fefd  52                   push edx
// 0080fefe  e87dee0400           call 0x85ed80
// 0080ff03  8bc8                 mov ecx, eax
// 0080ff05  e876ef0400           call 0x85ee80
// 0080ff0a  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GradientFill@CXTPPaintManager@@QAEXPAVCDC@@PAUtagRECT@@KKHPBU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
