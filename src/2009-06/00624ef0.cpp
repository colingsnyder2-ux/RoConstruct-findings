// roc 2009-06 00624ef0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624ef0
//
// 00624ef0  6aff                 push -1
// 00624ef2  6890c28600           push 0x86c290
// 00624ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00624efd  50                   push eax
// 00624efe  64892500000000       mov dword ptr fs:[0], esp
// 00624f05  83ec40               sub esp, 0x40
// 00624f08  8b442454             mov eax, dword ptr [esp + 0x54]
// 00624f0c  53                   push ebx
// 00624f0d  56                   push esi
// 00624f0e  57                   push edi
// 00624f0f  8bf1                 mov esi, ecx
// 00624f11  50                   push eax
// 00624f12  8d4c2430             lea ecx, [esp + 0x30]
// 00624f16  51                   push ecx
// 00624f17  8bce                 mov ecx, esi
// 00624f19  e812660900           call 0x6bb530
// 00624f1e  8bf8                 mov edi, eax
// 00624f20  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00624f24  52                   push edx
// 00624f25  8d442410             lea eax, [esp + 0x10]
// 00624f29  50                   push eax
// 00624f2a  8bce                 mov ecx, esi
// 00624f2c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00624f34  e8f7650900           call 0x6bb530
// 00624f39  57                   push edi
// 00624f3a  50                   push eax
// 00624f3b  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00624f40  e83b3dfbff           call 0x5d8c80
// 00624f45  83c408               add esp, 8
// 00624f48  8d4c240c             lea ecx, [esp + 0xc]
// 00624f4c  8ad8                 mov bl, al
// 00624f4e  c644245400           mov byte ptr [esp + 0x54], 0
// 00624f53  ff15c4e48900         call dword ptr [0x89e4c4]
// 00624f59  8d4c242c             lea ecx, [esp + 0x2c]
// 00624f5d  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00624f65  ff15c4e48900         call dword ptr [0x89e4c4]
// 00624f6b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00624f6f  5f                   pop edi
// 00624f70  5e                   pop esi
// 00624f71  8ac3                 mov al, bl
// 00624f73  5b                   pop ebx
// 00624f74  64890d00000000       mov dword ptr fs:[0], ecx
// 00624f7b  83c44c               add esp, 0x4c
// 00624f7e  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
