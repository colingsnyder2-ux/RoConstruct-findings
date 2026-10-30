// from server: 100% by auto
// roc 2008-06 006f4df0  unit: CXTPControls  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f4df0
//
// 006f4df0  8b442404             mov eax, dword ptr [esp + 4]
// 006f4df4  85c0                 test eax, eax
// 006f4df6  7c14                 jl 0x6f4e0c
// 006f4df8  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 006f4dfb  7d0f                 jge 0x6f4e0c
// 006f4dfd  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006f4e00  8b0482               mov eax, dword ptr [edx + eax*4]
// 006f4e03  89442404             mov dword ptr [esp + 4], eax
// 006f4e07  e964ffffff           jmp 0x6f4d70
// 006f4e0c  33c0                 xor eax, eax
// 006f4e0e  89442404             mov dword ptr [esp + 4], eax
// 006f4e12  e959ffffff           jmp 0x6f4d70
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?SetControlType@CXTPControls@@QAEPAVCXTPControl@@HW4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
