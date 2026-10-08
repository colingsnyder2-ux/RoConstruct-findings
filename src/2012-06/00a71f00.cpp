// from server: 100% by auto
// roc 2012-06 00a71f00  unit: CXTPRibbonGroup  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71f00
//
// 00a71f00  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a71f03  33c0                 xor eax, eax
// 00a71f05  85d2                 test edx, edx
// 00a71f07  7e29                 jle 0xa71f32
// 00a71f09  8da42400000000       lea esp, [esp]
// 00a71f10  85c0                 test eax, eax
// 00a71f12  7c11                 jl 0xa71f25
// 00a71f14  3bc2                 cmp eax, edx
// 00a71f16  7d0d                 jge 0xa71f25
// 00a71f18  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00a71f1b  7d16                 jge 0xa71f33
// 00a71f1d  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00a71f20  8b1482               mov edx, dword ptr [edx + eax*4]
// 00a71f23  eb02                 jmp 0xa71f27
// 00a71f25  33d2                 xor edx, edx
// 00a71f27  89422c               mov dword ptr [edx + 0x2c], eax
// 00a71f2a  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a71f2d  40                   inc eax
// 00a71f2e  3bc2                 cmp eax, edx
// 00a71f30  7cde                 jl 0xa71f10
// 00a71f32  c3                   ret 
// 00a71f33  e98804f1ff           jmp 0x9823c0
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroups.cpp (function ?RefreshIndexes@CXTPRibbonGroups@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroups.cpp
