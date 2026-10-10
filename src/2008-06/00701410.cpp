// roc 2008-06 00701410  unit: CXTPTabClientWnd::CWorkspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701410
//
// 00701410  8b8990000000         mov ecx, dword ptr [ecx + 0x90]
// 00701416  8b01                 mov eax, dword ptr [ecx]
// 00701418  8b8064010000         mov eax, dword ptr [eax + 0x164]
// 0070141e  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemIcon@CWorkspace@CXTPTabClientWnd@@MBEPAUHICON__@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
