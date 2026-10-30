// roc 2009-12 008600b0  unit: CXTPToolTipContext::CHTMLToolTip  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008600b0
//
// 008600b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008600b4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008600b8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008600bc  53                   push ebx
// 008600bd  55                   push ebp
// 008600be  56                   push esi
// 008600bf  8b742410             mov esi, dword ptr [esp + 0x10]
// 008600c3  57                   push edi
// 008600c4  50                   push eax
// 008600c5  51                   push ecx
// 008600c6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008600ca  83ec10               sub esp, 0x10
// 008600cd  8bc4                 mov eax, esp
// 008600cf  8910                 mov dword ptr [eax], edx
// 008600d1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008600d5  894804               mov dword ptr [eax + 4], ecx
// 008600d8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008600dc  895008               mov dword ptr [eax + 8], edx
// 008600df  8b542430             mov edx, dword ptr [esp + 0x30]
// 008600e3  52                   push edx
// 008600e4  56                   push esi
// 008600e5  89480c               mov dword ptr [eax + 0xc], ecx
// 008600e8  e843ffffff           call 0x860030
// 008600ed  83c420               add esp, 0x20
// 008600f0  85f6                 test esi, esi
// 008600f2  0f84b9000000         je 0x8601b1
// 008600f8  833e2c               cmp dword ptr [esi], 0x2c
// 008600fb  0f85b0000000         jne 0x8601b1
// 00860101  8b7628               mov esi, dword ptr [esi + 0x28]
// 00860104  85f6                 test esi, esi
// 00860106  0f84a5000000         je 0x8601b1
// 0086010c  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00860110  8bcf                 mov ecx, edi
// 00860112  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00860118  84c0                 test al, al
// 0086011a  0f858a000000         jne 0x8601aa
// 00860120  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00860124  8bcb                 mov ecx, ebx
// 00860126  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0086012c  84c0                 test al, al
// 0086012e  757a                 jne 0x8601aa
// 00860130  6a01                 push 1
// 00860132  8bcf                 mov ecx, edi
// 00860134  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0086013a  40                   inc eax
// 0086013b  50                   push eax
// 0086013c  ff15b0b79800         call dword ptr [0x98b7b0]
// 00860142  83c408               add esp, 8
// 00860145  8906                 mov dword ptr [esi], eax
// 00860147  85c0                 test eax, eax
// 00860149  7421                 je 0x86016c
// 0086014b  8bcf                 mov ecx, edi
// 0086014d  ff1580de9800         call dword ptr [0x98de80]
// 00860153  8bcf                 mov ecx, edi
// 00860155  8be8                 mov ebp, eax
// 00860157  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0086015d  40                   inc eax
// 0086015e  55                   push ebp
// 0086015f  50                   push eax
// 00860160  8b06                 mov eax, dword ptr [esi]
// 00860162  50                   push eax
// 00860163  ff15c8b79800         call dword ptr [0x98b7c8]
// 00860169  83c40c               add esp, 0xc
// 0086016c  6a01                 push 1
// 0086016e  8bcb                 mov ecx, ebx
// 00860170  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00860176  40                   inc eax
// 00860177  50                   push eax
// 00860178  ff15b0b79800         call dword ptr [0x98b7b0]
// 0086017e  83c408               add esp, 8
// 00860181  894604               mov dword ptr [esi + 4], eax
// 00860184  85c0                 test eax, eax
// 00860186  7422                 je 0x8601aa
// 00860188  8bcb                 mov ecx, ebx
// 0086018a  ff1580de9800         call dword ptr [0x98de80]
// 00860190  8bcb                 mov ecx, ebx
// 00860192  8bf8                 mov edi, eax
// 00860194  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0086019a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0086019d  40                   inc eax
// 0086019e  57                   push edi
// 0086019f  50                   push eax
// 008601a0  51                   push ecx
// 008601a1  ff15c8b79800         call dword ptr [0x98b7c8]
// 008601a7  83c40c               add esp, 0xc
// 008601aa  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008601ae  895608               mov dword ptr [esi + 8], edx
// 008601b1  5f                   pop edi
// 008601b2  5e                   pop esi
// 008601b3  5d                   pop ebp
// 008601b4  5b                   pop ebx
// 008601b5  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@33PAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp