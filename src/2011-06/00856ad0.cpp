// roc 2011-06 00856ad0  unit: CXTPOriginalControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856ad0
//
// 00856ad0  8bc1                 mov eax, ecx
// 00856ad2  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00856ad5  85c9                 test ecx, ecx
// 00856ad7  7405                 je 0x856ade
// 00856ad9  e9b23ffcff           jmp 0x81aa90
// 00856ade  8b4038               mov eax, dword ptr [eax + 0x38]
// 00856ae1  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?GetCommandBars@CXTPControls@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
