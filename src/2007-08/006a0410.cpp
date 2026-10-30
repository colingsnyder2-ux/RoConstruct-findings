// from server: 100% by auto
// roc 2007-08 006a0410  unit: CXTPDockingPaneAutoHidePanel  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0410
//
// 006a0410  83791000             cmp dword ptr [ecx + 0x10], 0
// 006a0414  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006a0417  741a                 je 0x6a0433
// 006a0419  83790800             cmp dword ptr [ecx + 8], 0
// 006a041d  7411                 je 0x6a0430
// 006a041f  83790c00             cmp dword ptr [ecx + 0xc], 0
// 006a0423  750b                 jne 0x6a0430
// 006a0425  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 006a0428  50                   push eax
// 006a0429  ff1560ed7700         call dword ptr [0x77ed60]
// 006a042f  c3                   ret 
// 006a0430  8b4140               mov eax, dword ptr [ecx + 0x40]
// 006a0433  50                   push eax
// 006a0434  ff1560ed7700         call dword ptr [0x77ed60]
// 006a043a  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeTools.cpp (function ?FreshenCursor@CXTPCustomizeDropSource@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeTools.cpp
