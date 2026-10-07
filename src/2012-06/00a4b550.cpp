// roc 2012-06 00a4b550  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b550
//
// 00a4b550  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b554  8b542408             mov edx, dword ptr [esp + 8]
// 00a4b558  894110               mov dword ptr [ecx + 0x10], eax
// 00a4b55b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a4b55f  895114               mov dword ptr [ecx + 0x14], edx
// 00a4b562  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a4b566  894118               mov dword ptr [ecx + 0x18], eax
// 00a4b569  89511c               mov dword ptr [ecx + 0x1c], edx
// 00a4b56c  c21000               ret 0x10
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetRect@CXTPTabManagerNavigateButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
