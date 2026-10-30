// from server: 100% by auto
// roc 2011-06 008f9bd0  unit: CXTPRibbonGroup  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f9bd0
//
// 008f9bd0  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008f9bd3  33c0                 xor eax, eax
// 008f9bd5  85d2                 test edx, edx
// 008f9bd7  7e29                 jle 0x8f9c02
// 008f9bd9  8da42400000000       lea esp, [esp]
// 008f9be0  85c0                 test eax, eax
// 008f9be2  7c11                 jl 0x8f9bf5
// 008f9be4  3bc2                 cmp eax, edx
// 008f9be6  7d0d                 jge 0x8f9bf5
// 008f9be8  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008f9beb  7d16                 jge 0x8f9c03
// 008f9bed  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008f9bf0  8b1482               mov edx, dword ptr [edx + eax*4]
// 008f9bf3  eb02                 jmp 0x8f9bf7
// 008f9bf5  33d2                 xor edx, edx
// 008f9bf7  89422c               mov dword ptr [edx + 0x2c], eax
// 008f9bfa  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008f9bfd  40                   inc eax
// 008f9bfe  3bc2                 cmp eax, edx
// 008f9c00  7cde                 jl 0x8f9be0
// 008f9c02  c3                   ret 
// 008f9c03  e90207f1ff           jmp 0x80a30a
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroups.cpp (function ?RefreshIndexes@CXTPRibbonGroups@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroups.cpp
