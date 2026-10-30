// roc 2009-12 008edc60  unit: PAVCXTPRibbonGroup::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008edc60
//
// 008edc60  53                   push ebx
// 008edc61  56                   push esi
// 008edc62  8bd9                 mov ebx, ecx
// 008edc64  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008edc67  57                   push edi
// 008edc68  33ff                 xor edi, edi
// 008edc6a  85c0                 test eax, eax
// 008edc6c  7e31                 jle 0x8edc9f
// 008edc6e  8bff                 mov edi, edi
// 008edc70  85ff                 test edi, edi
// 008edc72  7c11                 jl 0x8edc85
// 008edc74  3bf8                 cmp edi, eax
// 008edc76  7d0d                 jge 0x8edc85
// 008edc78  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 008edc7b  7d38                 jge 0x8edcb5
// 008edc7d  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008edc80  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008edc83  eb02                 jmp 0x8edc87
// 008edc85  33f6                 xor esi, esi
// 008edc87  8b16                 mov edx, dword ptr [esi]
// 008edc89  8b4270               mov eax, dword ptr [edx + 0x70]
// 008edc8c  8bce                 mov ecx, esi
// 008edc8e  ffd0                 call eax
// 008edc90  8bce                 mov ecx, esi
// 008edc92  e84561f0ff           call 0x7f3ddc
// 008edc97  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008edc9a  47                   inc edi
// 008edc9b  3bf8                 cmp edi, eax
// 008edc9d  7cd1                 jl 0x8edc70
// 008edc9f  6aff                 push -1
// 008edca1  6a00                 push 0
// 008edca3  8d4b20               lea ecx, [ebx + 0x20]
// 008edca6  e8f576f6ff           call 0x8553a0
// 008edcab  5f                   pop edi
// 008edcac  5e                   pop esi
// 008edcad  8bcb                 mov ecx, ebx
// 008edcaf  5b                   pop ebx
// 008edcb0  e9fbf0ffff           jmp 0x8ecdb0
// 008edcb5  e8525ef0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonGroups@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp