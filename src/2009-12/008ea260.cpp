// roc 2009-12 008ea260  unit: CXTPRibbonGroup  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea260
//
// 008ea260  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 008ea263  33c0                 xor eax, eax
// 008ea265  85d2                 test edx, edx
// 008ea267  7e1e                 jle 0x8ea287
// 008ea269  56                   push esi
// 008ea26a  8b742408             mov esi, dword ptr [esp + 8]
// 008ea26e  57                   push edi
// 008ea26f  90                   nop 
// 008ea270  85c0                 test eax, eax
// 008ea272  7c21                 jl 0x8ea295
// 008ea274  3bc2                 cmp eax, edx
// 008ea276  7d1d                 jge 0x8ea295
// 008ea278  8b7948               mov edi, dword ptr [ecx + 0x48]
// 008ea27b  393487               cmp dword ptr [edi + eax*4], esi
// 008ea27e  740a                 je 0x8ea28a
// 008ea280  40                   inc eax
// 008ea281  3bc2                 cmp eax, edx
// 008ea283  7ceb                 jl 0x8ea270
// 008ea285  5f                   pop edi
// 008ea286  5e                   pop esi
// 008ea287  c20400               ret 4
// 008ea28a  5f                   pop edi
// 008ea28b  5e                   pop esi
// 008ea28c  89442404             mov dword ptr [esp + 4], eax
// 008ea290  e92bf5ffff           jmp 0x8e97c0
// 008ea295  e87298f0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Remove@CXTPRibbonGroup@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp