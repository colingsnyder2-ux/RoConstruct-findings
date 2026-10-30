// roc 2009-12 008ca570  unit: CXTPPropertyGridPaintManager  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ca570
//
// 008ca570  83ec10               sub esp, 0x10
// 008ca573  53                   push ebx
// 008ca574  56                   push esi
// 008ca575  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008ca579  57                   push edi
// 008ca57a  8bf9                 mov edi, ecx
// 008ca57c  6a01                 push 1
// 008ca57e  8bce                 mov ecx, esi
// 008ca580  e80bbf0500           call 0x926490
// 008ca585  837c243800           cmp dword ptr [esp + 0x38], 0
// 008ca58a  7428                 je 0x8ca5b4
// 008ca58c  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008ca58f  83f8ff               cmp eax, -1
// 008ca592  7503                 jne 0x8ca597
// 008ca594  8b4758               mov eax, dword ptr [edi + 0x58]
// 008ca597  8b16                 mov edx, dword ptr [esi]
// 008ca599  50                   push eax
// 008ca59a  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ca59d  8bce                 mov ecx, esi
// 008ca59f  ffd0                 call eax
// 008ca5a1  8b4750               mov eax, dword ptr [edi + 0x50]
// 008ca5a4  83f8ff               cmp eax, -1
// 008ca5a7  7503                 jne 0x8ca5ac
// 008ca5a9  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008ca5ac  50                   push eax
// 008ca5ad  8d4c242c             lea ecx, [esp + 0x2c]
// 008ca5b1  51                   push ecx
// 008ca5b2  eb26                 jmp 0x8ca5da
// 008ca5b4  8b3e                 mov edi, dword ptr [esi]
// 008ca5b6  6a08                 push 8
// 008ca5b8  ff15d8ca9800         call dword ptr [0x98cad8]
// 008ca5be  8b5738               mov edx, dword ptr [edi + 0x38]
// 008ca5c1  50                   push eax
// 008ca5c2  8bce                 mov ecx, esi
// 008ca5c4  ffd2                 call edx
// 008ca5c6  e80554f6ff           call 0x82f9d0
// 008ca5cb  6a05                 push 5
// 008ca5cd  8bc8                 mov ecx, eax
// 008ca5cf  e82c4bf6ff           call 0x82f100
// 008ca5d4  50                   push eax
// 008ca5d5  8d44242c             lea eax, [esp + 0x2c]
// 008ca5d9  50                   push eax
// 008ca5da  8bce                 mov ecx, esi
// 008ca5dc  e81da0f2ff           call 0x7f45fe
// 008ca5e1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008ca5e5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008ca5e9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008ca5ed  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008ca5f1  83c102               add ecx, 2
// 008ca5f4  894c240c             mov dword ptr [esp + 0xc], ecx
// 008ca5f8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ca5fc  83c0fe               add eax, -2
// 008ca5ff  89542410             mov dword ptr [esp + 0x10], edx
// 008ca603  8b13                 mov edx, dword ptr [ebx]
// 008ca605  89442414             mov dword ptr [esp + 0x14], eax
// 008ca609  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008ca60c  894c2418             mov dword ptr [esp + 0x18], ecx
// 008ca610  8bcb                 mov ecx, ebx
// 008ca612  ffd0                 call eax
// 008ca614  8bf8                 mov edi, eax
// 008ca616  85ff                 test edi, edi
// 008ca618  746c                 je 0x8ca686
// 008ca61a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008ca61e  2b5c242c             sub ebx, dword ptr [esp + 0x2c]
// 008ca622  55                   push ebp
// 008ca623  8bcf                 mov ecx, edi
// 008ca625  e846b2c0ff           call 0x4d5870
// 008ca62a  3bc3                 cmp eax, ebx
// 008ca62c  7d0b                 jge 0x8ca639
// 008ca62e  8bcf                 mov ecx, edi
// 008ca630  e83bb2c0ff           call 0x4d5870
// 008ca635  8be8                 mov ebp, eax
// 008ca637  eb08                 jmp 0x8ca641
// 008ca639  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008ca63d  2b6c2430             sub ebp, dword ptr [esp + 0x30]
// 008ca641  8bcf                 mov ecx, edi
// 008ca643  e83836f8ff           call 0x84dc80
// 008ca648  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ca64c  8b542414             mov edx, dword ptr [esp + 0x14]
// 008ca650  8bd8                 mov ebx, eax
// 008ca652  8d040a               lea eax, [edx + ecx]
// 008ca655  99                   cdq 
// 008ca656  2bc2                 sub eax, edx
// 008ca658  8bc8                 mov ecx, eax
// 008ca65a  8bc5                 mov eax, ebp
// 008ca65c  99                   cdq 
// 008ca65d  2bc2                 sub eax, edx
// 008ca65f  55                   push ebp
// 008ca660  d1f9                 sar ecx, 1
// 008ca662  d1f8                 sar eax, 1
// 008ca664  2bc8                 sub ecx, eax
// 008ca666  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ca66a  53                   push ebx
// 008ca66b  51                   push ecx
// 008ca66c  50                   push eax
// 008ca66d  56                   push esi
// 008ca66e  8bcf                 mov ecx, edi
// 008ca670  e81b6af4ff           call 0x811090
// 008ca675  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ca679  8d4c1805             lea ecx, [eax + ebx + 5]
// 008ca67d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008ca681  894c2410             mov dword ptr [esp + 0x10], ecx
// 008ca685  5d                   pop ebp
// 008ca686  8d7b20               lea edi, [ebx + 0x20]
// 008ca689  8b1e                 mov ebx, dword ptr [esi]
// 008ca68b  6824080000           push 0x824
// 008ca690  8d542410             lea edx, [esp + 0x10]
// 008ca694  52                   push edx
// 008ca695  8bcf                 mov ecx, edi
// 008ca697  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008ca69d  50                   push eax
// 008ca69e  8bcf                 mov ecx, edi
// 008ca6a0  ff1580de9800         call dword ptr [0x98de80]
// 008ca6a6  50                   push eax
// 008ca6a7  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008ca6aa  8bce                 mov ecx, esi
// 008ca6ac  ffd0                 call eax
// 008ca6ae  5f                   pop edi
// 008ca6af  5e                   pop esi
// 008ca6b0  5b                   pop ebx
// 008ca6b1  83c410               add esp, 0x10
// 008ca6b4  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawInplaceListItem@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp