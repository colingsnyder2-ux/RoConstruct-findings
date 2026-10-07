// roc 2011-06 00859fc0  unit: CXTPControls  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00859fc0
//
// 00859fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00859fc4  85c0                 test eax, eax
// 00859fc6  7c14                 jl 0x859fdc
// 00859fc8  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 00859fcb  7d0f                 jge 0x859fdc
// 00859fcd  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00859fd0  8b0482               mov eax, dword ptr [edx + eax*4]
// 00859fd3  89442404             mov dword ptr [esp + 4], eax
// 00859fd7  e964ffffff           jmp 0x859f40
// 00859fdc  33c0                 xor eax, eax
// 00859fde  89442404             mov dword ptr [esp + 4], eax
// 00859fe2  e959ffffff           jmp 0x859f40
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?SetControlType@CXTPControls@@QAEPAVCXTPControl@@HW4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
