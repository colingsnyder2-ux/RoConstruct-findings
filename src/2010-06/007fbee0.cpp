// roc 2010-06 007fbee0  unit: CXTPControls  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fbee0
//
// 007fbee0  6aff                 push -1
// 007fbee2  68aa3e9b00           push 0x9b3eaa
// 007fbee7  64a100000000         mov eax, dword ptr fs:[0]
// 007fbeed  50                   push eax
// 007fbeee  51                   push ecx
// 007fbeef  53                   push ebx
// 007fbef0  56                   push esi
// 007fbef1  57                   push edi
// 007fbef2  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007fbef7  33c4                 xor eax, esp
// 007fbef9  50                   push eax
// 007fbefa  8d442414             lea eax, [esp + 0x14]
// 007fbefe  64a300000000         mov dword ptr fs:[0], eax
// 007fbf04  8bf9                 mov edi, ecx
// 007fbf06  e8a5d3ffff           call 0x7f92b0
// 007fbf0b  6a44                 push 0x44
// 007fbf0d  e88ebafaff           call 0x7a79a0
// 007fbf12  83c404               add esp, 4
// 007fbf15  89442410             mov dword ptr [esp + 0x10], eax
// 007fbf19  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007fbf21  85c0                 test eax, eax
// 007fbf23  740b                 je 0x7fbf30
// 007fbf25  8bc8                 mov ecx, eax
// 007fbf27  e8d4edffff           call 0x7fad00
// 007fbf2c  8bd8                 mov ebx, eax
// 007fbf2e  eb02                 jmp 0x7fbf32
// 007fbf30  33db                 xor ebx, ebx
// 007fbf32  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007fbf35  33f6                 xor esi, esi
// 007fbf37  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007fbf3f  85c0                 test eax, eax
// 007fbf41  7e4b                 jle 0x7fbf8e
// 007fbf43  85f6                 test esi, esi
// 007fbf45  7c11                 jl 0x7fbf58
// 007fbf47  3bf0                 cmp esi, eax
// 007fbf49  7d0d                 jge 0x7fbf58
// 007fbf4b  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007fbf4e  7d59                 jge 0x7fbfa9
// 007fbf50  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007fbf53  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007fbf56  eb02                 jmp 0x7fbf5a
// 007fbf58  33c9                 xor ecx, ecx
// 007fbf5a  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 007fbf61  7523                 jne 0x7fbf86
// 007fbf63  85f6                 test esi, esi
// 007fbf65  7c11                 jl 0x7fbf78
// 007fbf67  3bf0                 cmp esi, eax
// 007fbf69  7d0d                 jge 0x7fbf78
// 007fbf6b  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007fbf6e  7d39                 jge 0x7fbfa9
// 007fbf70  8b5728               mov edx, dword ptr [edi + 0x28]
// 007fbf73  8b04b2               mov eax, dword ptr [edx + esi*4]
// 007fbf76  eb02                 jmp 0x7fbf7a
// 007fbf78  33c0                 xor eax, eax
// 007fbf7a  6a01                 push 1
// 007fbf7c  6aff                 push -1
// 007fbf7e  50                   push eax
// 007fbf7f  8bcb                 mov ecx, ebx
// 007fbf81  e8caf3ffff           call 0x7fb350
// 007fbf86  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007fbf89  46                   inc esi
// 007fbf8a  3bf0                 cmp esi, eax
// 007fbf8c  7cb5                 jl 0x7fbf43
// 007fbf8e  53                   push ebx
// 007fbf8f  8bcf                 mov ecx, edi
// 007fbf91  e83ad3ffff           call 0x7f92d0
// 007fbf96  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fbf9a  64890d00000000       mov dword ptr fs:[0], ecx
// 007fbfa1  59                   pop ecx
// 007fbfa2  5f                   pop edi
// 007fbfa3  5e                   pop esi
// 007fbfa4  5b                   pop ebx
// 007fbfa5  83c410               add esp, 0x10
// 007fbfa8  c3                   ret 
// 007fbfa9  e89ebcfaff           call 0x7a7c4c
// copied from an identical function in another client (function ?CreateOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp