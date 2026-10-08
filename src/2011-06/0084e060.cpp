// roc 2011-06 0084e060  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e060
//
// 0084e060  8bc1                 mov eax, ecx
// 0084e062  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e066  85c9                 test ecx, ecx
// 0084e068  740f                 je 0x84e079
// 0084e06a  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0084e070  89442404             mov dword ptr [esp + 4], eax
// 0084e074  e957cc0600           jmp 0x8bacd0
// 0084e079  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetLayout@CXTPDockingPaneManager@@QBEXPAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
