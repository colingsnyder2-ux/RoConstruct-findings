// roc 2007-08 00576c00  unit: RBX::PartInstance  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576c00
//
// 00576c00  6aff                 push -1
// 00576c02  6803637500           push 0x756303
// 00576c07  64a100000000         mov eax, dword ptr fs:[0]
// 00576c0d  50                   push eax
// 00576c0e  64892500000000       mov dword ptr fs:[0], esp
// 00576c15  83ec0c               sub esp, 0xc
// 00576c18  53                   push ebx
// 00576c19  55                   push ebp
// 00576c1a  56                   push esi
// 00576c1b  8bf1                 mov esi, ecx
// 00576c1d  57                   push edi
// 00576c1e  89742410             mov dword ptr [esp + 0x10], esi
// 00576c22  c70614ac7a00         mov dword ptr [esi], 0x7aac14
// 00576c28  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00576c2b  396e14               cmp dword ptr [esi + 0x14], ebp
// 00576c2e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 00576c34  c744242408000000     mov dword ptr [esp + 0x24], 8
// 00576c3c  7602                 jbe 0x576c40
// 00576c3e  ffd3                 call ebx
// 00576c40  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00576c43  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00576c46  7602                 jbe 0x576c4a
// 00576c48  ffd3                 call ebx
// 00576c4a  33db                 xor ebx, ebx
// 00576c4c  3bfd                 cmp edi, ebp
// 00576c4e  7415                 je 0x576c65
// 00576c50  8b0f                 mov ecx, dword ptr [edi]
// 00576c52  3bcb                 cmp ecx, ebx
// 00576c54  7408                 je 0x576c5e
// 00576c56  8b01                 mov eax, dword ptr [ecx]
// 00576c58  8b10                 mov edx, dword ptr [eax]
// 00576c5a  6a01                 push 1
// 00576c5c  ffd2                 call edx
// 00576c5e  83c704               add edi, 4
// 00576c61  3bfd                 cmp edi, ebp
// 00576c63  75eb                 jne 0x576c50
// 00576c65  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00576c6b  3bc3                 cmp eax, ebx
// 00576c6d  7409                 je 0x576c78
// 00576c6f  50                   push eax
// 00576c70  e8ed8f0b00           call 0x62fc62
// 00576c75  83c404               add esp, 4
// 00576c78  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 00576c7e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 00576c84  899e94000000         mov dword ptr [esi + 0x94], ebx
// 00576c8a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00576c8d  3bc3                 cmp eax, ebx
// 00576c8f  7409                 je 0x576c9a
// 00576c91  50                   push eax
// 00576c92  e8cb8f0b00           call 0x62fc62
// 00576c97  83c404               add esp, 4
// 00576c9a  8d4e68               lea ecx, [esi + 0x68]
// 00576c9d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00576ca0  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00576ca6  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00576cac  c644242405           mov byte ptr [esp + 0x24], 5
// 00576cb1  e8aa35e9ff           call 0x40a260
// 00576cb6  8b4660               mov eax, dword ptr [esi + 0x60]
// 00576cb9  8b08                 mov ecx, dword ptr [eax]
// 00576cbb  8d7e5c               lea edi, [esi + 0x5c]
// 00576cbe  50                   push eax
// 00576cbf  57                   push edi
// 00576cc0  51                   push ecx
// 00576cc1  57                   push edi
// 00576cc2  8d442424             lea eax, [esp + 0x24]
// 00576cc6  50                   push eax
// 00576cc7  8bcf                 mov ecx, edi
// 00576cc9  c644243804           mov byte ptr [esp + 0x38], 4
// 00576cce  e88dc7fcff           call 0x543460
// 00576cd3  8b4704               mov eax, dword ptr [edi + 4]
// 00576cd6  50                   push eax
// 00576cd7  e8868f0b00           call 0x62fc62
// 00576cdc  895f04               mov dword ptr [edi + 4], ebx
// 00576cdf  895f08               mov dword ptr [edi + 8], ebx
// 00576ce2  8b4654               mov eax, dword ptr [esi + 0x54]
// 00576ce5  8b08                 mov ecx, dword ptr [eax]
// 00576ce7  83c404               add esp, 4
// 00576cea  8d7e50               lea edi, [esi + 0x50]
// 00576ced  50                   push eax
// 00576cee  57                   push edi
// 00576cef  51                   push ecx
// 00576cf0  57                   push edi
// 00576cf1  8d4c2424             lea ecx, [esp + 0x24]
// 00576cf5  51                   push ecx
// 00576cf6  8bcf                 mov ecx, edi
// 00576cf8  c644243803           mov byte ptr [esp + 0x38], 3
// 00576cfd  e85ec7fcff           call 0x543460
// 00576d02  8b4704               mov eax, dword ptr [edi + 4]
// 00576d05  50                   push eax
// 00576d06  e8578f0b00           call 0x62fc62
// 00576d0b  895f04               mov dword ptr [edi + 4], ebx
// 00576d0e  895f08               mov dword ptr [edi + 8], ebx
// 00576d11  8b4644               mov eax, dword ptr [esi + 0x44]
// 00576d14  83c404               add esp, 4
// 00576d17  3bc3                 cmp eax, ebx
// 00576d19  7409                 je 0x576d24
// 00576d1b  50                   push eax
// 00576d1c  e8418f0b00           call 0x62fc62
// 00576d21  83c404               add esp, 4
// 00576d24  8d7e34               lea edi, [esi + 0x34]
// 00576d27  895e44               mov dword ptr [esi + 0x44], ebx
// 00576d2a  895e48               mov dword ptr [esi + 0x48], ebx
// 00576d2d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00576d30  8b4704               mov eax, dword ptr [edi + 4]
// 00576d33  8b08                 mov ecx, dword ptr [eax]
// 00576d35  50                   push eax
// 00576d36  57                   push edi
// 00576d37  51                   push ecx
// 00576d38  57                   push edi
// 00576d39  8d542424             lea edx, [esp + 0x24]
// 00576d3d  52                   push edx
// 00576d3e  8bcf                 mov ecx, edi
// 00576d40  c644243801           mov byte ptr [esp + 0x38], 1
// 00576d45  e8e6060400           call 0x5b7430
// 00576d4a  8b4704               mov eax, dword ptr [edi + 4]
// 00576d4d  50                   push eax
// 00576d4e  e80f8f0b00           call 0x62fc62
// 00576d53  895f04               mov dword ptr [edi + 4], ebx
// 00576d56  895f08               mov dword ptr [edi + 8], ebx
// 00576d59  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00576d5c  8b08                 mov ecx, dword ptr [eax]
// 00576d5e  83c404               add esp, 4
// 00576d61  8d7e28               lea edi, [esi + 0x28]
// 00576d64  50                   push eax
// 00576d65  57                   push edi
// 00576d66  51                   push ecx
// 00576d67  57                   push edi
// 00576d68  8d442424             lea eax, [esp + 0x24]
// 00576d6c  50                   push eax
// 00576d6d  8bcf                 mov ecx, edi
// 00576d6f  885c2438             mov byte ptr [esp + 0x38], bl
// 00576d73  e8b8060400           call 0x5b7430
// 00576d78  8b4704               mov eax, dword ptr [edi + 4]
// 00576d7b  50                   push eax
// 00576d7c  e8e18e0b00           call 0x62fc62
// 00576d81  83c404               add esp, 4
// 00576d84  8bce                 mov ecx, esi
// 00576d86  895f04               mov dword ptr [edi + 4], ebx
// 00576d89  895f08               mov dword ptr [edi + 8], ebx
// 00576d8c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00576d94  e8e7040100           call 0x587280
// 00576d99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00576d9d  5f                   pop edi
// 00576d9e  5e                   pop esi
// 00576d9f  5d                   pop ebp
// 00576da0  5b                   pop ebx
// 00576da1  64890d00000000       mov dword ptr fs:[0], ecx
// 00576da8  83c418               add esp, 0x18
// 00576dab  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
