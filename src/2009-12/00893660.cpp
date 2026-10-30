// roc 2009-12 00893660  unit: CXTPMenuBar  size: 547 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893660
//
// 00893660  6aff                 push -1
// 00893662  680b159600           push 0x96150b
// 00893667  64a100000000         mov eax, dword ptr fs:[0]
// 0089366d  50                   push eax
// 0089366e  83ec18               sub esp, 0x18
// 00893671  53                   push ebx
// 00893672  55                   push ebp
// 00893673  56                   push esi
// 00893674  57                   push edi
// 00893675  a10052b600           mov eax, dword ptr [0xb65200]
// 0089367a  33c4                 xor eax, esp
// 0089367c  50                   push eax
// 0089367d  8d44242c             lea eax, [esp + 0x2c]
// 00893681  64a300000000         mov dword ptr fs:[0], eax
// 00893687  8bf1                 mov esi, ecx
// 00893689  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0089368f  8b423c               mov eax, dword ptr [edx + 0x3c]
// 00893692  85c0                 test eax, eax
// 00893694  740f                 je 0x8936a5
// 00893696  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0089369a  50                   push eax
// 0089369b  e800fef7ff           call 0x8134a0
// 008936a0  e9ae010000           jmp 0x893853
// 008936a5  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008936ab  e8c021c4ff           call 0x4d5870
// 008936b0  85c0                 test eax, eax
// 008936b2  7f0a                 jg 0x8936be
// 008936b4  837a3c00             cmp dword ptr [edx + 0x3c], 0
// 008936b8  0f8595010000         jne 0x893853
// 008936be  83beb801000000       cmp dword ptr [esi + 0x1b8], 0
// 008936c5  0f8488010000         je 0x893853
// 008936cb  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008936d0  0f84ee000000         je 0x8937c4
// 008936d6  8d4c2414             lea ecx, [esp + 0x14]
// 008936da  ff1574de9800         call dword ptr [0x98de74]
// 008936e0  8d4c2418             lea ecx, [esp + 0x18]
// 008936e4  51                   push ecx
// 008936e5  8bce                 mov ecx, esi
// 008936e7  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008936ef  e88c9ef6ff           call 0x7fd580
// 008936f4  8d4c243c             lea ecx, [esp + 0x3c]
// 008936f8  ff1574de9800         call dword ptr [0x98de74]
// 008936fe  c644243402           mov byte ptr [esp + 0x34], 2
// 00893703  e898b1fdff           call 0x86e8a0
// 00893708  8b10                 mov edx, dword ptr [eax]
// 0089370a  8b5208               mov edx, dword ptr [edx + 8]
// 0089370d  68d5230000           push 0x23d5
// 00893712  8d4c2440             lea ecx, [esp + 0x40]
// 00893716  51                   push ecx
// 00893717  8bc8                 mov ecx, eax
// 00893719  ffd2                 call edx
// 0089371b  8d4c2418             lea ecx, [esp + 0x18]
// 0089371f  ff1580de9800         call dword ptr [0x98de80]
// 00893725  50                   push eax
// 00893726  8d4c2440             lea ecx, [esp + 0x40]
// 0089372a  ff1580de9800         call dword ptr [0x98de80]
// 00893730  50                   push eax
// 00893731  8d44241c             lea eax, [esp + 0x1c]
// 00893735  50                   push eax
// 00893736  ff157cde9800         call dword ptr [0x98de7c]
// 0089373c  83c40c               add esp, 0xc
// 0089373f  8bce                 mov ecx, esi
// 00893741  e88a44f7ff           call 0x807bd0
// 00893746  8bd8                 mov ebx, eax
// 00893748  e8572e0900           call 0x9265a4
// 0089374d  8bf8                 mov edi, eax
// 0089374f  8bafec000000         mov ebp, dword ptr [edi + 0xec]
// 00893755  897c2428             mov dword ptr [esp + 0x28], edi
// 00893759  896c2424             mov dword ptr [esp + 0x24], ebp
// 0089375d  899fec000000         mov dword ptr [edi + 0xec], ebx
// 00893763  6a00                 push 0
// 00893765  6a31                 push 0x31
// 00893767  8d4c241c             lea ecx, [esp + 0x1c]
// 0089376b  c644243c03           mov byte ptr [esp + 0x3c], 3
// 00893770  ff1580de9800         call dword ptr [0x98de80]
// 00893776  50                   push eax
// 00893777  e89c06f6ff           call 0x7f3e18
// 0089377c  89afec000000         mov dword ptr [edi + 0xec], ebp
// 00893782  8d4c243c             lea ecx, [esp + 0x3c]
// 00893786  83f801               cmp eax, 1
// 00893789  741f                 je 0x8937aa
// 0089378b  ff15c0de9800         call dword ptr [0x98dec0]
// 00893791  8d4c2418             lea ecx, [esp + 0x18]
// 00893795  ff15c0de9800         call dword ptr [0x98dec0]
// 0089379b  8d4c2414             lea ecx, [esp + 0x14]
// 0089379f  ff15c0de9800         call dword ptr [0x98dec0]
// 008937a5  e9c3000000           jmp 0x89386d
// 008937aa  ff15c0de9800         call dword ptr [0x98dec0]
// 008937b0  8d4c2418             lea ecx, [esp + 0x18]
// 008937b4  ff15c0de9800         call dword ptr [0x98dec0]
// 008937ba  8d4c2414             lea ecx, [esp + 0x14]
// 008937be  ff15c0de9800         call dword ptr [0x98dec0]
// 008937c4  bb64309a00           mov ebx, 0x9a3064
// 008937c9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008937cd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008937d5  0fb786b8010000       movzx eax, word ptr [esi + 0x1b8]
// 008937dc  50                   push eax
// 008937dd  6a04                 push 4
// 008937df  50                   push eax
// 008937e0  c744244004000000     mov dword ptr [esp + 0x40], 4
// 008937e8  e8f109f6ff           call 0x7f41de
// 008937ed  50                   push eax
// 008937ee  ff154ccc9800         call dword ptr [0x98cc4c]
// 008937f4  50                   push eax
// 008937f5  8d4c2420             lea ecx, [esp + 0x20]
// 008937f9  e8da09f6ff           call 0x7f41d8
// 008937fe  8b16                 mov edx, dword ptr [esi]
// 00893800  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 00893806  6a01                 push 1
// 00893808  8d442420             lea eax, [esp + 0x20]
// 0089380c  50                   push eax
// 0089380d  8bce                 mov ecx, esi
// 0089380f  ffd2                 call edx
// 00893811  8bce                 mov ecx, esi
// 00893813  e87838f7ff           call 0x807090
// 00893818  8bf8                 mov edi, eax
// 0089381a  85ff                 test edi, edi
// 0089381c  7420                 je 0x89383e
// 0089381e  8b4720               mov eax, dword ptr [edi + 0x20]
// 00893821  50                   push eax
// 00893822  ff1584cc9800         call dword ptr [0x98cc84]
// 00893828  85c0                 test eax, eax
// 0089382a  7412                 je 0x89383e
// 0089382c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0089382f  56                   push esi
// 00893830  6a00                 push 0
// 00893832  6864280000           push 0x2864
// 00893837  51                   push ecx
// 00893838  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0089383e  8d4c241c             lea ecx, [esp + 0x1c]
// 00893842  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0089384a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0089384e  e87f09f6ff           call 0x7f41d2
// 00893853  8bce                 mov ecx, esi
// 00893855  e8e6fbffff           call 0x893440
// 0089385a  8bce                 mov ecx, esi
// 0089385c  e82f0af7ff           call 0x804290
// 00893861  8b16                 mov edx, dword ptr [esi]
// 00893863  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00893869  8bce                 mov ecx, esi
// 0089386b  ffd0                 call eax
// 0089386d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00893871  64890d00000000       mov dword ptr fs:[0], ecx
// 00893878  59                   pop ecx
// 00893879  5f                   pop edi
// 0089387a  5e                   pop esi
// 0089387b  5d                   pop ebp
// 0089387c  5b                   pop ebx
// 0089387d  83c424               add esp, 0x24
// 00893880  c20400               ret 4
// copied from an identical function in another client (function ?Reset@CXTPMenuBar@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPMenuBar.cpp