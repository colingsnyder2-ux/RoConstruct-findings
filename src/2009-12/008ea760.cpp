// roc 2009-12 008ea760  unit: CXTPRibbonTab  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea760
//
// 008ea760  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 008ea766  56                   push esi
// 008ea767  8b7128               mov esi, dword ptr [ecx + 0x28]
// 008ea76a  33c0                 xor eax, eax
// 008ea76c  57                   push edi
// 008ea76d  85f6                 test esi, esi
// 008ea76f  7e20                 jle 0x8ea791
// 008ea771  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008ea775  85c0                 test eax, eax
// 008ea777  7c0c                 jl 0x8ea785
// 008ea779  3bc6                 cmp eax, esi
// 008ea77b  7d08                 jge 0x8ea785
// 008ea77d  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008ea780  8b1482               mov edx, dword ptr [edx + eax*4]
// 008ea783  eb02                 jmp 0x8ea787
// 008ea785  33d2                 xor edx, edx
// 008ea787  397a60               cmp dword ptr [edx + 0x60], edi
// 008ea78a  740c                 je 0x8ea798
// 008ea78c  40                   inc eax
// 008ea78d  3bc6                 cmp eax, esi
// 008ea78f  7ce4                 jl 0x8ea775
// 008ea791  5f                   pop edi
// 008ea792  33c0                 xor eax, eax
// 008ea794  5e                   pop esi
// 008ea795  c20400               ret 4
// 008ea798  85c0                 test eax, eax
// 008ea79a  7cf5                 jl 0x8ea791
// 008ea79c  3bc6                 cmp eax, esi
// 008ea79e  7df1                 jge 0x8ea791
// 008ea7a0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008ea7a3  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008ea7a6  5f                   pop edi
// 008ea7a7  5e                   pop esi
// 008ea7a8  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTab.cpp (function ?FindGroup@CXTPRibbonTab@@QBEPAVCXTPRibbonGroup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTab.cpp
