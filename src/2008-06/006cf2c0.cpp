// roc 2008-06 006cf2c0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf2c0
//
// 006cf2c0  56                   push esi
// 006cf2c1  8b3548e19700         mov esi, dword ptr [0x97e148]
// 006cf2c7  85f6                 test esi, esi
// 006cf2c9  0f84c4000000         je 0x6cf393
// 006cf2cf  90                   nop 
// 006cf2d0  8b4608               mov eax, dword ptr [esi + 8]
// 006cf2d3  85c0                 test eax, eax
// 006cf2d5  7408                 je 0x6cf2df
// 006cf2d7  8bf0                 mov esi, eax
// 006cf2d9  85f6                 test esi, esi
// 006cf2db  75f3                 jne 0x6cf2d0
// 006cf2dd  5e                   pop esi
// 006cf2de  c3                   ret 
// 006cf2df  53                   push ebx
// 006cf2e0  55                   push ebp
// 006cf2e1  8b2df0218000         mov ebp, dword ptr [0x8021f0]
// 006cf2e7  57                   push edi
// 006cf2e8  eb06                 jmp 0x6cf2f0
// 006cf2ea  8d9b00000000         lea ebx, [ebx]
// 006cf2f0  833e00               cmp dword ptr [esi], 0
// 006cf2f3  0f858c000000         jne 0x6cf385
// 006cf2f9  8b4608               mov eax, dword ptr [esi + 8]
// 006cf2fc  8bde                 mov ebx, esi
// 006cf2fe  85c0                 test eax, eax
// 006cf300  7406                 je 0x6cf308
// 006cf302  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006cf305  89480c               mov dword ptr [eax + 0xc], ecx
// 006cf308  8b460c               mov eax, dword ptr [esi + 0xc]
// 006cf30b  85c0                 test eax, eax
// 006cf30d  7406                 je 0x6cf315
// 006cf30f  8b5608               mov edx, dword ptr [esi + 8]
// 006cf312  895008               mov dword ptr [eax + 8], edx
// 006cf315  393548e19700         cmp dword ptr [0x97e148], esi
// 006cf31b  750f                 jne 0x6cf32c
// 006cf31d  8b4608               mov eax, dword ptr [esi + 8]
// 006cf320  85c0                 test eax, eax
// 006cf322  7503                 jne 0x6cf327
// 006cf324  8b460c               mov eax, dword ptr [esi + 0xc]
// 006cf327  a348e19700           mov dword ptr [0x97e148], eax
// 006cf32c  8b760c               mov esi, dword ptr [esi + 0xc]
// 006cf32f  33ff                 xor edi, edi
// 006cf331  393d1ce19700         cmp dword ptr [0x97e11c], edi
// 006cf337  740d                 je 0x6cf346
// 006cf339  681ce19700           push 0x97e11c
// 006cf33e  ff15ac218000         call dword ptr [0x8021ac]
// 006cf344  8bf8                 mov edi, eax
// 006cf346  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006cf34d  53                   push ebx
// 006cf34e  742b                 je 0x6cf37b
// 006cf350  8b0d18e19700         mov ecx, dword ptr [0x97e118]
// 006cf356  6a00                 push 0
// 006cf358  51                   push ecx
// 006cf359  ffd5                 call ebp
// 006cf35b  85ff                 test edi, edi
// 006cf35d  7529                 jne 0x6cf388
// 006cf35f  a118e19700           mov eax, dword ptr [0x97e118]
// 006cf364  85c0                 test eax, eax
// 006cf366  7407                 je 0x6cf36f
// 006cf368  50                   push eax
// 006cf369  ff15ec218000         call dword ptr [0x8021ec]
// 006cf36f  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 006cf379  eb0d                 jmp 0x6cf388
// 006cf37b  e8fa12fdff           call 0x6a067a
// 006cf380  83c404               add esp, 4
// 006cf383  eb03                 jmp 0x6cf388
// 006cf385  8b760c               mov esi, dword ptr [esi + 0xc]
// 006cf388  85f6                 test esi, esi
// 006cf38a  0f8560ffffff         jne 0x6cf2f0
// 006cf390  5f                   pop edi
// 006cf391  5d                   pop ebp
// 006cf392  5b                   pop ebx
// 006cf393  5e                   pop esi
// 006cf394  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?FreeExtraData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
