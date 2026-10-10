// roc 2008-06 007a0e00  unit: CXTColorSelectorCtrlTheme  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0e00
//
// 007a0e00  83ec10               sub esp, 0x10
// 007a0e03  53                   push ebx
// 007a0e04  55                   push ebp
// 007a0e05  56                   push esi
// 007a0e06  57                   push edi
// 007a0e07  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007a0e0b  8be9                 mov ebp, ecx
// 007a0e0d  6a01                 push 1
// 007a0e0f  8bcf                 mov ecx, edi
// 007a0e11  e80cb20100           call 0x7bc022
// 007a0e16  8b37                 mov esi, dword ptr [edi]
// 007a0e18  e8a3fef6ff           call 0x710cc0
// 007a0e1d  05dc000000           add eax, 0xdc
// 007a0e22  50                   push eax
// 007a0e23  8b4630               mov eax, dword ptr [esi + 0x30]
// 007a0e26  8bcf                 mov ecx, edi
// 007a0e28  ffd0                 call eax
// 007a0e2a  8b742424             mov esi, dword ptr [esp + 0x24]
// 007a0e2e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007a0e31  8a5e08               mov bl, byte ptr [esi + 8]
// 007a0e34  8b5610               mov edx, dword ptr [esi + 0x10]
// 007a0e37  89442428             mov dword ptr [esp + 0x28], eax
// 007a0e3b  8b4614               mov eax, dword ptr [esi + 0x14]
// 007a0e3e  894c2410             mov dword ptr [esp + 0x10], ecx
// 007a0e42  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a0e45  89442418             mov dword ptr [esp + 0x18], eax
// 007a0e49  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a0e4d  89542414             mov dword ptr [esp + 0x14], edx
// 007a0e51  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007a0e55  84db                 test bl, bl
// 007a0e57  7510                 jne 0x7a0e69
// 007a0e59  85c0                 test eax, eax
// 007a0e5b  750c                 jne 0x7a0e69
// 007a0e5d  39442430             cmp dword ptr [esp + 0x30], eax
// 007a0e61  0f8497000000         je 0x7a0efe
// 007a0e67  eb07                 jmp 0x7a0e70
// 007a0e69  837c243000           cmp dword ptr [esp + 0x30], 0
// 007a0e6e  7428                 je 0x7a0e98
// 007a0e70  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007a0e73  83f8ff               cmp eax, -1
// 007a0e76  740d                 je 0x7a0e85
// 007a0e78  50                   push eax
// 007a0e79  8d542414             lea edx, [esp + 0x14]
// 007a0e7d  52                   push edx
// 007a0e7e  8bcf                 mov ecx, edi
// 007a0e80  e8d904f0ff           call 0x6a135e
// 007a0e85  837c243000           cmp dword ptr [esp + 0x30], 0
// 007a0e8a  754f                 jne 0x7a0edb
// 007a0e8c  84db                 test bl, bl
// 007a0e8e  754b                 jne 0x7a0edb
// 007a0e90  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 007a0e93  8b4514               mov eax, dword ptr [ebp + 0x14]
// 007a0e96  eb58                 jmp 0x7a0ef0
// 007a0e98  85c0                 test eax, eax
// 007a0e9a  7417                 je 0x7a0eb3
// 007a0e9c  8b4524               mov eax, dword ptr [ebp + 0x24]
// 007a0e9f  83f8ff               cmp eax, -1
// 007a0ea2  74e8                 je 0x7a0e8c
// 007a0ea4  50                   push eax
// 007a0ea5  8d442414             lea eax, [esp + 0x14]
// 007a0ea9  50                   push eax
// 007a0eaa  8bcf                 mov ecx, edi
// 007a0eac  e8ad04f0ff           call 0x6a135e
// 007a0eb1  ebd9                 jmp 0x7a0e8c
// 007a0eb3  84db                 test bl, bl
// 007a0eb5  74d9                 je 0x7a0e90
// 007a0eb7  8b4528               mov eax, dword ptr [ebp + 0x28]
// 007a0eba  83f8ff               cmp eax, -1
// 007a0ebd  740f                 je 0x7a0ece
// 007a0ebf  50                   push eax
// 007a0ec0  8d4c2414             lea ecx, [esp + 0x14]
// 007a0ec4  51                   push ecx
// 007a0ec5  8bcf                 mov ecx, edi
// 007a0ec7  e89204f0ff           call 0x6a135e
// 007a0ecc  ebbe                 jmp 0x7a0e8c
// 007a0ece  8d542410             lea edx, [esp + 0x10]
// 007a0ed2  52                   push edx
// 007a0ed3  57                   push edi
// 007a0ed4  e8d73af2ff           call 0x6c49b0
// 007a0ed9  ebb1                 jmp 0x7a0e8c
// 007a0edb  837c243000           cmp dword ptr [esp + 0x30], 0
// 007a0ee0  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 007a0ee3  7508                 jne 0x7a0eed
// 007a0ee5  84db                 test bl, bl
// 007a0ee7  7504                 jne 0x7a0eed
// 007a0ee9  8bc1                 mov eax, ecx
// 007a0eeb  eb03                 jmp 0x7a0ef0
// 007a0eed  8b4518               mov eax, dword ptr [ebp + 0x18]
// 007a0ef0  51                   push ecx
// 007a0ef1  50                   push eax
// 007a0ef2  8d442418             lea eax, [esp + 0x18]
// 007a0ef6  50                   push eax
// 007a0ef7  8bcf                 mov ecx, edi
// 007a0ef9  e85a04f0ff           call 0x6a1358
// 007a0efe  8d5e20               lea ebx, [esi + 0x20]
// 007a0f01  8bc3                 mov eax, ebx
// 007a0f03  8d5001               lea edx, [eax + 1]
// 007a0f06  8a08                 mov cl, byte ptr [eax]
// 007a0f08  40                   inc eax
// 007a0f09  84c9                 test cl, cl
// 007a0f0b  75f9                 jne 0x7a0f06
// 007a0f0d  2bc2                 sub eax, edx
// 007a0f0f  89442430             mov dword ptr [esp + 0x30], eax
// 007a0f13  7423                 je 0x7a0f38
// 007a0f15  8b17                 mov edx, dword ptr [edi]
// 007a0f17  8b452c               mov eax, dword ptr [ebp + 0x2c]
// 007a0f1a  8b5238               mov edx, dword ptr [edx + 0x38]
// 007a0f1d  50                   push eax
// 007a0f1e  8bcf                 mov ecx, edi
// 007a0f20  ffd2                 call edx
// 007a0f22  8b542430             mov edx, dword ptr [esp + 0x30]
// 007a0f26  8b07                 mov eax, dword ptr [edi]
// 007a0f28  8b4070               mov eax, dword ptr [eax + 0x70]
// 007a0f2b  6a25                 push 0x25
// 007a0f2d  8d4c2414             lea ecx, [esp + 0x14]
// 007a0f31  51                   push ecx
// 007a0f32  52                   push edx
// 007a0f33  53                   push ebx
// 007a0f34  8bcf                 mov ecx, edi
// 007a0f36  ffd0                 call eax
// 007a0f38  837e1c04             cmp dword ptr [esi + 0x1c], 4
// 007a0f3c  0f84a7000000         je 0x7a0fe9
// 007a0f42  8b1d282d8000         mov ebx, dword ptr [0x802d28]
// 007a0f48  6afd                 push -3
// 007a0f4a  6afd                 push -3
// 007a0f4c  8d4c2418             lea ecx, [esp + 0x18]
// 007a0f50  51                   push ecx
// 007a0f51  ffd3                 call ebx
// 007a0f53  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007a0f56  a808                 test al, 8
// 007a0f58  7565                 jne 0x7a0fbf
// 007a0f5a  a801                 test al, 1
// 007a0f5c  0f85f4000000         jne 0x7a1056
// 007a0f62  6afd                 push -3
// 007a0f64  6afd                 push -3
// 007a0f66  8d542418             lea edx, [esp + 0x18]
// 007a0f6a  52                   push edx
// 007a0f6b  ffd3                 call ebx
// 007a0f6d  8b442410             mov eax, dword ptr [esp + 0x10]
// 007a0f71  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a0f75  6a00                 push 0
// 007a0f77  6a01                 push 1
// 007a0f79  8d542418             lea edx, [esp + 0x18]
// 007a0f7d  83c00c               add eax, 0xc
// 007a0f80  83c10b               add ecx, 0xb
// 007a0f83  52                   push edx
// 007a0f84  89442424             mov dword ptr [esp + 0x24], eax
// 007a0f88  894c2428             mov dword ptr [esp + 0x28], ecx
// 007a0f8c  ff15682d8000         call dword ptr [0x802d68]
// 007a0f92  8b4518               mov eax, dword ptr [ebp + 0x18]
// 007a0f95  50                   push eax
// 007a0f96  50                   push eax
// 007a0f97  8d442418             lea eax, [esp + 0x18]
// 007a0f9b  50                   push eax
// 007a0f9c  8bcf                 mov ecx, edi
// 007a0f9e  e8b503f0ff           call 0x6a1358
// 007a0fa3  6aff                 push -1
// 007a0fa5  6aff                 push -1
// 007a0fa7  8d4c2418             lea ecx, [esp + 0x18]
// 007a0fab  51                   push ecx
// 007a0fac  ffd3                 call ebx
// 007a0fae  8b9620010000         mov edx, dword ptr [esi + 0x120]
// 007a0fb4  52                   push edx
// 007a0fb5  8d442414             lea eax, [esp + 0x14]
// 007a0fb9  50                   push eax
// 007a0fba  e990000000           jmp 0x7a104f
// 007a0fbf  8b6d18               mov ebp, dword ptr [ebp + 0x18]
// 007a0fc2  55                   push ebp
// 007a0fc3  55                   push ebp
// 007a0fc4  8d4c2418             lea ecx, [esp + 0x18]
// 007a0fc8  51                   push ecx
// 007a0fc9  8bcf                 mov ecx, edi
// 007a0fcb  e88803f0ff           call 0x6a1358
// 007a0fd0  6aff                 push -1
// 007a0fd2  6aff                 push -1
// 007a0fd4  8d542418             lea edx, [esp + 0x18]
// 007a0fd8  52                   push edx
// 007a0fd9  ffd3                 call ebx
// 007a0fdb  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 007a0fe1  50                   push eax
// 007a0fe2  8d4c2414             lea ecx, [esp + 0x14]
// 007a0fe6  51                   push ecx
// 007a0fe7  eb66                 jmp 0x7a104f
// 007a0fe9  807e0800             cmp byte ptr [esi + 8], 0
// 007a0fed  7467                 je 0x7a1056
// 007a0fef  8b4610               mov eax, dword ptr [esi + 0x10]
// 007a0ff2  8b560c               mov edx, dword ptr [esi + 0xc]
// 007a0ff5  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007a0ff8  8b1d282d8000         mov ebx, dword ptr [0x802d28]
// 007a0ffe  6afa                 push -6
// 007a1000  89442418             mov dword ptr [esp + 0x18], eax
// 007a1004  89542414             mov dword ptr [esp + 0x14], edx
// 007a1008  8b5618               mov edx, dword ptr [esi + 0x18]
// 007a100b  6afb                 push -5
// 007a100d  8d442418             lea eax, [esp + 0x18]
// 007a1011  50                   push eax
// 007a1012  894c2424             mov dword ptr [esp + 0x24], ecx
// 007a1016  89542428             mov dword ptr [esp + 0x28], edx
// 007a101a  ffd3                 call ebx
// 007a101c  8b6d18               mov ebp, dword ptr [ebp + 0x18]
// 007a101f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a1023  55                   push ebp
// 007a1024  83c1f4               add ecx, -0xc
// 007a1027  55                   push ebp
// 007a1028  8d542418             lea edx, [esp + 0x18]
// 007a102c  894c2418             mov dword ptr [esp + 0x18], ecx
// 007a1030  52                   push edx
// 007a1031  8bcf                 mov ecx, edi
// 007a1033  e82003f0ff           call 0x6a1358
// 007a1038  6aff                 push -1
// 007a103a  6aff                 push -1
// 007a103c  8d442418             lea eax, [esp + 0x18]
// 007a1040  50                   push eax
// 007a1041  ffd3                 call ebx
// 007a1043  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 007a1049  51                   push ecx
// 007a104a  8d542414             lea edx, [esp + 0x14]
// 007a104e  52                   push edx
// 007a104f  8bcf                 mov ecx, edi
// 007a1051  e80803f0ff           call 0x6a135e
// 007a1056  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a105a  8b07                 mov eax, dword ptr [edi]
// 007a105c  8b5030               mov edx, dword ptr [eax + 0x30]
// 007a105f  51                   push ecx
// 007a1060  8bcf                 mov ecx, edi
// 007a1062  ffd2                 call edx
// 007a1064  5f                   pop edi
// 007a1065  5e                   pop esi
// 007a1066  5d                   pop ebp
// 007a1067  5b                   pop ebx
// 007a1068  83c410               add esp, 0x10
// 007a106b  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?DrawColorCell@CXTColorSelectorCtrlTheme@@UAEXPAUCOLOR_CELL@CXTColorSelectorCtrl@@PAVCDC@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorSelectorCtrlTheme.cpp
