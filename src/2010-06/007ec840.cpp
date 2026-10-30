// roc 2010-06 007ec840  unit: CXTPControls  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec840
//
// 007ec840  8bc1                 mov eax, ecx
// 007ec842  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ec846  85c9                 test ecx, ecx
// 007ec848  740f                 je 0x7ec859
// 007ec84a  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 007ec850  89442404             mov dword ptr [esp + 4], eax
// 007ec854  e9b7120700           jmp 0x85db10
// 007ec859  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetLayout@CXTPDockingPaneManager@@QBEXPAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
