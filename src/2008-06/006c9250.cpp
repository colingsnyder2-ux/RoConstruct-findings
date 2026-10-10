// roc 2008-06 006c9250  unit: CXTPReportControl  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9250
//
// 006c9250  83ec08               sub esp, 8
// 006c9253  57                   push edi
// 006c9254  8bf9                 mov edi, ecx
// 006c9256  837f5c00             cmp dword ptr [edi + 0x5c], 0
// 006c925a  740e                 je 0x6c926a
// 006c925c  c7475801000000       mov dword ptr [edi + 0x58], 1
// 006c9263  5f                   pop edi
// 006c9264  83c408               add esp, 8
// 006c9267  c20800               ret 8
// 006c926a  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 006c9270  53                   push ebx
// 006c9271  e8da0d0100           call 0x6da050
// 006c9276  33db                 xor ebx, ebx
// 006c9278  89442408             mov dword ptr [esp + 8], eax
// 006c927c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 006c9284  395c2418             cmp dword ptr [esp + 0x18], ebx
// 006c9288  740e                 je 0x6c9298
// 006c928a  8d58ff               lea ebx, [eax - 1]
// 006c928d  83c8ff               or eax, 0xffffffff
// 006c9290  8944240c             mov dword ptr [esp + 0xc], eax
// 006c9294  89442408             mov dword ptr [esp + 8], eax
// 006c9298  3b5c2408             cmp ebx, dword ptr [esp + 8]
// 006c929c  744f                 je 0x6c92ed
// 006c929e  55                   push ebp
// 006c929f  56                   push esi
// 006c92a0  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 006c92a6  8b01                 mov eax, dword ptr [ecx]
// 006c92a8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006c92ab  53                   push ebx
// 006c92ac  ffd2                 call edx
// 006c92ae  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 006c92b4  8bf0                 mov esi, eax
// 006c92b6  56                   push esi
// 006c92b7  e874210100           call 0x6db430
// 006c92bc  8be8                 mov ebp, eax
// 006c92be  85ed                 test ebp, ebp
// 006c92c0  740c                 je 0x6c92ce
// 006c92c2  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 006c92c8  56                   push esi
// 006c92c9  e8e21e0100           call 0x6db1b0
// 006c92ce  895e28               mov dword ptr [esi + 0x28], ebx
// 006c92d1  85ed                 test ebp, ebp
// 006c92d3  740c                 je 0x6c92e1
// 006c92d5  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 006c92db  56                   push esi
// 006c92dc  e89f1e0100           call 0x6db180
// 006c92e1  035c2414             add ebx, dword ptr [esp + 0x14]
// 006c92e5  3b5c2410             cmp ebx, dword ptr [esp + 0x10]
// 006c92e9  75b5                 jne 0x6c92a0
// 006c92eb  5e                   pop esi
// 006c92ec  5d                   pop ebp
// 006c92ed  837c241400           cmp dword ptr [esp + 0x14], 0
// 006c92f2  5b                   pop ebx
// 006c92f3  740c                 je 0x6c9301
// 006c92f5  8b07                 mov eax, dword ptr [edi]
// 006c92f7  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 006c92fd  8bcf                 mov ecx, edi
// 006c92ff  ffd2                 call edx
// 006c9301  5f                   pop edi
// 006c9302  83c408               add esp, 8
// 006c9305  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?_RefreshIndexes@CXTPReportControl@@MAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
