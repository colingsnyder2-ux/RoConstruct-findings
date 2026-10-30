// roc 2009-12 008f35a0  unit: CXTColorSelectorCtrlTheme  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f35a0
//
// 008f35a0  83ec10               sub esp, 0x10
// 008f35a3  53                   push ebx
// 008f35a4  55                   push ebp
// 008f35a5  56                   push esi
// 008f35a6  57                   push edi
// 008f35a7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008f35ab  8be9                 mov ebp, ecx
// 008f35ad  6a01                 push 1
// 008f35af  8bcf                 mov ecx, edi
// 008f35b1  e8da2e0300           call 0x926490
// 008f35b6  8b37                 mov esi, dword ptr [edi]
// 008f35b8  e8230ff7ff           call 0x8644e0
// 008f35bd  05dc000000           add eax, 0xdc
// 008f35c2  50                   push eax
// 008f35c3  8b4630               mov eax, dword ptr [esi + 0x30]
// 008f35c6  8bcf                 mov ecx, edi
// 008f35c8  ffd0                 call eax
// 008f35ca  8b742424             mov esi, dword ptr [esp + 0x24]
// 008f35ce  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008f35d1  8a5e08               mov bl, byte ptr [esi + 8]
// 008f35d4  8b5610               mov edx, dword ptr [esi + 0x10]
// 008f35d7  89442428             mov dword ptr [esp + 0x28], eax
// 008f35db  8b4614               mov eax, dword ptr [esi + 0x14]
// 008f35de  894c2410             mov dword ptr [esp + 0x10], ecx
// 008f35e2  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008f35e5  89442418             mov dword ptr [esp + 0x18], eax
// 008f35e9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008f35ed  89542414             mov dword ptr [esp + 0x14], edx
// 008f35f1  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008f35f5  84db                 test bl, bl
// 008f35f7  7510                 jne 0x8f3609
// 008f35f9  85c0                 test eax, eax
// 008f35fb  750c                 jne 0x8f3609
// 008f35fd  39442430             cmp dword ptr [esp + 0x30], eax
// 008f3601  0f8497000000         je 0x8f369e
// 008f3607  eb07                 jmp 0x8f3610
// 008f3609  837c243000           cmp dword ptr [esp + 0x30], 0
// 008f360e  7428                 je 0x8f3638
// 008f3610  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008f3613  83f8ff               cmp eax, -1
// 008f3616  740d                 je 0x8f3625
// 008f3618  50                   push eax
// 008f3619  8d542414             lea edx, [esp + 0x14]
// 008f361d  52                   push edx
// 008f361e  8bcf                 mov ecx, edi
// 008f3620  e8d90ff0ff           call 0x7f45fe
// 008f3625  837c243000           cmp dword ptr [esp + 0x30], 0
// 008f362a  754f                 jne 0x8f367b
// 008f362c  84db                 test bl, bl
// 008f362e  754b                 jne 0x8f367b
// 008f3630  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 008f3633  8b4514               mov eax, dword ptr [ebp + 0x14]
// 008f3636  eb58                 jmp 0x8f3690
// 008f3638  85c0                 test eax, eax
// 008f363a  7417                 je 0x8f3653
// 008f363c  8b4524               mov eax, dword ptr [ebp + 0x24]
// 008f363f  83f8ff               cmp eax, -1
// 008f3642  74e8                 je 0x8f362c
// 008f3644  50                   push eax
// 008f3645  8d442414             lea eax, [esp + 0x14]
// 008f3649  50                   push eax
// 008f364a  8bcf                 mov ecx, edi
// 008f364c  e8ad0ff0ff           call 0x7f45fe
// 008f3651  ebd9                 jmp 0x8f362c
// 008f3653  84db                 test bl, bl
// 008f3655  74d9                 je 0x8f3630
// 008f3657  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008f365a  83f8ff               cmp eax, -1
// 008f365d  740f                 je 0x8f366e
// 008f365f  50                   push eax
// 008f3660  8d4c2414             lea ecx, [esp + 0x14]
// 008f3664  51                   push ecx
// 008f3665  8bcf                 mov ecx, edi
// 008f3667  e8920ff0ff           call 0x7f45fe
// 008f366c  ebbe                 jmp 0x8f362c
// 008f366e  8d542410             lea edx, [esp + 0x10]
// 008f3672  52                   push edx
// 008f3673  57                   push edi
// 008f3674  e81748f2ff           call 0x817e90
// 008f3679  ebb1                 jmp 0x8f362c
// 008f367b  837c243000           cmp dword ptr [esp + 0x30], 0
// 008f3680  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 008f3683  7508                 jne 0x8f368d
// 008f3685  84db                 test bl, bl
// 008f3687  7504                 jne 0x8f368d
// 008f3689  8bc1                 mov eax, ecx
// 008f368b  eb03                 jmp 0x8f3690
// 008f368d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 008f3690  51                   push ecx
// 008f3691  50                   push eax
// 008f3692  8d442418             lea eax, [esp + 0x18]
// 008f3696  50                   push eax
// 008f3697  8bcf                 mov ecx, edi
// 008f3699  e85a0ff0ff           call 0x7f45f8
// 008f369e  8d5e20               lea ebx, [esi + 0x20]
// 008f36a1  8bc3                 mov eax, ebx
// 008f36a3  8d5001               lea edx, [eax + 1]
// 008f36a6  8a08                 mov cl, byte ptr [eax]
// 008f36a8  40                   inc eax
// 008f36a9  84c9                 test cl, cl
// 008f36ab  75f9                 jne 0x8f36a6
// 008f36ad  2bc2                 sub eax, edx
// 008f36af  89442430             mov dword ptr [esp + 0x30], eax
// 008f36b3  7423                 je 0x8f36d8
// 008f36b5  8b17                 mov edx, dword ptr [edi]
// 008f36b7  8b452c               mov eax, dword ptr [ebp + 0x2c]
// 008f36ba  8b5238               mov edx, dword ptr [edx + 0x38]
// 008f36bd  50                   push eax
// 008f36be  8bcf                 mov ecx, edi
// 008f36c0  ffd2                 call edx
// 008f36c2  8b542430             mov edx, dword ptr [esp + 0x30]
// 008f36c6  8b07                 mov eax, dword ptr [edi]
// 008f36c8  8b4070               mov eax, dword ptr [eax + 0x70]
// 008f36cb  6a25                 push 0x25
// 008f36cd  8d4c2414             lea ecx, [esp + 0x14]
// 008f36d1  51                   push ecx
// 008f36d2  52                   push edx
// 008f36d3  53                   push ebx
// 008f36d4  8bcf                 mov ecx, edi
// 008f36d6  ffd0                 call eax
// 008f36d8  837e1c04             cmp dword ptr [esi + 0x1c], 4
// 008f36dc  0f84a7000000         je 0x8f3789
// 008f36e2  8b1d58ca9800         mov ebx, dword ptr [0x98ca58]
// 008f36e8  6afd                 push -3
// 008f36ea  6afd                 push -3
// 008f36ec  8d4c2418             lea ecx, [esp + 0x18]
// 008f36f0  51                   push ecx
// 008f36f1  ffd3                 call ebx
// 008f36f3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008f36f6  a808                 test al, 8
// 008f36f8  7565                 jne 0x8f375f
// 008f36fa  a801                 test al, 1
// 008f36fc  0f85f4000000         jne 0x8f37f6
// 008f3702  6afd                 push -3
// 008f3704  6afd                 push -3
// 008f3706  8d542418             lea edx, [esp + 0x18]
// 008f370a  52                   push edx
// 008f370b  ffd3                 call ebx
// 008f370d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f3711  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f3715  6a00                 push 0
// 008f3717  6a01                 push 1
// 008f3719  8d542418             lea edx, [esp + 0x18]
// 008f371d  83c00c               add eax, 0xc
// 008f3720  83c10b               add ecx, 0xb
// 008f3723  52                   push edx
// 008f3724  89442424             mov dword ptr [esp + 0x24], eax
// 008f3728  894c2428             mov dword ptr [esp + 0x28], ecx
// 008f372c  ff156ccc9800         call dword ptr [0x98cc6c]
// 008f3732  8b4518               mov eax, dword ptr [ebp + 0x18]
// 008f3735  50                   push eax
// 008f3736  50                   push eax
// 008f3737  8d442418             lea eax, [esp + 0x18]
// 008f373b  50                   push eax
// 008f373c  8bcf                 mov ecx, edi
// 008f373e  e8b50ef0ff           call 0x7f45f8
// 008f3743  6aff                 push -1
// 008f3745  6aff                 push -1
// 008f3747  8d4c2418             lea ecx, [esp + 0x18]
// 008f374b  51                   push ecx
// 008f374c  ffd3                 call ebx
// 008f374e  8b9620010000         mov edx, dword ptr [esi + 0x120]
// 008f3754  52                   push edx
// 008f3755  8d442414             lea eax, [esp + 0x14]
// 008f3759  50                   push eax
// 008f375a  e990000000           jmp 0x8f37ef
// 008f375f  8b6d18               mov ebp, dword ptr [ebp + 0x18]
// 008f3762  55                   push ebp
// 008f3763  55                   push ebp
// 008f3764  8d4c2418             lea ecx, [esp + 0x18]
// 008f3768  51                   push ecx
// 008f3769  8bcf                 mov ecx, edi
// 008f376b  e8880ef0ff           call 0x7f45f8
// 008f3770  6aff                 push -1
// 008f3772  6aff                 push -1
// 008f3774  8d542418             lea edx, [esp + 0x18]
// 008f3778  52                   push edx
// 008f3779  ffd3                 call ebx
// 008f377b  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008f3781  50                   push eax
// 008f3782  8d4c2414             lea ecx, [esp + 0x14]
// 008f3786  51                   push ecx
// 008f3787  eb66                 jmp 0x8f37ef
// 008f3789  807e0800             cmp byte ptr [esi + 8], 0
// 008f378d  7467                 je 0x8f37f6
// 008f378f  8b4610               mov eax, dword ptr [esi + 0x10]
// 008f3792  8b560c               mov edx, dword ptr [esi + 0xc]
// 008f3795  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 008f3798  8b1d58ca9800         mov ebx, dword ptr [0x98ca58]
// 008f379e  6afa                 push -6
// 008f37a0  89442418             mov dword ptr [esp + 0x18], eax
// 008f37a4  89542414             mov dword ptr [esp + 0x14], edx
// 008f37a8  8b5618               mov edx, dword ptr [esi + 0x18]
// 008f37ab  6afb                 push -5
// 008f37ad  8d442418             lea eax, [esp + 0x18]
// 008f37b1  50                   push eax
// 008f37b2  894c2424             mov dword ptr [esp + 0x24], ecx
// 008f37b6  89542428             mov dword ptr [esp + 0x28], edx
// 008f37ba  ffd3                 call ebx
// 008f37bc  8b6d18               mov ebp, dword ptr [ebp + 0x18]
// 008f37bf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f37c3  55                   push ebp
// 008f37c4  83c1f4               add ecx, -0xc
// 008f37c7  55                   push ebp
// 008f37c8  8d542418             lea edx, [esp + 0x18]
// 008f37cc  894c2418             mov dword ptr [esp + 0x18], ecx
// 008f37d0  52                   push edx
// 008f37d1  8bcf                 mov ecx, edi
// 008f37d3  e8200ef0ff           call 0x7f45f8
// 008f37d8  6aff                 push -1
// 008f37da  6aff                 push -1
// 008f37dc  8d442418             lea eax, [esp + 0x18]
// 008f37e0  50                   push eax
// 008f37e1  ffd3                 call ebx
// 008f37e3  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008f37e9  51                   push ecx
// 008f37ea  8d542414             lea edx, [esp + 0x14]
// 008f37ee  52                   push edx
// 008f37ef  8bcf                 mov ecx, edi
// 008f37f1  e8080ef0ff           call 0x7f45fe
// 008f37f6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f37fa  8b07                 mov eax, dword ptr [edi]
// 008f37fc  8b5030               mov edx, dword ptr [eax + 0x30]
// 008f37ff  51                   push ecx
// 008f3800  8bcf                 mov ecx, edi
// 008f3802  ffd2                 call edx
// 008f3804  5f                   pop edi
// 008f3805  5e                   pop esi
// 008f3806  5d                   pop ebp
// 008f3807  5b                   pop ebx
// 008f3808  83c410               add esp, 0x10
// 008f380b  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawColorCell@CXTColorSelectorCtrlTheme@@UAEXPAUCOLOR_CELL@CXTColorSelectorCtrl@@PAVCDC@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorSelectorCtrlTheme.cpp