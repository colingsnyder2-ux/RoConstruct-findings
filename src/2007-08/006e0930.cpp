// from server: 100% by auto
// roc 2007-08 006e0930  unit: CXTPDockingPaneTabbedContainer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0930
//
// 006e0930  68f0240000           push 0x24f0
// 006e0935  83c154               add ecx, 0x54
// 006e0938  e803fdffff           call 0x6e0640
// 006e093d  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetPinButton@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPaneCaptionButton@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
