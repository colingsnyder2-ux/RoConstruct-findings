// roc 2007-08 0065a240  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065a240
//
// 0065a240  56                   push esi
// 0065a241  8b35c4878c00         mov esi, dword ptr [0x8c87c4]
// 0065a247  85f6                 test esi, esi
// 0065a249  0f84c4000000         je 0x65a313
// 0065a24f  90                   nop 
// 0065a250  8b4608               mov eax, dword ptr [esi + 8]
// 0065a253  85c0                 test eax, eax
// 0065a255  7408                 je 0x65a25f
// 0065a257  8bf0                 mov esi, eax
// 0065a259  85f6                 test esi, esi
// 0065a25b  75f3                 jne 0x65a250
// 0065a25d  5e                   pop esi
// 0065a25e  c3                   ret 
// 0065a25f  53                   push ebx
// 0065a260  55                   push ebp
// 0065a261  8b2dacd27700         mov ebp, dword ptr [0x77d2ac]
// 0065a267  57                   push edi
// 0065a268  eb06                 jmp 0x65a270
// 0065a26a  8d9b00000000         lea ebx, [ebx]
// 0065a270  833e00               cmp dword ptr [esi], 0
// 0065a273  0f858c000000         jne 0x65a305
// 0065a279  8b4608               mov eax, dword ptr [esi + 8]
// 0065a27c  85c0                 test eax, eax
// 0065a27e  8bde                 mov ebx, esi
// 0065a280  7406                 je 0x65a288
// 0065a282  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0065a285  89480c               mov dword ptr [eax + 0xc], ecx
// 0065a288  8b460c               mov eax, dword ptr [esi + 0xc]
// 0065a28b  85c0                 test eax, eax
// 0065a28d  7406                 je 0x65a295
// 0065a28f  8b5608               mov edx, dword ptr [esi + 8]
// 0065a292  895008               mov dword ptr [eax + 8], edx
// 0065a295  3935c4878c00         cmp dword ptr [0x8c87c4], esi
// 0065a29b  750f                 jne 0x65a2ac
// 0065a29d  8b4608               mov eax, dword ptr [esi + 8]
// 0065a2a0  85c0                 test eax, eax
// 0065a2a2  7503                 jne 0x65a2a7
// 0065a2a4  8b460c               mov eax, dword ptr [esi + 0xc]
// 0065a2a7  a3c4878c00           mov dword ptr [0x8c87c4], eax
// 0065a2ac  8b760c               mov esi, dword ptr [esi + 0xc]
// 0065a2af  33ff                 xor edi, edi
// 0065a2b1  393d80878c00         cmp dword ptr [0x8c8780], edi
// 0065a2b7  740d                 je 0x65a2c6
// 0065a2b9  6880878c00           push 0x8c8780
// 0065a2be  ff15e8d27700         call dword ptr [0x77d2e8]
// 0065a2c4  8bf8                 mov edi, eax
// 0065a2c6  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 0065a2cd  53                   push ebx
// 0065a2ce  742b                 je 0x65a2fb
// 0065a2d0  8b0d7c878c00         mov ecx, dword ptr [0x8c877c]
// 0065a2d6  6a00                 push 0
// 0065a2d8  51                   push ecx
// 0065a2d9  ffd5                 call ebp
// 0065a2db  85ff                 test edi, edi
// 0065a2dd  7529                 jne 0x65a308
// 0065a2df  a17c878c00           mov eax, dword ptr [0x8c877c]
// 0065a2e4  85c0                 test eax, eax
// 0065a2e6  7407                 je 0x65a2ef
// 0065a2e8  50                   push eax
// 0065a2e9  ff1584d27700         call dword ptr [0x77d284]
// 0065a2ef  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 0065a2f9  eb0d                 jmp 0x65a308
// 0065a2fb  e86259fdff           call 0x62fc62
// 0065a300  83c404               add esp, 4
// 0065a303  eb03                 jmp 0x65a308
// 0065a305  8b760c               mov esi, dword ptr [esi + 0xc]
// 0065a308  85f6                 test esi, esi
// 0065a30a  0f8560ffffff         jne 0x65a270
// 0065a310  5f                   pop edi
// 0065a311  5d                   pop ebp
// 0065a312  5b                   pop ebx
// 0065a313  5e                   pop esi
// 0065a314  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?FreeExtraData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
