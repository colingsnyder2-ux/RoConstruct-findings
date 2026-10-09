// roc 2007-03 0065a0c0  unit: seg_00650000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a0c0
//
// 0065a0c0  8bc1                 mov eax, ecx
// 0065a0c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065a0c6  85c9                 test ecx, ecx
// 0065a0c8  740f                 je 0x65a0d9
// 0065a0ca  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 0065a0d0  89442404             mov dword ptr [esp + 4], eax
// 0065a0d4  e947880600           jmp 0x6c2920
// 0065a0d9  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetLayout@CXTPDockingPaneManager@@QBEXPAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
