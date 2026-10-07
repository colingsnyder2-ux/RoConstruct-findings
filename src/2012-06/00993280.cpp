// roc 2012-06 00993280  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00993280
//
// 00993280  8b442404             mov eax, dword ptr [esp + 4]
// 00993284  85c0                 test eax, eax
// 00993286  7c0e                 jl 0x993296
// 00993288  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0099328b  7d09                 jge 0x993296
// 0099328d  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00993290  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00993293  c20400               ret 4
// 00993296  33c0                 xor eax, eax
// 00993298  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetAt@CXTPControls@@QBEPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
