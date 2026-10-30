// roc 2009-12 0081eb00  unit: CXTPReportControl  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081eb00
//
// 0081eb00  51                   push ecx
// 0081eb01  8b542408             mov edx, dword ptr [esp + 8]
// 0081eb05  53                   push ebx
// 0081eb06  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081eb0a  55                   push ebp
// 0081eb0b  57                   push edi
// 0081eb0c  8bf9                 mov edi, ecx
// 0081eb0e  8d2c1a               lea ebp, [edx + ebx]
// 0081eb11  85d2                 test edx, edx
// 0081eb13  0f8c84000000         jl 0x81eb9d
// 0081eb19  85db                 test ebx, ebx
// 0081eb1b  0f8c7c000000         jl 0x81eb9d
// 0081eb21  8b4708               mov eax, dword ptr [edi + 8]
// 0081eb24  3be8                 cmp ebp, eax
// 0081eb26  7f75                 jg 0x81eb9d
// 0081eb28  3bea                 cmp ebp, edx
// 0081eb2a  7c71                 jl 0x81eb9d
// 0081eb2c  3beb                 cmp ebp, ebx
// 0081eb2e  7c6d                 jl 0x81eb9d
// 0081eb30  2bc5                 sub eax, ebp
// 0081eb32  8944240c             mov dword ptr [esp + 0xc], eax
// 0081eb36  85db                 test ebx, ebx
// 0081eb38  7e28                 jle 0x81eb62
// 0081eb3a  56                   push esi
// 0081eb3b  8d34d500000000       lea esi, [edx*8]
// 0081eb42  8b4704               mov eax, dword ptr [edi + 4]
// 0081eb45  8b1430               mov edx, dword ptr [eax + esi]
// 0081eb48  8d0c30               lea ecx, [eax + esi]
// 0081eb4b  8b02                 mov eax, dword ptr [edx]
// 0081eb4d  6a00                 push 0
// 0081eb4f  ffd0                 call eax
// 0081eb51  83c608               add esi, 8
// 0081eb54  83eb01               sub ebx, 1
// 0081eb57  75e9                 jne 0x81eb42
// 0081eb59  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0081eb5d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081eb61  5e                   pop esi
// 0081eb62  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0081eb67  742a                 je 0x81eb93
// 0081eb69  8b4704               mov eax, dword ptr [edi + 4]
// 0081eb6c  8d0ce8               lea ecx, [eax + ebp*8]
// 0081eb6f  8d14d0               lea edx, [eax + edx*8]
// 0081eb72  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081eb76  03c0                 add eax, eax
// 0081eb78  03c0                 add eax, eax
// 0081eb7a  03c0                 add eax, eax
// 0081eb7c  50                   push eax
// 0081eb7d  51                   push ecx
// 0081eb7e  50                   push eax
// 0081eb7f  52                   push edx
// 0081eb80  ff15c0b79800         call dword ptr [0x98b7c0]
// 0081eb86  50                   push eax
// 0081eb87  e8643ebeff           call 0x4029f0
// 0081eb8c  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0081eb90  83c414               add esp, 0x14
// 0081eb93  295f08               sub dword ptr [edi + 8], ebx
// 0081eb96  5f                   pop edi
// 0081eb97  5d                   pop ebp
// 0081eb98  5b                   pop ebx
// 0081eb99  59                   pop ecx
// 0081eb9a  c20800               ret 8
// 0081eb9d  e86a4ffdff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAt@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarEventLabel@@@@AAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp