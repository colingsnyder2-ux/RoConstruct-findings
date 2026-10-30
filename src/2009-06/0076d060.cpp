// roc 2009-06 0076d060  unit: CXTPControls  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076d060
//
// 0076d060  6aff                 push -1
// 0076d062  687a9d8700           push 0x879d7a
// 0076d067  64a100000000         mov eax, dword ptr fs:[0]
// 0076d06d  50                   push eax
// 0076d06e  51                   push ecx
// 0076d06f  53                   push ebx
// 0076d070  56                   push esi
// 0076d071  57                   push edi
// 0076d072  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0076d077  33c4                 xor eax, esp
// 0076d079  50                   push eax
// 0076d07a  8d442414             lea eax, [esp + 0x14]
// 0076d07e  64a300000000         mov dword ptr fs:[0], eax
// 0076d084  8bf9                 mov edi, ecx
// 0076d086  e8a5d3ffff           call 0x76a430
// 0076d08b  6a44                 push 0x44
// 0076d08d  e8a6b9faff           call 0x718a38
// 0076d092  83c404               add esp, 4
// 0076d095  89442410             mov dword ptr [esp + 0x10], eax
// 0076d099  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0076d0a1  85c0                 test eax, eax
// 0076d0a3  740b                 je 0x76d0b0
// 0076d0a5  8bc8                 mov ecx, eax
// 0076d0a7  e8d4edffff           call 0x76be80
// 0076d0ac  8bd8                 mov ebx, eax
// 0076d0ae  eb02                 jmp 0x76d0b2
// 0076d0b0  33db                 xor ebx, ebx
// 0076d0b2  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0076d0b5  33f6                 xor esi, esi
// 0076d0b7  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0076d0bf  85c0                 test eax, eax
// 0076d0c1  7e4b                 jle 0x76d10e
// 0076d0c3  85f6                 test esi, esi
// 0076d0c5  7c11                 jl 0x76d0d8
// 0076d0c7  3bf0                 cmp esi, eax
// 0076d0c9  7d0d                 jge 0x76d0d8
// 0076d0cb  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0076d0ce  7d59                 jge 0x76d129
// 0076d0d0  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0076d0d3  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0076d0d6  eb02                 jmp 0x76d0da
// 0076d0d8  33c9                 xor ecx, ecx
// 0076d0da  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 0076d0e1  7523                 jne 0x76d106
// 0076d0e3  85f6                 test esi, esi
// 0076d0e5  7c11                 jl 0x76d0f8
// 0076d0e7  3bf0                 cmp esi, eax
// 0076d0e9  7d0d                 jge 0x76d0f8
// 0076d0eb  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0076d0ee  7d39                 jge 0x76d129
// 0076d0f0  8b5728               mov edx, dword ptr [edi + 0x28]
// 0076d0f3  8b04b2               mov eax, dword ptr [edx + esi*4]
// 0076d0f6  eb02                 jmp 0x76d0fa
// 0076d0f8  33c0                 xor eax, eax
// 0076d0fa  6a01                 push 1
// 0076d0fc  6aff                 push -1
// 0076d0fe  50                   push eax
// 0076d0ff  8bcb                 mov ecx, ebx
// 0076d101  e8caf3ffff           call 0x76c4d0
// 0076d106  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0076d109  46                   inc esi
// 0076d10a  3bf0                 cmp esi, eax
// 0076d10c  7cb5                 jl 0x76d0c3
// 0076d10e  53                   push ebx
// 0076d10f  8bcf                 mov ecx, edi
// 0076d111  e83ad3ffff           call 0x76a450
// 0076d116  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076d11a  64890d00000000       mov dword ptr fs:[0], ecx
// 0076d121  59                   pop ecx
// 0076d122  5f                   pop edi
// 0076d123  5e                   pop esi
// 0076d124  5b                   pop ebx
// 0076d125  83c410               add esp, 0x10
// 0076d128  c3                   ret 
// 0076d129  e8b6bbfaff           call 0x718ce4
// copied from an identical function in another client (function ?CreateOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp