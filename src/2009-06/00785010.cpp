// roc 2009-06 00785010  unit: CXTPToolTipContext::CHTMLToolTip  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00785010
//
// 00785010  56                   push esi
// 00785011  8b742408             mov esi, dword ptr [esp + 8]
// 00785015  85f6                 test esi, esi
// 00785017  7475                 je 0x78508e
// 00785019  833e28               cmp dword ptr [esi], 0x28
// 0078501c  7270                 jb 0x78508e
// 0078501e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00785022  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00785026  8b542414             mov edx, dword ptr [esp + 0x14]
// 0078502a  894e10               mov dword ptr [esi + 0x10], ecx
// 0078502d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00785031  894608               mov dword ptr [esi + 8], eax
// 00785034  8b442418             mov eax, dword ptr [esp + 0x18]
// 00785038  895614               mov dword ptr [esi + 0x14], edx
// 0078503b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078503f  57                   push edi
// 00785040  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00785044  894618               mov dword ptr [esi + 0x18], eax
// 00785047  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0078504a  6a01                 push 1
// 0078504c  8bcf                 mov ecx, edi
// 0078504e  89560c               mov dword ptr [esi + 0xc], edx
// 00785051  ff1554fb8900         call dword ptr [0x89fb54]
// 00785057  40                   inc eax
// 00785058  50                   push eax
// 00785059  ff1564e98900         call dword ptr [0x89e964]
// 0078505f  83c408               add esp, 8
// 00785062  894624               mov dword ptr [esi + 0x24], eax
// 00785065  85c0                 test eax, eax
// 00785067  7424                 je 0x78508d
// 00785069  53                   push ebx
// 0078506a  8bcf                 mov ecx, edi
// 0078506c  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00785072  8bcf                 mov ecx, edi
// 00785074  8bd8                 mov ebx, eax
// 00785076  ff1554fb8900         call dword ptr [0x89fb54]
// 0078507c  40                   inc eax
// 0078507d  53                   push ebx
// 0078507e  50                   push eax
// 0078507f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00785082  50                   push eax
// 00785083  ff1550e98900         call dword ptr [0x89e950]
// 00785089  83c40c               add esp, 0xc
// 0078508c  5b                   pop ebx
// 0078508d  5f                   pop edi
// 0078508e  5e                   pop esi
// 0078508f  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp