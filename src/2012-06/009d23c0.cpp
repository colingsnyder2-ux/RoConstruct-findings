// roc 2012-06 009d23c0  unit: CXTPControls  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d23c0
//
// 009d23c0  8b442404             mov eax, dword ptr [esp + 4]
// 009d23c4  85c0                 test eax, eax
// 009d23c6  7c14                 jl 0x9d23dc
// 009d23c8  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 009d23cb  7d0f                 jge 0x9d23dc
// 009d23cd  8b5128               mov edx, dword ptr [ecx + 0x28]
// 009d23d0  8b0482               mov eax, dword ptr [edx + eax*4]
// 009d23d3  89442404             mov dword ptr [esp + 4], eax
// 009d23d7  e964ffffff           jmp 0x9d2340
// 009d23dc  33c0                 xor eax, eax
// 009d23de  89442404             mov dword ptr [esp + 4], eax
// 009d23e2  e959ffffff           jmp 0x9d2340
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?SetControlType@CXTPControls@@QAEPAVCXTPControl@@HW4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
