// roc 2012-06 009f9420  unit: CXTPDockingPaneAutoHidePanel  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9420
//
// 009f9420  83791000             cmp dword ptr [ecx + 0x10], 0
// 009f9424  8b4138               mov eax, dword ptr [ecx + 0x38]
// 009f9427  741a                 je 0x9f9443
// 009f9429  83790800             cmp dword ptr [ecx + 8], 0
// 009f942d  7411                 je 0x9f9440
// 009f942f  83790c00             cmp dword ptr [ecx + 0xc], 0
// 009f9433  750b                 jne 0x9f9440
// 009f9435  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 009f9438  50                   push eax
// 009f9439  ff15783bb200         call dword ptr [0xb23b78]
// 009f943f  c3                   ret 
// 009f9440  8b4140               mov eax, dword ptr [ecx + 0x40]
// 009f9443  50                   push eax
// 009f9444  ff15783bb200         call dword ptr [0xb23b78]
// 009f944a  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCustomizeTools.cpp (function ?FreshenCursor@CXTPCustomizeDropSource@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCustomizeTools.cpp
