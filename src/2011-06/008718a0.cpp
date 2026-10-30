// roc 2011-06 008718a0  unit: CXTPToolTipContext::CHTMLToolTip  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008718a0
//
// 008718a0  56                   push esi
// 008718a1  8b742408             mov esi, dword ptr [esp + 8]
// 008718a5  85f6                 test esi, esi
// 008718a7  7475                 je 0x87191e
// 008718a9  833e28               cmp dword ptr [esi], 0x28
// 008718ac  7270                 jb 0x87191e
// 008718ae  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008718b2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008718b6  8b542414             mov edx, dword ptr [esp + 0x14]
// 008718ba  894e10               mov dword ptr [esi + 0x10], ecx
// 008718bd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008718c1  894608               mov dword ptr [esi + 8], eax
// 008718c4  8b442418             mov eax, dword ptr [esp + 0x18]
// 008718c8  895614               mov dword ptr [esi + 0x14], edx
// 008718cb  8b542420             mov edx, dword ptr [esp + 0x20]
// 008718cf  57                   push edi
// 008718d0  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008718d4  894618               mov dword ptr [esi + 0x18], eax
// 008718d7  894e1c               mov dword ptr [esi + 0x1c], ecx
// 008718da  6a01                 push 1
// 008718dc  8bcf                 mov ecx, edi
// 008718de  89560c               mov dword ptr [esi + 0xc], edx
// 008718e1  ff15a826a400         call dword ptr [0xa426a8]
// 008718e7  40                   inc eax
// 008718e8  50                   push eax
// 008718e9  ff15d808a400         call dword ptr [0xa408d8]
// 008718ef  83c408               add esp, 8
// 008718f2  894624               mov dword ptr [esi + 0x24], eax
// 008718f5  85c0                 test eax, eax
// 008718f7  7424                 je 0x87191d
// 008718f9  53                   push ebx
// 008718fa  8bcf                 mov ecx, edi
// 008718fc  ff15c82da400         call dword ptr [0xa42dc8]
// 00871902  8bcf                 mov ecx, edi
// 00871904  8bd8                 mov ebx, eax
// 00871906  ff15a826a400         call dword ptr [0xa426a8]
// 0087190c  40                   inc eax
// 0087190d  53                   push ebx
// 0087190e  50                   push eax
// 0087190f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00871912  50                   push eax
// 00871913  ff15dc09a400         call dword ptr [0xa409dc]
// 00871919  83c40c               add esp, 0xc
// 0087191c  5b                   pop ebx
// 0087191d  5f                   pop edi
// 0087191e  5e                   pop esi
// 0087191f  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp