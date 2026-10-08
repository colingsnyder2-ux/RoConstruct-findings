// from server: 100% by auto
// roc 2008-06 00794990  unit: CXTPRibbonGroup  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794990
//
// 00794990  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00794993  33c0                 xor eax, eax
// 00794995  85d2                 test edx, edx
// 00794997  7e29                 jle 0x7949c2
// 00794999  8da42400000000       lea esp, [esp]
// 007949a0  85c0                 test eax, eax
// 007949a2  7c11                 jl 0x7949b5
// 007949a4  3bc2                 cmp eax, edx
// 007949a6  7d0d                 jge 0x7949b5
// 007949a8  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 007949ab  7d16                 jge 0x7949c3
// 007949ad  8b5124               mov edx, dword ptr [ecx + 0x24]
// 007949b0  8b1482               mov edx, dword ptr [edx + eax*4]
// 007949b3  eb02                 jmp 0x7949b7
// 007949b5  33d2                 xor edx, edx
// 007949b7  89422c               mov dword ptr [edx + 0x2c], eax
// 007949ba  8b5128               mov edx, dword ptr [ecx + 0x28]
// 007949bd  40                   inc eax
// 007949be  3bc2                 cmp eax, edx
// 007949c0  7cde                 jl 0x7949a0
// 007949c2  c3                   ret 
// 007949c3  e97cbff0ff           jmp 0x6a0944
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?RefreshIndexes@CXTPRibbonGroups@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
