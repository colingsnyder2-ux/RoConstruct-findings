// from server: 100% by auto
// roc 2008-06 00723590  unit: CXTPRibbonBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00723590
//
// 00723590  57                   push edi
// 00723591  8b7c2408             mov edi, dword ptr [esp + 8]
// 00723595  3bb96c020000         cmp edi, dword ptr [ecx + 0x26c]
// 0072359b  7509                 jne 0x7235a6
// 0072359d  b801000000           mov eax, 1
// 007235a2  5f                   pop edi
// 007235a3  c20400               ret 4
// 007235a6  3bb970020000         cmp edi, dword ptr [ecx + 0x270]
// 007235ac  74ef                 je 0x72359d
// 007235ae  33c0                 xor eax, eax
// 007235b0  398758010000         cmp dword ptr [edi + 0x158], eax
// 007235b6  7536                 jne 0x7235ee
// 007235b8  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 007235be  85c9                 test ecx, ecx
// 007235c0  742c                 je 0x7235ee
// 007235c2  56                   push esi
// 007235c3  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 007235c6  85f6                 test esi, esi
// 007235c8  7e21                 jle 0x7235eb
// 007235ca  8d9b00000000         lea ebx, [ebx]
// 007235d0  85c0                 test eax, eax
// 007235d2  7c0c                 jl 0x7235e0
// 007235d4  3bc6                 cmp eax, esi
// 007235d6  7d08                 jge 0x7235e0
// 007235d8  8b5128               mov edx, dword ptr [ecx + 0x28]
// 007235db  8b1482               mov edx, dword ptr [edx + eax*4]
// 007235de  eb02                 jmp 0x7235e2
// 007235e0  33d2                 xor edx, edx
// 007235e2  3bd7                 cmp edx, edi
// 007235e4  740c                 je 0x7235f2
// 007235e6  40                   inc eax
// 007235e7  3bc6                 cmp eax, esi
// 007235e9  7ce5                 jl 0x7235d0
// 007235eb  33c0                 xor eax, eax
// 007235ed  5e                   pop esi
// 007235ee  5f                   pop edi
// 007235ef  c20400               ret 4
// 007235f2  5e                   pop esi
// 007235f3  b801000000           mov eax, 1
// 007235f8  5f                   pop edi
// 007235f9  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsQuickAccessControl@CXTPRibbonBar@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
