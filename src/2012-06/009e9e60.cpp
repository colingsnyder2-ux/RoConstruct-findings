// roc 2012-06 009e9e60  unit: CXTPToolTipContext::CHTMLToolTip  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9e60
//
// 009e9e60  8b442420             mov eax, dword ptr [esp + 0x20]
// 009e9e64  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009e9e68  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009e9e6c  53                   push ebx
// 009e9e6d  55                   push ebp
// 009e9e6e  56                   push esi
// 009e9e6f  8b742410             mov esi, dword ptr [esp + 0x10]
// 009e9e73  57                   push edi
// 009e9e74  50                   push eax
// 009e9e75  51                   push ecx
// 009e9e76  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009e9e7a  83ec10               sub esp, 0x10
// 009e9e7d  8bc4                 mov eax, esp
// 009e9e7f  8910                 mov dword ptr [eax], edx
// 009e9e81  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009e9e85  894804               mov dword ptr [eax + 4], ecx
// 009e9e88  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 009e9e8c  895008               mov dword ptr [eax + 8], edx
// 009e9e8f  8b542430             mov edx, dword ptr [esp + 0x30]
// 009e9e93  52                   push edx
// 009e9e94  56                   push esi
// 009e9e95  89480c               mov dword ptr [eax + 0xc], ecx
// 009e9e98  e843ffffff           call 0x9e9de0
// 009e9e9d  83c420               add esp, 0x20
// 009e9ea0  85f6                 test esi, esi
// 009e9ea2  0f84b9000000         je 0x9e9f61
// 009e9ea8  833e2c               cmp dword ptr [esi], 0x2c
// 009e9eab  0f85b0000000         jne 0x9e9f61
// 009e9eb1  8b7628               mov esi, dword ptr [esi + 0x28]
// 009e9eb4  85f6                 test esi, esi
// 009e9eb6  0f84a5000000         je 0x9e9f61
// 009e9ebc  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 009e9ec0  8bcf                 mov ecx, edi
// 009e9ec2  ff156046b200         call dword ptr [0xb24660]
// 009e9ec8  84c0                 test al, al
// 009e9eca  0f858a000000         jne 0x9e9f5a
// 009e9ed0  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 009e9ed4  8bcb                 mov ecx, ebx
// 009e9ed6  ff156046b200         call dword ptr [0xb24660]
// 009e9edc  84c0                 test al, al
// 009e9ede  757a                 jne 0x9e9f5a
// 009e9ee0  6a01                 push 1
// 009e9ee2  8bcf                 mov ecx, edi
// 009e9ee4  ff155846b200         call dword ptr [0xb24658]
// 009e9eea  40                   inc eax
// 009e9eeb  50                   push eax
// 009e9eec  ff15fc28b200         call dword ptr [0xb228fc]
// 009e9ef2  83c408               add esp, 8
// 009e9ef5  8906                 mov dword ptr [esi], eax
// 009e9ef7  85c0                 test eax, eax
// 009e9ef9  7421                 je 0x9e9f1c
// 009e9efb  8bcf                 mov ecx, edi
// 009e9efd  ff159847b200         call dword ptr [0xb24798]
// 009e9f03  8bcf                 mov ecx, edi
// 009e9f05  8be8                 mov ebp, eax
// 009e9f07  ff155846b200         call dword ptr [0xb24658]
// 009e9f0d  40                   inc eax
// 009e9f0e  55                   push ebp
// 009e9f0f  50                   push eax
// 009e9f10  8b06                 mov eax, dword ptr [esi]
// 009e9f12  50                   push eax
// 009e9f13  ff15d82ab200         call dword ptr [0xb22ad8]
// 009e9f19  83c40c               add esp, 0xc
// 009e9f1c  6a01                 push 1
// 009e9f1e  8bcb                 mov ecx, ebx
// 009e9f20  ff155846b200         call dword ptr [0xb24658]
// 009e9f26  40                   inc eax
// 009e9f27  50                   push eax
// 009e9f28  ff15fc28b200         call dword ptr [0xb228fc]
// 009e9f2e  83c408               add esp, 8
// 009e9f31  894604               mov dword ptr [esi + 4], eax
// 009e9f34  85c0                 test eax, eax
// 009e9f36  7422                 je 0x9e9f5a
// 009e9f38  8bcb                 mov ecx, ebx
// 009e9f3a  ff159847b200         call dword ptr [0xb24798]
// 009e9f40  8bcb                 mov ecx, ebx
// 009e9f42  8bf8                 mov edi, eax
// 009e9f44  ff155846b200         call dword ptr [0xb24658]
// 009e9f4a  8b4e04               mov ecx, dword ptr [esi + 4]
// 009e9f4d  40                   inc eax
// 009e9f4e  57                   push edi
// 009e9f4f  50                   push eax
// 009e9f50  51                   push ecx
// 009e9f51  ff15d82ab200         call dword ptr [0xb22ad8]
// 009e9f57  83c40c               add esp, 0xc
// 009e9f5a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009e9f5e  895608               mov dword ptr [esi + 8], edx
// 009e9f61  5f                   pop edi
// 009e9f62  5e                   pop esi
// 009e9f63  5d                   pop ebp
// 009e9f64  5b                   pop ebx
// 009e9f65  c3                   ret 
// copied from an identical function in another client (function ?FillInToolInfo@CXTPToolTipContext@@SAXPAUtagTOOLINFOA@@PAUHWND__@@VCRect@@HABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@33PAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp