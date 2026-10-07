// roc 2008-06 0075d8a0  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d8a0
//
// 0075d8a0  68f0240000           push 0x24f0
// 0075d8a5  83c154               add ecx, 0x54
// 0075d8a8  e803fdffff           call 0x75d5b0
// 0075d8ad  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPinButton@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPaneCaptionButton@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
