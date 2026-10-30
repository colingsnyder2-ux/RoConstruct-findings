// roc 2011-06 00871920  unit: CXTPToolTipContext::CHTMLToolTip  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871920
//
// 00871920  8b442420             mov eax, dword ptr [esp + 0x20]
// 00871924  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00871928  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087192c  53                   push ebx
// 0087192d  55                   push ebp
// 0087192e  56                   push esi
// 0087192f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00871933  57                   push edi
// 00871934  50                   push eax
// 00871935  51                   push ecx
// 00871936  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0087193a  83ec10               sub esp, 0x10
// 0087193d  8bc4                 mov eax, esp
// 0087193f  8910                 mov dword ptr [eax], edx
// 00871941  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00871945  894804               mov dword ptr [eax + 4], ecx
// 00871948  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087194c  895008               mov dword ptr [eax + 8], edx
// 0087194f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00871953  52                   push edx
// 00871954  56                   push esi
// 00871955  89480c               mov dword ptr [eax + 0xc], ecx
// 00871958  e843ffffff           call 0x8718a0
// 0087195d  83c420               add esp, 0x20
// 00871960  85f6                 test esi, esi
// 00871962  0f84b9000000         je 0x871a21
// 00871968  833e2c               cmp dword ptr [esi], 0x2c
// 0087196b  0f85b0000000         jne 0x871a21
// 00871971  8b7628               mov esi, dword ptr [esi + 0x28]
// 00871974  85f6                 test esi, esi
// 00871976  0f84a5000000         je 0x871a21
// 0087197c  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00871980  8bcf                 mov ecx, edi
// 00871982  ff15b026a400         call dword ptr [0xa426b0]
// 00871988  84c0                 test al, al
// 0087198a  0f858a000000         jne 0x871a1a
// 00871990  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00871994  8bcb                 mov ecx, ebx
// 00871996  ff15b026a400         call dword ptr [0xa426b0]
// 0087199c  84c0                 test al, al
// 0087199e  757a                 jne 0x871a1a
// 008719a0  6a01                 push 1
// 008719a2  8bcf                 mov ecx, edi
// 008719a4  ff15a826a400         call dword ptr [0xa426a8]
// 008719aa  40                   inc eax
// 008719ab  50                   push eax
// 008719ac  ff15d808a400         call dword ptr [0xa408d8]
// 008719b2  83c408               add esp, 8
// 008719b5  8906                 mov dword ptr [esi], eax
// 008719b7  85c0                 test eax, eax
// 008719b9  7421                 je 0x8719dc
// 008719bb  8bcf                 mov ecx, edi
// 008719bd  ff15c82da400         call dword ptr [0xa42dc8]
// 008719c3  8bcf                 mov ecx, edi
// 008719c5  8be8                 mov ebp, eax
// 008719c7  ff15a826a400         call dword ptr [0xa426a8]
// 008719cd  40                   inc eax
// 008719ce  55                   push ebp
// 008719cf  50                   push eax
// 008719d0  8b06                 mov eax, dword ptr [esi]
// 008719d2  50                   push eax
// 008719d3  ff15dc09a400         call dword ptr [0xa409dc]
// 008719d9  83c40c               add esp, 0xc
// 008719dc  6a01                 push 1
// 008719de  8bcb                 mov ecx, ebx
// 008719e0  ff15a826a400         call dword ptr [0xa426a8]
// 008719e6  40                   inc eax
// 008719e7  50                   push eax
// 008719e8  ff15d808a400         call dword ptr [0xa408d8]
// 008719ee  83c408               add esp, 8
// 008719f1  894604               mov dword ptr [esi + 4], eax
// 008719f4  85c0                 test eax, eax
// 008719f6  7422                 je 0x871a1a
// 008719f8  8bcb                 mov ecx, ebx
// 008719fa  ff15c82da400         call dword ptr [0xa42dc8]
// 00871a00  8bcb                 mov ecx, ebx
// 00871a02  8bf8                 mov edi, eax
// 00871a04  ff15a826a400         call dword ptr [0xa426a8]
// 00871a0a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00871a0d  40                   inc eax
// 00871a0e  57                   push edi
// 00871a0f  50                   push eax
// 00871a10  51                   push ecx
// 00871a11  ff15dc09a400         call dword ptr [0xa409dc]
// 00871a17  83c40c               add esp, 0xc
// 00871a1a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00871a1e  895608               mov dword ptr [esi + 8], edx
// 00871a21  5f                   pop edi
// 00871a22  5e                   pop esi
// 00871a23  5d                   pop ebp
// 00871a24  5b                   pop ebx
// 00871a25  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@33PAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp