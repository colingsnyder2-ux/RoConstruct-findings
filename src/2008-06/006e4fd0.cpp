// roc 2008-06 006e4fd0  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4fd0
//
// 006e4fd0  8bc1                 mov eax, ecx
// 006e4fd2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e4fd6  85c9                 test ecx, ecx
// 006e4fd8  740f                 je 0x6e4fe9
// 006e4fda  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 006e4fe0  89442404             mov dword ptr [esp + 4], eax
// 006e4fe4  e9f7150700           jmp 0x7565e0
// 006e4fe9  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetLayout@CXTPDockingPaneManager@@QBEXPAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
