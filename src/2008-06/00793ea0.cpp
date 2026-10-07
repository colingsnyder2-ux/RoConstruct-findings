// roc 2008-06 00793ea0  unit: CXTPRibbonTab  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793ea0
//
// 00793ea0  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00793ea6  56                   push esi
// 00793ea7  8b7128               mov esi, dword ptr [ecx + 0x28]
// 00793eaa  33c0                 xor eax, eax
// 00793eac  57                   push edi
// 00793ead  85f6                 test esi, esi
// 00793eaf  7e20                 jle 0x793ed1
// 00793eb1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00793eb5  85c0                 test eax, eax
// 00793eb7  7c0c                 jl 0x793ec5
// 00793eb9  3bc6                 cmp eax, esi
// 00793ebb  7d08                 jge 0x793ec5
// 00793ebd  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00793ec0  8b1482               mov edx, dword ptr [edx + eax*4]
// 00793ec3  eb02                 jmp 0x793ec7
// 00793ec5  33d2                 xor edx, edx
// 00793ec7  397a60               cmp dword ptr [edx + 0x60], edi
// 00793eca  740c                 je 0x793ed8
// 00793ecc  40                   inc eax
// 00793ecd  3bc6                 cmp eax, esi
// 00793ecf  7ce4                 jl 0x793eb5
// 00793ed1  5f                   pop edi
// 00793ed2  33c0                 xor eax, eax
// 00793ed4  5e                   pop esi
// 00793ed5  c20400               ret 4
// 00793ed8  85c0                 test eax, eax
// 00793eda  7cf5                 jl 0x793ed1
// 00793edc  3bc6                 cmp eax, esi
// 00793ede  7df1                 jge 0x793ed1
// 00793ee0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00793ee3  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00793ee6  5f                   pop edi
// 00793ee7  5e                   pop esi
// 00793ee8  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTab.cpp (function ?FindGroup@CXTPRibbonTab@@QBEPAVCXTPRibbonGroup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTab.cpp
