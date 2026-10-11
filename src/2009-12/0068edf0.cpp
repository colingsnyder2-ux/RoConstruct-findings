// roc 2009-12 0068edf0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068edf0
//
// 0068edf0  6aff                 push -1
// 0068edf2  68a0669400           push 0x9466a0
// 0068edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0068edfd  50                   push eax
// 0068edfe  64892500000000       mov dword ptr fs:[0], esp
// 0068ee05  83ec40               sub esp, 0x40
// 0068ee08  8b442454             mov eax, dword ptr [esp + 0x54]
// 0068ee0c  53                   push ebx
// 0068ee0d  56                   push esi
// 0068ee0e  57                   push edi
// 0068ee0f  8bf1                 mov esi, ecx
// 0068ee11  50                   push eax
// 0068ee12  8d4c2430             lea ecx, [esp + 0x30]
// 0068ee16  51                   push ecx
// 0068ee17  8bce                 mov ecx, esi
// 0068ee19  e8c234dbff           call 0x4422e0
// 0068ee1e  8bf8                 mov edi, eax
// 0068ee20  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0068ee24  52                   push edx
// 0068ee25  8d442410             lea eax, [esp + 0x10]
// 0068ee29  50                   push eax
// 0068ee2a  8bce                 mov ecx, esi
// 0068ee2c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0068ee34  e8a734dbff           call 0x4422e0
// 0068ee39  57                   push edi
// 0068ee3a  50                   push eax
// 0068ee3b  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0068ee40  e8ab280200           call 0x6b16f0
// 0068ee45  83c408               add esp, 8
// 0068ee48  8d4c240c             lea ecx, [esp + 0xc]
// 0068ee4c  8ad8                 mov bl, al
// 0068ee4e  c644245400           mov byte ptr [esp + 0x54], 0
// 0068ee53  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068ee59  8d4c242c             lea ecx, [esp + 0x2c]
// 0068ee5d  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0068ee65  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068ee6b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0068ee6f  5f                   pop edi
// 0068ee70  5e                   pop esi
// 0068ee71  8ac3                 mov al, bl
// 0068ee73  5b                   pop ebx
// 0068ee74  64890d00000000       mov dword ptr fs:[0], ecx
// 0068ee7b  83c44c               add esp, 0x4c
// 0068ee7e  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Decal.cpp
