// roc 2011-06 008f8380  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8380
//
// 008f8380  53                   push ebx
// 008f8381  56                   push esi
// 008f8382  57                   push edi
// 008f8383  8bf9                 mov edi, ecx
// 008f8385  33f6                 xor esi, esi
// 008f8387  e8346dfeff           call 0x8df0c0
// 008f838c  85c0                 test eax, eax
// 008f838e  7e31                 jle 0x8f83c1
// 008f8390  85f6                 test esi, esi
// 008f8392  7c3c                 jl 0x8f83d0
// 008f8394  3b7708               cmp esi, dword ptr [edi + 8]
// 008f8397  7d37                 jge 0x8f83d0
// 008f8399  8b4704               mov eax, dword ptr [edi + 4]
// 008f839c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 008f839f  85db                 test ebx, ebx
// 008f83a1  7412                 je 0x8f83b5
// 008f83a3  8d4b08               lea ecx, [ebx + 8]
// 008f83a6  ff15082ea400         call dword ptr [0xa42e08]
// 008f83ac  53                   push ebx
// 008f83ad  e8a61cf1ff           call 0x80a058
// 008f83b2  83c404               add esp, 4
// 008f83b5  8bcf                 mov ecx, edi
// 008f83b7  46                   inc esi
// 008f83b8  e8036dfeff           call 0x8df0c0
// 008f83bd  3bf0                 cmp esi, eax
// 008f83bf  7ccf                 jl 0x8f8390
// 008f83c1  6aff                 push -1
// 008f83c3  6a00                 push 0
// 008f83c5  8bcf                 mov ecx, edi
// 008f83c7  e87467f4ff           call 0x83eb40
// 008f83cc  5f                   pop edi
// 008f83cd  5e                   pop esi
// 008f83ce  5b                   pop ebx
// 008f83cf  c3                   ret 
// 008f83d0  e8351ff1ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonTabContextHeaders@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp