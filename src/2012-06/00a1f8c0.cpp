// roc 2012-06 00a1f8c0  unit: CXTPRibbonBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1f8c0
//
// 00a1f8c0  57                   push edi
// 00a1f8c1  8b7c2408             mov edi, dword ptr [esp + 8]
// 00a1f8c5  3bb96c020000         cmp edi, dword ptr [ecx + 0x26c]
// 00a1f8cb  7509                 jne 0xa1f8d6
// 00a1f8cd  b801000000           mov eax, 1
// 00a1f8d2  5f                   pop edi
// 00a1f8d3  c20400               ret 4
// 00a1f8d6  3bb970020000         cmp edi, dword ptr [ecx + 0x270]
// 00a1f8dc  74ef                 je 0xa1f8cd
// 00a1f8de  33c0                 xor eax, eax
// 00a1f8e0  398758010000         cmp dword ptr [edi + 0x158], eax
// 00a1f8e6  7536                 jne 0xa1f91e
// 00a1f8e8  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 00a1f8ee  85c9                 test ecx, ecx
// 00a1f8f0  742c                 je 0xa1f91e
// 00a1f8f2  56                   push esi
// 00a1f8f3  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 00a1f8f6  85f6                 test esi, esi
// 00a1f8f8  7e21                 jle 0xa1f91b
// 00a1f8fa  8d9b00000000         lea ebx, [ebx]
// 00a1f900  85c0                 test eax, eax
// 00a1f902  7c0c                 jl 0xa1f910
// 00a1f904  3bc6                 cmp eax, esi
// 00a1f906  7d08                 jge 0xa1f910
// 00a1f908  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a1f90b  8b1482               mov edx, dword ptr [edx + eax*4]
// 00a1f90e  eb02                 jmp 0xa1f912
// 00a1f910  33d2                 xor edx, edx
// 00a1f912  3bd7                 cmp edx, edi
// 00a1f914  740c                 je 0xa1f922
// 00a1f916  40                   inc eax
// 00a1f917  3bc6                 cmp eax, esi
// 00a1f919  7ce5                 jl 0xa1f900
// 00a1f91b  33c0                 xor eax, eax
// 00a1f91d  5e                   pop esi
// 00a1f91e  5f                   pop edi
// 00a1f91f  c20400               ret 4
// 00a1f922  5e                   pop esi
// 00a1f923  b801000000           mov eax, 1
// 00a1f928  5f                   pop edi
// 00a1f929  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsQuickAccessControl@CXTPRibbonBar@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
