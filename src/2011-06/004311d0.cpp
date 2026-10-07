// roc 2011-06 004311d0  unit: CPatchedControlComboBox  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004311d0
//
// 004311d0  8b442404             mov eax, dword ptr [esp + 4]
// 004311d4  85c0                 test eax, eax
// 004311d6  7c0e                 jl 0x4311e6
// 004311d8  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 004311db  7d09                 jge 0x4311e6
// 004311dd  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 004311e0  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004311e3  c20400               ret 4
// 004311e6  33c0                 xor eax, eax
// 004311e8  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetAt@CXTPControls@@QBEPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
