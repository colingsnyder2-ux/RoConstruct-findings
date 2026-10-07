// roc 2011-06 0085cc80  unit: CXTPPrintingDialog  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085cc80
//
// 0085cc80  83ec18               sub esp, 0x18
// 0085cc83  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085cc87  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085cc8b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0085cc8f  890424               mov dword ptr [esp], eax
// 0085cc92  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085cc96  894c2404             mov dword ptr [esp + 4], ecx
// 0085cc9a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085cc9e  89542408             mov dword ptr [esp + 8], edx
// 0085cca2  8b542434             mov edx, dword ptr [esp + 0x34]
// 0085cca6  8944240c             mov dword ptr [esp + 0xc], eax
// 0085ccaa  894c2410             mov dword ptr [esp + 0x10], ecx
// 0085ccae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085ccb2  6a03                 push 3
// 0085ccb4  8d442404             lea eax, [esp + 4]
// 0085ccb8  89542418             mov dword ptr [esp + 0x18], edx
// 0085ccbc  8b5104               mov edx, dword ptr [ecx + 4]
// 0085ccbf  50                   push eax
// 0085ccc0  52                   push edx
// 0085ccc1  ff151801a400         call dword ptr [0xa40118]
// 0085ccc7  83c418               add esp, 0x18
// 0085ccca  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonSystemTheme.cpp (function ?Triangle@CXTPDrawHelpers@@SAXPAVCDC@@VCPoint@@11@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonSystemTheme.cpp
