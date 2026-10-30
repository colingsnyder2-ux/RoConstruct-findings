// roc 2009-12 0085c400  unit: CXTPStatusBar  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c400
//
// 0085c400  6aff                 push -1
// 0085c402  687ae49500           push 0x95e47a
// 0085c407  64a100000000         mov eax, dword ptr fs:[0]
// 0085c40d  50                   push eax
// 0085c40e  83ec08               sub esp, 8
// 0085c411  53                   push ebx
// 0085c412  55                   push ebp
// 0085c413  56                   push esi
// 0085c414  57                   push edi
// 0085c415  a10052b600           mov eax, dword ptr [0xb65200]
// 0085c41a  33c4                 xor eax, esp
// 0085c41c  50                   push eax
// 0085c41d  8d44241c             lea eax, [esp + 0x1c]
// 0085c421  64a300000000         mov dword ptr fs:[0], eax
// 0085c427  8be9                 mov ebp, ecx
// 0085c429  e872ffffff           call 0x85c3a0
// 0085c42e  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0085c432  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0085c43a  85ff                 test edi, edi
// 0085c43c  0f84bc000000         je 0x85c4fe
// 0085c442  837c243000           cmp dword ptr [esp + 0x30], 0
// 0085c447  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0085c44f  0f8ea9000000         jle 0x85c4fe
// 0085c455  8d9d98000000         lea ebx, [ebp + 0x98]
// 0085c45b  6880000000           push 0x80
// 0085c460  e8fb73f9ff           call 0x7f3860
// 0085c465  83c404               add esp, 4
// 0085c468  89442418             mov dword ptr [esp + 0x18], eax
// 0085c46c  33f6                 xor esi, esi
// 0085c46e  89742424             mov dword ptr [esp + 0x24], esi
// 0085c472  3bc6                 cmp eax, esi
// 0085c474  7409                 je 0x85c47f
// 0085c476  8bc8                 mov ecx, eax
// 0085c478  e803e6ffff           call 0x85aa80
// 0085c47d  8bf0                 mov esi, eax
// 0085c47f  8b4308               mov eax, dword ptr [ebx + 8]
// 0085c482  56                   push esi
// 0085c483  50                   push eax
// 0085c484  8bcb                 mov ecx, ebx
// 0085c486  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0085c48e  e8dde70000           call 0x86ac70
// 0085c493  896e50               mov dword ptr [esi + 0x50], ebp
// 0085c496  8b0f                 mov ecx, dword ptr [edi]
// 0085c498  834e2c01             or dword ptr [esi + 0x2c], 1
// 0085c49c  8bc1                 mov eax, ecx
// 0085c49e  83c704               add edi, 4
// 0085c4a1  894e20               mov dword ptr [esi + 0x20], ecx
// 0085c4a4  85c0                 test eax, eax
// 0085c4a6  7417                 je 0x85c4bf
// 0085c4a8  50                   push eax
// 0085c4a9  8d4e30               lea ecx, [esi + 0x30]
// 0085c4ac  ff1560cf9800         call dword ptr [0x98cf60]
// 0085c4b2  85c0                 test eax, eax
// 0085c4b4  7440                 je 0x85c4f6
// 0085c4b6  8bce                 mov ecx, esi
// 0085c4b8  e853e7ffff           call 0x85ac10
// 0085c4bd  eb22                 jmp 0x85c4e1
// 0085c4bf  6a00                 push 0
// 0085c4c1  ff15dccb9800         call dword ptr [0x98cbdc]
// 0085c4c7  99                   cdq 
// 0085c4c8  83e203               and edx, 3
// 0085c4cb  03c2                 add eax, edx
// 0085c4cd  c1f802               sar eax, 2
// 0085c4d0  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0085c4d5  894624               mov dword ptr [esi + 0x24], eax
// 0085c4d8  7507                 jne 0x85c4e1
// 0085c4da  814e2800010008       or dword ptr [esi + 0x28], 0x8000100
// 0085c4e1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085c4e5  40                   inc eax
// 0085c4e6  3b442430             cmp eax, dword ptr [esp + 0x30]
// 0085c4ea  8944242c             mov dword ptr [esp + 0x2c], eax
// 0085c4ee  0f8c67ffffff         jl 0x85c45b
// 0085c4f4  eb08                 jmp 0x85c4fe
// 0085c4f6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085c4fe  6a01                 push 1
// 0085c500  6a01                 push 1
// 0085c502  8bcd                 mov ecx, ebp
// 0085c504  e897f8ffff           call 0x85bda0
// 0085c509  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085c50d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085c511  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c518  59                   pop ecx
// 0085c519  5f                   pop edi
// 0085c51a  5e                   pop esi
// 0085c51b  5d                   pop ebp
// 0085c51c  5b                   pop ebx
// 0085c51d  83c414               add esp, 0x14
// 0085c520  c20800               ret 8
// copied from an identical function in another client (function ?SetIndicators@CXTPStatusBar@@QAEHPBIH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp