// roc 2007-03 0070f560  unit: seg_00700000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f560
//
// 0070f560  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0070f563  33c0                 xor eax, eax
// 0070f565  85d2                 test edx, edx
// 0070f567  7e2b                 jle 0x70f594
// 0070f569  8da42400000000       lea esp, [esp]
// 0070f570  85c0                 test eax, eax
// 0070f572  7c11                 jl 0x70f585
// 0070f574  3bc2                 cmp eax, edx
// 0070f576  7d0d                 jge 0x70f585
// 0070f578  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0070f57b  7d18                 jge 0x70f595
// 0070f57d  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0070f580  8b1482               mov edx, dword ptr [edx + eax*4]
// 0070f583  eb02                 jmp 0x70f587
// 0070f585  33d2                 xor edx, edx
// 0070f587  89422c               mov dword ptr [edx + 0x2c], eax
// 0070f58a  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0070f58d  83c001               add eax, 1
// 0070f590  3bc2                 cmp eax, edx
// 0070f592  7cdc                 jl 0x70f570
// 0070f594  c3                   ret 
// 0070f595  e914eef0ff           jmp 0x61e3ae
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroups.cpp (function ?RefreshIndexes@CXTPRibbonGroups@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroups.cpp
