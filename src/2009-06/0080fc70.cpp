// roc 2009-06 0080fc70  unit: CXTPRibbonTab  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080fc70
//
// 0080fc70  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 0080fc76  56                   push esi
// 0080fc77  8b7128               mov esi, dword ptr [ecx + 0x28]
// 0080fc7a  33c0                 xor eax, eax
// 0080fc7c  57                   push edi
// 0080fc7d  85f6                 test esi, esi
// 0080fc7f  7e20                 jle 0x80fca1
// 0080fc81  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0080fc85  85c0                 test eax, eax
// 0080fc87  7c0c                 jl 0x80fc95
// 0080fc89  3bc6                 cmp eax, esi
// 0080fc8b  7d08                 jge 0x80fc95
// 0080fc8d  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0080fc90  8b1482               mov edx, dword ptr [edx + eax*4]
// 0080fc93  eb02                 jmp 0x80fc97
// 0080fc95  33d2                 xor edx, edx
// 0080fc97  397a60               cmp dword ptr [edx + 0x60], edi
// 0080fc9a  740c                 je 0x80fca8
// 0080fc9c  40                   inc eax
// 0080fc9d  3bc6                 cmp eax, esi
// 0080fc9f  7ce4                 jl 0x80fc85
// 0080fca1  5f                   pop edi
// 0080fca2  33c0                 xor eax, eax
// 0080fca4  5e                   pop esi
// 0080fca5  c20400               ret 4
// 0080fca8  85c0                 test eax, eax
// 0080fcaa  7cf5                 jl 0x80fca1
// 0080fcac  3bc6                 cmp eax, esi
// 0080fcae  7df1                 jge 0x80fca1
// 0080fcb0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0080fcb3  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0080fcb6  5f                   pop edi
// 0080fcb7  5e                   pop esi
// 0080fcb8  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTab.cpp (function ?FindGroup@CXTPRibbonTab@@QBEPAVCXTPRibbonGroup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTab.cpp
