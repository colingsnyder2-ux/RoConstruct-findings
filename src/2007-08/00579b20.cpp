// roc 2007-08 00579b20  unit: RBX::VSpecialShape::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579b20
//
// 00579b20  6aff                 push -1
// 00579b22  6803637500           push 0x756303
// 00579b27  64a100000000         mov eax, dword ptr fs:[0]
// 00579b2d  50                   push eax
// 00579b2e  64892500000000       mov dword ptr fs:[0], esp
// 00579b35  83ec0c               sub esp, 0xc
// 00579b38  53                   push ebx
// 00579b39  55                   push ebp
// 00579b3a  56                   push esi
// 00579b3b  8bf1                 mov esi, ecx
// 00579b3d  57                   push edi
// 00579b3e  89742410             mov dword ptr [esp + 0x10], esi
// 00579b42  c706fcb17a00         mov dword ptr [esi], 0x7ab1fc
// 00579b48  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00579b4b  396e14               cmp dword ptr [esi + 0x14], ebp
// 00579b4e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 00579b54  c744242408000000     mov dword ptr [esp + 0x24], 8
// 00579b5c  7602                 jbe 0x579b60
// 00579b5e  ffd3                 call ebx
// 00579b60  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00579b63  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00579b66  7602                 jbe 0x579b6a
// 00579b68  ffd3                 call ebx
// 00579b6a  33db                 xor ebx, ebx
// 00579b6c  3bfd                 cmp edi, ebp
// 00579b6e  7415                 je 0x579b85
// 00579b70  8b0f                 mov ecx, dword ptr [edi]
// 00579b72  3bcb                 cmp ecx, ebx
// 00579b74  7408                 je 0x579b7e
// 00579b76  8b01                 mov eax, dword ptr [ecx]
// 00579b78  8b10                 mov edx, dword ptr [eax]
// 00579b7a  6a01                 push 1
// 00579b7c  ffd2                 call edx
// 00579b7e  83c704               add edi, 4
// 00579b81  3bfd                 cmp edi, ebp
// 00579b83  75eb                 jne 0x579b70
// 00579b85  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00579b8b  3bc3                 cmp eax, ebx
// 00579b8d  7409                 je 0x579b98
// 00579b8f  50                   push eax
// 00579b90  e8cd600b00           call 0x62fc62
// 00579b95  83c404               add esp, 4
// 00579b98  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 00579b9e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 00579ba4  899e94000000         mov dword ptr [esi + 0x94], ebx
// 00579baa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00579bad  3bc3                 cmp eax, ebx
// 00579baf  7409                 je 0x579bba
// 00579bb1  50                   push eax
// 00579bb2  e8ab600b00           call 0x62fc62
// 00579bb7  83c404               add esp, 4
// 00579bba  8d4e68               lea ecx, [esi + 0x68]
// 00579bbd  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00579bc0  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00579bc6  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00579bcc  c644242405           mov byte ptr [esp + 0x24], 5
// 00579bd1  e88a06e9ff           call 0x40a260
// 00579bd6  8b4660               mov eax, dword ptr [esi + 0x60]
// 00579bd9  8b08                 mov ecx, dword ptr [eax]
// 00579bdb  8d7e5c               lea edi, [esi + 0x5c]
// 00579bde  50                   push eax
// 00579bdf  57                   push edi
// 00579be0  51                   push ecx
// 00579be1  57                   push edi
// 00579be2  8d442424             lea eax, [esp + 0x24]
// 00579be6  50                   push eax
// 00579be7  8bcf                 mov ecx, edi
// 00579be9  c644243804           mov byte ptr [esp + 0x38], 4
// 00579bee  e86d98fcff           call 0x543460
// 00579bf3  8b4704               mov eax, dword ptr [edi + 4]
// 00579bf6  50                   push eax
// 00579bf7  e866600b00           call 0x62fc62
// 00579bfc  895f04               mov dword ptr [edi + 4], ebx
// 00579bff  895f08               mov dword ptr [edi + 8], ebx
// 00579c02  8b4654               mov eax, dword ptr [esi + 0x54]
// 00579c05  8b08                 mov ecx, dword ptr [eax]
// 00579c07  83c404               add esp, 4
// 00579c0a  8d7e50               lea edi, [esi + 0x50]
// 00579c0d  50                   push eax
// 00579c0e  57                   push edi
// 00579c0f  51                   push ecx
// 00579c10  57                   push edi
// 00579c11  8d4c2424             lea ecx, [esp + 0x24]
// 00579c15  51                   push ecx
// 00579c16  8bcf                 mov ecx, edi
// 00579c18  c644243803           mov byte ptr [esp + 0x38], 3
// 00579c1d  e83e98fcff           call 0x543460
// 00579c22  8b4704               mov eax, dword ptr [edi + 4]
// 00579c25  50                   push eax
// 00579c26  e837600b00           call 0x62fc62
// 00579c2b  895f04               mov dword ptr [edi + 4], ebx
// 00579c2e  895f08               mov dword ptr [edi + 8], ebx
// 00579c31  8b4644               mov eax, dword ptr [esi + 0x44]
// 00579c34  83c404               add esp, 4
// 00579c37  3bc3                 cmp eax, ebx
// 00579c39  7409                 je 0x579c44
// 00579c3b  50                   push eax
// 00579c3c  e821600b00           call 0x62fc62
// 00579c41  83c404               add esp, 4
// 00579c44  8d7e34               lea edi, [esi + 0x34]
// 00579c47  895e44               mov dword ptr [esi + 0x44], ebx
// 00579c4a  895e48               mov dword ptr [esi + 0x48], ebx
// 00579c4d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00579c50  8b4704               mov eax, dword ptr [edi + 4]
// 00579c53  8b08                 mov ecx, dword ptr [eax]
// 00579c55  50                   push eax
// 00579c56  57                   push edi
// 00579c57  51                   push ecx
// 00579c58  57                   push edi
// 00579c59  8d542424             lea edx, [esp + 0x24]
// 00579c5d  52                   push edx
// 00579c5e  8bcf                 mov ecx, edi
// 00579c60  c644243801           mov byte ptr [esp + 0x38], 1
// 00579c65  e8c6d70300           call 0x5b7430
// 00579c6a  8b4704               mov eax, dword ptr [edi + 4]
// 00579c6d  50                   push eax
// 00579c6e  e8ef5f0b00           call 0x62fc62
// 00579c73  895f04               mov dword ptr [edi + 4], ebx
// 00579c76  895f08               mov dword ptr [edi + 8], ebx
// 00579c79  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00579c7c  8b08                 mov ecx, dword ptr [eax]
// 00579c7e  83c404               add esp, 4
// 00579c81  8d7e28               lea edi, [esi + 0x28]
// 00579c84  50                   push eax
// 00579c85  57                   push edi
// 00579c86  51                   push ecx
// 00579c87  57                   push edi
// 00579c88  8d442424             lea eax, [esp + 0x24]
// 00579c8c  50                   push eax
// 00579c8d  8bcf                 mov ecx, edi
// 00579c8f  885c2438             mov byte ptr [esp + 0x38], bl
// 00579c93  e898d70300           call 0x5b7430
// 00579c98  8b4704               mov eax, dword ptr [edi + 4]
// 00579c9b  50                   push eax
// 00579c9c  e8c15f0b00           call 0x62fc62
// 00579ca1  83c404               add esp, 4
// 00579ca4  8bce                 mov ecx, esi
// 00579ca6  895f04               mov dword ptr [edi + 4], ebx
// 00579ca9  895f08               mov dword ptr [edi + 8], ebx
// 00579cac  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00579cb4  e8c7d50000           call 0x587280
// 00579cb9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00579cbd  5f                   pop edi
// 00579cbe  5e                   pop esi
// 00579cbf  5d                   pop ebp
// 00579cc0  5b                   pop ebx
// 00579cc1  64890d00000000       mov dword ptr fs:[0], ecx
// 00579cc8  83c418               add esp, 0x18
// 00579ccb  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
