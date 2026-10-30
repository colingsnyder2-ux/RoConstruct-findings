// roc 2009-12 008454a0  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008454a0
//
// 008454a0  8b442404             mov eax, dword ptr [esp + 4]
// 008454a4  85c0                 test eax, eax
// 008454a6  7c0d                 jl 0x8454b5
// 008454a8  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 008454ab  7d08                 jge 0x8454b5
// 008454ad  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008454b0  8b0482               mov eax, dword ptr [edx + eax*4]
// 008454b3  eb02                 jmp 0x8454b7
// 008454b5  33c0                 xor eax, eax
// 008454b7  8b11                 mov edx, dword ptr [ecx]
// 008454b9  89442404             mov dword ptr [esp + 4], eax
// 008454bd  8b4258               mov eax, dword ptr [edx + 0x58]
// 008454c0  ffe0                 jmp eax
// copied from an identical function in another client (function ?Remove@CXTPControls@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp