// roc 2012-06 009e9de0  unit: CXTPToolTipContext::CHTMLToolTip  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9de0
//
// 009e9de0  56                   push esi
// 009e9de1  8b742408             mov esi, dword ptr [esp + 8]
// 009e9de5  85f6                 test esi, esi
// 009e9de7  7475                 je 0x9e9e5e
// 009e9de9  833e28               cmp dword ptr [esi], 0x28
// 009e9dec  7270                 jb 0x9e9e5e
// 009e9dee  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009e9df2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009e9df6  8b542414             mov edx, dword ptr [esp + 0x14]
// 009e9dfa  894e10               mov dword ptr [esi + 0x10], ecx
// 009e9dfd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009e9e01  894608               mov dword ptr [esi + 8], eax
// 009e9e04  8b442418             mov eax, dword ptr [esp + 0x18]
// 009e9e08  895614               mov dword ptr [esi + 0x14], edx
// 009e9e0b  8b542420             mov edx, dword ptr [esp + 0x20]
// 009e9e0f  57                   push edi
// 009e9e10  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 009e9e14  894618               mov dword ptr [esi + 0x18], eax
// 009e9e17  894e1c               mov dword ptr [esi + 0x1c], ecx
// 009e9e1a  6a01                 push 1
// 009e9e1c  8bcf                 mov ecx, edi
// 009e9e1e  89560c               mov dword ptr [esi + 0xc], edx
// 009e9e21  ff155846b200         call dword ptr [0xb24658]
// 009e9e27  40                   inc eax
// 009e9e28  50                   push eax
// 009e9e29  ff15fc28b200         call dword ptr [0xb228fc]
// 009e9e2f  83c408               add esp, 8
// 009e9e32  894624               mov dword ptr [esi + 0x24], eax
// 009e9e35  85c0                 test eax, eax
// 009e9e37  7424                 je 0x9e9e5d
// 009e9e39  53                   push ebx
// 009e9e3a  8bcf                 mov ecx, edi
// 009e9e3c  ff159847b200         call dword ptr [0xb24798]
// 009e9e42  8bcf                 mov ecx, edi
// 009e9e44  8bd8                 mov ebx, eax
// 009e9e46  ff155846b200         call dword ptr [0xb24658]
// 009e9e4c  40                   inc eax
// 009e9e4d  53                   push ebx
// 009e9e4e  50                   push eax
// 009e9e4f  8b4624               mov eax, dword ptr [esi + 0x24]
// 009e9e52  50                   push eax
// 009e9e53  ff15d82ab200         call dword ptr [0xb22ad8]
// 009e9e59  83c40c               add esp, 0xc
// 009e9e5c  5b                   pop ebx
// 009e9e5d  5f                   pop edi
// 009e9e5e  5e                   pop esi
// 009e9e5f  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp