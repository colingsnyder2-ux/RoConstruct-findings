// roc 2007-08 0067a5b0  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a5b0
//
// 0067a5b0  56                   push esi
// 0067a5b1  8bf1                 mov esi, ecx
// 0067a5b3  e8d8ffffff           call 0x67a590
// 0067a5b8  8b442408             mov eax, dword ptr [esp + 8]
// 0067a5bc  89463c               mov dword ptr [esi + 0x3c], eax
// 0067a5bf  5e                   pop esi
// 0067a5c0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?SetOriginalControls@CXTPControls@@QAEXPAVCXTPOriginalControls@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
