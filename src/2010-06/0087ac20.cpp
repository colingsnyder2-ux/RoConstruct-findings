// roc 2010-06 0087ac20  unit: CXTPPropertyGridInplaceEdit  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087ac20
//
// 0087ac20  6aff                 push -1
// 0087ac22  68a2a59b00           push 0x9ba5a2
// 0087ac27  64a100000000         mov eax, dword ptr fs:[0]
// 0087ac2d  50                   push eax
// 0087ac2e  83ec08               sub esp, 8
// 0087ac31  53                   push ebx
// 0087ac32  56                   push esi
// 0087ac33  57                   push edi
// 0087ac34  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087ac39  33c4                 xor eax, esp
// 0087ac3b  50                   push eax
// 0087ac3c  8d442418             lea eax, [esp + 0x18]
// 0087ac40  64a300000000         mov dword ptr fs:[0], eax
// 0087ac46  8bf9                 mov edi, ecx
// 0087ac48  8d9f84000000         lea ebx, [edi + 0x84]
// 0087ac4e  8bcb                 mov ecx, ebx
// 0087ac50  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087ac56  83ef80               sub edi, -0x80
// 0087ac59  8bcf                 mov ecx, edi
// 0087ac5b  8bf0                 mov esi, eax
// 0087ac5d  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087ac63  3bc6                 cmp eax, esi
// 0087ac65  7e25                 jle 0x87ac8c
// 0087ac67  56                   push esi
// 0087ac68  8d442414             lea eax, [esp + 0x14]
// 0087ac6c  50                   push eax
// 0087ac6d  8bcf                 mov ecx, edi
// 0087ac6f  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 0087ac75  50                   push eax
// 0087ac76  8bcf                 mov ecx, edi
// 0087ac78  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0087ac80  ff1580c59e00         call dword ptr [0x9ec580]
// 0087ac86  8d4c2410             lea ecx, [esp + 0x10]
// 0087ac8a  eb28                 jmp 0x87acb4
// 0087ac8c  7d2c                 jge 0x87acba
// 0087ac8e  2bf0                 sub esi, eax
// 0087ac90  56                   push esi
// 0087ac91  50                   push eax
// 0087ac92  8d4c241c             lea ecx, [esp + 0x1c]
// 0087ac96  51                   push ecx
// 0087ac97  8bcb                 mov ecx, ebx
// 0087ac99  ff153cc89e00         call dword ptr [0x9ec83c]
// 0087ac9f  50                   push eax
// 0087aca0  8bcf                 mov ecx, edi
// 0087aca2  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0087acaa  ff1580c79e00         call dword ptr [0x9ec780]
// 0087acb0  8d4c2414             lea ecx, [esp + 0x14]
// 0087acb4  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087acba  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087acbe  64890d00000000       mov dword ptr fs:[0], ecx
// 0087acc5  59                   pop ecx
// 0087acc6  5f                   pop edi
// 0087acc7  5e                   pop esi
// 0087acc8  5b                   pop ebx
// 0087acc9  83c414               add esp, 0x14
// 0087accc  c3                   ret 
// copied from an identical function in another client (function ?CorrectWindowText@?$CXTMaskEditT@VCEdit@@@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp