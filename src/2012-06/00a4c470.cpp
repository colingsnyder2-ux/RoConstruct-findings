// roc 2012-06 00a4c470  unit: CXTPTabManagerItem  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4c470
//
// 00a4c470  6aff                 push -1
// 00a4c472  687b6dae00           push 0xae6d7b
// 00a4c477  64a100000000         mov eax, dword ptr fs:[0]
// 00a4c47d  50                   push eax
// 00a4c47e  51                   push ecx
// 00a4c47f  56                   push esi
// 00a4c480  57                   push edi
// 00a4c481  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a4c486  33c4                 xor eax, esp
// 00a4c488  50                   push eax
// 00a4c489  8d442410             lea eax, [esp + 0x10]
// 00a4c48d  64a300000000         mov dword ptr fs:[0], eax
// 00a4c493  8bf9                 mov edi, ecx
// 00a4c495  897c240c             mov dword ptr [esp + 0xc], edi
// 00a4c499  c7074430c200         mov dword ptr [edi], 0xc23044
// 00a4c49f  33f6                 xor esi, esi
// 00a4c4a1  397774               cmp dword ptr [edi + 0x74], esi
// 00a4c4a4  c744241803000000     mov dword ptr [esp + 0x18], 3
// 00a4c4ac  7e26                 jle 0xa4c4d4
// 00a4c4ae  8bff                 mov edi, edi
// 00a4c4b0  85f6                 test esi, esi
// 00a4c4b2  7c60                 jl 0xa4c514
// 00a4c4b4  3b7774               cmp esi, dword ptr [edi + 0x74]
// 00a4c4b7  7d5b                 jge 0xa4c514
// 00a4c4b9  8b4770               mov eax, dword ptr [edi + 0x70]
// 00a4c4bc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00a4c4bf  8d04b0               lea eax, [eax + esi*4]
// 00a4c4c2  85c9                 test ecx, ecx
// 00a4c4c4  7408                 je 0xa4c4ce
// 00a4c4c6  8b11                 mov edx, dword ptr [ecx]
// 00a4c4c8  8b02                 mov eax, dword ptr [edx]
// 00a4c4ca  6a01                 push 1
// 00a4c4cc  ffd0                 call eax
// 00a4c4ce  46                   inc esi
// 00a4c4cf  3b7774               cmp esi, dword ptr [edi + 0x74]
// 00a4c4d2  7cdc                 jl 0xa4c4b0
// 00a4c4d4  8d4f6c               lea ecx, [edi + 0x6c]
// 00a4c4d7  c644241802           mov byte ptr [esp + 0x18], 2
// 00a4c4dc  e83ffeffff           call 0xa4c320
// 00a4c4e1  8d4f58               lea ecx, [edi + 0x58]
// 00a4c4e4  ff15d047b200         call dword ptr [0xb247d0]
// 00a4c4ea  8d4f54               lea ecx, [edi + 0x54]
// 00a4c4ed  ff15d047b200         call dword ptr [0xb247d0]
// 00a4c4f3  8bcf                 mov ecx, edi
// 00a4c4f5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00a4c4fd  e86a67f3ff           call 0x982c6c
// 00a4c502  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4c506  64890d00000000       mov dword ptr fs:[0], ecx
// 00a4c50d  59                   pop ecx
// 00a4c50e  5f                   pop edi
// 00a4c50f  5e                   pop esi
// 00a4c510  83c410               add esp, 0x10
// 00a4c513  c3                   ret 
// 00a4c514  e8a75ef3ff           call 0x9823c0
// copied from an identical function in another client (function ??1CXTPTabManagerItem@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp