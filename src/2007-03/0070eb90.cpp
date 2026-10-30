// roc 2007-03 0070eb90  unit: seg_00700000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070eb90
//
// 0070eb90  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 0070eb93  33c0                 xor eax, eax
// 0070eb95  85d2                 test edx, edx
// 0070eb97  7e20                 jle 0x70ebb9
// 0070eb99  56                   push esi
// 0070eb9a  8b742408             mov esi, dword ptr [esp + 8]
// 0070eb9e  57                   push edi
// 0070eb9f  90                   nop 
// 0070eba0  85c0                 test eax, eax
// 0070eba2  7c23                 jl 0x70ebc7
// 0070eba4  3bc2                 cmp eax, edx
// 0070eba6  7d1f                 jge 0x70ebc7
// 0070eba8  8b7948               mov edi, dword ptr [ecx + 0x48]
// 0070ebab  393487               cmp dword ptr [edi + eax*4], esi
// 0070ebae  740c                 je 0x70ebbc
// 0070ebb0  83c001               add eax, 1
// 0070ebb3  3bc2                 cmp eax, edx
// 0070ebb5  7ce9                 jl 0x70eba0
// 0070ebb7  5f                   pop edi
// 0070ebb8  5e                   pop esi
// 0070ebb9  c20400               ret 4
// 0070ebbc  5f                   pop edi
// 0070ebbd  5e                   pop esi
// 0070ebbe  89442404             mov dword ptr [esp + 4], eax
// 0070ebc2  e969ffffff           jmp 0x70eb30
// 0070ebc7  e8e2f7f0ff           call 0x61e3ae
// copied from an identical function in another client (function ?Remove@CXTPRibbonGroup@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroup.cpp