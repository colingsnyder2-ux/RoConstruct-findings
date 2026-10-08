// roc 2009-06 0075d8b0  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d8b0
//
// 0075d8b0  8bc1                 mov eax, ecx
// 0075d8b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0075d8b6  85c9                 test ecx, ecx
// 0075d8b8  740f                 je 0x75d8c9
// 0075d8ba  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0075d8c0  89442404             mov dword ptr [esp + 4], eax
// 0075d8c4  e9f7120700           jmp 0x7cebc0
// 0075d8c9  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetLayout@CXTPDockingPaneManager@@QBEXPAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
