// from server: 100% by auto
// roc 2008-06 006f1b10  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1b10
//
// 006f1b10  56                   push esi
// 006f1b11  8bf1                 mov esi, ecx
// 006f1b13  e8d8ffffff           call 0x6f1af0
// 006f1b18  8b442408             mov eax, dword ptr [esp + 8]
// 006f1b1c  89463c               mov dword ptr [esi + 0x3c], eax
// 006f1b1f  5e                   pop esi
// 006f1b20  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?SetOriginalControls@CXTPControls@@QAEXPAVCXTPOriginalControls@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
