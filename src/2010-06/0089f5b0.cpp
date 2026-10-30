// roc 2010-06 0089f5b0  unit: CXTPRibbonTab  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f5b0
//
// 0089f5b0  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 0089f5b6  56                   push esi
// 0089f5b7  8b7128               mov esi, dword ptr [ecx + 0x28]
// 0089f5ba  33c0                 xor eax, eax
// 0089f5bc  57                   push edi
// 0089f5bd  85f6                 test esi, esi
// 0089f5bf  7e20                 jle 0x89f5e1
// 0089f5c1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0089f5c5  85c0                 test eax, eax
// 0089f5c7  7c0c                 jl 0x89f5d5
// 0089f5c9  3bc6                 cmp eax, esi
// 0089f5cb  7d08                 jge 0x89f5d5
// 0089f5cd  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0089f5d0  8b1482               mov edx, dword ptr [edx + eax*4]
// 0089f5d3  eb02                 jmp 0x89f5d7
// 0089f5d5  33d2                 xor edx, edx
// 0089f5d7  397a60               cmp dword ptr [edx + 0x60], edi
// 0089f5da  740c                 je 0x89f5e8
// 0089f5dc  40                   inc eax
// 0089f5dd  3bc6                 cmp eax, esi
// 0089f5df  7ce4                 jl 0x89f5c5
// 0089f5e1  5f                   pop edi
// 0089f5e2  33c0                 xor eax, eax
// 0089f5e4  5e                   pop esi
// 0089f5e5  c20400               ret 4
// 0089f5e8  85c0                 test eax, eax
// 0089f5ea  7cf5                 jl 0x89f5e1
// 0089f5ec  3bc6                 cmp eax, esi
// 0089f5ee  7df1                 jge 0x89f5e1
// 0089f5f0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0089f5f3  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0089f5f6  5f                   pop edi
// 0089f5f7  5e                   pop esi
// 0089f5f8  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTab.cpp (function ?FindGroup@CXTPRibbonTab@@QBEPAVCXTPRibbonGroup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTab.cpp
