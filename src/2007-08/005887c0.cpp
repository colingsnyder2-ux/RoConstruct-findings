// roc 2007-08 005887c0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005887c0
//
// 005887c0  6aff                 push -1
// 005887c2  68a0607500           push 0x7560a0
// 005887c7  64a100000000         mov eax, dword ptr fs:[0]
// 005887cd  50                   push eax
// 005887ce  64892500000000       mov dword ptr fs:[0], esp
// 005887d5  83ec40               sub esp, 0x40
// 005887d8  8b442454             mov eax, dword ptr [esp + 0x54]
// 005887dc  53                   push ebx
// 005887dd  56                   push esi
// 005887de  57                   push edi
// 005887df  8bf1                 mov esi, ecx
// 005887e1  50                   push eax
// 005887e2  8d4c2430             lea ecx, [esp + 0x30]
// 005887e6  51                   push ecx
// 005887e7  8bce                 mov ecx, esi
// 005887e9  e892720300           call 0x5bfa80
// 005887ee  8bf8                 mov edi, eax
// 005887f0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 005887f4  52                   push edx
// 005887f5  8d442410             lea eax, [esp + 0x10]
// 005887f9  50                   push eax
// 005887fa  8bce                 mov ecx, esi
// 005887fc  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00588804  e877720300           call 0x5bfa80
// 00588809  57                   push edi
// 0058880a  50                   push eax
// 0058880b  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00588810  e8bbc7fbff           call 0x544fd0
// 00588815  83c408               add esp, 8
// 00588818  8d4c240c             lea ecx, [esp + 0xc]
// 0058881c  8ad8                 mov bl, al
// 0058881e  c644245400           mov byte ptr [esp + 0x54], 0
// 00588823  ff15ace67700         call dword ptr [0x77e6ac]
// 00588829  8d4c242c             lea ecx, [esp + 0x2c]
// 0058882d  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00588835  ff15ace67700         call dword ptr [0x77e6ac]
// 0058883b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0058883f  5f                   pop edi
// 00588840  5e                   pop esi
// 00588841  8ac3                 mov al, bl
// 00588843  5b                   pop ebx
// 00588844  64890d00000000       mov dword ptr fs:[0], ecx
// 0058884b  83c44c               add esp, 0x4c
// 0058884e  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
