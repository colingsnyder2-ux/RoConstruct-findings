// roc 2012-06 00a72d00  unit: PAVCXTPRibbonGroup::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a72d00
//
// 00a72d00  53                   push ebx
// 00a72d01  56                   push esi
// 00a72d02  8bd9                 mov ebx, ecx
// 00a72d04  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00a72d07  57                   push edi
// 00a72d08  33ff                 xor edi, edi
// 00a72d0a  85c0                 test eax, eax
// 00a72d0c  7e31                 jle 0xa72d3f
// 00a72d0e  8bff                 mov edi, edi
// 00a72d10  85ff                 test edi, edi
// 00a72d12  7c11                 jl 0xa72d25
// 00a72d14  3bf8                 cmp edi, eax
// 00a72d16  7d0d                 jge 0xa72d25
// 00a72d18  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 00a72d1b  7d38                 jge 0xa72d55
// 00a72d1d  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00a72d20  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00a72d23  eb02                 jmp 0xa72d27
// 00a72d25  33f6                 xor esi, esi
// 00a72d27  8b16                 mov edx, dword ptr [esi]
// 00a72d29  8b4270               mov eax, dword ptr [edx + 0x70]
// 00a72d2c  8bce                 mov ecx, esi
// 00a72d2e  ffd0                 call eax
// 00a72d30  8bce                 mov ecx, esi
// 00a72d32  e853f9f0ff           call 0x98268a
// 00a72d37  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00a72d3a  47                   inc edi
// 00a72d3b  3bf8                 cmp edi, eax
// 00a72d3d  7cd1                 jl 0xa72d10
// 00a72d3f  6aff                 push -1
// 00a72d41  6a00                 push 0
// 00a72d43  8d4b20               lea ecx, [ebx + 0x20]
// 00a72d46  e81555f2ff           call 0x998260
// 00a72d4b  5f                   pop edi
// 00a72d4c  5e                   pop esi
// 00a72d4d  8bcb                 mov ecx, ebx
// 00a72d4f  5b                   pop ebx
// 00a72d50  e9abf1ffff           jmp 0xa71f00
// 00a72d55  e866f6f0ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroups@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp