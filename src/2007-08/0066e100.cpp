// from server: 100% by auto
// roc 2007-08 0066e100  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e100
//
// 0066e100  8bc1                 mov eax, ecx
// 0066e102  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066e106  85c9                 test ecx, ecx
// 0066e108  740f                 je 0x66e119
// 0066e10a  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0066e110  89442404             mov dword ptr [esp + 4], eax
// 0066e114  e977b60600           jmp 0x6d9790
// 0066e119  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetLayout@CXTPDockingPaneManager@@QBEXPAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
