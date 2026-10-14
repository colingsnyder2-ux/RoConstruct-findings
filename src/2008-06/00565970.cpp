// from server: 98% by colin
// roc 2008-06 00565970  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565970
//
// 00565970  64a100000000         mov eax, dword ptr fs:[0]
// 00565976  6aff                 push -1
// 00565978  6809e77c00           push 0x7ce709
// 0056597d  50                   push eax
// 0056597e  64892500000000       mov dword ptr fs:[0], esp
// 00565985  83ec20               sub esp, 0x20
// 00565988  56                   push esi
// 00565989  57                   push edi
// 0056598a  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0056598e  8bf1                 mov esi, ecx
// 00565990  8bcf                 mov ecx, edi
// 00565992  e8796e0100           call 0x57c810
// 00565997  84c0                 test al, al
// 00565999  0f8500010000         jne 0x565a9f
// 0056599f  53                   push ebx
// 005659a0  8d5f10               lea ebx, [edi + 0x10]
// 005659a3  55                   push ebp
// 005659a4  8bcb                 mov ecx, ebx
// 005659a6  e855680100           call 0x57c200
// 005659ab  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005659af  84c0                 test al, al
// 005659b1  0f84be000000         je 0x565a75
// 005659b7  8d4c2414             lea ecx, [esp + 0x14]
// 005659bb  ff1560248000         call dword ptr [0x802460]
// 005659c1  8d442414             lea eax, [esp + 0x14]
// 005659c5  50                   push eax
// 005659c6  8bcb                 mov ecx, ebx
// 005659c8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005659d0  e83b680100           call 0x57c210
// 005659d5  84c0                 test al, al
// 005659d7  0f8486000000         je 0x565a63
// 005659dd  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 005659e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005659e6  7304                 jae 0x5659ec
// 005659e8  8d442418             lea eax, [esp + 0x18]
// 005659ec  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005659ef  8d4c2444             lea ecx, [esp + 0x44]
// 005659f3  51                   push ecx
// 005659f4  50                   push eax
// 005659f5  e896e8feff           call 0x554290
// 005659fa  83c404               add