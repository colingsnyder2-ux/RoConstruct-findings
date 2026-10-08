// roc 2007-08 005db910  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005db910
//
// 005db910  6aff                 push -1
// 005db912  6803637500           push 0x756303
// 005db917  64a100000000         mov eax, dword ptr fs:[0]
// 005db91d  50                   push eax
// 005db91e  64892500000000       mov dword ptr fs:[0], esp
// 005db925  83ec0c               sub esp, 0xc
// 005db928  53                   push ebx
// 005db929  55                   push ebp
// 005db92a  56                   push esi
// 005db92b  8bf1                 mov esi, ecx
// 005db92d  57                   push edi
// 005db92e  89742410             mov dword ptr [esp + 0x10], esi
// 005db932  c706a0c47b00         mov dword ptr [esi], 0x7bc4a0
// 005db938  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005db93b  396e14               cmp dword ptr [esi + 0x14], ebp
// 005db93e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005db944  c744242408000000     mov dword ptr [esp + 0x24], 8
// 005db94c  7602                 jbe 0x5db950
// 005db94e  ffd3                 call ebx
// 005db950  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005db953  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005db956  7602                 jbe 0x5db95a
// 005db958  ffd3                 call ebx
// 005db95a  33db                 xor ebx, ebx
// 005db95c  3bfd                 cmp edi, ebp
// 005db95e  7415                 je 0x5db975
// 005db960  8b0f                 mov ecx, dword ptr [edi]
// 005db962  3bcb                 cmp ecx, ebx
// 005db964  7408                 je 0x5db96e
// 005db966  8b01                 mov eax, dword ptr [ecx]
// 005db968  8b10                 mov edx, dword ptr [eax]
// 005db96a  6a01                 push 1
// 005db96c  ffd2                 call edx
// 005db96e  83c704               add edi, 4
// 005db971  3bfd                 cmp edi, ebp
// 005db973  75eb                 jne 0x5db960
// 005db975  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005db97b  3bc3                 cmp eax, ebx
// 005db97d  7409                 je 0x5db988
// 005db97f  50                   push eax
// 005db980  e8dd420500           call 0x62fc62
// 005db985  83c404               add esp, 4
// 005db988  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 005db98e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005db994  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005db99a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005db99d  3bc3                 cmp eax, ebx
// 005db99f  7409                 je 0x5db9aa
// 005db9a1  50                   push eax
// 005db9a2  e8bb420500           call 0x62fc62
// 005db9a7  83c404               add esp, 4
// 005db9aa  8d4e68               lea ecx, [esi + 0x68]
// 005db9ad  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005db9b0  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005db9b6  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005db9bc  c644242405           mov byte ptr [esp + 0x24], 5
// 005db9c1  e89ae8e2ff           call 0x40a260
// 005db9c6  8b4660               mov eax, dword ptr [esi + 0x60]
// 005db9c9  8b08                 mov ecx, dword ptr [eax]
// 005db9cb  8d7e5c               lea edi, [esi + 0x5c]
// 005db9ce  50                   push eax
// 005db9cf  57                   push edi
// 005db9d0  51                   push ecx
// 005db9d1  57                   push edi
// 005db9d2  8d442424             lea eax, [esp + 0x24]
// 005db9d6  50                   push eax
// 005db9d7  8bcf                 mov ecx, edi
// 005db9d9  c644243804           mov byte ptr [esp + 0x38], 4
// 005db9de  e87d7af6ff           call 0x543460
// 005db9e3  8b4704               mov eax, dword ptr [edi + 4]
// 005db9e6  50                   push eax
// 005db9e7  e876420500           call 0x62fc62
// 005db9ec  895f04               mov dword ptr [edi + 4], ebx
// 005db9ef  895f08               mov dword ptr [edi + 8], ebx
// 005db9f2  8b4654               mov eax, dword ptr [esi + 0x54]
// 005db9f5  8b08                 mov ecx, dword ptr [eax]
// 005db9f7  83c404               add esp, 4
// 005db9fa  8d7e50               lea edi, [esi + 0x50]
// 005db9fd  50                   push eax
// 005db9fe  57                   push edi
// 005db9ff  51                   push ecx
// 005dba00  57                   push edi
// 005dba01  8d4c2424             lea ecx, [esp + 0x24]
// 005dba05  51                   push ecx
// 005dba06  8bcf                 mov ecx, edi
// 005dba08  c644243803           mov byte ptr [esp + 0x38], 3
// 005dba0d  e84e7af6ff           call 0x543460
// 005dba12  8b4704               mov eax, dword ptr [edi + 4]
// 005dba15  50                   push eax
// 005dba16  e847420500           call 0x62fc62
// 005dba1b  895f04               mov dword ptr [edi + 4], ebx
// 005dba1e  895f08               mov dword ptr [edi + 8], ebx
// 005dba21  8b4644               mov eax, dword ptr [esi + 0x44]
// 005dba24  83c404               add esp, 4
// 005dba27  3bc3                 cmp eax, ebx
// 005dba29  7409                 je 0x5dba34
// 005dba2b  50                   push eax
// 005dba2c  e831420500           call 0x62fc62
// 005dba31  83c404               add esp, 4
// 005dba34  8d7e34               lea edi, [esi + 0x34]
// 005dba37  895e44               mov dword ptr [esi + 0x44], ebx
// 005dba3a  895e48               mov dword ptr [esi + 0x48], ebx
// 005dba3d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005dba40  8b4704               mov eax, dword ptr [edi + 4]
// 005dba43  8b08                 mov ecx, dword ptr [eax]
// 005dba45  50                   push eax
// 005dba46  57                   push edi
// 005dba47  51                   push ecx
// 005dba48  57                   push edi
// 005dba49  8d542424             lea edx, [esp + 0x24]
// 005dba4d  52                   push edx
// 005dba4e  8bcf                 mov ecx, edi
// 005dba50  c644243801           mov byte ptr [esp + 0x38], 1
// 005dba55  e8d6b9fdff           call 0x5b7430
// 005dba5a  8b4704               mov eax, dword ptr [edi + 4]
// 005dba5d  50                   push eax
// 005dba5e  e8ff410500           call 0x62fc62
// 005dba63  895f04               mov dword ptr [edi + 4], ebx
// 005dba66  895f08               mov dword ptr [edi + 8], ebx
// 005dba69  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005dba6c  8b08                 mov ecx, dword ptr [eax]
// 005dba6e  83c404               add esp, 4
// 005dba71  8d7e28               lea edi, [esi + 0x28]
// 005dba74  50                   push eax
// 005dba75  57                   push edi
// 005dba76  51                   push ecx
// 005dba77  57                   push edi
// 005dba78  8d442424             lea eax, [esp + 0x24]
// 005dba7c  50                   push eax
// 005dba7d  8bcf                 mov ecx, edi
// 005dba7f  885c2438             mov byte ptr [esp + 0x38], bl
// 005dba83  e8a8b9fdff           call 0x5b7430
// 005dba88  8b4704               mov eax, dword ptr [edi + 4]
// 005dba8b  50                   push eax
// 005dba8c  e8d1410500           call 0x62fc62
// 005dba91  83c404               add esp, 4
// 005dba94  8bce                 mov ecx, esi
// 005dba96  895f04               mov dword ptr [edi + 4], ebx
// 005dba99  895f08               mov dword ptr [edi + 8], ebx
// 005dba9c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005dbaa4  e8d7b7faff           call 0x587280
// 005dbaa9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005dbaad  5f                   pop edi
// 005dbaae  5e                   pop esi
// 005dbaaf  5d                   pop ebp
// 005dbab0  5b                   pop ebx
// 005dbab1  64890d00000000       mov dword ptr fs:[0], ecx
// 005dbab8  83c418               add esp, 0x18
// 005dbabb  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
