// roc 2007-03 0046d800  unit: seg_00460000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046d800
//
// 0046d800  6aff                 push -1
// 0046d802  6829677400           push 0x746729
// 0046d807  64a100000000         mov eax, dword ptr fs:[0]
// 0046d80d  50                   push eax
// 0046d80e  83ec20               sub esp, 0x20
// 0046d811  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d816  33c4                 xor eax, esp
// 0046d818  8944241c             mov dword ptr [esp + 0x1c], eax
// 0046d81c  56                   push esi
// 0046d81d  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d822  33c4                 xor eax, esp
// 0046d824  50                   push eax
// 0046d825  8d442428             lea eax, [esp + 0x28]
// 0046d829  64a300000000         mov dword ptr fs:[0], eax
// 0046d82f  e82cfcffff           call 0x46d460
// 0046d834  50                   push eax
// 0046d835  8d4c240c             lea ecx, [esp + 0xc]
// 0046d839  ff157ce77700         call dword ptr [0x77e77c]
// 0046d83f  8b35d8e67700         mov esi, dword ptr [0x77e6d8]
// 0046d845  8d442408             lea eax, [esp + 8]
// 0046d849  68d85a7900           push 0x795ad8
// 0046d84e  50                   push eax
// 0046d84f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0046d857  ffd6                 call esi
// 0046d859  83c408               add esp, 8
// 0046d85c  84c0                 test al, al
// 0046d85e  8d4c2408             lea ecx, [esp + 8]
// 0046d862  7412                 je 0x46d876
// 0046d864  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0046d86c  ff158ce77700         call dword ptr [0x77e78c]
// 0046d872  33c0                 xor eax, eax
// 0046d874  eb5f                 jmp 0x46d8d5
// 0046d876  68c45a7900           push 0x795ac4
// 0046d87b  51                   push ecx
// 0046d87c  ffd6                 call esi
// 0046d87e  83c408               add esp, 8
// 0046d881  84c0                 test al, al
// 0046d883  7419                 je 0x46d89e
// 0046d885  8d4c2408             lea ecx, [esp + 8]
// 0046d889  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0046d891  ff158ce77700         call dword ptr [0x77e78c]
// 0046d897  b801000000           mov eax, 1
// 0046d89c  eb37                 jmp 0x46d8d5
// 0046d89e  8d542408             lea edx, [esp + 8]
// 0046d8a2  68b85a7900           push 0x795ab8
// 0046d8a7  52                   push edx
// 0046d8a8  ffd6                 call esi
// 0046d8aa  83c408               add esp, 8
// 0046d8ad  84c0                 test al, al
// 0046d8af  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0046d8b7  8d4c2408             lea ecx, [esp + 8]
// 0046d8bb  740d                 je 0x46d8ca
// 0046d8bd  ff158ce77700         call dword ptr [0x77e78c]
// 0046d8c3  b802000000           mov eax, 2
// 0046d8c8  eb0b                 jmp 0x46d8d5
// 0046d8ca  ff158ce77700         call dword ptr [0x77e78c]
// 0046d8d0  b803000000           mov eax, 3
// 0046d8d5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046d8d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d8e0  59                   pop ecx
// 0046d8e1  5e                   pop esi
// 0046d8e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046d8e6  33cc                 xor ecx, esp
// 0046d8e8  e8b9151b00           call 0x61eea6
// 0046d8ed  83c42c               add esp, 0x2c
// 0046d8f0  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?computeVendor@GLCaps@G3D@@CA?AW4Vendor@12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
