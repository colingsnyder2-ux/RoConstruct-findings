// roc 2007-08 005db5b0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005db5b0
//
// 005db5b0  6aff                 push -1
// 005db5b2  6803637500           push 0x756303
// 005db5b7  64a100000000         mov eax, dword ptr fs:[0]
// 005db5bd  50                   push eax
// 005db5be  64892500000000       mov dword ptr fs:[0], esp
// 005db5c5  83ec0c               sub esp, 0xc
// 005db5c8  53                   push ebx
// 005db5c9  55                   push ebp
// 005db5ca  56                   push esi
// 005db5cb  8bf1                 mov esi, ecx
// 005db5cd  57                   push edi
// 005db5ce  89742410             mov dword ptr [esp + 0x10], esi
// 005db5d2  c70690c47b00         mov dword ptr [esi], 0x7bc490
// 005db5d8  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005db5db  396e14               cmp dword ptr [esi + 0x14], ebp
// 005db5de  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005db5e4  c744242408000000     mov dword ptr [esp + 0x24], 8
// 005db5ec  7602                 jbe 0x5db5f0
// 005db5ee  ffd3                 call ebx
// 005db5f0  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005db5f3  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005db5f6  7602                 jbe 0x5db5fa
// 005db5f8  ffd3                 call ebx
// 005db5fa  33db                 xor ebx, ebx
// 005db5fc  3bfd                 cmp edi, ebp
// 005db5fe  7415                 je 0x5db615
// 005db600  8b0f                 mov ecx, dword ptr [edi]
// 005db602  3bcb                 cmp ecx, ebx
// 005db604  7408                 je 0x5db60e
// 005db606  8b01                 mov eax, dword ptr [ecx]
// 005db608  8b10                 mov edx, dword ptr [eax]
// 005db60a  6a01                 push 1
// 005db60c  ffd2                 call edx
// 005db60e  83c704               add edi, 4
// 005db611  3bfd                 cmp edi, ebp
// 005db613  75eb                 jne 0x5db600
// 005db615  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005db61b  3bc3                 cmp eax, ebx
// 005db61d  7409                 je 0x5db628
// 005db61f  50                   push eax
// 005db620  e83d460500           call 0x62fc62
// 005db625  83c404               add esp, 4
// 005db628  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 005db62e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005db634  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005db63a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005db63d  3bc3                 cmp eax, ebx
// 005db63f  7409                 je 0x5db64a
// 005db641  50                   push eax
// 005db642  e81b460500           call 0x62fc62
// 005db647  83c404               add esp, 4
// 005db64a  8d4e68               lea ecx, [esi + 0x68]
// 005db64d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005db650  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005db656  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005db65c  c644242405           mov byte ptr [esp + 0x24], 5
// 005db661  e8faebe2ff           call 0x40a260
// 005db666  8b4660               mov eax, dword ptr [esi + 0x60]
// 005db669  8b08                 mov ecx, dword ptr [eax]
// 005db66b  8d7e5c               lea edi, [esi + 0x5c]
// 005db66e  50                   push eax
// 005db66f  57                   push edi
// 005db670  51                   push ecx
// 005db671  57                   push edi
// 005db672  8d442424             lea eax, [esp + 0x24]
// 005db676  50                   push eax
// 005db677  8bcf                 mov ecx, edi
// 005db679  c644243804           mov byte ptr [esp + 0x38], 4
// 005db67e  e8dd7df6ff           call 0x543460
// 005db683  8b4704               mov eax, dword ptr [edi + 4]
// 005db686  50                   push eax
// 005db687  e8d6450500           call 0x62fc62
// 005db68c  895f04               mov dword ptr [edi + 4], ebx
// 005db68f  895f08               mov dword ptr [edi + 8], ebx
// 005db692  8b4654               mov eax, dword ptr [esi + 0x54]
// 005db695  8b08                 mov ecx, dword ptr [eax]
// 005db697  83c404               add esp, 4
// 005db69a  8d7e50               lea edi, [esi + 0x50]
// 005db69d  50                   push eax
// 005db69e  57                   push edi
// 005db69f  51                   push ecx
// 005db6a0  57                   push edi
// 005db6a1  8d4c2424             lea ecx, [esp + 0x24]
// 005db6a5  51                   push ecx
// 005db6a6  8bcf                 mov ecx, edi
// 005db6a8  c644243803           mov byte ptr [esp + 0x38], 3
// 005db6ad  e8ae7df6ff           call 0x543460
// 005db6b2  8b4704               mov eax, dword ptr [edi + 4]
// 005db6b5  50                   push eax
// 005db6b6  e8a7450500           call 0x62fc62
// 005db6bb  895f04               mov dword ptr [edi + 4], ebx
// 005db6be  895f08               mov dword ptr [edi + 8], ebx
// 005db6c1  8b4644               mov eax, dword ptr [esi + 0x44]
// 005db6c4  83c404               add esp, 4
// 005db6c7  3bc3                 cmp eax, ebx
// 005db6c9  7409                 je 0x5db6d4
// 005db6cb  50                   push eax
// 005db6cc  e891450500           call 0x62fc62
// 005db6d1  83c404               add esp, 4
// 005db6d4  8d7e34               lea edi, [esi + 0x34]
// 005db6d7  895e44               mov dword ptr [esi + 0x44], ebx
// 005db6da  895e48               mov dword ptr [esi + 0x48], ebx
// 005db6dd  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005db6e0  8b4704               mov eax, dword ptr [edi + 4]
// 005db6e3  8b08                 mov ecx, dword ptr [eax]
// 005db6e5  50                   push eax
// 005db6e6  57                   push edi
// 005db6e7  51                   push ecx
// 005db6e8  57                   push edi
// 005db6e9  8d542424             lea edx, [esp + 0x24]
// 005db6ed  52                   push edx
// 005db6ee  8bcf                 mov ecx, edi
// 005db6f0  c644243801           mov byte ptr [esp + 0x38], 1
// 005db6f5  e836bdfdff           call 0x5b7430
// 005db6fa  8b4704               mov eax, dword ptr [edi + 4]
// 005db6fd  50                   push eax
// 005db6fe  e85f450500           call 0x62fc62
// 005db703  895f04               mov dword ptr [edi + 4], ebx
// 005db706  895f08               mov dword ptr [edi + 8], ebx
// 005db709  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005db70c  8b08                 mov ecx, dword ptr [eax]
// 005db70e  83c404               add esp, 4
// 005db711  8d7e28               lea edi, [esi + 0x28]
// 005db714  50                   push eax
// 005db715  57                   push edi
// 005db716  51                   push ecx
// 005db717  57                   push edi
// 005db718  8d442424             lea eax, [esp + 0x24]
// 005db71c  50                   push eax
// 005db71d  8bcf                 mov ecx, edi
// 005db71f  885c2438             mov byte ptr [esp + 0x38], bl
// 005db723  e808bdfdff           call 0x5b7430
// 005db728  8b4704               mov eax, dword ptr [edi + 4]
// 005db72b  50                   push eax
// 005db72c  e831450500           call 0x62fc62
// 005db731  83c404               add esp, 4
// 005db734  8bce                 mov ecx, esi
// 005db736  895f04               mov dword ptr [edi + 4], ebx
// 005db739  895f08               mov dword ptr [edi + 8], ebx
// 005db73c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005db744  e837bbfaff           call 0x587280
// 005db749  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005db74d  5f                   pop edi
// 005db74e  5e                   pop esi
// 005db74f  5d                   pop ebp
// 005db750  5b                   pop ebx
// 005db751  64890d00000000       mov dword ptr fs:[0], ecx
// 005db758  83c418               add esp, 0x18
// 005db75b  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
