// roc 2007-08 00430b20  unit: CWrapperView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430b20
//
// 00430b20  8b442404             mov eax, dword ptr [esp + 4]
// 00430b24  85c0                 test eax, eax
// 00430b26  7c0e                 jl 0x430b36
// 00430b28  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 00430b2b  7d09                 jge 0x430b36
// 00430b2d  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00430b30  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00430b33  c20400               ret 4
// 00430b36  33c0                 xor eax, eax
// 00430b38  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?GetAt@CXTPControls@@QBEPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
