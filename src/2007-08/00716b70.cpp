// from server: 100% by auto
// roc 2007-08 00716b70  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716b70
//
// 00716b70  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00716b73  33c0                 xor eax, eax
// 00716b75  85d2                 test edx, edx
// 00716b77  7e2b                 jle 0x716ba4
// 00716b79  8da42400000000       lea esp, [esp]
// 00716b80  85c0                 test eax, eax
// 00716b82  7c11                 jl 0x716b95
// 00716b84  3bc2                 cmp eax, edx
// 00716b86  7d0d                 jge 0x716b95
// 00716b88  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00716b8b  7d18                 jge 0x716ba5
// 00716b8d  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00716b90  8b1482               mov edx, dword ptr [edx + eax*4]
// 00716b93  eb02                 jmp 0x716b97
// 00716b95  33d2                 xor edx, edx
// 00716b97  89422c               mov dword ptr [edx + 0x2c], eax
// 00716b9a  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00716b9d  83c001               add eax, 1
// 00716ba0  3bc2                 cmp eax, edx
// 00716ba2  7cdc                 jl 0x716b80
// 00716ba4  c3                   ret 
// 00716ba5  e97693f1ff           jmp 0x62ff20
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroups.cpp (function ?RefreshIndexes@CXTPRibbonGroups@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroups.cpp
