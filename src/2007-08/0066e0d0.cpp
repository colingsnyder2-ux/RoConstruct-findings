// roc 2007-08 0066e0d0  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e0d0
//
// 0066e0d0  8b442404             mov eax, dword ptr [esp + 4]
// 0066e0d4  85c0                 test eax, eax
// 0066e0d6  7416                 je 0x66e0ee
// 0066e0d8  8d4820               lea ecx, [eax + 0x20]
// 0066e0db  8b01                 mov eax, dword ptr [ecx]
// 0066e0dd  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0066e0e0  ffd2                 call edx
// 0066e0e2  85c0                 test eax, eax
// 0066e0e4  7408                 je 0x66e0ee
// 0066e0e6  b801000000           mov eax, 1
// 0066e0eb  c20400               ret 4
// 0066e0ee  33c0                 xor eax, eax
// 0066e0f0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsPaneHidden@CXTPDockingPaneManager@@QBEHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
