// roc 2012-06 00a70440  unit: CXTPRibbonTab  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70440
//
// 00a70440  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00a70446  56                   push esi
// 00a70447  8b7128               mov esi, dword ptr [ecx + 0x28]
// 00a7044a  33c0                 xor eax, eax
// 00a7044c  57                   push edi
// 00a7044d  85f6                 test esi, esi
// 00a7044f  7e20                 jle 0xa70471
// 00a70451  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a70455  85c0                 test eax, eax
// 00a70457  7c0c                 jl 0xa70465
// 00a70459  3bc6                 cmp eax, esi
// 00a7045b  7d08                 jge 0xa70465
// 00a7045d  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00a70460  8b1482               mov edx, dword ptr [edx + eax*4]
// 00a70463  eb02                 jmp 0xa70467
// 00a70465  33d2                 xor edx, edx
// 00a70467  397a60               cmp dword ptr [edx + 0x60], edi
// 00a7046a  740c                 je 0xa70478
// 00a7046c  40                   inc eax
// 00a7046d  3bc6                 cmp eax, esi
// 00a7046f  7ce4                 jl 0xa70455
// 00a70471  5f                   pop edi
// 00a70472  33c0                 xor eax, eax
// 00a70474  5e                   pop esi
// 00a70475  c20400               ret 4
// 00a70478  85c0                 test eax, eax
// 00a7047a  7cf5                 jl 0xa70471
// 00a7047c  3bc6                 cmp eax, esi
// 00a7047e  7df1                 jge 0xa70471
// 00a70480  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00a70483  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00a70486  5f                   pop edi
// 00a70487  5e                   pop esi
// 00a70488  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTab.cpp (function ?FindGroup@CXTPRibbonTab@@QBEPAVCXTPRibbonGroup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTab.cpp
