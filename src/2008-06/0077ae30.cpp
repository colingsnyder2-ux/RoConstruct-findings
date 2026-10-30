// from server: 100% by auto
// roc 2008-06 0077ae30  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ae30
//
// 0077ae30  8b442404             mov eax, dword ptr [esp + 4]
// 0077ae34  8b542408             mov edx, dword ptr [esp + 8]
// 0077ae38  894110               mov dword ptr [ecx + 0x10], eax
// 0077ae3b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077ae3f  895114               mov dword ptr [ecx + 0x14], edx
// 0077ae42  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077ae46  894118               mov dword ptr [ecx + 0x18], eax
// 0077ae49  89511c               mov dword ptr [ecx + 0x1c], edx
// 0077ae4c  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetRect@CXTPTabManagerNavigateButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
