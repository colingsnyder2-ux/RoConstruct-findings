// roc 2009-12 0081fb90  unit: CXTPReportControl  size: 393 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081fb90
//
// 0081fb90  6aff                 push -1
// 0081fb92  68c8ae9500           push 0x95aec8
// 0081fb97  64a100000000         mov eax, dword ptr fs:[0]
// 0081fb9d  50                   push eax
// 0081fb9e  83ec14               sub esp, 0x14
// 0081fba1  53                   push ebx
// 0081fba2  55                   push ebp
// 0081fba3  56                   push esi
// 0081fba4  57                   push edi
// 0081fba5  a10052b600           mov eax, dword ptr [0xb65200]
// 0081fbaa  33c4                 xor eax, esp
// 0081fbac  50                   push eax
// 0081fbad  8d442428             lea eax, [esp + 0x28]
// 0081fbb1  64a300000000         mov dword ptr fs:[0], eax
// 0081fbb7  8bf1                 mov esi, ecx
// 0081fbb9  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0081fbbd  85ff                 test edi, edi
// 0081fbbf  0f843e010000         je 0x81fd03
// 0081fbc5  8b07                 mov eax, dword ptr [edi]
// 0081fbc7  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0081fbca  8bcf                 mov ecx, edi
// 0081fbcc  ffd2                 call edx
// 0081fbce  8bd8                 mov ebx, eax
// 0081fbd0  895c2438             mov dword ptr [esp + 0x38], ebx
// 0081fbd4  83fbff               cmp ebx, -1
// 0081fbd7  0f8426010000         je 0x81fd03
// 0081fbdd  837f5c00             cmp dword ptr [edi + 0x5c], 0
// 0081fbe1  0f841c010000         je 0x81fd03
// 0081fbe7  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081fbed  e82ed00000           call 0x82cc20
// 0081fbf2  3bd8                 cmp ebx, eax
// 0081fbf4  0f8d09010000         jge 0x81fd03
// 0081fbfa  3b9e08010000         cmp ebx, dword ptr [esi + 0x108]
// 0081fc00  7d0d                 jge 0x81fc0f
// 0081fc02  53                   push ebx
// 0081fc03  8bce                 mov ecx, esi
// 0081fc05  e896d9ffff           call 0x81d5a0
// 0081fc0a  e9f4000000           jmp 0x81fd03
// 0081fc0f  56                   push esi
// 0081fc10  8d4c2418             lea ecx, [esp + 0x18]
// 0081fc14  e8bd4afdff           call 0x7f46d6
// 0081fc19  8b8688020000         mov eax, dword ptr [esi + 0x288]
// 0081fc1f  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081fc25  8b9e94000000         mov ebx, dword ptr [esi + 0x94]
// 0081fc2b  8ba89c000000         mov ebp, dword ptr [eax + 0x9c]
// 0081fc31  8bbe08010000         mov edi, dword ptr [esi + 0x108]
// 0081fc37  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0081fc3f  e8dccf0000           call 0x82cc20
// 0081fc44  3bf8                 cmp edi, eax
// 0081fc46  7d4b                 jge 0x81fc93
// 0081fc48  eb06                 jmp 0x81fc50
// 0081fc4a  8d9b00000000         lea ebx, [ebx]
// 0081fc50  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081fc56  8b01                 mov eax, dword ptr [ecx]
// 0081fc58  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081fc5b  57                   push edi
// 0081fc5c  ffd2                 call edx
// 0081fc5e  85c0                 test eax, eax
// 0081fc60  7421                 je 0x81fc83
// 0081fc62  8b10                 mov edx, dword ptr [eax]
// 0081fc64  8b5268               mov edx, dword ptr [edx + 0x68]
// 0081fc67  55                   push ebp
// 0081fc68  8d4c2418             lea ecx, [esp + 0x18]
// 0081fc6c  51                   push ecx
// 0081fc6d  8bc8                 mov ecx, eax
// 0081fc6f  ffd2                 call edx
// 0081fc71  03c3                 add eax, ebx
// 0081fc73  3b869c000000         cmp eax, dword ptr [esi + 0x9c]
// 0081fc79  7f18                 jg 0x81fc93
// 0081fc7b  3b7c2438             cmp edi, dword ptr [esp + 0x38]
// 0081fc7f  7471                 je 0x81fcf2
// 0081fc81  8bd8                 mov ebx, eax
// 0081fc83  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081fc89  47                   inc edi
// 0081fc8a  e891cf0000           call 0x82cc20
// 0081fc8f  3bf8                 cmp edi, eax
// 0081fc91  7cbd                 jl 0x81fc50
// 0081fc93  8bbe9c000000         mov edi, dword ptr [esi + 0x9c]
// 0081fc99  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0081fc9d  2bbe94000000         sub edi, dword ptr [esi + 0x94]
// 0081fca3  85db                 test ebx, ebx
// 0081fca5  7c3c                 jl 0x81fce3
// 0081fca7  eb07                 jmp 0x81fcb0
// 0081fca9  8da42400000000       lea esp, [esp]
// 0081fcb0  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081fcb6  8b01                 mov eax, dword ptr [ecx]
// 0081fcb8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081fcbb  53                   push ebx
// 0081fcbc  ffd2                 call edx
// 0081fcbe  8b10                 mov edx, dword ptr [eax]
// 0081fcc0  8b5268               mov edx, dword ptr [edx + 0x68]
// 0081fcc3  55                   push ebp
// 0081fcc4  8d4c2418             lea ecx, [esp + 0x18]
// 0081fcc8  51                   push ecx
// 0081fcc9  8bc8                 mov ecx, eax
// 0081fccb  ffd2                 call edx
// 0081fccd  8bcf                 mov ecx, edi
// 0081fccf  2bc8                 sub ecx, eax
// 0081fcd1  7809                 js 0x81fcdc
// 0081fcd3  83eb01               sub ebx, 1
// 0081fcd6  8bf9                 mov edi, ecx
// 0081fcd8  79d6                 jns 0x81fcb0
// 0081fcda  eb07                 jmp 0x81fce3
// 0081fcdc  3b5c2438             cmp ebx, dword ptr [esp + 0x38]
// 0081fce0  7401                 je 0x81fce3
// 0081fce2  43                   inc ebx
// 0081fce3  53                   push ebx
// 0081fce4  8bce                 mov ecx, esi
// 0081fce6  e8b5d8ffff           call 0x81d5a0
// 0081fceb  8bce                 mov ecx, esi
// 0081fced  e88ef7ffff           call 0x81f480
// 0081fcf2  8d4c2414             lea ecx, [esp + 0x14]
// 0081fcf6  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0081fcfe  e8cd49fdff           call 0x7f46d0
// 0081fd03  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081fd07  64890d00000000       mov dword ptr fs:[0], ecx
// 0081fd0e  59                   pop ecx
// 0081fd0f  5f                   pop edi
// 0081fd10  5e                   pop esi
// 0081fd11  5d                   pop ebp
// 0081fd12  5b                   pop ebx
// 0081fd13  83c420               add esp, 0x20
// 0081fd16  c20400               ret 4
// copied from an identical function in another client (function ?EnsureVisible@CXTPReportControl@@QAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp