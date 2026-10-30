// roc 2012-06 00a58120  unit: VCEdit::?$CXTMaskEditT  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a58120
//
// 00a58120  6aff                 push -1
// 00a58122  688b75ae00           push 0xae758b
// 00a58127  64a100000000         mov eax, dword ptr fs:[0]
// 00a5812d  50                   push eax
// 00a5812e  83ec08               sub esp, 8
// 00a58131  53                   push ebx
// 00a58132  56                   push esi
// 00a58133  57                   push edi
// 00a58134  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a58139  33c4                 xor eax, esp
// 00a5813b  50                   push eax
// 00a5813c  8d442418             lea eax, [esp + 0x18]
// 00a58140  64a300000000         mov dword ptr fs:[0], eax
// 00a58146  8bf1                 mov esi, ecx
// 00a58148  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a5814c  85ff                 test edi, edi
// 00a5814e  0f8c86000000         jl 0xa581da
// 00a58154  8d8e84000000         lea ecx, [esi + 0x84]
// 00a5815a  ff155846b200         call dword ptr [0xb24658]
// 00a58160  3bf8                 cmp edi, eax
// 00a58162  7d76                 jge 0xa581da
// 00a58164  6aff                 push -1
// 00a58166  57                   push edi
// 00a58167  8d44241c             lea eax, [esp + 0x1c]
// 00a5816b  50                   push eax
// 00a5816c  8bce                 mov ecx, esi
// 00a5816e  e82dfdffff           call 0xa57ea0
// 00a58173  8bd8                 mov ebx, eax
// 00a58175  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a58179  6a01                 push 1
// 00a5817b  51                   push ecx
// 00a5817c  8d4c2418             lea ecx, [esp + 0x18]
// 00a58180  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00a58188  ff15c84ab200         call dword ptr [0xb24ac8]
// 00a5818e  53                   push ebx
// 00a5818f  50                   push eax
// 00a58190  8d542430             lea edx, [esp + 0x30]
// 00a58194  52                   push edx
// 00a58195  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00a5819a  e851d49fff           call 0x4555f0
// 00a5819f  83c40c               add esp, 0xc
// 00a581a2  8d4c2410             lea ecx, [esp + 0x10]
// 00a581a6  ff15d047b200         call dword ptr [0xb247d0]
// 00a581ac  8d4c2414             lea ecx, [esp + 0x14]
// 00a581b0  c644242004           mov byte ptr [esp + 0x20], 4
// 00a581b5  ff15d047b200         call dword ptr [0xb247d0]
// 00a581bb  6a00                 push 0
// 00a581bd  57                   push edi
// 00a581be  8d4c2430             lea ecx, [esp + 0x30]
// 00a581c2  ff159847b200         call dword ptr [0xb24798]
// 00a581c8  50                   push eax
// 00a581c9  8bce                 mov ecx, esi
// 00a581cb  e870fbffff           call 0xa57d40
// 00a581d0  8d4c2428             lea ecx, [esp + 0x28]
// 00a581d4  ff15d047b200         call dword ptr [0xb247d0]
// 00a581da  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a581de  64890d00000000       mov dword ptr fs:[0], ecx
// 00a581e5  59                   pop ecx
// 00a581e6  5f                   pop edi
// 00a581e7  5e                   pop esi
// 00a581e8  5b                   pop ebx
// 00a581e9  83c414               add esp, 0x14
// 00a581ec  c20800               ret 8
// copied from an identical function in another client (function ?InsertCharAt@?$CXTMaskEditT@VCEdit@@@@QAEXHD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp