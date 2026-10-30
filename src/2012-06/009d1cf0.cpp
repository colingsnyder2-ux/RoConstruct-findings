// roc 2012-06 009d1cf0  unit: CXTPControls  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d1cf0
//
// 009d1cf0  6aff                 push -1
// 009d1cf2  68ba44ae00           push 0xae44ba
// 009d1cf7  64a100000000         mov eax, dword ptr fs:[0]
// 009d1cfd  50                   push eax
// 009d1cfe  51                   push ecx
// 009d1cff  53                   push ebx
// 009d1d00  56                   push esi
// 009d1d01  57                   push edi
// 009d1d02  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009d1d07  33c4                 xor eax, esp
// 009d1d09  50                   push eax
// 009d1d0a  8d442414             lea eax, [esp + 0x14]
// 009d1d0e  64a300000000         mov dword ptr fs:[0], eax
// 009d1d14  8bf9                 mov edi, ecx
// 009d1d16  e8a5d3ffff           call 0x9cf0c0
// 009d1d1b  6a44                 push 0x44
// 009d1d1d  e8f803fbff           call 0x98211a
// 009d1d22  83c404               add esp, 4
// 009d1d25  89442410             mov dword ptr [esp + 0x10], eax
// 009d1d29  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 009d1d31  85c0                 test eax, eax
// 009d1d33  740b                 je 0x9d1d40
// 009d1d35  8bc8                 mov ecx, eax
// 009d1d37  e8d4edffff           call 0x9d0b10
// 009d1d3c  8bd8                 mov ebx, eax
// 009d1d3e  eb02                 jmp 0x9d1d42
// 009d1d40  33db                 xor ebx, ebx
// 009d1d42  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009d1d45  33f6                 xor esi, esi
// 009d1d47  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 009d1d4f  85c0                 test eax, eax
// 009d1d51  7e4b                 jle 0x9d1d9e
// 009d1d53  85f6                 test esi, esi
// 009d1d55  7c11                 jl 0x9d1d68
// 009d1d57  3bf0                 cmp esi, eax
// 009d1d59  7d0d                 jge 0x9d1d68
// 009d1d5b  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 009d1d5e  7d59                 jge 0x9d1db9
// 009d1d60  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 009d1d63  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009d1d66  eb02                 jmp 0x9d1d6a
// 009d1d68  33c9                 xor ecx, ecx
// 009d1d6a  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 009d1d71  7523                 jne 0x9d1d96
// 009d1d73  85f6                 test esi, esi
// 009d1d75  7c11                 jl 0x9d1d88
// 009d1d77  3bf0                 cmp esi, eax
// 009d1d79  7d0d                 jge 0x9d1d88
// 009d1d7b  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 009d1d7e  7d39                 jge 0x9d1db9
// 009d1d80  8b5728               mov edx, dword ptr [edi + 0x28]
// 009d1d83  8b04b2               mov eax, dword ptr [edx + esi*4]
// 009d1d86  eb02                 jmp 0x9d1d8a
// 009d1d88  33c0                 xor eax, eax
// 009d1d8a  6a01                 push 1
// 009d1d8c  6aff                 push -1
// 009d1d8e  50                   push eax
// 009d1d8f  8bcb                 mov ecx, ebx
// 009d1d91  e8caf3ffff           call 0x9d1160
// 009d1d96  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009d1d99  46                   inc esi
// 009d1d9a  3bf0                 cmp esi, eax
// 009d1d9c  7cb5                 jl 0x9d1d53
// 009d1d9e  53                   push ebx
// 009d1d9f  8bcf                 mov ecx, edi
// 009d1da1  e83ad3ffff           call 0x9cf0e0
// 009d1da6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009d1daa  64890d00000000       mov dword ptr fs:[0], ecx
// 009d1db1  59                   pop ecx
// 009d1db2  5f                   pop edi
// 009d1db3  5e                   pop esi
// 009d1db4  5b                   pop ebx
// 009d1db5  83c410               add esp, 0x10
// 009d1db8  c3                   ret 
// 009d1db9  e80206fbff           call 0x9823c0
// copied from an identical function in another client (function ?CreateOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp