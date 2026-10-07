// roc 2008-06 006e7b40  unit: CXTPToolBar::CControlButtonExpand  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7b40
//
// 006e7b40  e85bffffff           call 0x6e7aa0
// 006e7b45  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e7b49  8988fc000000         mov dword ptr [eax + 0xfc], ecx
// 006e7b4f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?CreateControlPopup@CXTPControlPopup@@SAPAV1@W4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
