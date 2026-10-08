// from server: 100% by auto
// roc 2007-08 006fd290  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd290
//
// 006fd290  8b442404             mov eax, dword ptr [esp + 4]
// 006fd294  8b542408             mov edx, dword ptr [esp + 8]
// 006fd298  894110               mov dword ptr [ecx + 0x10], eax
// 006fd29b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fd29f  895114               mov dword ptr [ecx + 0x14], edx
// 006fd2a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd2a6  894118               mov dword ptr [ecx + 0x18], eax
// 006fd2a9  89511c               mov dword ptr [ecx + 0x1c], edx
// 006fd2ac  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?SetRect@CXTPTabManagerNavigateButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
