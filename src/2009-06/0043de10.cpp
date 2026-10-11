// roc 2009-06 0043de10  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043de10
//
// 0043de10  6aff                 push -1
// 0043de12  68c23f8700           push 0x873fc2
// 0043de17  64a100000000         mov eax, dword ptr fs:[0]
// 0043de1d  50                   push eax
// 0043de1e  64892500000000       mov dword ptr fs:[0], esp
// 0043de25  83ec38               sub esp, 0x38
// 0043de28  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0043de2c  53                   push ebx
// 0043de2d  56                   push esi
// 0043de2e  57                   push edi
// 0043de2f  8bf1                 mov esi, ecx
// 0043de31  50                   push eax
// 0043de32  8d4c242c             lea ecx, [esp + 0x2c]
// 0043de36  51                   push ecx
// 0043de37  8bce                 mov ecx, esi
// 0043de39  e8f2d62700           call 0x6bb530
// 0043de3e  8bf8                 mov edi, eax
// 0043de40  8b542454             mov edx, dword ptr [esp + 0x54]
// 0043de44  52                   push edx
// 0043de45  8d442410             lea eax, [esp + 0x10]
// 0043de49  50                   push eax
// 0043de4a  8bce                 mov ecx, esi
// 0043de4c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0043de54  e8d7d62700           call 0x6bb530
// 0043de59  57                   push edi
// 0043de5a  50                   push eax
// 0043de5b  c644245401           mov byte ptr [esp + 0x54], 1
// 0043de60  ff1544e48900         call dword ptr [0x89e444]
// 0043de66  83c408               add esp, 8
// 0043de69  8d4c240c             lea ecx, [esp + 0xc]
// 0043de6d  8ad8                 mov bl, al
// 0043de6f  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0043de74  ff15c4e48900         call dword ptr [0x89e4c4]
// 0043de7a  8d4c2428             lea ecx, [esp + 0x28]
// 0043de7e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0043de86  ff15c4e48900         call dword ptr [0x89e4c4]
// 0043de8c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0043de90  5f                   pop edi
// 0043de91  5e                   pop esi
// 0043de92  8ac3                 mov al, bl
// 0043de94  5b                   pop ebx
// 0043de95  64890d00000000       mov dword ptr fs:[0], ecx
// 0043de9c  83c444               add esp, 0x44
// 0043de9f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Message.cpp
