// roc 2009-12 0046bf30  unit: Scintilla::CScintillaView  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046bf30
//
// 0046bf30  64a100000000         mov eax, dword ptr fs:[0]
// 0046bf36  6aff                 push -1
// 0046bf38  6838d59200           push 0x92d538
// 0046bf3d  50                   push eax
// 0046bf3e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046bf42  64892500000000       mov dword ptr fs:[0], esp
// 0046bf49  53                   push ebx
// 0046bf4a  55                   push ebp
// 0046bf4b  56                   push esi
// 0046bf4c  57                   push edi
// 0046bf4d  8bf1                 mov esi, ecx
// 0046bf4f  50                   push eax
// 0046bf50  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046bf55  ff155cde9800         call dword ptr [0x98de5c]
// 0046bf5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046bf5f  51                   push ecx
// 0046bf60  b9ecb5b000           mov ecx, 0xb0b5ec
// 0046bf65  ff155cde9800         call dword ptr [0x98de5c]
// 0046bf6b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046bf6f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0046bf73  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0046bf77  892df0b5b000         mov dword ptr [0xb0b5f0], ebp
// 0046bf7d  8915f8b5b000         mov dword ptr [0xb0b5f8], edx
// 0046bf83  c705f4b5b00001000000 mov dword ptr [0xb0b5f4], 1
// 0046bf8d  a3fcb5b000           mov dword ptr [0xb0b5fc], eax
// 0046bf92  e8877b3800           call 0x7f3b1e
// 0046bf97  8b4804               mov ecx, dword ptr [eax + 4]
// 0046bf9a  e861843800           call 0x7f4400
// 0046bf9f  33ff                 xor edi, edi
// 0046bfa1  6a01                 push 1
// 0046bfa3  57                   push edi
// 0046bfa4  8d5e58               lea ebx, [esi + 0x58]
// 0046bfa7  57                   push edi
// 0046bfa8  8bcb                 mov ecx, ebx
// 0046bfaa  897c2424             mov dword ptr [esp + 0x24], edi
// 0046bfae  e81de3ffff           call 0x46a2d0
// 0046bfb3  57                   push edi
// 0046bfb4  6a01                 push 1
// 0046bfb6  8bcb                 mov ecx, ebx
// 0046bfb8  e8a3e3ffff           call 0x46a360
// 0046bfbd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0046bfc1  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046bfc5  a1f4b5b000           mov eax, dword ptr [0xb0b5f4]
// 0046bfca  51                   push ecx
// 0046bfcb  52                   push edx
// 0046bfcc  897c2428             mov dword ptr [esp + 0x28], edi
// 0046bfd0  8b3e                 mov edi, dword ptr [esi]
// 0046bfd2  55                   push ebp
// 0046bfd3  50                   push eax
// 0046bfd4  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046bfd9  81c7b4010000         add edi, 0x1b4
// 0046bfdf  ff1580de9800         call dword ptr [0x98de80]
// 0046bfe5  8b17                 mov edx, dword ptr [edi]
// 0046bfe7  50                   push eax
// 0046bfe8  8bce                 mov ecx, esi
// 0046bfea  ffd2                 call edx
// 0046bfec  85c0                 test eax, eax
// 0046bfee  7455                 je 0x46c045
// 0046bff0  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0046bff8  eb06                 jmp 0x46c000
// 0046bffa  8d9b00000000         lea ebx, [ebx]
// 0046c000  6a01                 push 1
// 0046c002  b9ecb5b000           mov ecx, 0xb0b5ec
// 0046c007  ff1580de9800         call dword ptr [0x98de80]
// 0046c00d  50                   push eax
// 0046c00e  8bcb                 mov ecx, ebx
// 0046c010  e84be4ffff           call 0x46a460
// 0046c015  8b442430             mov eax, dword ptr [esp + 0x30]
// 0046c019  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046c01d  8b15f4b5b000         mov edx, dword ptr [0xb0b5f4]
// 0046c023  8b3e                 mov edi, dword ptr [esi]
// 0046c025  50                   push eax
// 0046c026  51                   push ecx
// 0046c027  55                   push ebp
// 0046c028  52                   push edx
// 0046c029  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046c02e  81c7b4010000         add edi, 0x1b4
// 0046c034  ff1580de9800         call dword ptr [0x98de80]
// 0046c03a  50                   push eax
// 0046c03b  8b07                 mov eax, dword ptr [edi]
// 0046c03d  8bce                 mov ecx, esi
// 0046c03f  ffd0                 call eax
// 0046c041  85c0                 test eax, eax
// 0046c043  75bb                 jne 0x46c000
// 0046c045  6a00                 push 0
// 0046c047  6a00                 push 0
// 0046c049  8bcb                 mov ecx, ebx
// 0046c04b  e810e3ffff           call 0x46a360
// 0046c050  837c242000           cmp dword ptr [esp + 0x20], 0
// 0046c055  752d                 jne 0x46c084
// 0046c057  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0046c05b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046c05f  a1f4b5b000           mov eax, dword ptr [0xb0b5f4]
// 0046c064  8b3e                 mov edi, dword ptr [esi]
// 0046c066  6a01                 push 1
// 0046c068  51                   push ecx
// 0046c069  52                   push edx
// 0046c06a  55                   push ebp
// 0046c06b  50                   push eax
// 0046c06c  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046c071  81c7a8010000         add edi, 0x1a8
// 0046c077  ff1580de9800         call dword ptr [0x98de80]
// 0046c07d  8b17                 mov edx, dword ptr [edi]
// 0046c07f  50                   push eax
// 0046c080  8bce                 mov ecx, esi
// 0046c082  ffd2                 call edx
// 0046c084  8d4c2430             lea ecx, [esp + 0x30]
// 0046c088  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0046c090  e81beefdff           call 0x44aeb0
// 0046c095  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046c099  5f                   pop edi
// 0046c09a  5e                   pop esi
// 0046c09b  5d                   pop ebp
// 0046c09c  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c0a3  5b                   pop ebx
// 0046c0a4  83c40c               add esp, 0xc
// 0046c0a7  c21400               ret 0x14
// copied from an identical function in another client (function ?replaceAll@View@@QAEXPBD0HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_replaceangleimportcast4a016e70e72eb016.cpp