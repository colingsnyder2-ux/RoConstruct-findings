// roc 2008-06 00516670  unit: G3D::BinaryInput  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516670
//
// 00516670  6aff                 push -1
// 00516672  6891c67c00           push 0x7cc691
// 00516677  64a100000000         mov eax, dword ptr fs:[0]
// 0051667d  50                   push eax
// 0051667e  64892500000000       mov dword ptr fs:[0], esp
// 00516685  83ec20               sub esp, 0x20
// 00516688  8b442430             mov eax, dword ptr [esp + 0x30]
// 0051668c  55                   push ebp
// 0051668d  56                   push esi
// 0051668e  8bf1                 mov esi, ecx
// 00516690  57                   push edi
// 00516691  8d7e04               lea edi, [esi + 4]
// 00516694  50                   push eax
// 00516695  8bcf                 mov ecx, edi
// 00516697  89742410             mov dword ptr [esp + 0x10], esi
// 0051669b  c706008a8200         mov dword ptr [esi], 0x828a00
// 005166a1  ff155c248000         call dword ptr [0x80245c]
// 005166a7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005166ab  8b542444             mov edx, dword ptr [esp + 0x44]
// 005166af  894e20               mov dword ptr [esi + 0x20], ecx
// 005166b2  8d6e28               lea ebp, [esi + 0x28]
// 005166b5  8bcd                 mov ecx, ebp
// 005166b7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005166bf  895624               mov dword ptr [esi + 0x24], edx
// 005166c2  ff1560248000         call dword ptr [0x802460]
// 005166c8  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005166cc  c644243401           mov byte ptr [esp + 0x34], 1
// 005166d1  7205                 jb 0x5166d8
// 005166d3  8b7f04               mov edi, dword ptr [edi + 4]
// 005166d6  eb03                 jmp 0x5166db
// 005166d8  83c704               add edi, 4
// 005166db  8b4620               mov eax, dword ptr [esi + 0x20]
// 005166de  50                   push eax
// 005166df  57                   push edi
// 005166e0  8d4c2418             lea ecx, [esp + 0x18]
// 005166e4  68048a8200           push 0x828a04
// 005166e9  51                   push ecx
// 005166ea  e82134ffff           call 0x509b10
// 005166ef  83c410               add esp, 0x10
// 005166f2  50                   push eax
// 005166f3  8bcd                 mov ecx, ebp
// 005166f5  c644243802           mov byte ptr [esp + 0x38], 2
// 005166fa  ff150c248000         call dword ptr [0x80240c]
// 00516700  8d4c2410             lea ecx, [esp + 0x10]
// 00516704  c644243401           mov byte ptr [esp + 0x34], 1
// 00516709  ff1568248000         call dword ptr [0x802468]
// 0051670f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00516713  5f                   pop edi
// 00516714  8bc6                 mov eax, esi
// 00516716  5e                   pop esi
// 00516717  5d                   pop ebp
// 00516718  64890d00000000       mov dword ptr fs:[0], ecx
// 0051671f  83c42c               add esp, 0x2c
// 00516722  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TokenException@TextInput@G3D@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
