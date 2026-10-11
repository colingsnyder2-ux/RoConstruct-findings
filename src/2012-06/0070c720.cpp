// roc 2012-06 0070c720  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070c720
//
// 0070c720  6aff                 push -1
// 0070c722  68b0dfab00           push 0xabdfb0
// 0070c727  64a100000000         mov eax, dword ptr fs:[0]
// 0070c72d  50                   push eax
// 0070c72e  64892500000000       mov dword ptr fs:[0], esp
// 0070c735  83ec40               sub esp, 0x40
// 0070c738  8b442454             mov eax, dword ptr [esp + 0x54]
// 0070c73c  53                   push ebx
// 0070c73d  56                   push esi
// 0070c73e  57                   push edi
// 0070c73f  8bf1                 mov esi, ecx
// 0070c741  50                   push eax
// 0070c742  8d4c2430             lea ecx, [esp + 0x30]
// 0070c746  51                   push ecx
// 0070c747  8bce                 mov ecx, esi
// 0070c749  e8424d0800           call 0x791490
// 0070c74e  8bf8                 mov edi, eax
// 0070c750  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0070c754  52                   push edx
// 0070c755  8d442410             lea eax, [esp + 0x10]
// 0070c759  50                   push eax
// 0070c75a  8bce                 mov ecx, esi
// 0070c75c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0070c764  e8274d0800           call 0x791490
// 0070c769  57                   push edi
// 0070c76a  50                   push eax
// 0070c76b  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0070c770  e8cb6f0300           call 0x743740
// 0070c775  83c408               add esp, 8
// 0070c778  8d4c240c             lea ecx, [esp + 0xc]
// 0070c77c  8ad8                 mov bl, al
// 0070c77e  c644245400           mov byte ptr [esp + 0x54], 0
// 0070c783  ff153c26b200         call dword ptr [0xb2263c]
// 0070c789  8d4c242c             lea ecx, [esp + 0x2c]
// 0070c78d  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0070c795  ff153c26b200         call dword ptr [0xb2263c]
// 0070c79b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0070c79f  5f                   pop edi
// 0070c7a0  5e                   pop esi
// 0070c7a1  8ac3                 mov al, bl
// 0070c7a3  5b                   pop ebx
// 0070c7a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0070c7ab  83c44c               add esp, 0x4c
// 0070c7ae  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
