// roc 2012-06 009c6510  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6510
//
// 009c6510  8bc1                 mov eax, ecx
// 009c6512  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c6516  85c9                 test ecx, ecx
// 009c6518  740f                 je 0x9c6529
// 009c651a  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 009c6520  89442404             mov dword ptr [esp + 4], eax
// 009c6524  e9c7cc0600           jmp 0xa331f0
// 009c6529  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetLayout@CXTPDockingPaneManager@@QBEXPAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
