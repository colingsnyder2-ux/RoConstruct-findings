// roc 2012-06 00a5a730  unit: CXTPPropertyGridPaintManager  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5a730
//
// 00a5a730  83ec10               sub esp, 0x10
// 00a5a733  53                   push ebx
// 00a5a734  56                   push esi
// 00a5a735  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a5a739  57                   push edi
// 00a5a73a  8bf9                 mov edi, ecx
// 00a5a73c  6a01                 push 1
// 00a5a73e  8bce                 mov ecx, esi
// 00a5a740  e863ee0300           call 0xa995a8
// 00a5a745  837c243800           cmp dword ptr [esp + 0x38], 0
// 00a5a74a  7428                 je 0xa5a774
// 00a5a74c  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00a5a74f  83f8ff               cmp eax, -1
// 00a5a752  7503                 jne 0xa5a757
// 00a5a754  8b4758               mov eax, dword ptr [edi + 0x58]
// 00a5a757  8b16                 mov edx, dword ptr [esi]
// 00a5a759  50                   push eax
// 00a5a75a  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a5a75d  8bce                 mov ecx, esi
// 00a5a75f  ffd0                 call eax
// 00a5a761  8b4750               mov eax, dword ptr [edi + 0x50]
// 00a5a764  83f8ff               cmp eax, -1
// 00a5a767  7503                 jne 0xa5a76c
// 00a5a769  8b474c               mov eax, dword ptr [edi + 0x4c]
// 00a5a76c  50                   push eax
// 00a5a76d  8d4c242c             lea ecx, [esp + 0x2c]
// 00a5a771  51                   push ecx
// 00a5a772  eb26                 jmp 0xa5a79a
// 00a5a774  8b3e                 mov edi, dword ptr [esi]
// 00a5a776  6a08                 push 8
// 00a5a778  ff15d83cb200         call dword ptr [0xb23cd8]
// 00a5a77e  8b5738               mov edx, dword ptr [edi + 0x38]
// 00a5a781  50                   push eax
// 00a5a782  8bce                 mov ecx, esi
// 00a5a784  ffd2                 call edx
// 00a5a786  e8d530f6ff           call 0x9bd860
// 00a5a78b  6a05                 push 5
// 00a5a78d  8bc8                 mov ecx, eax
// 00a5a78f  e84c28f6ff           call 0x9bcfe0
// 00a5a794  50                   push eax
// 00a5a795  8d44242c             lea eax, [esp + 0x2c]
// 00a5a799  50                   push eax
// 00a5a79a  8bce                 mov ecx, esi
// 00a5a79c  e80b87f2ff           call 0x982eac
// 00a5a7a1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5a7a5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a5a7a9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5a7ad  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00a5a7b1  83c102               add ecx, 2
// 00a5a7b4  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a5a7b8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5a7bc  83c0fe               add eax, -2
// 00a5a7bf  89542410             mov dword ptr [esp + 0x10], edx
// 00a5a7c3  8b13                 mov edx, dword ptr [ebx]
// 00a5a7c5  89442414             mov dword ptr [esp + 0x14], eax
// 00a5a7c9  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00a5a7cc  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a5a7d0  8bcb                 mov ecx, ebx
// 00a5a7d2  ffd0                 call eax
// 00a5a7d4  8bf8                 mov edi, eax
// 00a5a7d6  85ff                 test edi, edi
// 00a5a7d8  746c                 je 0xa5a846
// 00a5a7da  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00a5a7de  2b5c242c             sub ebx, dword ptr [esp + 0x2c]
// 00a5a7e2  55                   push ebp
// 00a5a7e3  8bcf                 mov ecx, edi
// 00a5a7e5  e836d2f3ff           call 0x997a20
// 00a5a7ea  3bc3                 cmp eax, ebx
// 00a5a7ec  7d0b                 jge 0xa5a7f9
// 00a5a7ee  8bcf                 mov ecx, edi
// 00a5a7f0  e82bd2f3ff           call 0x997a20
// 00a5a7f5  8be8                 mov ebp, eax
// 00a5a7f7  eb08                 jmp 0xa5a801
// 00a5a7f9  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00a5a7fd  2b6c2430             sub ebp, dword ptr [esp + 0x30]
// 00a5a801  8bcf                 mov ecx, edi
// 00a5a803  e8580efdff           call 0xa2b660
// 00a5a808  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a5a80c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a5a810  8bd8                 mov ebx, eax
// 00a5a812  8d040a               lea eax, [edx + ecx]
// 00a5a815  99                   cdq 
// 00a5a816  2bc2                 sub eax, edx
// 00a5a818  8bc8                 mov ecx, eax
// 00a5a81a  8bc5                 mov eax, ebp
// 00a5a81c  99                   cdq 
// 00a5a81d  2bc2                 sub eax, edx
// 00a5a81f  55                   push ebp
// 00a5a820  d1f9                 sar ecx, 1
// 00a5a822  d1f8                 sar eax, 1
// 00a5a824  2bc8                 sub ecx, eax
// 00a5a826  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5a82a  53                   push ebx
// 00a5a82b  51                   push ecx
// 00a5a82c  50                   push eax
// 00a5a82d  56                   push esi
// 00a5a82e  8bcf                 mov ecx, edi
// 00a5a830  e84b4af4ff           call 0x99f280
// 00a5a835  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5a839  8d4c1805             lea ecx, [eax + ebx + 5]
// 00a5a83d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a5a841  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a5a845  5d                   pop ebp
// 00a5a846  8d7b20               lea edi, [ebx + 0x20]
// 00a5a849  8b1e                 mov ebx, dword ptr [esi]
// 00a5a84b  6824080000           push 0x824
// 00a5a850  8d542410             lea edx, [esp + 0x10]
// 00a5a854  52                   push edx
// 00a5a855  8bcf                 mov ecx, edi
// 00a5a857  ff155846b200         call dword ptr [0xb24658]
// 00a5a85d  50                   push eax
// 00a5a85e  8bcf                 mov ecx, edi
// 00a5a860  ff159847b200         call dword ptr [0xb24798]
// 00a5a866  50                   push eax
// 00a5a867  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00a5a86a  8bce                 mov ecx, esi
// 00a5a86c  ffd0                 call eax
// 00a5a86e  5f                   pop edi
// 00a5a86f  5e                   pop esi
// 00a5a870  5b                   pop ebx
// 00a5a871  83c410               add esp, 0x10
// 00a5a874  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawInplaceListItem@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp