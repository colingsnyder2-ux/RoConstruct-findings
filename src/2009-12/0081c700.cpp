// roc 2009-12 0081c700  unit: CXTPReportControl  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c700
//
// 0081c700  83ec08               sub esp, 8
// 0081c703  57                   push edi
// 0081c704  8bf9                 mov edi, ecx
// 0081c706  837f5c00             cmp dword ptr [edi + 0x5c], 0
// 0081c70a  740e                 je 0x81c71a
// 0081c70c  c7475801000000       mov dword ptr [edi + 0x58], 1
// 0081c713  5f                   pop edi
// 0081c714  83c408               add esp, 8
// 0081c717  c20800               ret 8
// 0081c71a  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0081c720  53                   push ebx
// 0081c721  e8fa040100           call 0x82cc20
// 0081c726  33db                 xor ebx, ebx
// 0081c728  89442408             mov dword ptr [esp + 8], eax
// 0081c72c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0081c734  395c2418             cmp dword ptr [esp + 0x18], ebx
// 0081c738  740e                 je 0x81c748
// 0081c73a  8d58ff               lea ebx, [eax - 1]
// 0081c73d  83c8ff               or eax, 0xffffffff
// 0081c740  8944240c             mov dword ptr [esp + 0xc], eax
// 0081c744  89442408             mov dword ptr [esp + 8], eax
// 0081c748  3b5c2408             cmp ebx, dword ptr [esp + 8]
// 0081c74c  744f                 je 0x81c79d
// 0081c74e  55                   push ebp
// 0081c74f  56                   push esi
// 0081c750  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0081c756  8b01                 mov eax, dword ptr [ecx]
// 0081c758  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081c75b  53                   push ebx
// 0081c75c  ffd2                 call edx
// 0081c75e  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 0081c764  8bf0                 mov esi, eax
// 0081c766  56                   push esi
// 0081c767  e8f4220100           call 0x82ea60
// 0081c76c  8be8                 mov ebp, eax
// 0081c76e  85ed                 test ebp, ebp
// 0081c770  740c                 je 0x81c77e
// 0081c772  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 0081c778  56                   push esi
// 0081c779  e862200100           call 0x82e7e0
// 0081c77e  895e28               mov dword ptr [esi + 0x28], ebx
// 0081c781  85ed                 test ebp, ebp
// 0081c783  740c                 je 0x81c791
// 0081c785  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 0081c78b  56                   push esi
// 0081c78c  e81f200100           call 0x82e7b0
// 0081c791  035c2414             add ebx, dword ptr [esp + 0x14]
// 0081c795  3b5c2410             cmp ebx, dword ptr [esp + 0x10]
// 0081c799  75b5                 jne 0x81c750
// 0081c79b  5e                   pop esi
// 0081c79c  5d                   pop ebp
// 0081c79d  837c241400           cmp dword ptr [esp + 0x14], 0
// 0081c7a2  5b                   pop ebx
// 0081c7a3  740c                 je 0x81c7b1
// 0081c7a5  8b07                 mov eax, dword ptr [edi]
// 0081c7a7  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0081c7ad  8bcf                 mov ecx, edi
// 0081c7af  ffd2                 call edx
// 0081c7b1  5f                   pop edi
// 0081c7b2  83c408               add esp, 8
// 0081c7b5  c20800               ret 8
// copied from an identical function in another client (function ?_RefreshIndexes@CXTPReportControl@@MAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp