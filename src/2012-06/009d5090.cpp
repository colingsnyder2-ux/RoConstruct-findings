// roc 2012-06 009d5090  unit: CXTPPrintingDialog  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d5090
//
// 009d5090  83ec18               sub esp, 0x18
// 009d5093  8b442420             mov eax, dword ptr [esp + 0x20]
// 009d5097  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009d509b  8b542428             mov edx, dword ptr [esp + 0x28]
// 009d509f  890424               mov dword ptr [esp], eax
// 009d50a2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009d50a6  894c2404             mov dword ptr [esp + 4], ecx
// 009d50aa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009d50ae  89542408             mov dword ptr [esp + 8], edx
// 009d50b2  8b542434             mov edx, dword ptr [esp + 0x34]
// 009d50b6  8944240c             mov dword ptr [esp + 0xc], eax
// 009d50ba  894c2410             mov dword ptr [esp + 0x10], ecx
// 009d50be  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009d50c2  6a03                 push 3
// 009d50c4  8d442404             lea eax, [esp + 4]
// 009d50c8  89542418             mov dword ptr [esp + 0x18], edx
// 009d50cc  8b5104               mov edx, dword ptr [ecx + 4]
// 009d50cf  50                   push eax
// 009d50d0  52                   push edx
// 009d50d1  ff15b020b200         call dword ptr [0xb220b0]
// 009d50d7  83c418               add esp, 0x18
// 009d50da  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonSystemTheme.cpp (function ?Triangle@CXTPDrawHelpers@@SAXPAVCDC@@VCPoint@@11@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonSystemTheme.cpp
