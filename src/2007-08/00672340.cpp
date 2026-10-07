// roc 2007-08 00672340  unit: CXTPControlPopupColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672340
//
// 00672340  c701e4b87c00         mov dword ptr [ecx], 0x7cb8e4
// 00672346  c7412084b87c00       mov dword ptr [ecx + 0x20], 0x7cb884
// 0067234d  e93ee2ffff           jmp 0x670590
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlButton.cpp (function ??1CXTPControlButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlButton.cpp
