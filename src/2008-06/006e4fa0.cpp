// from server: 100% by auto
// roc 2008-06 006e4fa0  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4fa0
//
// 006e4fa0  8b442404             mov eax, dword ptr [esp + 4]
// 006e4fa4  85c0                 test eax, eax
// 006e4fa6  7416                 je 0x6e4fbe
// 006e4fa8  8d4820               lea ecx, [eax + 0x20]
// 006e4fab  8b01                 mov eax, dword ptr [ecx]
// 006e4fad  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006e4fb0  ffd2                 call edx
// 006e4fb2  85c0                 test eax, eax
// 006e4fb4  7408                 je 0x6e4fbe
// 006e4fb6  b801000000           mov eax, 1
// 006e4fbb  c20400               ret 4
// 006e4fbe  33c0                 xor eax, eax
// 006e4fc0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsPaneHidden@CXTPDockingPaneManager@@QBEHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
