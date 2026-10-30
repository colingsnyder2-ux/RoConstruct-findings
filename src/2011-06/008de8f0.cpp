// roc 2011-06 008de8f0  unit: CXTPPropertyGridInplaceEdit  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de8f0
//
// 008de8f0  6aff                 push -1
// 008de8f2  6842d7a000           push 0xa0d742
// 008de8f7  64a100000000         mov eax, dword ptr fs:[0]
// 008de8fd  50                   push eax
// 008de8fe  83ec08               sub esp, 8
// 008de901  53                   push ebx
// 008de902  56                   push esi
// 008de903  57                   push edi
// 008de904  a12058c900           mov eax, dword ptr [0xc95820]
// 008de909  33c4                 xor eax, esp
// 008de90b  50                   push eax
// 008de90c  8d442418             lea eax, [esp + 0x18]
// 008de910  64a300000000         mov dword ptr fs:[0], eax
// 008de916  8bf9                 mov edi, ecx
// 008de918  8d9f84000000         lea ebx, [edi + 0x84]
// 008de91e  8bcb                 mov ecx, ebx
// 008de920  ff15a826a400         call dword ptr [0xa426a8]
// 008de926  83ef80               sub edi, -0x80
// 008de929  8bcf                 mov ecx, edi
// 008de92b  8bf0                 mov esi, eax
// 008de92d  ff15a826a400         call dword ptr [0xa426a8]
// 008de933  3bc6                 cmp eax, esi
// 008de935  7e25                 jle 0x8de95c
// 008de937  56                   push esi
// 008de938  8d442414             lea eax, [esp + 0x14]
// 008de93c  50                   push eax
// 008de93d  8bcf                 mov ecx, edi
// 008de93f  ff15601fa400         call dword ptr [0xa41f60]
// 008de945  50                   push eax
// 008de946  8bcf                 mov ecx, edi
// 008de948  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008de950  ff156425a400         call dword ptr [0xa42564]
// 008de956  8d4c2410             lea ecx, [esp + 0x10]
// 008de95a  eb28                 jmp 0x8de984
// 008de95c  7d2c                 jge 0x8de98a
// 008de95e  2bf0                 sub esi, eax
// 008de960  56                   push esi
// 008de961  50                   push eax
// 008de962  8d4c241c             lea ecx, [esp + 0x1c]
// 008de966  51                   push ecx
// 008de967  8bcb                 mov ecx, ebx
// 008de969  ff15e028a400         call dword ptr [0xa428e0]
// 008de96f  50                   push eax
// 008de970  8bcf                 mov ecx, edi
// 008de972  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008de97a  ff153828a400         call dword ptr [0xa42838]
// 008de980  8d4c2414             lea ecx, [esp + 0x14]
// 008de984  ff15082ea400         call dword ptr [0xa42e08]
// 008de98a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008de98e  64890d00000000       mov dword ptr fs:[0], ecx
// 008de995  59                   pop ecx
// 008de996  5f                   pop edi
// 008de997  5e                   pop esi
// 008de998  5b                   pop ebx
// 008de999  83c414               add esp, 0x14
// 008de99c  c3                   ret 
// copied from an identical function in another client (function ?CorrectWindowText@?$CXTMaskEditT@VCEdit@@@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp