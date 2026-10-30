// roc 2009-06 00812110  unit: PAVCXTPRibbonGroup::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00812110
//
// 00812110  53                   push ebx
// 00812111  56                   push esi
// 00812112  8bd9                 mov ebx, ecx
// 00812114  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00812117  57                   push edi
// 00812118  33ff                 xor edi, edi
// 0081211a  85c0                 test eax, eax
// 0081211c  7e31                 jle 0x81214f
// 0081211e  8bff                 mov edi, edi
// 00812120  85ff                 test edi, edi
// 00812122  7c11                 jl 0x812135
// 00812124  3bf8                 cmp edi, eax
// 00812126  7d0d                 jge 0x812135
// 00812128  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 0081212b  7d38                 jge 0x812165
// 0081212d  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00812130  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00812133  eb02                 jmp 0x812137
// 00812135  33f6                 xor esi, esi
// 00812137  8b16                 mov edx, dword ptr [esi]
// 00812139  8b4270               mov eax, dword ptr [edx + 0x70]
// 0081213c  8bce                 mov ecx, esi
// 0081213e  ffd0                 call eax
// 00812140  8bce                 mov ecx, esi
// 00812142  e8616ef0ff           call 0x718fa8
// 00812147  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0081214a  47                   inc edi
// 0081214b  3bf8                 cmp edi, eax
// 0081214d  7cd1                 jl 0x812120
// 0081214f  6aff                 push -1
// 00812151  6a00                 push 0
// 00812153  8d4b20               lea ecx, [ebx + 0x20]
// 00812156  e8b503f4ff           call 0x752510
// 0081215b  5f                   pop edi
// 0081215c  5e                   pop esi
// 0081215d  8bcb                 mov ecx, ebx
// 0081215f  5b                   pop ebx
// 00812160  e9fbf0ffff           jmp 0x811260
// 00812165  e87a6bf0ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroups@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp