// roc 2012-06 009c64e0  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c64e0
//
// 009c64e0  8b442404             mov eax, dword ptr [esp + 4]
// 009c64e4  85c0                 test eax, eax
// 009c64e6  7416                 je 0x9c64fe
// 009c64e8  8d4820               lea ecx, [eax + 0x20]
// 009c64eb  8b01                 mov eax, dword ptr [ecx]
// 009c64ed  8b501c               mov edx, dword ptr [eax + 0x1c]
// 009c64f0  ffd2                 call edx
// 009c64f2  85c0                 test eax, eax
// 009c64f4  7408                 je 0x9c64fe
// 009c64f6  b801000000           mov eax, 1
// 009c64fb  c20400               ret 4
// 009c64fe  33c0                 xor eax, eax
// 009c6500  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsPaneHidden@CXTPDockingPaneManager@@QBEHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
