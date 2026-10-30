// roc 2010-06 00814090  unit: CXTPToolTipContext::CHTMLToolTip  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00814090
//
// 00814090  8b442420             mov eax, dword ptr [esp + 0x20]
// 00814094  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00814098  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0081409c  53                   push ebx
// 0081409d  55                   push ebp
// 0081409e  56                   push esi
// 0081409f  8b742410             mov esi, dword ptr [esp + 0x10]
// 008140a3  57                   push edi
// 008140a4  50                   push eax
// 008140a5  51                   push ecx
// 008140a6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008140aa  83ec10               sub esp, 0x10
// 008140ad  8bc4                 mov eax, esp
// 008140af  8910                 mov dword ptr [eax], edx
// 008140b1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008140b5  894804               mov dword ptr [eax + 4], ecx
// 008140b8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008140bc  895008               mov dword ptr [eax + 8], edx
// 008140bf  8b542430             mov edx, dword ptr [esp + 0x30]
// 008140c3  52                   push edx
// 008140c4  56                   push esi
// 008140c5  89480c               mov dword ptr [eax + 0xc], ecx
// 008140c8  e843ffffff           call 0x814010
// 008140cd  83c420               add esp, 0x20
// 008140d0  85f6                 test esi, esi
// 008140d2  0f84b9000000         je 0x814191
// 008140d8  833e2c               cmp dword ptr [esi], 0x2c
// 008140db  0f85b0000000         jne 0x814191
// 008140e1  8b7628               mov esi, dword ptr [esi + 0x28]
// 008140e4  85f6                 test esi, esi
// 008140e6  0f84a5000000         je 0x814191
// 008140ec  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008140f0  8bcf                 mov ecx, edi
// 008140f2  ff15eccd9e00         call dword ptr [0x9ecdec]
// 008140f8  84c0                 test al, al
// 008140fa  0f858a000000         jne 0x81418a
// 00814100  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00814104  8bcb                 mov ecx, ebx
// 00814106  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0081410c  84c0                 test al, al
// 0081410e  757a                 jne 0x81418a
// 00814110  6a01                 push 1
// 00814112  8bcf                 mov ecx, edi
// 00814114  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0081411a  40                   inc eax
// 0081411b  50                   push eax
// 0081411c  ff1590a89e00         call dword ptr [0x9ea890]
// 00814122  83c408               add esp, 8
// 00814125  8906                 mov dword ptr [esi], eax
// 00814127  85c0                 test eax, eax
// 00814129  7421                 je 0x81414c
// 0081412b  8bcf                 mov ecx, edi
// 0081412d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00814133  8bcf                 mov ecx, edi
// 00814135  8be8                 mov ebp, eax
// 00814137  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0081413d  40                   inc eax
// 0081413e  55                   push ebp
// 0081413f  50                   push eax
// 00814140  8b06                 mov eax, dword ptr [esi]
// 00814142  50                   push eax
// 00814143  ff1578a89e00         call dword ptr [0x9ea878]
// 00814149  83c40c               add esp, 0xc
// 0081414c  6a01                 push 1
// 0081414e  8bcb                 mov ecx, ebx
// 00814150  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00814156  40                   inc eax
// 00814157  50                   push eax
// 00814158  ff1590a89e00         call dword ptr [0x9ea890]
// 0081415e  83c408               add esp, 8
// 00814161  894604               mov dword ptr [esi + 4], eax
// 00814164  85c0                 test eax, eax
// 00814166  7422                 je 0x81418a
// 00814168  8bcb                 mov ecx, ebx
// 0081416a  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00814170  8bcb                 mov ecx, ebx
// 00814172  8bf8                 mov edi, eax
// 00814174  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0081417a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0081417d  40                   inc eax
// 0081417e  57                   push edi
// 0081417f  50                   push eax
// 00814180  51                   push ecx
// 00814181  ff1578a89e00         call dword ptr [0x9ea878]
// 00814187  83c40c               add esp, 0xc
// 0081418a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0081418e  895608               mov dword ptr [esi + 8], edx
// 00814191  5f                   pop edi
// 00814192  5e                   pop esi
// 00814193  5d                   pop ebp
// 00814194  5b                   pop ebx
// 00814195  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@33PAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp