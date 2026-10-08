// from server: 100% by auto
// roc 2007-08 0069a270  unit: CPropertyGridItemBrickColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069a270
//
// 0069a270  c70144197d00         mov dword ptr [ecx], 0x7d1944
// 0069a276  c74120e4187d00       mov dword ptr [ecx + 0x20], 0x7d18e4
// 0069a27d  e9cefeffff           jmp 0x69a150
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlButton.cpp (function ??1CXTPControlButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlButton.cpp
