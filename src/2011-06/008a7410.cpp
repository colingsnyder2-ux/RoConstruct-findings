// roc 2011-06 008a7410  unit: CXTPRibbonBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a7410
//
// 008a7410  57                   push edi
// 008a7411  8b7c2408             mov edi, dword ptr [esp + 8]
// 008a7415  3bb96c020000         cmp edi, dword ptr [ecx + 0x26c]
// 008a741b  7509                 jne 0x8a7426
// 008a741d  b801000000           mov eax, 1
// 008a7422  5f                   pop edi
// 008a7423  c20400               ret 4
// 008a7426  3bb970020000         cmp edi, dword ptr [ecx + 0x270]
// 008a742c  74ef                 je 0x8a741d
// 008a742e  33c0                 xor eax, eax
// 008a7430  398758010000         cmp dword ptr [edi + 0x158], eax
// 008a7436  7536                 jne 0x8a746e
// 008a7438  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 008a743e  85c9                 test ecx, ecx
// 008a7440  742c                 je 0x8a746e
// 008a7442  56                   push esi
// 008a7443  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 008a7446  85f6                 test esi, esi
// 008a7448  7e21                 jle 0x8a746b
// 008a744a  8d9b00000000         lea ebx, [ebx]
// 008a7450  85c0                 test eax, eax
// 008a7452  7c0c                 jl 0x8a7460
// 008a7454  3bc6                 cmp eax, esi
// 008a7456  7d08                 jge 0x8a7460
// 008a7458  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008a745b  8b1482               mov edx, dword ptr [edx + eax*4]
// 008a745e  eb02                 jmp 0x8a7462
// 008a7460  33d2                 xor edx, edx
// 008a7462  3bd7                 cmp edx, edi
// 008a7464  740c                 je 0x8a7472
// 008a7466  40                   inc eax
// 008a7467  3bc6                 cmp eax, esi
// 008a7469  7ce5                 jl 0x8a7450
// 008a746b  33c0                 xor eax, eax
// 008a746d  5e                   pop esi
// 008a746e  5f                   pop edi
// 008a746f  c20400               ret 4
// 008a7472  5e                   pop esi
// 008a7473  b801000000           mov eax, 1
// 008a7478  5f                   pop edi
// 008a7479  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsQuickAccessControl@CXTPRibbonBar@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
