// roc 2009-12 00860030  unit: CXTPToolTipContext::CHTMLToolTip  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860030
//
// 00860030  56                   push esi
// 00860031  8b742408             mov esi, dword ptr [esp + 8]
// 00860035  85f6                 test esi, esi
// 00860037  7475                 je 0x8600ae
// 00860039  833e28               cmp dword ptr [esi], 0x28
// 0086003c  7270                 jb 0x8600ae
// 0086003e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00860042  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00860046  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086004a  894e10               mov dword ptr [esi + 0x10], ecx
// 0086004d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00860051  894608               mov dword ptr [esi + 8], eax
// 00860054  8b442418             mov eax, dword ptr [esp + 0x18]
// 00860058  895614               mov dword ptr [esi + 0x14], edx
// 0086005b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0086005f  57                   push edi
// 00860060  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00860064  894618               mov dword ptr [esi + 0x18], eax
// 00860067  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0086006a  6a01                 push 1
// 0086006c  8bcf                 mov ecx, edi
// 0086006e  89560c               mov dword ptr [esi + 0xc], edx
// 00860071  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00860077  40                   inc eax
// 00860078  50                   push eax
// 00860079  ff15b0b79800         call dword ptr [0x98b7b0]
// 0086007f  83c408               add esp, 8
// 00860082  894624               mov dword ptr [esi + 0x24], eax
// 00860085  85c0                 test eax, eax
// 00860087  7424                 je 0x8600ad
// 00860089  53                   push ebx
// 0086008a  8bcf                 mov ecx, edi
// 0086008c  ff1580de9800         call dword ptr [0x98de80]
// 00860092  8bcf                 mov ecx, edi
// 00860094  8bd8                 mov ebx, eax
// 00860096  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0086009c  40                   inc eax
// 0086009d  53                   push ebx
// 0086009e  50                   push eax
// 0086009f  8b4624               mov eax, dword ptr [esi + 0x24]
// 008600a2  50                   push eax
// 008600a3  ff15c8b79800         call dword ptr [0x98b7c8]
// 008600a9  83c40c               add esp, 0xc
// 008600ac  5b                   pop ebx
// 008600ad  5f                   pop edi
// 008600ae  5e                   pop esi
// 008600af  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp