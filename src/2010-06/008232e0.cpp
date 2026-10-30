// roc 2010-06 008232e0  unit: PAVCXTPCommandBar::?$CArray  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008232e0
//
// 008232e0  83ec14               sub esp, 0x14
// 008232e3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008232e7  53                   push ebx
// 008232e8  55                   push ebp
// 008232e9  56                   push esi
// 008232ea  57                   push edi
// 008232eb  8bf1                 mov esi, ecx
// 008232ed  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008232f1  50                   push eax
// 008232f2  51                   push ecx
// 008232f3  ff15e0b99e00         call dword ptr [0x9eb9e0]
// 008232f9  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 008232fc  83eb01               sub ebx, 1
// 008232ff  89442410             mov dword ptr [esp + 0x10], eax
// 00823303  7870                 js 0x823375
// 00823305  8b2dacba9e00         mov ebp, dword ptr [0x9ebaac]
// 0082330b  eb03                 jmp 0x823310
// 0082330d  8d4900               lea ecx, [ecx]
// 00823310  85db                 test ebx, ebx
// 00823312  0f8c6e010000         jl 0x823486
// 00823318  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 0082331b  0f8d65010000         jge 0x823486
// 00823321  8b560c               mov edx, dword ptr [esi + 0xc]
// 00823324  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 00823327  85ff                 test edi, edi
// 00823329  7445                 je 0x823370
// 0082332b  837f2000             cmp dword ptr [edi + 0x20], 0
// 0082332f  743f                 je 0x823370
// 00823331  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00823335  83ec08               sub esp, 8
// 00823338  8bc4                 mov eax, esp
// 0082333a  8908                 mov dword ptr [eax], ecx
// 0082333c  8b542438             mov edx, dword ptr [esp + 0x38]
// 00823340  895004               mov dword ptr [eax + 4], edx
// 00823343  8b07                 mov eax, dword ptr [edi]
// 00823345  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 0082334b  8bcf                 mov ecx, edi
// 0082334d  ffd2                 call edx
// 0082334f  83f8fe               cmp eax, -2
// 00823352  741c                 je 0x823370
// 00823354  83f801               cmp eax, 1
// 00823357  0f84e8000000         je 0x823445
// 0082335d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00823361  8b4720               mov eax, dword ptr [edi + 0x20]
// 00823364  51                   push ecx
// 00823365  50                   push eax
// 00823366  ffd5                 call ebp
// 00823368  85c0                 test eax, eax
// 0082336a  0f85d5000000         jne 0x823445
// 00823370  83eb01               sub ebx, 1
// 00823373  799b                 jns 0x823310
// 00823375  837e1000             cmp dword ptr [esi + 0x10], 0
// 00823379  7e64                 jle 0x8233df
// 0082337b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0082337e  33ff                 xor edi, edi
// 00823380  85c0                 test eax, eax
// 00823382  7e5b                 jle 0x8233df
// 00823384  8b2d28bc9e00         mov ebp, dword ptr [0x9ebc28]
// 0082338a  8d9b00000000         lea ebx, [ebx]
// 00823390  85ff                 test edi, edi
// 00823392  0f8cee000000         jl 0x823486
// 00823398  3bf8                 cmp edi, eax
// 0082339a  0f8de6000000         jge 0x823486
// 008233a0  8b5630               mov edx, dword ptr [esi + 0x30]
// 008233a3  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 008233a6  53                   push ebx
// 008233a7  ffd5                 call ebp
// 008233a9  85c0                 test eax, eax
// 008233ab  742a                 je 0x8233d7
// 008233ad  53                   push ebx
// 008233ae  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 008233b4  85c0                 test eax, eax
// 008233b6  741f                 je 0x8233d7
// 008233b8  53                   push ebx
// 008233b9  8d4c2418             lea ecx, [esp + 0x18]
// 008233bd  e8bebefdff           call 0x7ff280
// 008233c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008233c6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008233ca  51                   push ecx
// 008233cb  52                   push edx
// 008233cc  50                   push eax
// 008233cd  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 008233d3  85c0                 test eax, eax
// 008233d5  7562                 jne 0x823439
// 008233d7  8b4634               mov eax, dword ptr [esi + 0x34]
// 008233da  47                   inc edi
// 008233db  3bf8                 cmp edi, eax
// 008233dd  7cb1                 jl 0x823390
// 008233df  8b442410             mov eax, dword ptr [esp + 0x10]
// 008233e3  85c0                 test eax, eax
// 008233e5  7416                 je 0x8233fd
// 008233e7  837e1000             cmp dword ptr [esi + 0x10], 0
// 008233eb  7e10                 jle 0x8233fd
// 008233ed  6ae6                 push -0x1a
// 008233ef  50                   push eax
// 008233f0  ff15c0ba9e00         call dword ptr [0x9ebac0]
// 008233f6  a900000100           test eax, 0x10000
// 008233fb  753c                 jne 0x823439
// 008233fd  8b4610               mov eax, dword ptr [esi + 0x10]
// 00823400  33ff                 xor edi, edi
// 00823402  85c0                 test eax, eax
// 00823404  7e33                 jle 0x823439
// 00823406  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0082340a  8d9b00000000         lea ebx, [ebx]
// 00823410  85ff                 test edi, edi
// 00823412  7c72                 jl 0x823486
// 00823414  3bf8                 cmp edi, eax
// 00823416  7d6e                 jge 0x823486
// 00823418  8b442430             mov eax, dword ptr [esp + 0x30]
// 0082341c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00823420  8b560c               mov edx, dword ptr [esi + 0xc]
// 00823423  50                   push eax
// 00823424  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00823427  51                   push ecx
// 00823428  53                   push ebx
// 00823429  50                   push eax
// 0082342a  8bce                 mov ecx, esi
// 0082342c  e8effdffff           call 0x823220
// 00823431  8b4610               mov eax, dword ptr [esi + 0x10]
// 00823434  47                   inc edi
// 00823435  3bf8                 cmp edi, eax
// 00823437  7cd7                 jl 0x823410
// 00823439  33c0                 xor eax, eax
// 0082343b  5f                   pop edi
// 0082343c  5e                   pop esi
// 0082343d  5d                   pop ebp
// 0082343e  5b                   pop ebx
// 0082343f  83c414               add esp, 0x14
// 00823442  c20c00               ret 0xc
// 00823445  83bf2c01000000       cmp dword ptr [edi + 0x12c], 0
// 0082344c  7eeb                 jle 0x823439
// 0082344e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00823452  3d00020000           cmp eax, 0x200
// 00823457  74e0                 je 0x823439
// 00823459  3da0000000           cmp eax, 0xa0
// 0082345e  74d9                 je 0x823439
// 00823460  837e4000             cmp dword ptr [esi + 0x40], 0
// 00823464  75d3                 jne 0x823439
// 00823466  8bce                 mov ecx, esi
// 00823468  e843fdffff           call 0x8231b0
// 0082346d  5f                   pop edi
// 0082346e  5e                   pop esi
// 0082346f  33c0                 xor eax, eax
// 00823471  33c9                 xor ecx, ecx
// 00823473  5d                   pop ebp
// 00823474  a30462c200           mov dword ptr [0xc26204], eax
// 00823479  890d0862c200         mov dword ptr [0xc26208], ecx
// 0082347f  5b                   pop ebx
// 00823480  83c414               add esp, 0x14
// 00823483  c20c00               ret 0xc
// 00823486  e8c147f8ff           call 0x7a7c4c
// copied from an identical function in another client (function ?PreTranslateMouseEvents@CXTPMouseManager@@AAEHIUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp