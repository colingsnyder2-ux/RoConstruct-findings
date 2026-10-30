// roc 2009-12 0085eff0  unit: CXTColorDialog  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085eff0
//
// 0085eff0  6aff                 push -1
// 0085eff2  686ae69500           push 0x95e66a
// 0085eff7  64a100000000         mov eax, dword ptr fs:[0]
// 0085effd  50                   push eax
// 0085effe  51                   push ecx
// 0085efff  53                   push ebx
// 0085f000  55                   push ebp
// 0085f001  56                   push esi
// 0085f002  57                   push edi
// 0085f003  a10052b600           mov eax, dword ptr [0xb65200]
// 0085f008  33c4                 xor eax, esp
// 0085f00a  50                   push eax
// 0085f00b  8d442418             lea eax, [esp + 0x18]
// 0085f00f  64a300000000         mov dword ptr fs:[0], eax
// 0085f015  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085f019  8bc8                 mov ecx, eax
// 0085f01b  c1e908               shr ecx, 8
// 0085f01e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085f026  8b742428             mov esi, dword ptr [esp + 0x28]
// 0085f02a  0fb6d8               movzx ebx, al
// 0085f02d  0fb6e9               movzx ebp, cl
// 0085f030  c1e810               shr eax, 0x10
// 0085f033  8bce                 mov ecx, esi
// 0085f035  0fb6f8               movzx edi, al
// 0085f038  ff1574de9800         call dword ptr [0x98de74]
// 0085f03e  83fb10               cmp ebx, 0x10
// 0085f041  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0085f049  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0085f051  7d2a                 jge 0x85f07d
// 0085f053  83fd10               cmp ebp, 0x10
// 0085f056  7d16                 jge 0x85f06e
// 0085f058  83ff10               cmp edi, 0x10
// 0085f05b  57                   push edi
// 0085f05c  55                   push ebp
// 0085f05d  53                   push ebx
// 0085f05e  7d07                 jge 0x85f067
// 0085f060  6830db9f00           push 0x9fdb30
// 0085f065  eb56                 jmp 0x85f0bd
// 0085f067  6820db9f00           push 0x9fdb20
// 0085f06c  eb4f                 jmp 0x85f0bd
// 0085f06e  83ff10               cmp edi, 0x10
// 0085f071  7d0a                 jge 0x85f07d
// 0085f073  57                   push edi
// 0085f074  55                   push ebp
// 0085f075  53                   push ebx
// 0085f076  6810db9f00           push 0x9fdb10
// 0085f07b  eb40                 jmp 0x85f0bd
// 0085f07d  83fd10               cmp ebp, 0x10
// 0085f080  7d0f                 jge 0x85f091
// 0085f082  83ff10               cmp edi, 0x10
// 0085f085  7d0a                 jge 0x85f091
// 0085f087  57                   push edi
// 0085f088  55                   push ebp
// 0085f089  53                   push ebx
// 0085f08a  6800db9f00           push 0x9fdb00
// 0085f08f  eb2c                 jmp 0x85f0bd
// 0085f091  83fb10               cmp ebx, 0x10
// 0085f094  57                   push edi
// 0085f095  55                   push ebp
// 0085f096  53                   push ebx
// 0085f097  7d07                 jge 0x85f0a0
// 0085f099  68f0da9f00           push 0x9fdaf0
// 0085f09e  eb1d                 jmp 0x85f0bd
// 0085f0a0  83fd10               cmp ebp, 0x10
// 0085f0a3  7d07                 jge 0x85f0ac
// 0085f0a5  68e4da9f00           push 0x9fdae4
// 0085f0aa  eb11                 jmp 0x85f0bd
// 0085f0ac  83ff10               cmp edi, 0x10
// 0085f0af  7d07                 jge 0x85f0b8
// 0085f0b1  68d8da9f00           push 0x9fdad8
// 0085f0b6  eb05                 jmp 0x85f0bd
// 0085f0b8  68ccda9f00           push 0x9fdacc
// 0085f0bd  56                   push esi
// 0085f0be  ff157cde9800         call dword ptr [0x98de7c]
// 0085f0c4  8bc6                 mov eax, esi
// 0085f0c6  83c414               add esp, 0x14
// 0085f0c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085f0cd  64890d00000000       mov dword ptr fs:[0], ecx
// 0085f0d4  59                   pop ecx
// 0085f0d5  5f                   pop edi
// 0085f0d6  5e                   pop esi
// 0085f0d7  5d                   pop ebp
// 0085f0d8  5b                   pop ebx
// 0085f0d9  83c410               add esp, 0x10
// 0085f0dc  c3                   ret 
// copied from an identical function in another client (function ?RGBtoHex@CXTColorDialog@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@K@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorDialog.cpp