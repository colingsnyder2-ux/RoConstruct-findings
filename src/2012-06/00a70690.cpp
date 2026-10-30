// roc 2012-06 00a70690  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70690
//
// 00a70690  53                   push ebx
// 00a70691  56                   push esi
// 00a70692  57                   push edi
// 00a70693  8bf9                 mov edi, ecx
// 00a70695  33f6                 xor esi, esi
// 00a70697  e884469fff           call 0x464d20
// 00a7069c  85c0                 test eax, eax
// 00a7069e  7e31                 jle 0xa706d1
// 00a706a0  85f6                 test esi, esi
// 00a706a2  7c3c                 jl 0xa706e0
// 00a706a4  3b7708               cmp esi, dword ptr [edi + 8]
// 00a706a7  7d37                 jge 0xa706e0
// 00a706a9  8b4704               mov eax, dword ptr [edi + 4]
// 00a706ac  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 00a706af  85db                 test ebx, ebx
// 00a706b1  7412                 je 0xa706c5
// 00a706b3  8d4b08               lea ecx, [ebx + 8]
// 00a706b6  ff15d047b200         call dword ptr [0xb247d0]
// 00a706bc  53                   push ebx
// 00a706bd  e8521af1ff           call 0x982114
// 00a706c2  83c404               add esp, 4
// 00a706c5  8bcf                 mov ecx, edi
// 00a706c7  46                   inc esi
// 00a706c8  e853469fff           call 0x464d20
// 00a706cd  3bf0                 cmp esi, eax
// 00a706cf  7ccf                 jl 0xa706a0
// 00a706d1  6aff                 push -1
// 00a706d3  6a00                 push 0
// 00a706d5  8bcf                 mov ecx, edi
// 00a706d7  e8847bf2ff           call 0x998260
// 00a706dc  5f                   pop edi
// 00a706dd  5e                   pop esi
// 00a706de  5b                   pop ebx
// 00a706df  c3                   ret 
// 00a706e0  e8db1cf1ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonTabContextHeaders@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp