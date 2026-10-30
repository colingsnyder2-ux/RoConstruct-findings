// roc 2010-06 0087e740  unit: CXTPPropertyGridPaintManager  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087e740
//
// 0087e740  83ec10               sub esp, 0x10
// 0087e743  53                   push ebx
// 0087e744  56                   push esi
// 0087e745  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0087e749  57                   push edi
// 0087e74a  8bf9                 mov edi, ecx
// 0087e74c  6a01                 push 1
// 0087e74e  8bce                 mov ecx, esi
// 0087e750  e85fe60f00           call 0x97cdb4
// 0087e755  837c243800           cmp dword ptr [esp + 0x38], 0
// 0087e75a  7428                 je 0x87e784
// 0087e75c  8b475c               mov eax, dword ptr [edi + 0x5c]
// 0087e75f  83f8ff               cmp eax, -1
// 0087e762  7503                 jne 0x87e767
// 0087e764  8b4758               mov eax, dword ptr [edi + 0x58]
// 0087e767  8b16                 mov edx, dword ptr [esi]
// 0087e769  50                   push eax
// 0087e76a  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087e76d  8bce                 mov ecx, esi
// 0087e76f  ffd0                 call eax
// 0087e771  8b4750               mov eax, dword ptr [edi + 0x50]
// 0087e774  83f8ff               cmp eax, -1
// 0087e777  7503                 jne 0x87e77c
// 0087e779  8b474c               mov eax, dword ptr [edi + 0x4c]
// 0087e77c  50                   push eax
// 0087e77d  8d4c242c             lea ecx, [esp + 0x2c]
// 0087e781  51                   push ecx
// 0087e782  eb26                 jmp 0x87e7aa
// 0087e784  8b3e                 mov edi, dword ptr [esi]
// 0087e786  6a08                 push 8
// 0087e788  ff1504ba9e00         call dword ptr [0x9eba04]
// 0087e78e  8b5738               mov edx, dword ptr [edi + 0x38]
// 0087e791  50                   push eax
// 0087e792  8bce                 mov ecx, esi
// 0087e794  ffd2                 call edx
// 0087e796  e88553f6ff           call 0x7e3b20
// 0087e79b  6a05                 push 5
// 0087e79d  8bc8                 mov ecx, eax
// 0087e79f  e80c4bf6ff           call 0x7e32b0
// 0087e7a4  50                   push eax
// 0087e7a5  8d44242c             lea eax, [esp + 0x2c]
// 0087e7a9  50                   push eax
// 0087e7aa  8bce                 mov ecx, esi
// 0087e7ac  e88d9ff2ff           call 0x7a873e
// 0087e7b1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0087e7b5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0087e7b9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087e7bd  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0087e7c1  83c102               add ecx, 2
// 0087e7c4  894c240c             mov dword ptr [esp + 0xc], ecx
// 0087e7c8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087e7cc  83c0fe               add eax, -2
// 0087e7cf  89542410             mov dword ptr [esp + 0x10], edx
// 0087e7d3  8b13                 mov edx, dword ptr [ebx]
// 0087e7d5  89442414             mov dword ptr [esp + 0x14], eax
// 0087e7d9  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0087e7dc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087e7e0  8bcb                 mov ecx, ebx
// 0087e7e2  ffd0                 call eax
// 0087e7e4  8bf8                 mov edi, eax
// 0087e7e6  85ff                 test edi, edi
// 0087e7e8  746c                 je 0x87e856
// 0087e7ea  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0087e7ee  2b5c242c             sub ebx, dword ptr [esp + 0x2c]
// 0087e7f2  55                   push ebp
// 0087e7f3  8bcf                 mov ecx, edi
// 0087e7f5  e856a3f3ff           call 0x7b8b50
// 0087e7fa  3bc3                 cmp eax, ebx
// 0087e7fc  7d0b                 jge 0x87e809
// 0087e7fe  8bcf                 mov ecx, edi
// 0087e800  e84ba3f3ff           call 0x7b8b50
// 0087e805  8be8                 mov ebp, eax
// 0087e807  eb08                 jmp 0x87e811
// 0087e809  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0087e80d  2b6c2430             sub ebp, dword ptr [esp + 0x30]
// 0087e811  8bcf                 mov ecx, edi
// 0087e813  e888f9f4ff           call 0x7ce1a0
// 0087e818  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087e81c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087e820  8bd8                 mov ebx, eax
// 0087e822  8d040a               lea eax, [edx + ecx]
// 0087e825  99                   cdq 
// 0087e826  2bc2                 sub eax, edx
// 0087e828  8bc8                 mov ecx, eax
// 0087e82a  8bc5                 mov eax, ebp
// 0087e82c  99                   cdq 
// 0087e82d  2bc2                 sub eax, edx
// 0087e82f  55                   push ebp
// 0087e830  d1f9                 sar ecx, 1
// 0087e832  d1f8                 sar eax, 1
// 0087e834  2bc8                 sub ecx, eax
// 0087e836  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087e83a  53                   push ebx
// 0087e83b  51                   push ecx
// 0087e83c  50                   push eax
// 0087e83d  56                   push esi
// 0087e83e  8bcf                 mov ecx, edi
// 0087e840  e8eb68f4ff           call 0x7c5130
// 0087e845  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087e849  8d4c1805             lea ecx, [eax + ebx + 5]
// 0087e84d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0087e851  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087e855  5d                   pop ebp
// 0087e856  8d7b20               lea edi, [ebx + 0x20]
// 0087e859  8b1e                 mov ebx, dword ptr [esi]
// 0087e85b  6824080000           push 0x824
// 0087e860  8d542410             lea edx, [esp + 0x10]
// 0087e864  52                   push edx
// 0087e865  8bcf                 mov ecx, edi
// 0087e867  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087e86d  50                   push eax
// 0087e86e  8bcf                 mov ecx, edi
// 0087e870  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087e876  50                   push eax
// 0087e877  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0087e87a  8bce                 mov ecx, esi
// 0087e87c  ffd0                 call eax
// 0087e87e  5f                   pop edi
// 0087e87f  5e                   pop esi
// 0087e880  5b                   pop ebx
// 0087e881  83c410               add esp, 0x10
// 0087e884  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawInplaceListItem@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp