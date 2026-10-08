// roc 2007-08 0058b020  unit: RBX::VSoundChannel::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058b020
//
// 0058b020  6aff                 push -1
// 0058b022  6803637500           push 0x756303
// 0058b027  64a100000000         mov eax, dword ptr fs:[0]
// 0058b02d  50                   push eax
// 0058b02e  64892500000000       mov dword ptr fs:[0], esp
// 0058b035  83ec0c               sub esp, 0xc
// 0058b038  53                   push ebx
// 0058b039  55                   push ebp
// 0058b03a  56                   push esi
// 0058b03b  8bf1                 mov esi, ecx
// 0058b03d  57                   push edi
// 0058b03e  89742410             mov dword ptr [esp + 0x10], esi
// 0058b042  c7068cf07a00         mov dword ptr [esi], 0x7af08c
// 0058b048  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0058b04b  396e14               cmp dword ptr [esi + 0x14], ebp
// 0058b04e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0058b054  c744242408000000     mov dword ptr [esp + 0x24], 8
// 0058b05c  7602                 jbe 0x58b060
// 0058b05e  ffd3                 call ebx
// 0058b060  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0058b063  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0058b066  7602                 jbe 0x58b06a
// 0058b068  ffd3                 call ebx
// 0058b06a  33db                 xor ebx, ebx
// 0058b06c  3bfd                 cmp edi, ebp
// 0058b06e  7415                 je 0x58b085
// 0058b070  8b0f                 mov ecx, dword ptr [edi]
// 0058b072  3bcb                 cmp ecx, ebx
// 0058b074  7408                 je 0x58b07e
// 0058b076  8b01                 mov eax, dword ptr [ecx]
// 0058b078  8b10                 mov edx, dword ptr [eax]
// 0058b07a  6a01                 push 1
// 0058b07c  ffd2                 call edx
// 0058b07e  83c704               add edi, 4
// 0058b081  3bfd                 cmp edi, ebp
// 0058b083  75eb                 jne 0x58b070
// 0058b085  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0058b08b  3bc3                 cmp eax, ebx
// 0058b08d  7409                 je 0x58b098
// 0058b08f  50                   push eax
// 0058b090  e8cd4b0a00           call 0x62fc62
// 0058b095  83c404               add esp, 4
// 0058b098  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0058b09e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 0058b0a4  899e94000000         mov dword ptr [esi + 0x94], ebx
// 0058b0aa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0058b0ad  3bc3                 cmp eax, ebx
// 0058b0af  7409                 je 0x58b0ba
// 0058b0b1  50                   push eax
// 0058b0b2  e8ab4b0a00           call 0x62fc62
// 0058b0b7  83c404               add esp, 4
// 0058b0ba  8d4e68               lea ecx, [esi + 0x68]
// 0058b0bd  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0058b0c0  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0058b0c6  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0058b0cc  c644242405           mov byte ptr [esp + 0x24], 5
// 0058b0d1  e88af1e7ff           call 0x40a260
// 0058b0d6  8b4660               mov eax, dword ptr [esi + 0x60]
// 0058b0d9  8b08                 mov ecx, dword ptr [eax]
// 0058b0db  8d7e5c               lea edi, [esi + 0x5c]
// 0058b0de  50                   push eax
// 0058b0df  57                   push edi
// 0058b0e0  51                   push ecx
// 0058b0e1  57                   push edi
// 0058b0e2  8d442424             lea eax, [esp + 0x24]
// 0058b0e6  50                   push eax
// 0058b0e7  8bcf                 mov ecx, edi
// 0058b0e9  c644243804           mov byte ptr [esp + 0x38], 4
// 0058b0ee  e86d83fbff           call 0x543460
// 0058b0f3  8b4704               mov eax, dword ptr [edi + 4]
// 0058b0f6  50                   push eax
// 0058b0f7  e8664b0a00           call 0x62fc62
// 0058b0fc  895f04               mov dword ptr [edi + 4], ebx
// 0058b0ff  895f08               mov dword ptr [edi + 8], ebx
// 0058b102  8b4654               mov eax, dword ptr [esi + 0x54]
// 0058b105  8b08                 mov ecx, dword ptr [eax]
// 0058b107  83c404               add esp, 4
// 0058b10a  8d7e50               lea edi, [esi + 0x50]
// 0058b10d  50                   push eax
// 0058b10e  57                   push edi
// 0058b10f  51                   push ecx
// 0058b110  57                   push edi
// 0058b111  8d4c2424             lea ecx, [esp + 0x24]
// 0058b115  51                   push ecx
// 0058b116  8bcf                 mov ecx, edi
// 0058b118  c644243803           mov byte ptr [esp + 0x38], 3
// 0058b11d  e83e83fbff           call 0x543460
// 0058b122  8b4704               mov eax, dword ptr [edi + 4]
// 0058b125  50                   push eax
// 0058b126  e8374b0a00           call 0x62fc62
// 0058b12b  895f04               mov dword ptr [edi + 4], ebx
// 0058b12e  895f08               mov dword ptr [edi + 8], ebx
// 0058b131  8b4644               mov eax, dword ptr [esi + 0x44]
// 0058b134  83c404               add esp, 4
// 0058b137  3bc3                 cmp eax, ebx
// 0058b139  7409                 je 0x58b144
// 0058b13b  50                   push eax
// 0058b13c  e8214b0a00           call 0x62fc62
// 0058b141  83c404               add esp, 4
// 0058b144  8d7e34               lea edi, [esi + 0x34]
// 0058b147  895e44               mov dword ptr [esi + 0x44], ebx
// 0058b14a  895e48               mov dword ptr [esi + 0x48], ebx
// 0058b14d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0058b150  8b4704               mov eax, dword ptr [edi + 4]
// 0058b153  8b08                 mov ecx, dword ptr [eax]
// 0058b155  50                   push eax
// 0058b156  57                   push edi
// 0058b157  51                   push ecx
// 0058b158  57                   push edi
// 0058b159  8d542424             lea edx, [esp + 0x24]
// 0058b15d  52                   push edx
// 0058b15e  8bcf                 mov ecx, edi
// 0058b160  c644243801           mov byte ptr [esp + 0x38], 1
// 0058b165  e8c6c20200           call 0x5b7430
// 0058b16a  8b4704               mov eax, dword ptr [edi + 4]
// 0058b16d  50                   push eax
// 0058b16e  e8ef4a0a00           call 0x62fc62
// 0058b173  895f04               mov dword ptr [edi + 4], ebx
// 0058b176  895f08               mov dword ptr [edi + 8], ebx
// 0058b179  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0058b17c  8b08                 mov ecx, dword ptr [eax]
// 0058b17e  83c404               add esp, 4
// 0058b181  8d7e28               lea edi, [esi + 0x28]
// 0058b184  50                   push eax
// 0058b185  57                   push edi
// 0058b186  51                   push ecx
// 0058b187  57                   push edi
// 0058b188  8d442424             lea eax, [esp + 0x24]
// 0058b18c  50                   push eax
// 0058b18d  8bcf                 mov ecx, edi
// 0058b18f  885c2438             mov byte ptr [esp + 0x38], bl
// 0058b193  e898c20200           call 0x5b7430
// 0058b198  8b4704               mov eax, dword ptr [edi + 4]
// 0058b19b  50                   push eax
// 0058b19c  e8c14a0a00           call 0x62fc62
// 0058b1a1  83c404               add esp, 4
// 0058b1a4  8bce                 mov ecx, esi
// 0058b1a6  895f04               mov dword ptr [edi + 4], ebx
// 0058b1a9  895f08               mov dword ptr [edi + 8], ebx
// 0058b1ac  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0058b1b4  e8c7c0ffff           call 0x587280
// 0058b1b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058b1bd  5f                   pop edi
// 0058b1be  5e                   pop esi
// 0058b1bf  5d                   pop ebp
// 0058b1c0  5b                   pop ebx
// 0058b1c1  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b1c8  83c418               add esp, 0x18
// 0058b1cb  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
