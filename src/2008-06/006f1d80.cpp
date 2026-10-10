// roc 2008-06 006f1d80  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1d80
//
// 006f1d80  8b442404             mov eax, dword ptr [esp + 4]
// 006f1d84  85c0                 test eax, eax
// 006f1d86  7c0d                 jl 0x6f1d95
// 006f1d88  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 006f1d8b  7d08                 jge 0x6f1d95
// 006f1d8d  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006f1d90  8b0482               mov eax, dword ptr [edx + eax*4]
// 006f1d93  eb02                 jmp 0x6f1d97
// 006f1d95  33c0                 xor eax, eax
// 006f1d97  8b11                 mov edx, dword ptr [ecx]
// 006f1d99  89442404             mov dword ptr [esp + 4], eax
// 006f1d9d  8b4258               mov eax, dword ptr [edx + 0x58]
// 006f1da0  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?Remove@CXTPControls@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
