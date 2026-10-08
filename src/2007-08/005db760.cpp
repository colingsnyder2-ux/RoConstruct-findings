// roc 2007-08 005db760  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005db760
//
// 005db760  6aff                 push -1
// 005db762  6803637500           push 0x756303
// 005db767  64a100000000         mov eax, dword ptr fs:[0]
// 005db76d  50                   push eax
// 005db76e  64892500000000       mov dword ptr fs:[0], esp
// 005db775  83ec0c               sub esp, 0xc
// 005db778  53                   push ebx
// 005db779  55                   push ebp
// 005db77a  56                   push esi
// 005db77b  8bf1                 mov esi, ecx
// 005db77d  57                   push edi
// 005db77e  89742410             mov dword ptr [esp + 0x10], esi
// 005db782  c70698c47b00         mov dword ptr [esi], 0x7bc498
// 005db788  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005db78b  396e14               cmp dword ptr [esi + 0x14], ebp
// 005db78e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005db794  c744242408000000     mov dword ptr [esp + 0x24], 8
// 005db79c  7602                 jbe 0x5db7a0
// 005db79e  ffd3                 call ebx
// 005db7a0  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005db7a3  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005db7a6  7602                 jbe 0x5db7aa
// 005db7a8  ffd3                 call ebx
// 005db7aa  33db                 xor ebx, ebx
// 005db7ac  3bfd                 cmp edi, ebp
// 005db7ae  7415                 je 0x5db7c5
// 005db7b0  8b0f                 mov ecx, dword ptr [edi]
// 005db7b2  3bcb                 cmp ecx, ebx
// 005db7b4  7408                 je 0x5db7be
// 005db7b6  8b01                 mov eax, dword ptr [ecx]
// 005db7b8  8b10                 mov edx, dword ptr [eax]
// 005db7ba  6a01                 push 1
// 005db7bc  ffd2                 call edx
// 005db7be  83c704               add edi, 4
// 005db7c1  3bfd                 cmp edi, ebp
// 005db7c3  75eb                 jne 0x5db7b0
// 005db7c5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005db7cb  3bc3                 cmp eax, ebx
// 005db7cd  7409                 je 0x5db7d8
// 005db7cf  50                   push eax
// 005db7d0  e88d440500           call 0x62fc62
// 005db7d5  83c404               add esp, 4
// 005db7d8  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 005db7de  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005db7e4  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005db7ea  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005db7ed  3bc3                 cmp eax, ebx
// 005db7ef  7409                 je 0x5db7fa
// 005db7f1  50                   push eax
// 005db7f2  e86b440500           call 0x62fc62
// 005db7f7  83c404               add esp, 4
// 005db7fa  8d4e68               lea ecx, [esi + 0x68]
// 005db7fd  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005db800  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005db806  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005db80c  c644242405           mov byte ptr [esp + 0x24], 5
// 005db811  e84aeae2ff           call 0x40a260
// 005db816  8b4660               mov eax, dword ptr [esi + 0x60]
// 005db819  8b08                 mov ecx, dword ptr [eax]
// 005db81b  8d7e5c               lea edi, [esi + 0x5c]
// 005db81e  50                   push eax
// 005db81f  57                   push edi
// 005db820  51                   push ecx
// 005db821  57                   push edi
// 005db822  8d442424             lea eax, [esp + 0x24]
// 005db826  50                   push eax
// 005db827  8bcf                 mov ecx, edi
// 005db829  c644243804           mov byte ptr [esp + 0x38], 4
// 005db82e  e82d7cf6ff           call 0x543460
// 005db833  8b4704               mov eax, dword ptr [edi + 4]
// 005db836  50                   push eax
// 005db837  e826440500           call 0x62fc62
// 005db83c  895f04               mov dword ptr [edi + 4], ebx
// 005db83f  895f08               mov dword ptr [edi + 8], ebx
// 005db842  8b4654               mov eax, dword ptr [esi + 0x54]
// 005db845  8b08                 mov ecx, dword ptr [eax]
// 005db847  83c404               add esp, 4
// 005db84a  8d7e50               lea edi, [esi + 0x50]
// 005db84d  50                   push eax
// 005db84e  57                   push edi
// 005db84f  51                   push ecx
// 005db850  57                   push edi
// 005db851  8d4c2424             lea ecx, [esp + 0x24]
// 005db855  51                   push ecx
// 005db856  8bcf                 mov ecx, edi
// 005db858  c644243803           mov byte ptr [esp + 0x38], 3
// 005db85d  e8fe7bf6ff           call 0x543460
// 005db862  8b4704               mov eax, dword ptr [edi + 4]
// 005db865  50                   push eax
// 005db866  e8f7430500           call 0x62fc62
// 005db86b  895f04               mov dword ptr [edi + 4], ebx
// 005db86e  895f08               mov dword ptr [edi + 8], ebx
// 005db871  8b4644               mov eax, dword ptr [esi + 0x44]
// 005db874  83c404               add esp, 4
// 005db877  3bc3                 cmp eax, ebx
// 005db879  7409                 je 0x5db884
// 005db87b  50                   push eax
// 005db87c  e8e1430500           call 0x62fc62
// 005db881  83c404               add esp, 4
// 005db884  8d7e34               lea edi, [esi + 0x34]
// 005db887  895e44               mov dword ptr [esi + 0x44], ebx
// 005db88a  895e48               mov dword ptr [esi + 0x48], ebx
// 005db88d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005db890  8b4704               mov eax, dword ptr [edi + 4]
// 005db893  8b08                 mov ecx, dword ptr [eax]
// 005db895  50                   push eax
// 005db896  57                   push edi
// 005db897  51                   push ecx
// 005db898  57                   push edi
// 005db899  8d542424             lea edx, [esp + 0x24]
// 005db89d  52                   push edx
// 005db89e  8bcf                 mov ecx, edi
// 005db8a0  c644243801           mov byte ptr [esp + 0x38], 1
// 005db8a5  e886bbfdff           call 0x5b7430
// 005db8aa  8b4704               mov eax, dword ptr [edi + 4]
// 005db8ad  50                   push eax
// 005db8ae  e8af430500           call 0x62fc62
// 005db8b3  895f04               mov dword ptr [edi + 4], ebx
// 005db8b6  895f08               mov dword ptr [edi + 8], ebx
// 005db8b9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005db8bc  8b08                 mov ecx, dword ptr [eax]
// 005db8be  83c404               add esp, 4
// 005db8c1  8d7e28               lea edi, [esi + 0x28]
// 005db8c4  50                   push eax
// 005db8c5  57                   push edi
// 005db8c6  51                   push ecx
// 005db8c7  57                   push edi
// 005db8c8  8d442424             lea eax, [esp + 0x24]
// 005db8cc  50                   push eax
// 005db8cd  8bcf                 mov ecx, edi
// 005db8cf  885c2438             mov byte ptr [esp + 0x38], bl
// 005db8d3  e858bbfdff           call 0x5b7430
// 005db8d8  8b4704               mov eax, dword ptr [edi + 4]
// 005db8db  50                   push eax
// 005db8dc  e881430500           call 0x62fc62
// 005db8e1  83c404               add esp, 4
// 005db8e4  8bce                 mov ecx, esi
// 005db8e6  895f04               mov dword ptr [edi + 4], ebx
// 005db8e9  895f08               mov dword ptr [edi + 8], ebx
// 005db8ec  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005db8f4  e887b9faff           call 0x587280
// 005db8f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005db8fd  5f                   pop edi
// 005db8fe  5e                   pop esi
// 005db8ff  5d                   pop ebp
// 005db900  5b                   pop ebx
// 005db901  64890d00000000       mov dword ptr fs:[0], ecx
// 005db908  83c418               add esp, 0x18
// 005db90b  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
