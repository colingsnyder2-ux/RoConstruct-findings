// roc 2008-06 006f19e0  unit: CXTPOriginalControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f19e0
//
// 006f19e0  8bc1                 mov eax, ecx
// 006f19e2  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006f19e5  85c9                 test ecx, ecx
// 006f19e7  7405                 je 0x6f19ee
// 006f19e9  e92234fcff           jmp 0x6b4e10
// 006f19ee  8b4038               mov eax, dword ptr [eax + 0x38]
// 006f19f1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?GetCommandBars@CXTPControls@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
