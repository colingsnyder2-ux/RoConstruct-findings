// from server: 100% by auto
// roc 2011-06 0084e030  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e030
//
// 0084e030  8b442404             mov eax, dword ptr [esp + 4]
// 0084e034  85c0                 test eax, eax
// 0084e036  7416                 je 0x84e04e
// 0084e038  8d4820               lea ecx, [eax + 0x20]
// 0084e03b  8b01                 mov eax, dword ptr [ecx]
// 0084e03d  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0084e040  ffd2                 call edx
// 0084e042  85c0                 test eax, eax
// 0084e044  7408                 je 0x84e04e
// 0084e046  b801000000           mov eax, 1
// 0084e04b  c20400               ret 4
// 0084e04e  33c0                 xor eax, eax
// 0084e050  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsPaneHidden@CXTPDockingPaneManager@@QBEHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
