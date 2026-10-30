// roc 2011-06 008fa9d0  unit: PAVCXTPRibbonGroup::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fa9d0
//
// 008fa9d0  53                   push ebx
// 008fa9d1  56                   push esi
// 008fa9d2  8bd9                 mov ebx, ecx
// 008fa9d4  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008fa9d7  57                   push edi
// 008fa9d8  33ff                 xor edi, edi
// 008fa9da  85c0                 test eax, eax
// 008fa9dc  7e31                 jle 0x8faa0f
// 008fa9de  8bff                 mov edi, edi
// 008fa9e0  85ff                 test edi, edi
// 008fa9e2  7c11                 jl 0x8fa9f5
// 008fa9e4  3bf8                 cmp edi, eax
// 008fa9e6  7d0d                 jge 0x8fa9f5
// 008fa9e8  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 008fa9eb  7d38                 jge 0x8faa25
// 008fa9ed  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008fa9f0  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008fa9f3  eb02                 jmp 0x8fa9f7
// 008fa9f5  33f6                 xor esi, esi
// 008fa9f7  8b16                 mov edx, dword ptr [esi]
// 008fa9f9  8b4270               mov eax, dword ptr [edx + 0x70]
// 008fa9fc  8bce                 mov ecx, esi
// 008fa9fe  ffd0                 call eax
// 008faa00  8bce                 mov ecx, esi
// 008faa02  e8d3fbf0ff           call 0x80a5da
// 008faa07  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008faa0a  47                   inc edi
// 008faa0b  3bf8                 cmp edi, eax
// 008faa0d  7cd1                 jl 0x8fa9e0
// 008faa0f  6aff                 push -1
// 008faa11  6a00                 push 0
// 008faa13  8d4b20               lea ecx, [ebx + 0x20]
// 008faa16  e82541f4ff           call 0x83eb40
// 008faa1b  5f                   pop edi
// 008faa1c  5e                   pop esi
// 008faa1d  8bcb                 mov ecx, ebx
// 008faa1f  5b                   pop ebx
// 008faa20  e9abf1ffff           jmp 0x8f9bd0
// 008faa25  e8e0f8f0ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroups@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp