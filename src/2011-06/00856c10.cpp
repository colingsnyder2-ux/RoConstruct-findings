// roc 2011-06 00856c10  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856c10
//
// 00856c10  56                   push esi
// 00856c11  8bf1                 mov esi, ecx
// 00856c13  e8d8ffffff           call 0x856bf0
// 00856c18  8b442408             mov eax, dword ptr [esp + 8]
// 00856c1c  89463c               mov dword ptr [esi + 0x3c], eax
// 00856c1f  5e                   pop esi
// 00856c20  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?SetOriginalControls@CXTPControls@@QAEXPAVCXTPOriginalControls@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
