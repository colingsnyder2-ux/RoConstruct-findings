// from server: 100% by auto
// roc 2012-06 009cefb0  unit: CXTPOriginalControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cefb0
//
// 009cefb0  8bc1                 mov eax, ecx
// 009cefb2  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009cefb5  85c9                 test ecx, ecx
// 009cefb7  7405                 je 0x9cefbe
// 009cefb9  e9323dfcff           jmp 0x992cf0
// 009cefbe  8b4038               mov eax, dword ptr [eax + 0x38]
// 009cefc1  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?GetCommandBars@CXTPControls@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
