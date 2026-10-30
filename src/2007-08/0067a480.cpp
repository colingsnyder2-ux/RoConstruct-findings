// from server: 100% by auto
// roc 2007-08 0067a480  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a480
//
// 0067a480  8bc1                 mov eax, ecx
// 0067a482  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0067a485  85c9                 test ecx, ecx
// 0067a487  7405                 je 0x67a48e
// 0067a489  e9f294fcff           jmp 0x643980
// 0067a48e  8b4038               mov eax, dword ptr [eax + 0x38]
// 0067a491  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?GetCommandBars@CXTPControls@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
