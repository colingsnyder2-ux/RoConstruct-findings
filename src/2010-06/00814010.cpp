// roc 2010-06 00814010  unit: CXTPToolTipContext::CHTMLToolTip  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00814010
//
// 00814010  56                   push esi
// 00814011  8b742408             mov esi, dword ptr [esp + 8]
// 00814015  85f6                 test esi, esi
// 00814017  7475                 je 0x81408e
// 00814019  833e28               cmp dword ptr [esi], 0x28
// 0081401c  7270                 jb 0x81408e
// 0081401e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00814022  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00814026  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081402a  894e10               mov dword ptr [esi + 0x10], ecx
// 0081402d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00814031  894608               mov dword ptr [esi + 8], eax
// 00814034  8b442418             mov eax, dword ptr [esp + 0x18]
// 00814038  895614               mov dword ptr [esi + 0x14], edx
// 0081403b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0081403f  57                   push edi
// 00814040  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00814044  894618               mov dword ptr [esi + 0x18], eax
// 00814047  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0081404a  6a01                 push 1
// 0081404c  8bcf                 mov ecx, edi
// 0081404e  89560c               mov dword ptr [esi + 0xc], edx
// 00814051  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00814057  40                   inc eax
// 00814058  50                   push eax
// 00814059  ff1590a89e00         call dword ptr [0x9ea890]
// 0081405f  83c408               add esp, 8
// 00814062  894624               mov dword ptr [esi + 0x24], eax
// 00814065  85c0                 test eax, eax
// 00814067  7424                 je 0x81408d
// 00814069  53                   push ebx
// 0081406a  8bcf                 mov ecx, edi
// 0081406c  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00814072  8bcf                 mov ecx, edi
// 00814074  8bd8                 mov ebx, eax
// 00814076  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0081407c  40                   inc eax
// 0081407d  53                   push ebx
// 0081407e  50                   push eax
// 0081407f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00814082  50                   push eax
// 00814083  ff1578a89e00         call dword ptr [0x9ea878]
// 00814089  83c40c               add esp, 0xc
// 0081408c  5b                   pop ebx
// 0081408d  5f                   pop edi
// 0081408e  5e                   pop esi
// 0081408f  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp