// roc 2009-12 008cf3c0  unit: CXTPTabManagerItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf3c0
//
// 008cf3c0  8b5170               mov edx, dword ptr [ecx + 0x70]
// 008cf3c3  56                   push esi
// 008cf3c4  33c0                 xor eax, eax
// 008cf3c6  57                   push edi
// 008cf3c7  85d2                 test edx, edx
// 008cf3c9  7e1d                 jle 0x8cf3e8
// 008cf3cb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008cf3cf  90                   nop 
// 008cf3d0  85c0                 test eax, eax
// 008cf3d2  7c2a                 jl 0x8cf3fe
// 008cf3d4  3bc2                 cmp eax, edx
// 008cf3d6  7d26                 jge 0x8cf3fe
// 008cf3d8  8b796c               mov edi, dword ptr [ecx + 0x6c]
// 008cf3db  8b3c87               mov edi, dword ptr [edi + eax*4]
// 008cf3de  397704               cmp dword ptr [edi + 4], esi
// 008cf3e1  740c                 je 0x8cf3ef
// 008cf3e3  40                   inc eax
// 008cf3e4  3bc2                 cmp eax, edx
// 008cf3e6  7ce8                 jl 0x8cf3d0
// 008cf3e8  5f                   pop edi
// 008cf3e9  33c0                 xor eax, eax
// 008cf3eb  5e                   pop esi
// 008cf3ec  c20400               ret 4
// 008cf3ef  3bc2                 cmp eax, edx
// 008cf3f1  7d0b                 jge 0x8cf3fe
// 008cf3f3  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 008cf3f6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008cf3f9  5f                   pop edi
// 008cf3fa  5e                   pop esi
// 008cf3fb  c20400               ret 4
// 008cf3fe  e80947f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?FindNavigateButton@CXTPTabManager@@QBEPAVCXTPTabManagerNavigateButton@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp