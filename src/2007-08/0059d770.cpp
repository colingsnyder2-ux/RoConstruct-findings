// roc 2007-08 0059d770  unit: RBX::VHopperBin::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d770
//
// 0059d770  6aff                 push -1
// 0059d772  6803637500           push 0x756303
// 0059d777  64a100000000         mov eax, dword ptr fs:[0]
// 0059d77d  50                   push eax
// 0059d77e  64892500000000       mov dword ptr fs:[0], esp
// 0059d785  83ec0c               sub esp, 0xc
// 0059d788  53                   push ebx
// 0059d789  55                   push ebp
// 0059d78a  56                   push esi
// 0059d78b  8bf1                 mov esi, ecx
// 0059d78d  57                   push edi
// 0059d78e  89742410             mov dword ptr [esp + 0x10], esi
// 0059d792  c70600217b00         mov dword ptr [esi], 0x7b2100
// 0059d798  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0059d79b  396e14               cmp dword ptr [esi + 0x14], ebp
// 0059d79e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0059d7a4  c744242408000000     mov dword ptr [esp + 0x24], 8
// 0059d7ac  7602                 jbe 0x59d7b0
// 0059d7ae  ffd3                 call ebx
// 0059d7b0  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0059d7b3  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0059d7b6  7602                 jbe 0x59d7ba
// 0059d7b8  ffd3                 call ebx
// 0059d7ba  33db                 xor ebx, ebx
// 0059d7bc  3bfd                 cmp edi, ebp
// 0059d7be  7415                 je 0x59d7d5
// 0059d7c0  8b0f                 mov ecx, dword ptr [edi]
// 0059d7c2  3bcb                 cmp ecx, ebx
// 0059d7c4  7408                 je 0x59d7ce
// 0059d7c6  8b01                 mov eax, dword ptr [ecx]
// 0059d7c8  8b10                 mov edx, dword ptr [eax]
// 0059d7ca  6a01                 push 1
// 0059d7cc  ffd2                 call edx
// 0059d7ce  83c704               add edi, 4
// 0059d7d1  3bfd                 cmp edi, ebp
// 0059d7d3  75eb                 jne 0x59d7c0
// 0059d7d5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0059d7db  3bc3                 cmp eax, ebx
// 0059d7dd  7409                 je 0x59d7e8
// 0059d7df  50                   push eax
// 0059d7e0  e87d240900           call 0x62fc62
// 0059d7e5  83c404               add esp, 4
// 0059d7e8  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0059d7ee  899e90000000         mov dword ptr [esi + 0x90], ebx
// 0059d7f4  899e94000000         mov dword ptr [esi + 0x94], ebx
// 0059d7fa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0059d7fd  3bc3                 cmp eax, ebx
// 0059d7ff  7409                 je 0x59d80a
// 0059d801  50                   push eax
// 0059d802  e85b240900           call 0x62fc62
// 0059d807  83c404               add esp, 4
// 0059d80a  8d4e68               lea ecx, [esi + 0x68]
// 0059d80d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0059d810  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0059d816  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0059d81c  c644242405           mov byte ptr [esp + 0x24], 5
// 0059d821  e83acae6ff           call 0x40a260
// 0059d826  8b4660               mov eax, dword ptr [esi + 0x60]
// 0059d829  8b08                 mov ecx, dword ptr [eax]
// 0059d82b  8d7e5c               lea edi, [esi + 0x5c]
// 0059d82e  50                   push eax
// 0059d82f  57                   push edi
// 0059d830  51                   push ecx
// 0059d831  57                   push edi
// 0059d832  8d442424             lea eax, [esp + 0x24]
// 0059d836  50                   push eax
// 0059d837  8bcf                 mov ecx, edi
// 0059d839  c644243804           mov byte ptr [esp + 0x38], 4
// 0059d83e  e81d5cfaff           call 0x543460
// 0059d843  8b4704               mov eax, dword ptr [edi + 4]
// 0059d846  50                   push eax
// 0059d847  e816240900           call 0x62fc62
// 0059d84c  895f04               mov dword ptr [edi + 4], ebx
// 0059d84f  895f08               mov dword ptr [edi + 8], ebx
// 0059d852  8b4654               mov eax, dword ptr [esi + 0x54]
// 0059d855  8b08                 mov ecx, dword ptr [eax]
// 0059d857  83c404               add esp, 4
// 0059d85a  8d7e50               lea edi, [esi + 0x50]
// 0059d85d  50                   push eax
// 0059d85e  57                   push edi
// 0059d85f  51                   push ecx
// 0059d860  57                   push edi
// 0059d861  8d4c2424             lea ecx, [esp + 0x24]
// 0059d865  51                   push ecx
// 0059d866  8bcf                 mov ecx, edi
// 0059d868  c644243803           mov byte ptr [esp + 0x38], 3
// 0059d86d  e8ee5bfaff           call 0x543460
// 0059d872  8b4704               mov eax, dword ptr [edi + 4]
// 0059d875  50                   push eax
// 0059d876  e8e7230900           call 0x62fc62
// 0059d87b  895f04               mov dword ptr [edi + 4], ebx
// 0059d87e  895f08               mov dword ptr [edi + 8], ebx
// 0059d881  8b4644               mov eax, dword ptr [esi + 0x44]
// 0059d884  83c404               add esp, 4
// 0059d887  3bc3                 cmp eax, ebx
// 0059d889  7409                 je 0x59d894
// 0059d88b  50                   push eax
// 0059d88c  e8d1230900           call 0x62fc62
// 0059d891  83c404               add esp, 4
// 0059d894  8d7e34               lea edi, [esi + 0x34]
// 0059d897  895e44               mov dword ptr [esi + 0x44], ebx
// 0059d89a  895e48               mov dword ptr [esi + 0x48], ebx
// 0059d89d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0059d8a0  8b4704               mov eax, dword ptr [edi + 4]
// 0059d8a3  8b08                 mov ecx, dword ptr [eax]
// 0059d8a5  50                   push eax
// 0059d8a6  57                   push edi
// 0059d8a7  51                   push ecx
// 0059d8a8  57                   push edi
// 0059d8a9  8d542424             lea edx, [esp + 0x24]
// 0059d8ad  52                   push edx
// 0059d8ae  8bcf                 mov ecx, edi
// 0059d8b0  c644243801           mov byte ptr [esp + 0x38], 1
// 0059d8b5  e8769b0100           call 0x5b7430
// 0059d8ba  8b4704               mov eax, dword ptr [edi + 4]
// 0059d8bd  50                   push eax
// 0059d8be  e89f230900           call 0x62fc62
// 0059d8c3  895f04               mov dword ptr [edi + 4], ebx
// 0059d8c6  895f08               mov dword ptr [edi + 8], ebx
// 0059d8c9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0059d8cc  8b08                 mov ecx, dword ptr [eax]
// 0059d8ce  83c404               add esp, 4
// 0059d8d1  8d7e28               lea edi, [esi + 0x28]
// 0059d8d4  50                   push eax
// 0059d8d5  57                   push edi
// 0059d8d6  51                   push ecx
// 0059d8d7  57                   push edi
// 0059d8d8  8d442424             lea eax, [esp + 0x24]
// 0059d8dc  50                   push eax
// 0059d8dd  8bcf                 mov ecx, edi
// 0059d8df  885c2438             mov byte ptr [esp + 0x38], bl
// 0059d8e3  e8489b0100           call 0x5b7430
// 0059d8e8  8b4704               mov eax, dword ptr [edi + 4]
// 0059d8eb  50                   push eax
// 0059d8ec  e871230900           call 0x62fc62
// 0059d8f1  83c404               add esp, 4
// 0059d8f4  8bce                 mov ecx, esi
// 0059d8f6  895f04               mov dword ptr [edi + 4], ebx
// 0059d8f9  895f08               mov dword ptr [edi + 8], ebx
// 0059d8fc  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0059d904  e87799feff           call 0x587280
// 0059d909  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059d90d  5f                   pop edi
// 0059d90e  5e                   pop esi
// 0059d90f  5d                   pop ebp
// 0059d910  5b                   pop ebx
// 0059d911  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d918  83c418               add esp, 0x18
// 0059d91b  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
