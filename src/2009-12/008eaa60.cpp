// roc 2009-12 008eaa60  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eaa60
//
// 008eaa60  53                   push ebx
// 008eaa61  56                   push esi
// 008eaa62  57                   push edi
// 008eaa63  8bf9                 mov edi, ecx
// 008eaa65  33f6                 xor esi, esi
// 008eaa67  e8c407ecff           call 0x7ab230
// 008eaa6c  85c0                 test eax, eax
// 008eaa6e  7e31                 jle 0x8eaaa1
// 008eaa70  85f6                 test esi, esi
// 008eaa72  7c3c                 jl 0x8eaab0
// 008eaa74  3b7708               cmp esi, dword ptr [edi + 8]
// 008eaa77  7d37                 jge 0x8eaab0
// 008eaa79  8b4704               mov eax, dword ptr [edi + 4]
// 008eaa7c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 008eaa7f  85db                 test ebx, ebx
// 008eaa81  7412                 je 0x8eaa95
// 008eaa83  8d4b08               lea ecx, [ebx + 8]
// 008eaa86  ff15c0de9800         call dword ptr [0x98dec0]
// 008eaa8c  53                   push ebx
// 008eaa8d  e8c88df0ff           call 0x7f385a
// 008eaa92  83c404               add esp, 4
// 008eaa95  8bcf                 mov ecx, edi
// 008eaa97  46                   inc esi
// 008eaa98  e89307ecff           call 0x7ab230
// 008eaa9d  3bf0                 cmp esi, eax
// 008eaa9f  7ccf                 jl 0x8eaa70
// 008eaaa1  6aff                 push -1
// 008eaaa3  6a00                 push 0
// 008eaaa5  8bcf                 mov ecx, edi
// 008eaaa7  e8f4a8f6ff           call 0x8553a0
// 008eaaac  5f                   pop edi
// 008eaaad  5e                   pop esi
// 008eaaae  5b                   pop ebx
// 008eaaaf  c3                   ret 
// 008eaab0  e85790f0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonTabContextHeaders@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp