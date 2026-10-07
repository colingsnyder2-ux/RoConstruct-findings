// roc 2007-08 0067a4b0  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a4b0
//
// 0067a4b0  8b01                 mov eax, dword ptr [ecx]
// 0067a4b2  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0067a4b5  ffd2                 call edx
// 0067a4b7  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?OnControlAdded@CXTPControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
