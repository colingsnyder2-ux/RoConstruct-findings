// roc 2007-03 0053e680  unit: seg_00530000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053e680
//
// 0053e680  6aff                 push -1
// 0053e682  68089c7500           push 0x759c08
// 0053e687  64a100000000         mov eax, dword ptr fs:[0]
// 0053e68d  50                   push eax
// 0053e68e  64892500000000       mov dword ptr fs:[0], esp
// 0053e695  83ec08               sub esp, 8
// 0053e698  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053e69c  56                   push esi
// 0053e69d  57                   push edi
// 0053e69e  8bf1                 mov esi, ecx
// 0053e6a0  89742408             mov dword ptr [esp + 8], esi
// 0053e6a4  50                   push eax
// 0053e6a5  51                   push ecx
// 0053e6a6  8bc4                 mov eax, esp
// 0053e6a8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0053e6b0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0053e6b8  89642414             mov dword ptr [esp + 0x14], esp
// 0053e6bc  c70000000000         mov dword ptr [eax], 0
// 0053e6c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053e6c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053e6ca  51                   push ecx
// 0053e6cb  52                   push edx
// 0053e6cc  c644242801           mov byte ptr [esp + 0x28], 1
// 0053e6d1  e89afeffff           call 0x53e570
// 0053e6d6  50                   push eax
// 0053e6d7  8bce                 mov ecx, esi
// 0053e6d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0053e6de  e8ad41f0ff           call 0x442890
// 0053e6e3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053e6e7  50                   push eax
// 0053e6e8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0053e6ed  e8fef90d00           call 0x61e0f0
// 0053e6f2  6a18                 push 0x18
// 0053e6f4  c706c0e67800         mov dword ptr [esi], 0x78e6c0
// 0053e6fa  e809fa0d00           call 0x61e108
// 0053e6ff  83c408               add esp, 8
// 0053e702  85c0                 test eax, eax
// 0053e704  741e                 je 0x53e724
// 0053e706  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0053e70a  33c9                 xor ecx, ecx
// 0053e70c  33d2                 xor edx, edx
// 0053e70e  897808               mov dword ptr [eax + 8], edi
// 0053e711  c700a85f7a00         mov dword ptr [eax], 0x7a5fa8
// 0053e717  897004               mov dword ptr [eax + 4], esi
// 0053e71a  894810               mov dword ptr [eax + 0x10], ecx
// 0053e71d  895014               mov dword ptr [eax + 0x14], edx
// 0053e720  8bf8                 mov edi, eax
// 0053e722  eb02                 jmp 0x53e726
// 0053e724  33ff                 xor edi, edi
// 0053e726  8b4618               mov eax, dword ptr [esi + 0x18]
// 0053e729  3bf8                 cmp edi, eax
// 0053e72b  7409                 je 0x53e736
// 0053e72d  50                   push eax
// 0053e72e  e8bdf90d00           call 0x61e0f0
// 0053e733  83c404               add esp, 4
// 0053e736  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053e73a  897e18               mov dword ptr [esi + 0x18], edi
// 0053e73d  5f                   pop edi
// 0053e73e  8bc6                 mov eax, esi
// 0053e740  64890d00000000       mov dword ptr fs:[0], ecx
// 0053e747  5e                   pop esi
// 0053e748  83c414               add esp, 0x14
// 0053e74b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
