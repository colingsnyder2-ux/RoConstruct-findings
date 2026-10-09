// roc 2009-12 00838620  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838620
//
// 00838620  8bc1                 mov eax, ecx
// 00838622  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00838626  85c9                 test ecx, ecx
// 00838628  740f                 je 0x838639
// 0083862a  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 00838630  89442404             mov dword ptr [esp + 4], eax
// 00838634  e997130700           jmp 0x8a99d0
// 00838639  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetLayout@CXTPDockingPaneManager@@QBEXPAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
