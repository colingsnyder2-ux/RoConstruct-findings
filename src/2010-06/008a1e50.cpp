// roc 2010-06 008a1e50  unit: PAVCXTPRibbonGroup::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a1e50
//
// 008a1e50  53                   push ebx
// 008a1e51  56                   push esi
// 008a1e52  8bd9                 mov ebx, ecx
// 008a1e54  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008a1e57  57                   push edi
// 008a1e58  33ff                 xor edi, edi
// 008a1e5a  85c0                 test eax, eax
// 008a1e5c  7e31                 jle 0x8a1e8f
// 008a1e5e  8bff                 mov edi, edi
// 008a1e60  85ff                 test edi, edi
// 008a1e62  7c11                 jl 0x8a1e75
// 008a1e64  3bf8                 cmp edi, eax
// 008a1e66  7d0d                 jge 0x8a1e75
// 008a1e68  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 008a1e6b  7d38                 jge 0x8a1ea5
// 008a1e6d  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008a1e70  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008a1e73  eb02                 jmp 0x8a1e77
// 008a1e75  33f6                 xor esi, esi
// 008a1e77  8b16                 mov edx, dword ptr [esi]
// 008a1e79  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a1e7c  8bce                 mov ecx, esi
// 008a1e7e  ffd0                 call eax
// 008a1e80  8bce                 mov ecx, esi
// 008a1e82  e89560f0ff           call 0x7a7f1c
// 008a1e87  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008a1e8a  47                   inc edi
// 008a1e8b  3bf8                 cmp edi, eax
// 008a1e8d  7cd1                 jl 0x8a1e60
// 008a1e8f  6aff                 push -1
// 008a1e91  6a00                 push 0
// 008a1e93  8d4b20               lea ecx, [ebx + 0x20]
// 008a1e96  e865f4f3ff           call 0x7e1300
// 008a1e9b  5f                   pop edi
// 008a1e9c  5e                   pop esi
// 008a1e9d  8bcb                 mov ecx, ebx
// 008a1e9f  5b                   pop ebx
// 008a1ea0  e9abf1ffff           jmp 0x8a1050
// 008a1ea5  e8a25df0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroups@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp