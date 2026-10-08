// from server: 100% by auto
// roc 2007-08 0067fef0  unit: CXTPPrintingDialog  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067fef0
//
// 0067fef0  83ec18               sub esp, 0x18
// 0067fef3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067fef7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0067fefb  8b542428             mov edx, dword ptr [esp + 0x28]
// 0067feff  890424               mov dword ptr [esp], eax
// 0067ff02  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067ff06  894c2404             mov dword ptr [esp + 4], ecx
// 0067ff0a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067ff0e  89542408             mov dword ptr [esp + 8], edx
// 0067ff12  8b542434             mov edx, dword ptr [esp + 0x34]
// 0067ff16  8944240c             mov dword ptr [esp + 0xc], eax
// 0067ff1a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067ff1e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067ff22  6a03                 push 3
// 0067ff24  8d442404             lea eax, [esp + 4]
// 0067ff28  89542418             mov dword ptr [esp + 0x18], edx
// 0067ff2c  8b5104               mov edx, dword ptr [ecx + 4]
// 0067ff2f  50                   push eax
// 0067ff30  52                   push edx
// 0067ff31  ff1540d17700         call dword ptr [0x77d140]
// 0067ff37  83c418               add esp, 0x18
// 0067ff3a  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?Triangle@CXTPDrawHelpers@@SAXPAVCDC@@VCPoint@@11@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
