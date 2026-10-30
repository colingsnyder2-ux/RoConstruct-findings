// roc 2009-12 008162c0  unit: CXTPCommandBar  size: 513 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008162c0
//
// 008162c0  8b442404             mov eax, dword ptr [esp + 4]
// 008162c4  83ec08               sub esp, 8
// 008162c7  53                   push ebx
// 008162c8  56                   push esi
// 008162c9  57                   push edi
// 008162ca  8bf1                 mov esi, ecx
// 008162cc  3d63030000           cmp eax, 0x363
// 008162d1  7545                 jne 0x816318
// 008162d3  33ff                 xor edi, edi
// 008162d5  39be84000000         cmp dword ptr [esi + 0x84], edi
// 008162db  0f8ed5010000         jle 0x8164b6
// 008162e1  8d5f04               lea ebx, [edi + 4]
// 008162e4  57                   push edi
// 008162e5  8bce                 mov ecx, esi
// 008162e7  e8f4e9ffff           call 0x814ce0
// 008162ec  399800010000         cmp dword ptr [eax + 0x100], ebx
// 008162f2  7510                 jne 0x816304
// 008162f4  8b10                 mov edx, dword ptr [eax]
// 008162f6  6a01                 push 1
// 008162f8  8bc8                 mov ecx, eax
// 008162fa  8b82f4010000         mov eax, dword ptr [edx + 0x1f4]
// 00816300  6a01                 push 1
// 00816302  ffd0                 call eax
// 00816304  47                   inc edi
// 00816305  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 0081630b  7cd7                 jl 0x8162e4
// 0081630d  5f                   pop edi
// 0081630e  5e                   pop esi
// 0081630f  33c0                 xor eax, eax
// 00816311  5b                   pop ebx
// 00816312  83c408               add esp, 8
// 00816315  c21000               ret 0x10
// 00816318  83f815               cmp eax, 0x15
// 0081631b  7558                 jne 0x816375
// 0081631d  e8ae960100           call 0x82f9d0
// 00816322  8bc8                 mov ecx, eax
// 00816324  e8e7a80100           call 0x830c10
// 00816329  8bce                 mov ecx, esi
// 0081632b  e8b0e3ffff           call 0x8146e0
// 00816330  8b10                 mov edx, dword ptr [eax]
// 00816332  8bc8                 mov ecx, eax
// 00816334  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 0081633a  ffd0                 call eax
// 0081633c  8bce                 mov ecx, esi
// 0081633e  e8bde3ffff           call 0x814700
// 00816343  8bc8                 mov ecx, eax
// 00816345  e8c665ffff           call 0x80c910
// 0081634a  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00816350  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00816353  6805010000           push 0x105
// 00816358  6a00                 push 0
// 0081635a  6a00                 push 0
// 0081635c  52                   push edx
// 0081635d  ff151ccb9800         call dword ptr [0x98cb1c]
// 00816363  8bce                 mov ecx, esi
// 00816365  e8e6f2ffff           call 0x815650
// 0081636a  5f                   pop edi
// 0081636b  5e                   pop esi
// 0081636c  33c0                 xor eax, eax
// 0081636e  5b                   pop ebx
// 0081636f  83c408               add esp, 8
// 00816372  c21000               ret 0x10
// 00816375  83f81a               cmp eax, 0x1a
// 00816378  7513                 jne 0x81638d
// 0081637a  e861e3ffff           call 0x8146e0
// 0081637f  8b10                 mov edx, dword ptr [eax]
// 00816381  8bc8                 mov ecx, eax
// 00816383  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00816389  ffd0                 call eax
// 0081638b  ebbd                 jmp 0x81634a
// 0081638d  83f810               cmp eax, 0x10
// 00816390  751b                 jne 0x8163ad
// 00816392  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00816395  83781400             cmp dword ptr [eax + 0x14], 0
// 00816399  0f8417010000         je 0x8164b6
// 0081639f  5f                   pop edi
// 008163a0  5e                   pop esi
// 008163a1  b801000000           mov eax, 1
// 008163a6  5b                   pop ebx
// 008163a7  83c408               add esp, 8
// 008163aa  c21000               ret 0x10
// 008163ad  3d11010000           cmp eax, 0x111
// 008163b2  0f85cc000000         jne 0x816484
// 008163b8  ff15eccb9800         call dword ptr [0x98cbec]
// 008163be  50                   push eax
// 008163bf  e866d7fdff           call 0x7f3b2a
// 008163c4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008163c8  8bf8                 mov edi, eax
// 008163ca  85ff                 test edi, edi
// 008163cc  7443                 je 0x816411
// 008163ce  e83d2bfeff           call 0x7f8f10
// 008163d3  50                   push eax
// 008163d4  8bcf                 mov ecx, edi
// 008163d6  e80ddafdff           call 0x7f3de8
// 008163db  85c0                 test eax, eax
// 008163dd  7432                 je 0x816411
// 008163df  8b442420             mov eax, dword ptr [esp + 0x20]
// 008163e3  8b17                 mov edx, dword ptr [edi]
// 008163e5  8b92f8000000         mov edx, dword ptr [edx + 0xf8]
// 008163eb  50                   push eax
// 008163ec  53                   push ebx
// 008163ed  8bcf                 mov ecx, edi
// 008163ef  ffd2                 call edx
// 008163f1  85c0                 test eax, eax
// 008163f3  741c                 je 0x816411
// 008163f5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008163f9  85c0                 test eax, eax
// 008163fb  7406                 je 0x816403
// 008163fd  c70001000000         mov dword ptr [eax], 1
// 00816403  5f                   pop edi
// 00816404  5e                   pop esi
// 00816405  b801000000           mov eax, 1
// 0081640a  5b                   pop ebx
// 0081640b  83c408               add esp, 8
// 0081640e  c21000               ret 0x10
// 00816411  b846e10000           mov eax, 0xe146
// 00816416  663bd8               cmp bx, ax
// 00816419  0f8597000000         jne 0x8164b6
// 0081641f  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 00816426  0f8e8a000000         jle 0x8164b6
// 0081642c  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00816432  8d44240c             lea eax, [esp + 0xc]
// 00816436  50                   push eax
// 00816437  6a00                 push 0
// 00816439  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00816441  8b11                 mov edx, dword ptr [ecx]
// 00816443  8b5214               mov edx, dword ptr [edx + 0x14]
// 00816446  6a00                 push 0
// 00816448  6846e10000           push 0xe146
// 0081644d  ffd2                 call edx
// 0081644f  85c0                 test eax, eax
// 00816451  7463                 je 0x8164b6
// 00816453  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00816459  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0081645f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00816462  0500000100           add eax, 0x10000
// 00816467  50                   push eax
// 00816468  6a00                 push 0
// 0081646a  6865030000           push 0x365
// 0081646f  52                   push edx
// 00816470  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00816476  5f                   pop edi
// 00816477  5e                   pop esi
// 00816478  b801000000           mov eax, 1
// 0081647d  5b                   pop ebx
// 0081647e  83c408               add esp, 8
// 00816481  c21000               ret 0x10
// 00816484  83f81c               cmp eax, 0x1c
// 00816487  7421                 je 0x8164aa
// 00816489  3d12010000           cmp eax, 0x112
// 0081648e  7526                 jne 0x8164b6
// 00816490  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00816494  85c0                 test eax, eax
// 00816496  7405                 je 0x81649d
// 00816498  6685c0               test ax, ax
// 0081649b  7419                 je 0x8164b6
// 0081649d  3d00f10000           cmp eax, 0xf100
// 008164a2  7412                 je 0x8164b6
// 008164a4  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008164a8  eb05                 jmp 0x8164af
// 008164aa  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008164af  7505                 jne 0x8164b6
// 008164b1  e82afaffff           call 0x815ee0
// 008164b6  5f                   pop edi
// 008164b7  5e                   pop esi
// 008164b8  33c0                 xor eax, eax
// 008164ba  5b                   pop ebx
// 008164bb  83c408               add esp, 8
// 008164be  c21000               ret 0x10
// copied from an identical function in another client (function ?OnFrameWndMsg@CXTPCommandBars@@QAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp