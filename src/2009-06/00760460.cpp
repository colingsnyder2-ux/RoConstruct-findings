// roc 2009-06 00760460  unit: CXTPToolBar::CControlButtonExpand  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00760460
//
// 00760460  e85bffffff           call 0x7603c0
// 00760465  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00760469  8988fc000000         mov dword ptr [eax + 0xfc], ecx
// 0076046f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?CreateControlPopup@CXTPControlPopup@@SAPAV1@W4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
