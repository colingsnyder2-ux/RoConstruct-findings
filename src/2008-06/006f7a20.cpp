// from server: 100% by auto
// roc 2008-06 006f7a20  unit: CXTPPrintingDialog  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f7a20
//
// 006f7a20  83ec18               sub esp, 0x18
// 006f7a23  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f7a27  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006f7a2b  8b542428             mov edx, dword ptr [esp + 0x28]
// 006f7a2f  890424               mov dword ptr [esp], eax
// 006f7a32  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006f7a36  894c2404             mov dword ptr [esp + 4], ecx
// 006f7a3a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006f7a3e  89542408             mov dword ptr [esp + 8], edx
// 006f7a42  8b542434             mov edx, dword ptr [esp + 0x34]
// 006f7a46  8944240c             mov dword ptr [esp + 0xc], eax
// 006f7a4a  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f7a4e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f7a52  6a03                 push 3
// 006f7a54  8d442404             lea eax, [esp + 4]
// 006f7a58  89542418             mov dword ptr [esp + 0x18], edx
// 006f7a5c  8b5104               mov edx, dword ptr [ecx + 4]
// 006f7a5f  50                   push eax
// 006f7a60  52                   push edx
// 006f7a61  ff15c8208000         call dword ptr [0x8020c8]
// 006f7a67  83c418               add esp, 0x18
// 006f7a6a  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Triangle@CXTPDrawHelpers@@SAXPAVCDC@@VCPoint@@11@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
