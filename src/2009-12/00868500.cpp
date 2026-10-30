// roc 2009-12 00868500  unit: CXTPPropertyGridView  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868500
//
// 00868500  6aff                 push -1
// 00868502  68f8f39500           push 0x95f3f8
// 00868507  64a100000000         mov eax, dword ptr fs:[0]
// 0086850d  50                   push eax
// 0086850e  83ec2c               sub esp, 0x2c
// 00868511  53                   push ebx
// 00868512  56                   push esi
// 00868513  57                   push edi
// 00868514  a10052b600           mov eax, dword ptr [0xb65200]
// 00868519  33c4                 xor eax, esp
// 0086851b  50                   push eax
// 0086851c  8d44243c             lea eax, [esp + 0x3c]
// 00868520  64a300000000         mov dword ptr fs:[0], eax
// 00868526  8bf1                 mov esi, ecx
// 00868528  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0086852e  85c9                 test ecx, ecx
// 00868530  7426                 je 0x868558
// 00868532  8b01                 mov eax, dword ptr [ecx]
// 00868534  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0086853a  ffd2                 call edx
// 0086853c  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 00868542  c786e000000000000000 mov dword ptr [esi + 0xe0], 0
// 0086854c  8b01                 mov eax, dword ptr [ecx]
// 0086854e  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00868554  6a00                 push 0
// 00868556  ffd2                 call edx
// 00868558  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086855b  85c0                 test eax, eax
// 0086855d  0f84f3000000         je 0x868656
// 00868563  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 00868569  33db                 xor ebx, ebx
// 0086856b  53                   push ebx
// 0086856c  53                   push ebx
// 0086856d  688b010000           push 0x18b
// 00868572  50                   push eax
// 00868573  ffd7                 call edi
// 00868575  85c0                 test eax, eax
// 00868577  7e3b                 jle 0x8685b4
// 00868579  8da42400000000       lea esp, [esp]
// 00868580  8b4620               mov eax, dword ptr [esi + 0x20]
// 00868583  6a00                 push 0
// 00868585  53                   push ebx
// 00868586  6899010000           push 0x199
// 0086858b  50                   push eax
// 0086858c  ffd7                 call edi
// 0086858e  85c0                 test eax, eax
// 00868590  740e                 je 0x8685a0
// 00868592  8b10                 mov edx, dword ptr [eax]
// 00868594  8bc8                 mov ecx, eax
// 00868596  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 0086859c  6a00                 push 0
// 0086859e  ffd0                 call eax
// 008685a0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008685a3  6a00                 push 0
// 008685a5  6a00                 push 0
// 008685a7  688b010000           push 0x18b
// 008685ac  51                   push ecx
// 008685ad  43                   inc ebx
// 008685ae  ffd7                 call edi
// 008685b0  3bd8                 cmp ebx, eax
// 008685b2  7ccc                 jl 0x868580
// 008685b4  8b5620               mov edx, dword ptr [esi + 0x20]
// 008685b7  6a00                 push 0
// 008685b9  6a00                 push 0
// 008685bb  6884010000           push 0x184
// 008685c0  52                   push edx
// 008685c1  ffd7                 call edi
// 008685c3  8bce                 mov ecx, esi
// 008685c5  e886f3ffff           call 0x867950
// 008685ca  8b4074               mov eax, dword ptr [eax + 0x74]
// 008685cd  8d5820               lea ebx, [eax + 0x20]
// 008685d0  85db                 test ebx, ebx
// 008685d2  7504                 jne 0x8685d8
// 008685d4  33c0                 xor eax, eax
// 008685d6  eb03                 jmp 0x8685db
// 008685d8  8b4304               mov eax, dword ptr [ebx + 4]
// 008685db  6a00                 push 0
// 008685dd  50                   push eax
// 008685de  8b4620               mov eax, dword ptr [esi + 0x20]
// 008685e1  6a30                 push 0x30
// 008685e3  50                   push eax
// 008685e4  ffd7                 call edi
// 008685e6  56                   push esi
// 008685e7  8d4c242c             lea ecx, [esp + 0x2c]
// 008685eb  e89ade0b00           call 0x92648a
// 008685f0  53                   push ebx
// 008685f1  8d4c242c             lea ecx, [esp + 0x2c]
// 008685f5  51                   push ecx
// 008685f6  8d4c2420             lea ecx, [esp + 0x20]
// 008685fa  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00868602  e85930feff           call 0x84b660
// 00868607  8b442430             mov eax, dword ptr [esp + 0x30]
// 0086860b  8d542410             lea edx, [esp + 0x10]
// 0086860f  52                   push edx
// 00868610  6a01                 push 1
// 00868612  6868619a00           push 0x9a6168
// 00868617  50                   push eax
// 00868618  ff156cb19800         call dword ptr [0x98b16c]
// 0086861e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00868622  8b5620               mov edx, dword ptr [esi + 0x20]
// 00868625  83c004               add eax, 4
// 00868628  0fb7c8               movzx ecx, ax
// 0086862b  51                   push ecx
// 0086862c  6a00                 push 0
// 0086862e  68a0010000           push 0x1a0
// 00868633  52                   push edx
// 00868634  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0086863a  ffd7                 call edi
// 0086863c  8d4c2418             lea ecx, [esp + 0x18]
// 00868640  e89b30feff           call 0x84b6e0
// 00868645  8d4c2428             lea ecx, [esp + 0x28]
// 00868649  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00868651  e82ede0b00           call 0x926484
// 00868656  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0086865a  64890d00000000       mov dword ptr fs:[0], ecx
// 00868661  59                   pop ecx
// 00868662  5f                   pop edi
// 00868663  5e                   pop esi
// 00868664  5b                   pop ebx
// 00868665  83c438               add esp, 0x38
// 00868668  c3                   ret 
// copied from an identical function in another client (function ?ResetContent@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp