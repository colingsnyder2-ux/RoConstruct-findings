// roc 2010-06 0084a2d0  unit: CXTPRibbonBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084a2d0
//
// 0084a2d0  57                   push edi
// 0084a2d1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0084a2d5  3bb96c020000         cmp edi, dword ptr [ecx + 0x26c]
// 0084a2db  7509                 jne 0x84a2e6
// 0084a2dd  b801000000           mov eax, 1
// 0084a2e2  5f                   pop edi
// 0084a2e3  c20400               ret 4
// 0084a2e6  3bb970020000         cmp edi, dword ptr [ecx + 0x270]
// 0084a2ec  74ef                 je 0x84a2dd
// 0084a2ee  33c0                 xor eax, eax
// 0084a2f0  398758010000         cmp dword ptr [edi + 0x158], eax
// 0084a2f6  7536                 jne 0x84a32e
// 0084a2f8  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 0084a2fe  85c9                 test ecx, ecx
// 0084a300  742c                 je 0x84a32e
// 0084a302  56                   push esi
// 0084a303  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 0084a306  85f6                 test esi, esi
// 0084a308  7e21                 jle 0x84a32b
// 0084a30a  8d9b00000000         lea ebx, [ebx]
// 0084a310  85c0                 test eax, eax
// 0084a312  7c0c                 jl 0x84a320
// 0084a314  3bc6                 cmp eax, esi
// 0084a316  7d08                 jge 0x84a320
// 0084a318  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0084a31b  8b1482               mov edx, dword ptr [edx + eax*4]
// 0084a31e  eb02                 jmp 0x84a322
// 0084a320  33d2                 xor edx, edx
// 0084a322  3bd7                 cmp edx, edi
// 0084a324  740c                 je 0x84a332
// 0084a326  40                   inc eax
// 0084a327  3bc6                 cmp eax, esi
// 0084a329  7ce5                 jl 0x84a310
// 0084a32b  33c0                 xor eax, eax
// 0084a32d  5e                   pop esi
// 0084a32e  5f                   pop edi
// 0084a32f  c20400               ret 4
// 0084a332  5e                   pop esi
// 0084a333  b801000000           mov eax, 1
// 0084a338  5f                   pop edi
// 0084a339  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsQuickAccessControl@CXTPRibbonBar@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
