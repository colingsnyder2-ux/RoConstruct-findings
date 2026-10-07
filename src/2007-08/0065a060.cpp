// roc 2007-08 0065a060  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065a060
//
// 0065a060  56                   push esi
// 0065a061  8b35ac878c00         mov esi, dword ptr [0x8c87ac]
// 0065a067  85f6                 test esi, esi
// 0065a069  0f84c4000000         je 0x65a133
// 0065a06f  90                   nop 
// 0065a070  8b4608               mov eax, dword ptr [esi + 8]
// 0065a073  85c0                 test eax, eax
// 0065a075  7408                 je 0x65a07f
// 0065a077  8bf0                 mov esi, eax
// 0065a079  85f6                 test esi, esi
// 0065a07b  75f3                 jne 0x65a070
// 0065a07d  5e                   pop esi
// 0065a07e  c3                   ret 
// 0065a07f  53                   push ebx
// 0065a080  55                   push ebp
// 0065a081  8b2dacd27700         mov ebp, dword ptr [0x77d2ac]
// 0065a087  57                   push edi
// 0065a088  eb06                 jmp 0x65a090
// 0065a08a  8d9b00000000         lea ebx, [ebx]
// 0065a090  833e00               cmp dword ptr [esi], 0
// 0065a093  0f858c000000         jne 0x65a125
// 0065a099  8b4608               mov eax, dword ptr [esi + 8]
// 0065a09c  85c0                 test eax, eax
// 0065a09e  8bde                 mov ebx, esi
// 0065a0a0  7406                 je 0x65a0a8
// 0065a0a2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0065a0a5  89480c               mov dword ptr [eax + 0xc], ecx
// 0065a0a8  8b460c               mov eax, dword ptr [esi + 0xc]
// 0065a0ab  85c0                 test eax, eax
// 0065a0ad  7406                 je 0x65a0b5
// 0065a0af  8b5608               mov edx, dword ptr [esi + 8]
// 0065a0b2  895008               mov dword ptr [eax + 8], edx
// 0065a0b5  3935ac878c00         cmp dword ptr [0x8c87ac], esi
// 0065a0bb  750f                 jne 0x65a0cc
// 0065a0bd  8b4608               mov eax, dword ptr [esi + 8]
// 0065a0c0  85c0                 test eax, eax
// 0065a0c2  7503                 jne 0x65a0c7
// 0065a0c4  8b460c               mov eax, dword ptr [esi + 0xc]
// 0065a0c7  a3ac878c00           mov dword ptr [0x8c87ac], eax
// 0065a0cc  8b760c               mov esi, dword ptr [esi + 0xc]
// 0065a0cf  33ff                 xor edi, edi
// 0065a0d1  393d80878c00         cmp dword ptr [0x8c8780], edi
// 0065a0d7  740d                 je 0x65a0e6
// 0065a0d9  6880878c00           push 0x8c8780
// 0065a0de  ff15e8d27700         call dword ptr [0x77d2e8]
// 0065a0e4  8bf8                 mov edi, eax
// 0065a0e6  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 0065a0ed  53                   push ebx
// 0065a0ee  742b                 je 0x65a11b
// 0065a0f0  8b0d7c878c00         mov ecx, dword ptr [0x8c877c]
// 0065a0f6  6a00                 push 0
// 0065a0f8  51                   push ecx
// 0065a0f9  ffd5                 call ebp
// 0065a0fb  85ff                 test edi, edi
// 0065a0fd  7529                 jne 0x65a128
// 0065a0ff  a17c878c00           mov eax, dword ptr [0x8c877c]
// 0065a104  85c0                 test eax, eax
// 0065a106  7407                 je 0x65a10f
// 0065a108  50                   push eax
// 0065a109  ff1584d27700         call dword ptr [0x77d284]
// 0065a10f  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 0065a119  eb0d                 jmp 0x65a128
// 0065a11b  e8425bfdff           call 0x62fc62
// 0065a120  83c404               add esp, 4
// 0065a123  eb03                 jmp 0x65a128
// 0065a125  8b760c               mov esi, dword ptr [esi + 0xc]
// 0065a128  85f6                 test esi, esi
// 0065a12a  0f8560ffffff         jne 0x65a090
// 0065a130  5f                   pop edi
// 0065a131  5d                   pop ebp
// 0065a132  5b                   pop ebx
// 0065a133  5e                   pop esi
// 0065a134  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?FreeExtraData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
