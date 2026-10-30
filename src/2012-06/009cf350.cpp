// roc 2012-06 009cf350  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cf350
//
// 009cf350  8b442404             mov eax, dword ptr [esp + 4]
// 009cf354  85c0                 test eax, eax
// 009cf356  7c0d                 jl 0x9cf365
// 009cf358  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 009cf35b  7d08                 jge 0x9cf365
// 009cf35d  8b5128               mov edx, dword ptr [ecx + 0x28]
// 009cf360  8b0482               mov eax, dword ptr [edx + eax*4]
// 009cf363  eb02                 jmp 0x9cf367
// 009cf365  33c0                 xor eax, eax
// 009cf367  8b11                 mov edx, dword ptr [ecx]
// 009cf369  89442404             mov dword ptr [esp + 4], eax
// 009cf36d  8b4258               mov eax, dword ptr [edx + 0x58]
// 009cf370  ffe0                 jmp eax
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?Remove@CXTPControls@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPControls.cpp
