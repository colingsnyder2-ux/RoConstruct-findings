// roc 2009-12 0081e720  unit: CXTPReportControl  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e720
//
// 0081e720  6aff                 push -1
// 0081e722  6850ad9500           push 0x95ad50
// 0081e727  64a100000000         mov eax, dword ptr fs:[0]
// 0081e72d  50                   push eax
// 0081e72e  83ec24               sub esp, 0x24
// 0081e731  55                   push ebp
// 0081e732  56                   push esi
// 0081e733  57                   push edi
// 0081e734  a10052b600           mov eax, dword ptr [0xb65200]
// 0081e739  33c4                 xor eax, esp
// 0081e73b  50                   push eax
// 0081e73c  8d442434             lea eax, [esp + 0x34]
// 0081e740  64a300000000         mov dword ptr fs:[0], eax
// 0081e746  8bf1                 mov esi, ecx
// 0081e748  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0081e74c  8bae00010000         mov ebp, dword ptr [esi + 0x100]
// 0081e752  85ff                 test edi, edi
// 0081e754  0f848d000000         je 0x81e7e7
// 0081e75a  85ed                 test ebp, ebp
// 0081e75c  0f8485000000         je 0x81e7e7
// 0081e762  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 0081e768  83f801               cmp eax, 1
// 0081e76b  757a                 jne 0x81e7e7
// 0081e76d  56                   push esi
// 0081e76e  8d4c2424             lea ecx, [esp + 0x24]
// 0081e772  e85f5ffdff           call 0x7f46d6
// 0081e777  83c520               add ebp, 0x20
// 0081e77a  55                   push ebp
// 0081e77b  8d442424             lea eax, [esp + 0x24]
// 0081e77f  50                   push eax
// 0081e780  8d4c2418             lea ecx, [esp + 0x18]
// 0081e784  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0081e78c  e8cfce0200           call 0x84b660
// 0081e791  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0081e797  8b16                 mov edx, dword ptr [esi]
// 0081e799  8b920c020000         mov edx, dword ptr [edx + 0x20c]
// 0081e79f  57                   push edi
// 0081e7a0  50                   push eax
// 0081e7a1  8d442428             lea eax, [esp + 0x28]
// 0081e7a5  50                   push eax
// 0081e7a6  8bce                 mov ecx, esi
// 0081e7a8  c644244801           mov byte ptr [esp + 0x48], 1
// 0081e7ad  ffd2                 call edx
// 0081e7af  8d4c2410             lea ecx, [esp + 0x10]
// 0081e7b3  8bf0                 mov esi, eax
// 0081e7b5  c644243c00           mov byte ptr [esp + 0x3c], 0
// 0081e7ba  e821cf0200           call 0x84b6e0
// 0081e7bf  8d4c2420             lea ecx, [esp + 0x20]
// 0081e7c3  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0081e7cb  e8005ffdff           call 0x7f46d0
// 0081e7d0  8bc6                 mov eax, esi
// 0081e7d2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081e7d6  64890d00000000       mov dword ptr fs:[0], ecx
// 0081e7dd  59                   pop ecx
// 0081e7de  5f                   pop edi
// 0081e7df  5e                   pop esi
// 0081e7e0  5d                   pop ebp
// 0081e7e1  83c430               add esp, 0x30
// 0081e7e4  c20400               ret 4
// 0081e7e7  33c0                 xor eax, eax
// 0081e7e9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081e7ed  64890d00000000       mov dword ptr fs:[0], ecx
// 0081e7f4  59                   pop ecx
// 0081e7f5  5f                   pop edi
// 0081e7f6  5e                   pop esi
// 0081e7f7  5d                   pop ebp
// 0081e7f8  83c430               add esp, 0x30
// 0081e7fb  c20400               ret 4
// copied from an identical function in another client (function ?OnGetColumnDataBestFitWidth@CXTPReportControl@@MAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp