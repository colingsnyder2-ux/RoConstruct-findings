// from server: 100% by auto
// roc 2012-06 009cf0e0  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cf0e0
//
// 009cf0e0  56                   push esi
// 009cf0e1  8bf1                 mov esi, ecx
// 009cf0e3  e8d8ffffff           call 0x9cf0c0
// 009cf0e8  8b442408             mov eax, dword ptr [esp + 8]
// 009cf0ec  89463c               mov dword ptr [esi + 0x3c], eax
// 009cf0ef  5e                   pop esi
// 009cf0f0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?SetOriginalControls@CXTPControls@@QAEXPAVCXTPOriginalControls@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
