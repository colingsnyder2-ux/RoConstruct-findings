// roc 2009-06 007ebef0  unit: CXTPPropertyGridInplaceEdit  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ebef0
//
// 007ebef0  6aff                 push -1
// 007ebef2  6832058800           push 0x880532
// 007ebef7  64a100000000         mov eax, dword ptr fs:[0]
// 007ebefd  50                   push eax
// 007ebefe  83ec08               sub esp, 8
// 007ebf01  53                   push ebx
// 007ebf02  56                   push esi
// 007ebf03  57                   push edi
// 007ebf04  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ebf09  33c4                 xor eax, esp
// 007ebf0b  50                   push eax
// 007ebf0c  8d442418             lea eax, [esp + 0x18]
// 007ebf10  64a300000000         mov dword ptr fs:[0], eax
// 007ebf16  8bf9                 mov edi, ecx
// 007ebf18  8d9f84000000         lea ebx, [edi + 0x84]
// 007ebf1e  8bcb                 mov ecx, ebx
// 007ebf20  ff1554fb8900         call dword ptr [0x89fb54]
// 007ebf26  83ef80               sub edi, -0x80
// 007ebf29  8bcf                 mov ecx, edi
// 007ebf2b  8bf0                 mov esi, eax
// 007ebf2d  ff1554fb8900         call dword ptr [0x89fb54]
// 007ebf33  3bc6                 cmp eax, esi
// 007ebf35  7e25                 jle 0x7ebf5c
// 007ebf37  56                   push esi
// 007ebf38  8d442414             lea eax, [esp + 0x14]
// 007ebf3c  50                   push eax
// 007ebf3d  8bcf                 mov ecx, edi
// 007ebf3f  ff1510f48900         call dword ptr [0x89f410]
// 007ebf45  50                   push eax
// 007ebf46  8bcf                 mov ecx, edi
// 007ebf48  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007ebf50  ff1508fa8900         call dword ptr [0x89fa08]
// 007ebf56  8d4c2410             lea ecx, [esp + 0x10]
// 007ebf5a  eb28                 jmp 0x7ebf84
// 007ebf5c  7d2c                 jge 0x7ebf8a
// 007ebf5e  2bf0                 sub esi, eax
// 007ebf60  56                   push esi
// 007ebf61  50                   push eax
// 007ebf62  8d4c241c             lea ecx, [esp + 0x1c]
// 007ebf66  51                   push ecx
// 007ebf67  8bcb                 mov ecx, ebx
// 007ebf69  ff157cfe8900         call dword ptr [0x89fe7c]
// 007ebf6f  50                   push eax
// 007ebf70  8bcf                 mov ecx, edi
// 007ebf72  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007ebf7a  ff1504ff8900         call dword ptr [0x89ff04]
// 007ebf80  8d4c2414             lea ecx, [esp + 0x14]
// 007ebf84  ff1510fd8900         call dword ptr [0x89fd10]
// 007ebf8a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ebf8e  64890d00000000       mov dword ptr fs:[0], ecx
// 007ebf95  59                   pop ecx
// 007ebf96  5f                   pop edi
// 007ebf97  5e                   pop esi
// 007ebf98  5b                   pop ebx
// 007ebf99  83c414               add esp, 0x14
// 007ebf9c  c3                   ret 
// copied from an identical function in another client (function ?CorrectWindowText@?$CXTMaskEditT@VCEdit@@@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp