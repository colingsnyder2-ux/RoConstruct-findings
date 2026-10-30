// roc 2009-12 0085fa50  unit: CXTColorDialog  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085fa50
//
// 0085fa50  6aff                 push -1
// 0085fa52  68a9e79500           push 0x95e7a9
// 0085fa57  64a100000000         mov eax, dword ptr fs:[0]
// 0085fa5d  50                   push eax
// 0085fa5e  83ec18               sub esp, 0x18
// 0085fa61  53                   push ebx
// 0085fa62  55                   push ebp
// 0085fa63  56                   push esi
// 0085fa64  57                   push edi
// 0085fa65  a10052b600           mov eax, dword ptr [0xb65200]
// 0085fa6a  33c4                 xor eax, esp
// 0085fa6c  50                   push eax
// 0085fa6d  8d44242c             lea eax, [esp + 0x2c]
// 0085fa71  64a300000000         mov dword ptr fs:[0], eax
// 0085fa77  8bf1                 mov esi, ecx
// 0085fa79  e8b243f9ff           call 0x7f3e30
// 0085fa7e  83f8ff               cmp eax, -1
// 0085fa81  7508                 jne 0x85fa8b
// 0085fa83  83c8ff               or eax, 0xffffffff
// 0085fa86  e9bc000000           jmp 0x85fb47
// 0085fa8b  33db                 xor ebx, ebx
// 0085fa8d  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 0085fa94  747f                 je 0x85fb15
// 0085fa96  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0085fa9c  50                   push eax
// 0085fa9d  8d4c241c             lea ecx, [esp + 0x1c]
// 0085faa1  51                   push ecx
// 0085faa2  e849f5ffff           call 0x85eff0
// 0085faa7  83c408               add esp, 8
// 0085faaa  8baeb0000000         mov ebp, dword ptr [esi + 0xb0]
// 0085fab0  53                   push ebx
// 0085fab1  6a65                 push 0x65
// 0085fab3  56                   push esi
// 0085fab4  8d542428             lea edx, [esp + 0x28]
// 0085fab8  52                   push edx
// 0085fab9  8dbeb0000000         lea edi, [esi + 0xb0]
// 0085fabf  6800080050           push 0x50000800
// 0085fac4  8bc8                 mov ecx, eax
// 0085fac6  895c2448             mov dword ptr [esp + 0x48], ebx
// 0085faca  895c2430             mov dword ptr [esp + 0x30], ebx
// 0085face  895c2434             mov dword ptr [esp + 0x34], ebx
// 0085fad2  895c2438             mov dword ptr [esp + 0x38], ebx
// 0085fad6  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0085fada  ff1580de9800         call dword ptr [0x98de80]
// 0085fae0  50                   push eax
// 0085fae1  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0085fae4  689cdc9f00           push 0x9fdc9c
// 0085fae9  6800000200           push 0x20000
// 0085faee  8bcf                 mov ecx, edi
// 0085faf0  ffd0                 call eax
// 0085faf2  85c0                 test eax, eax
// 0085faf4  8d4c2418             lea ecx, [esp + 0x18]
// 0085faf8  0f94442417           sete byte ptr [esp + 0x17]
// 0085fafd  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0085fb05  ff15c0de9800         call dword ptr [0x98dec0]
// 0085fb0b  385c2417             cmp byte ptr [esp + 0x17], bl
// 0085fb0f  0f856effffff         jne 0x85fa83
// 0085fb15  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 0085fb1b  7f05                 jg 0x85fb22
// 0085fb1d  e8ea3ff9ff           call 0x7f3b0c
// 0085fb22  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0085fb28  8b01                 mov eax, dword ptr [ecx]
// 0085fb2a  3bc3                 cmp eax, ebx
// 0085fb2c  7505                 jne 0x85fb33
// 0085fb2e  e8d93ff9ff           call 0x7f3b0c
// 0085fb33  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 0085fb39  52                   push edx
// 0085fb3a  8d8888000000         lea ecx, [eax + 0x88]
// 0085fb40  e8ebb20700           call 0x8dae30
// 0085fb45  33c0                 xor eax, eax
// 0085fb47  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085fb4b  64890d00000000       mov dword ptr fs:[0], ecx
// 0085fb52  59                   pop ecx
// 0085fb53  5f                   pop edi
// 0085fb54  5e                   pop esi
// 0085fb55  5d                   pop ebp
// 0085fb56  5b                   pop ebx
// 0085fb57  83c424               add esp, 0x24
// 0085fb5a  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorDialog@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp