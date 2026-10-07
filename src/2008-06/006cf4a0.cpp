// roc 2008-06 006cf4a0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf4a0
//
// 006cf4a0  56                   push esi
// 006cf4a1  8b3560e19700         mov esi, dword ptr [0x97e160]
// 006cf4a7  85f6                 test esi, esi
// 006cf4a9  0f84c4000000         je 0x6cf573
// 006cf4af  90                   nop 
// 006cf4b0  8b4608               mov eax, dword ptr [esi + 8]
// 006cf4b3  85c0                 test eax, eax
// 006cf4b5  7408                 je 0x6cf4bf
// 006cf4b7  8bf0                 mov esi, eax
// 006cf4b9  85f6                 test esi, esi
// 006cf4bb  75f3                 jne 0x6cf4b0
// 006cf4bd  5e                   pop esi
// 006cf4be  c3                   ret 
// 006cf4bf  53                   push ebx
// 006cf4c0  55                   push ebp
// 006cf4c1  8b2df0218000         mov ebp, dword ptr [0x8021f0]
// 006cf4c7  57                   push edi
// 006cf4c8  eb06                 jmp 0x6cf4d0
// 006cf4ca  8d9b00000000         lea ebx, [ebx]
// 006cf4d0  833e00               cmp dword ptr [esi], 0
// 006cf4d3  0f858c000000         jne 0x6cf565
// 006cf4d9  8b4608               mov eax, dword ptr [esi + 8]
// 006cf4dc  8bde                 mov ebx, esi
// 006cf4de  85c0                 test eax, eax
// 006cf4e0  7406                 je 0x6cf4e8
// 006cf4e2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006cf4e5  89480c               mov dword ptr [eax + 0xc], ecx
// 006cf4e8  8b460c               mov eax, dword ptr [esi + 0xc]
// 006cf4eb  85c0                 test eax, eax
// 006cf4ed  7406                 je 0x6cf4f5
// 006cf4ef  8b5608               mov edx, dword ptr [esi + 8]
// 006cf4f2  895008               mov dword ptr [eax + 8], edx
// 006cf4f5  393560e19700         cmp dword ptr [0x97e160], esi
// 006cf4fb  750f                 jne 0x6cf50c
// 006cf4fd  8b4608               mov eax, dword ptr [esi + 8]
// 006cf500  85c0                 test eax, eax
// 006cf502  7503                 jne 0x6cf507
// 006cf504  8b460c               mov eax, dword ptr [esi + 0xc]
// 006cf507  a360e19700           mov dword ptr [0x97e160], eax
// 006cf50c  8b760c               mov esi, dword ptr [esi + 0xc]
// 006cf50f  33ff                 xor edi, edi
// 006cf511  393d1ce19700         cmp dword ptr [0x97e11c], edi
// 006cf517  740d                 je 0x6cf526
// 006cf519  681ce19700           push 0x97e11c
// 006cf51e  ff15ac218000         call dword ptr [0x8021ac]
// 006cf524  8bf8                 mov edi, eax
// 006cf526  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006cf52d  53                   push ebx
// 006cf52e  742b                 je 0x6cf55b
// 006cf530  8b0d18e19700         mov ecx, dword ptr [0x97e118]
// 006cf536  6a00                 push 0
// 006cf538  51                   push ecx
// 006cf539  ffd5                 call ebp
// 006cf53b  85ff                 test edi, edi
// 006cf53d  7529                 jne 0x6cf568
// 006cf53f  a118e19700           mov eax, dword ptr [0x97e118]
// 006cf544  85c0                 test eax, eax
// 006cf546  7407                 je 0x6cf54f
// 006cf548  50                   push eax
// 006cf549  ff15ec218000         call dword ptr [0x8021ec]
// 006cf54f  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 006cf559  eb0d                 jmp 0x6cf568
// 006cf55b  e81a11fdff           call 0x6a067a
// 006cf560  83c404               add esp, 4
// 006cf563  eb03                 jmp 0x6cf568
// 006cf565  8b760c               mov esi, dword ptr [esi + 0xc]
// 006cf568  85f6                 test esi, esi
// 006cf56a  0f8560ffffff         jne 0x6cf4d0
// 006cf570  5f                   pop edi
// 006cf571  5d                   pop ebp
// 006cf572  5b                   pop ebx
// 006cf573  5e                   pop esi
// 006cf574  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?FreeExtraData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
