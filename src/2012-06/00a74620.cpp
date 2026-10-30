// roc 2012-06 00a74620  unit: CXTPRibbonTabPopupToolBar  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a74620
//
// 00a74620  83ec20               sub esp, 0x20
// 00a74623  53                   push ebx
// 00a74624  55                   push ebp
// 00a74625  56                   push esi
// 00a74626  57                   push edi
// 00a74627  8bf1                 mov esi, ecx
// 00a74629  e882e7f1ff           call 0x992db0
// 00a7462e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00a74632  8bf8                 mov edi, eax
// 00a74634  56                   push esi
// 00a74635  53                   push ebx
// 00a74636  8bcf                 mov ecx, edi
// 00a74638  e893eaf8ff           call 0xa030d0
// 00a7463d  8b8e7c020000         mov ecx, dword ptr [esi + 0x27c]
// 00a74643  8b17                 mov edx, dword ptr [edi]
// 00a74645  8b9238010000         mov edx, dword ptr [edx + 0x138]
// 00a7464b  83ec10               sub esp, 0x10
// 00a7464e  8bc4                 mov eax, esp
// 00a74650  8908                 mov dword ptr [eax], ecx
// 00a74652  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00a74658  894804               mov dword ptr [eax + 4], ecx
// 00a7465b  8b8e84020000         mov ecx, dword ptr [esi + 0x284]
// 00a74661  894808               mov dword ptr [eax + 8], ecx
// 00a74664  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00a7466a  89480c               mov dword ptr [eax + 0xc], ecx
// 00a7466d  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00a74673  50                   push eax
// 00a74674  53                   push ebx
// 00a74675  8bcf                 mov ecx, edi
// 00a74677  ffd2                 call edx
// 00a74679  6a01                 push 1
// 00a7467b  8bcb                 mov ecx, ebx
// 00a7467d  e8264f0200           call 0xa995a8
// 00a74682  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00a74688  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 00a7468e  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00a74691  33db                 xor ebx, ebx
// 00a74693  85c0                 test eax, eax
// 00a74695  0f8e9a000000         jle 0xa74735
// 00a7469b  eb03                 jmp 0xa746a0
// 00a7469d  8d4900               lea ecx, [ecx]
// 00a746a0  85db                 test ebx, ebx
// 00a746a2  7c15                 jl 0xa746b9
// 00a746a4  3bd8                 cmp ebx, eax
// 00a746a6  7d11                 jge 0xa746b9
// 00a746a8  3b5d28               cmp ebx, dword ptr [ebp + 0x28]
// 00a746ab  0f8de6000000         jge 0xa74797
// 00a746b1  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00a746b4  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 00a746b7  eb02                 jmp 0xa746bb
// 00a746b9  33ff                 xor edi, edi
// 00a746bb  8bcf                 mov ecx, edi
// 00a746bd  e87eabffff           call 0xa6f240
// 00a746c2  85c0                 test eax, eax
// 00a746c4  7463                 je 0xa74729
// 00a746c6  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a746c9  8b5734               mov edx, dword ptr [edi + 0x34]
// 00a746cc  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00a746cf  89542410             mov dword ptr [esp + 0x10], edx
// 00a746d3  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a746d6  89442414             mov dword ptr [esp + 0x14], eax
// 00a746da  8d442410             lea eax, [esp + 0x10]
// 00a746de  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a746e2  50                   push eax
// 00a746e3  8d4c243c             lea ecx, [esp + 0x3c]
// 00a746e7  89542420             mov dword ptr [esp + 0x20], edx
// 00a746eb  51                   push ecx
// 00a746ec  8d542428             lea edx, [esp + 0x28]
// 00a746f0  52                   push edx
// 00a746f1  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a746f7  85c0                 test eax, eax
// 00a746f9  742e                 je 0xa74729
// 00a746fb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a746ff  8b17                 mov edx, dword ptr [edi]
// 00a74701  8b5260               mov edx, dword ptr [edx + 0x60]
// 00a74704  83ec10               sub esp, 0x10
// 00a74707  8bc4                 mov eax, esp
// 00a74709  8908                 mov dword ptr [eax], ecx
// 00a7470b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a7470f  894804               mov dword ptr [eax + 4], ecx
// 00a74712  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a74716  894808               mov dword ptr [eax + 8], ecx
// 00a74719  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a7471d  89480c               mov dword ptr [eax + 0xc], ecx
// 00a74720  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a74724  50                   push eax
// 00a74725  8bcf                 mov ecx, edi
// 00a74727  ffd2                 call edx
// 00a74729  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00a7472c  43                   inc ebx
// 00a7472d  3bd8                 cmp ebx, eax
// 00a7472f  0f8c6bffffff         jl 0xa746a0
// 00a74735  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00a7473b  8b01                 mov eax, dword ptr [ecx]
// 00a7473d  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00a74743  6a00                 push 0
// 00a74745  ffd2                 call edx
// 00a74747  85c0                 test eax, eax
// 00a74749  7415                 je 0xa74760
// 00a7474b  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00a74751  8b01                 mov eax, dword ptr [ecx]
// 00a74753  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a74757  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 00a7475d  52                   push edx
// 00a7475e  ffd0                 call eax
// 00a74760  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 00a74766  8b11                 mov edx, dword ptr [ecx]
// 00a74768  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00a7476e  6a00                 push 0
// 00a74770  ffd0                 call eax
// 00a74772  85c0                 test eax, eax
// 00a74774  7417                 je 0xa7478d
// 00a74776  8bb66c020000         mov esi, dword ptr [esi + 0x26c]
// 00a7477c  8b16                 mov edx, dword ptr [esi]
// 00a7477e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a74782  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 00a74788  50                   push eax
// 00a74789  8bce                 mov ecx, esi
// 00a7478b  ffd2                 call edx
// 00a7478d  5f                   pop edi
// 00a7478e  5e                   pop esi
// 00a7478f  5d                   pop ebp
// 00a74790  5b                   pop ebx
// 00a74791  83c420               add esp, 0x20
// 00a74794  c21400               ret 0x14
// 00a74797  e824dcf0ff           call 0x9823c0
// copied from an identical function in another client (function ?DrawCommandBar@CXTPRibbonTabPopupToolBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp