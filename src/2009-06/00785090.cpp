// roc 2009-06 00785090  unit: CXTPToolTipContext::CHTMLToolTip  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00785090
//
// 00785090  8b442420             mov eax, dword ptr [esp + 0x20]
// 00785094  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00785098  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078509c  53                   push ebx
// 0078509d  55                   push ebp
// 0078509e  56                   push esi
// 0078509f  8b742410             mov esi, dword ptr [esp + 0x10]
// 007850a3  57                   push edi
// 007850a4  50                   push eax
// 007850a5  51                   push ecx
// 007850a6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007850aa  83ec10               sub esp, 0x10
// 007850ad  8bc4                 mov eax, esp
// 007850af  8910                 mov dword ptr [eax], edx
// 007850b1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007850b5  894804               mov dword ptr [eax + 4], ecx
// 007850b8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007850bc  895008               mov dword ptr [eax + 8], edx
// 007850bf  8b542430             mov edx, dword ptr [esp + 0x30]
// 007850c3  52                   push edx
// 007850c4  56                   push esi
// 007850c5  89480c               mov dword ptr [eax + 0xc], ecx
// 007850c8  e843ffffff           call 0x785010
// 007850cd  83c420               add esp, 0x20
// 007850d0  85f6                 test esi, esi
// 007850d2  0f84b9000000         je 0x785191
// 007850d8  833e2c               cmp dword ptr [esi], 0x2c
// 007850db  0f85b0000000         jne 0x785191
// 007850e1  8b7628               mov esi, dword ptr [esi + 0x28]
// 007850e4  85f6                 test esi, esi
// 007850e6  0f84a5000000         je 0x785191
// 007850ec  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007850f0  8bcf                 mov ecx, edi
// 007850f2  ff155cfb8900         call dword ptr [0x89fb5c]
// 007850f8  84c0                 test al, al
// 007850fa  0f858a000000         jne 0x78518a
// 00785100  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00785104  8bcb                 mov ecx, ebx
// 00785106  ff155cfb8900         call dword ptr [0x89fb5c]
// 0078510c  84c0                 test al, al
// 0078510e  757a                 jne 0x78518a
// 00785110  6a01                 push 1
// 00785112  8bcf                 mov ecx, edi
// 00785114  ff1554fb8900         call dword ptr [0x89fb54]
// 0078511a  40                   inc eax
// 0078511b  50                   push eax
// 0078511c  ff1564e98900         call dword ptr [0x89e964]
// 00785122  83c408               add esp, 8
// 00785125  8906                 mov dword ptr [esi], eax
// 00785127  85c0                 test eax, eax
// 00785129  7421                 je 0x78514c
// 0078512b  8bcf                 mov ecx, edi
// 0078512d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00785133  8bcf                 mov ecx, edi
// 00785135  8be8                 mov ebp, eax
// 00785137  ff1554fb8900         call dword ptr [0x89fb54]
// 0078513d  40                   inc eax
// 0078513e  55                   push ebp
// 0078513f  50                   push eax
// 00785140  8b06                 mov eax, dword ptr [esi]
// 00785142  50                   push eax
// 00785143  ff1550e98900         call dword ptr [0x89e950]
// 00785149  83c40c               add esp, 0xc
// 0078514c  6a01                 push 1
// 0078514e  8bcb                 mov ecx, ebx
// 00785150  ff1554fb8900         call dword ptr [0x89fb54]
// 00785156  40                   inc eax
// 00785157  50                   push eax
// 00785158  ff1564e98900         call dword ptr [0x89e964]
// 0078515e  83c408               add esp, 8
// 00785161  894604               mov dword ptr [esi + 4], eax
// 00785164  85c0                 test eax, eax
// 00785166  7422                 je 0x78518a
// 00785168  8bcb                 mov ecx, ebx
// 0078516a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00785170  8bcb                 mov ecx, ebx
// 00785172  8bf8                 mov edi, eax
// 00785174  ff1554fb8900         call dword ptr [0x89fb54]
// 0078517a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0078517d  40                   inc eax
// 0078517e  57                   push edi
// 0078517f  50                   push eax
// 00785180  51                   push ecx
// 00785181  ff1550e98900         call dword ptr [0x89e950]
// 00785187  83c40c               add esp, 0xc
// 0078518a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0078518e  895608               mov dword ptr [esi + 8], edx
// 00785191  5f                   pop edi
// 00785192  5e                   pop esi
// 00785193  5d                   pop ebp
// 00785194  5b                   pop ebx
// 00785195  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@33PAVCXTPImageManager@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp