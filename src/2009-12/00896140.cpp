// roc 2009-12 00896140  unit: CXTPRibbonBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896140
//
// 00896140  57                   push edi
// 00896141  8b7c2408             mov edi, dword ptr [esp + 8]
// 00896145  3bb96c020000         cmp edi, dword ptr [ecx + 0x26c]
// 0089614b  7509                 jne 0x896156
// 0089614d  b801000000           mov eax, 1
// 00896152  5f                   pop edi
// 00896153  c20400               ret 4
// 00896156  3bb970020000         cmp edi, dword ptr [ecx + 0x270]
// 0089615c  74ef                 je 0x89614d
// 0089615e  33c0                 xor eax, eax
// 00896160  398758010000         cmp dword ptr [edi + 0x158], eax
// 00896166  7536                 jne 0x89619e
// 00896168  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 0089616e  85c9                 test ecx, ecx
// 00896170  742c                 je 0x89619e
// 00896172  56                   push esi
// 00896173  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 00896176  85f6                 test esi, esi
// 00896178  7e21                 jle 0x89619b
// 0089617a  8d9b00000000         lea ebx, [ebx]
// 00896180  85c0                 test eax, eax
// 00896182  7c0c                 jl 0x896190
// 00896184  3bc6                 cmp eax, esi
// 00896186  7d08                 jge 0x896190
// 00896188  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0089618b  8b1482               mov edx, dword ptr [edx + eax*4]
// 0089618e  eb02                 jmp 0x896192
// 00896190  33d2                 xor edx, edx
// 00896192  3bd7                 cmp edx, edi
// 00896194  740c                 je 0x8961a2
// 00896196  40                   inc eax
// 00896197  3bc6                 cmp eax, esi
// 00896199  7ce5                 jl 0x896180
// 0089619b  33c0                 xor eax, eax
// 0089619d  5e                   pop esi
// 0089619e  5f                   pop edi
// 0089619f  c20400               ret 4
// 008961a2  5e                   pop esi
// 008961a3  b801000000           mov eax, 1
// 008961a8  5f                   pop edi
// 008961a9  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsQuickAccessControl@CXTPRibbonBar@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
