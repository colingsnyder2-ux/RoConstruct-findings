// roc 2009-12 00866210  unit: CXTPPropertyGridItem  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866210
//
// 00866210  6aff                 push -1
// 00866212  6839ef9500           push 0x95ef39
// 00866217  64a100000000         mov eax, dword ptr fs:[0]
// 0086621d  50                   push eax
// 0086621e  83ec08               sub esp, 8
// 00866221  53                   push ebx
// 00866222  56                   push esi
// 00866223  57                   push edi
// 00866224  a10052b600           mov eax, dword ptr [0xb65200]
// 00866229  33c4                 xor eax, esp
// 0086622b  50                   push eax
// 0086622c  8d442418             lea eax, [esp + 0x18]
// 00866230  64a300000000         mov dword ptr fs:[0], eax
// 00866236  8bf9                 mov edi, ecx
// 00866238  8b9fc4000000         mov ebx, dword ptr [edi + 0xc4]
// 0086623e  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00866241  85c0                 test eax, eax
// 00866243  746b                 je 0x8662b0
// 00866245  8b07                 mov eax, dword ptr [edi]
// 00866247  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0086624d  ffd2                 call edx
// 0086624f  85c0                 test eax, eax
// 00866251  745d                 je 0x8662b0
// 00866253  8d8fa4000000         lea ecx, [edi + 0xa4]
// 00866259  ff1580de9800         call dword ptr [0x98de80]
// 0086625f  50                   push eax
// 00866260  8bcb                 mov ecx, ebx
// 00866262  e879fbffff           call 0x865de0
// 00866267  8bf0                 mov esi, eax
// 00866269  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0086626c  46                   inc esi
// 0086626d  3bf0                 cmp esi, eax
// 0086626f  7c04                 jl 0x866275
// 00866271  33f6                 xor esi, esi
// 00866273  eb07                 jmp 0x86627c
// 00866275  85f6                 test esi, esi
// 00866277  7d03                 jge 0x86627c
// 00866279  8d70ff               lea esi, [eax - 1]
// 0086627c  56                   push esi
// 0086627d  8d442414             lea eax, [esp + 0x14]
// 00866281  50                   push eax
// 00866282  8bcb                 mov ecx, ebx
// 00866284  e8b7faffff           call 0x865d40
// 00866289  8b17                 mov edx, dword ptr [edi]
// 0086628b  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00866291  8d442410             lea eax, [esp + 0x10]
// 00866295  50                   push eax
// 00866296  8bcf                 mov ecx, edi
// 00866298  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008662a0  ffd2                 call edx
// 008662a2  85c0                 test eax, eax
// 008662a4  751f                 jne 0x8662c5
// 008662a6  8d4c2410             lea ecx, [esp + 0x10]
// 008662aa  ff15c0de9800         call dword ptr [0x98dec0]
// 008662b0  33c0                 xor eax, eax
// 008662b2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008662b6  64890d00000000       mov dword ptr fs:[0], ecx
// 008662bd  59                   pop ecx
// 008662be  5f                   pop edi
// 008662bf  5e                   pop esi
// 008662c0  5b                   pop ebx
// 008662c1  83c414               add esp, 0x14
// 008662c4  c3                   ret 
// 008662c5  51                   push ecx
// 008662c6  8d442414             lea eax, [esp + 0x14]
// 008662ca  8bcc                 mov ecx, esp
// 008662cc  89642418             mov dword ptr [esp + 0x18], esp
// 008662d0  50                   push eax
// 008662d1  897334               mov dword ptr [ebx + 0x34], esi
// 008662d4  ff1594de9800         call dword ptr [0x98de94]
// 008662da  8b17                 mov edx, dword ptr [edi]
// 008662dc  8b4264               mov eax, dword ptr [edx + 0x64]
// 008662df  8bcf                 mov ecx, edi
// 008662e1  ffd0                 call eax
// 008662e3  8d4c2410             lea ecx, [esp + 0x10]
// 008662e7  ff15c0de9800         call dword ptr [0x98dec0]
// 008662ed  b801000000           mov eax, 1
// 008662f2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008662f6  64890d00000000       mov dword ptr fs:[0], ecx
// 008662fd  59                   pop ecx
// 008662fe  5f                   pop edi
// 008662ff  5e                   pop esi
// 00866300  5b                   pop ebx
// 00866301  83c414               add esp, 0x14
// 00866304  c3                   ret 
// copied from an identical function in another client (function ?SelectNextConstraint@CXTPPropertyGridItem@@IAEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp