// roc 2011-06 008dfe00  unit: VCEdit::?$CXTMaskEditT  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dfe00
//
// 008dfe00  6aff                 push -1
// 008dfe02  682bd9a000           push 0xa0d92b
// 008dfe07  64a100000000         mov eax, dword ptr fs:[0]
// 008dfe0d  50                   push eax
// 008dfe0e  83ec08               sub esp, 8
// 008dfe11  53                   push ebx
// 008dfe12  56                   push esi
// 008dfe13  57                   push edi
// 008dfe14  a12058c900           mov eax, dword ptr [0xc95820]
// 008dfe19  33c4                 xor eax, esp
// 008dfe1b  50                   push eax
// 008dfe1c  8d442418             lea eax, [esp + 0x18]
// 008dfe20  64a300000000         mov dword ptr fs:[0], eax
// 008dfe26  8bf1                 mov esi, ecx
// 008dfe28  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008dfe2c  85ff                 test edi, edi
// 008dfe2e  0f8c86000000         jl 0x8dfeba
// 008dfe34  8d8e84000000         lea ecx, [esi + 0x84]
// 008dfe3a  ff15a826a400         call dword ptr [0xa426a8]
// 008dfe40  3bf8                 cmp edi, eax
// 008dfe42  7d76                 jge 0x8dfeba
// 008dfe44  6aff                 push -1
// 008dfe46  57                   push edi
// 008dfe47  8d44241c             lea eax, [esp + 0x1c]
// 008dfe4b  50                   push eax
// 008dfe4c  8bce                 mov ecx, esi
// 008dfe4e  e82dfdffff           call 0x8dfb80
// 008dfe53  8bd8                 mov ebx, eax
// 008dfe55  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dfe59  6a01                 push 1
// 008dfe5b  51                   push ecx
// 008dfe5c  8d4c2418             lea ecx, [esp + 0x18]
// 008dfe60  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008dfe68  ff152c2aa400         call dword ptr [0xa42a2c]
// 008dfe6e  53                   push ebx
// 008dfe6f  50                   push eax
// 008dfe70  8d542430             lea edx, [esp + 0x30]
// 008dfe74  52                   push edx
// 008dfe75  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008dfe7a  e81142b6ff           call 0x444090
// 008dfe7f  83c40c               add esp, 0xc
// 008dfe82  8d4c2410             lea ecx, [esp + 0x10]
// 008dfe86  ff15082ea400         call dword ptr [0xa42e08]
// 008dfe8c  8d4c2414             lea ecx, [esp + 0x14]
// 008dfe90  c644242004           mov byte ptr [esp + 0x20], 4
// 008dfe95  ff15082ea400         call dword ptr [0xa42e08]
// 008dfe9b  6a00                 push 0
// 008dfe9d  57                   push edi
// 008dfe9e  8d4c2430             lea ecx, [esp + 0x30]
// 008dfea2  ff15c82da400         call dword ptr [0xa42dc8]
// 008dfea8  50                   push eax
// 008dfea9  8bce                 mov ecx, esi
// 008dfeab  e870fbffff           call 0x8dfa20
// 008dfeb0  8d4c2428             lea ecx, [esp + 0x28]
// 008dfeb4  ff15082ea400         call dword ptr [0xa42e08]
// 008dfeba  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dfebe  64890d00000000       mov dword ptr fs:[0], ecx
// 008dfec5  59                   pop ecx
// 008dfec6  5f                   pop edi
// 008dfec7  5e                   pop esi
// 008dfec8  5b                   pop ebx
// 008dfec9  83c414               add esp, 0x14
// 008dfecc  c20800               ret 8
// copied from an identical function in another client (function ?InsertCharAt@?$CXTMaskEditT@VCEdit@@@@QAEXHD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp