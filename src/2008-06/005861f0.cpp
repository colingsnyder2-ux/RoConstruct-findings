// roc 2008-06 005861f0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005861f0
//
// 005861f0  6aff                 push -1
// 005861f2  68e0547d00           push 0x7d54e0
// 005861f7  64a100000000         mov eax, dword ptr fs:[0]
// 005861fd  50                   push eax
// 005861fe  64892500000000       mov dword ptr fs:[0], esp
// 00586205  83ec40               sub esp, 0x40
// 00586208  8b442454             mov eax, dword ptr [esp + 0x54]
// 0058620c  53                   push ebx
// 0058620d  56                   push esi
// 0058620e  57                   push edi
// 0058620f  8bf1                 mov esi, ecx
// 00586211  50                   push eax
// 00586212  8d4c2430             lea ecx, [esp + 0x30]
// 00586216  51                   push ecx
// 00586217  8bce                 mov ecx, esi
// 00586219  e892450900           call 0x61a7b0
// 0058621e  8bf8                 mov edi, eax
// 00586220  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00586224  52                   push edx
// 00586225  8d442410             lea eax, [esp + 0x10]
// 00586229  50                   push eax
// 0058622a  8bce                 mov ecx, esi
// 0058622c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00586234  e877450900           call 0x61a7b0
// 00586239  57                   push edi
// 0058623a  50                   push eax
// 0058623b  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00586240  e82b5bfdff           call 0x55bd70
// 00586245  83c408               add esp, 8
// 00586248  8d4c240c             lea ecx, [esp + 0xc]
// 0058624c  8ad8                 mov bl, al
// 0058624e  c644245400           mov byte ptr [esp + 0x54], 0
// 00586253  ff1568248000         call dword ptr [0x802468]
// 00586259  8d4c242c             lea ecx, [esp + 0x2c]
// 0058625d  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00586265  ff1568248000         call dword ptr [0x802468]
// 0058626b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0058626f  5f                   pop edi
// 00586270  5e                   pop esi
// 00586271  8ac3                 mov al, bl
// 00586273  5b                   pop ebx
// 00586274  64890d00000000       mov dword ptr fs:[0], ecx
// 0058627b  83c44c               add esp, 0x4c
// 0058627e  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
