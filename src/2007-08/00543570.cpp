// roc 2007-08 00543570  unit: RBX::VDebugSettings::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543570
//
// 00543570  6aff                 push -1
// 00543572  6803637500           push 0x756303
// 00543577  64a100000000         mov eax, dword ptr fs:[0]
// 0054357d  50                   push eax
// 0054357e  64892500000000       mov dword ptr fs:[0], esp
// 00543585  83ec0c               sub esp, 0xc
// 00543588  53                   push ebx
// 00543589  55                   push ebp
// 0054358a  56                   push esi
// 0054358b  8bf1                 mov esi, ecx
// 0054358d  57                   push edi
// 0054358e  89742410             mov dword ptr [esp + 0x10], esi
// 00543592  c706f4687a00         mov dword ptr [esi], 0x7a68f4
// 00543598  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0054359b  396e14               cmp dword ptr [esi + 0x14], ebp
// 0054359e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005435a4  c744242408000000     mov dword ptr [esp + 0x24], 8
// 005435ac  7602                 jbe 0x5435b0
// 005435ae  ffd3                 call ebx
// 005435b0  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005435b3  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005435b6  7602                 jbe 0x5435ba
// 005435b8  ffd3                 call ebx
// 005435ba  33db                 xor ebx, ebx
// 005435bc  3bfd                 cmp edi, ebp
// 005435be  7415                 je 0x5435d5
// 005435c0  8b0f                 mov ecx, dword ptr [edi]
// 005435c2  3bcb                 cmp ecx, ebx
// 005435c4  7408                 je 0x5435ce
// 005435c6  8b01                 mov eax, dword ptr [ecx]
// 005435c8  8b10                 mov edx, dword ptr [eax]
// 005435ca  6a01                 push 1
// 005435cc  ffd2                 call edx
// 005435ce  83c704               add edi, 4
// 005435d1  3bfd                 cmp edi, ebp
// 005435d3  75eb                 jne 0x5435c0
// 005435d5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005435db  3bc3                 cmp eax, ebx
// 005435dd  7409                 je 0x5435e8
// 005435df  50                   push eax
// 005435e0  e87dc60e00           call 0x62fc62
// 005435e5  83c404               add esp, 4
// 005435e8  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 005435ee  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005435f4  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005435fa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005435fd  3bc3                 cmp eax, ebx
// 005435ff  7409                 je 0x54360a
// 00543601  50                   push eax
// 00543602  e85bc60e00           call 0x62fc62
// 00543607  83c404               add esp, 4
// 0054360a  8d4e68               lea ecx, [esi + 0x68]
// 0054360d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00543610  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00543616  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0054361c  c644242405           mov byte ptr [esp + 0x24], 5
// 00543621  e83a6cecff           call 0x40a260
// 00543626  8b4660               mov eax, dword ptr [esi + 0x60]
// 00543629  8b08                 mov ecx, dword ptr [eax]
// 0054362b  8d7e5c               lea edi, [esi + 0x5c]
// 0054362e  50                   push eax
// 0054362f  57                   push edi
// 00543630  51                   push ecx
// 00543631  57                   push edi
// 00543632  8d442424             lea eax, [esp + 0x24]
// 00543636  50                   push eax
// 00543637  8bcf                 mov ecx, edi
// 00543639  c644243804           mov byte ptr [esp + 0x38], 4
// 0054363e  e81dfeffff           call 0x543460
// 00543643  8b4704               mov eax, dword ptr [edi + 4]
// 00543646  50                   push eax
// 00543647  e816c60e00           call 0x62fc62
// 0054364c  895f04               mov dword ptr [edi + 4], ebx
// 0054364f  895f08               mov dword ptr [edi + 8], ebx
// 00543652  8b4654               mov eax, dword ptr [esi + 0x54]
// 00543655  8b08                 mov ecx, dword ptr [eax]
// 00543657  83c404               add esp, 4
// 0054365a  8d7e50               lea edi, [esi + 0x50]
// 0054365d  50                   push eax
// 0054365e  57                   push edi
// 0054365f  51                   push ecx
// 00543660  57                   push edi
// 00543661  8d4c2424             lea ecx, [esp + 0x24]
// 00543665  51                   push ecx
// 00543666  8bcf                 mov ecx, edi
// 00543668  c644243803           mov byte ptr [esp + 0x38], 3
// 0054366d  e8eefdffff           call 0x543460
// 00543672  8b4704               mov eax, dword ptr [edi + 4]
// 00543675  50                   push eax
// 00543676  e8e7c50e00           call 0x62fc62
// 0054367b  895f04               mov dword ptr [edi + 4], ebx
// 0054367e  895f08               mov dword ptr [edi + 8], ebx
// 00543681  8b4644               mov eax, dword ptr [esi + 0x44]
// 00543684  83c404               add esp, 4
// 00543687  3bc3                 cmp eax, ebx
// 00543689  7409                 je 0x543694
// 0054368b  50                   push eax
// 0054368c  e8d1c50e00           call 0x62fc62
// 00543691  83c404               add esp, 4
// 00543694  8d7e34               lea edi, [esi + 0x34]
// 00543697  895e44               mov dword ptr [esi + 0x44], ebx
// 0054369a  895e48               mov dword ptr [esi + 0x48], ebx
// 0054369d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005436a0  8b4704               mov eax, dword ptr [edi + 4]
// 005436a3  8b08                 mov ecx, dword ptr [eax]
// 005436a5  50                   push eax
// 005436a6  57                   push edi
// 005436a7  51                   push ecx
// 005436a8  57                   push edi
// 005436a9  8d542424             lea edx, [esp + 0x24]
// 005436ad  52                   push edx
// 005436ae  8bcf                 mov ecx, edi
// 005436b0  c644243801           mov byte ptr [esp + 0x38], 1
// 005436b5  e8763d0700           call 0x5b7430
// 005436ba  8b4704               mov eax, dword ptr [edi + 4]
// 005436bd  50                   push eax
// 005436be  e89fc50e00           call 0x62fc62
// 005436c3  895f04               mov dword ptr [edi + 4], ebx
// 005436c6  895f08               mov dword ptr [edi + 8], ebx
// 005436c9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005436cc  8b08                 mov ecx, dword ptr [eax]
// 005436ce  83c404               add esp, 4
// 005436d1  8d7e28               lea edi, [esi + 0x28]
// 005436d4  50                   push eax
// 005436d5  57                   push edi
// 005436d6  51                   push ecx
// 005436d7  57                   push edi
// 005436d8  8d442424             lea eax, [esp + 0x24]
// 005436dc  50                   push eax
// 005436dd  8bcf                 mov ecx, edi
// 005436df  885c2438             mov byte ptr [esp + 0x38], bl
// 005436e3  e8483d0700           call 0x5b7430
// 005436e8  8b4704               mov eax, dword ptr [edi + 4]
// 005436eb  50                   push eax
// 005436ec  e871c50e00           call 0x62fc62
// 005436f1  83c404               add esp, 4
// 005436f4  8bce                 mov ecx, esi
// 005436f6  895f04               mov dword ptr [edi + 4], ebx
// 005436f9  895f08               mov dword ptr [edi + 8], ebx
// 005436fc  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00543704  e8773b0400           call 0x587280
// 00543709  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054370d  5f                   pop edi
// 0054370e  5e                   pop esi
// 0054370f  5d                   pop ebp
// 00543710  5b                   pop ebx
// 00543711  64890d00000000       mov dword ptr fs:[0], ecx
// 00543718  83c418               add esp, 0x18
// 0054371b  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
