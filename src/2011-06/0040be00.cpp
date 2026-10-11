// roc 2011-06 0040be00  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040be00
//
// 0040be00  6aff                 push -1
// 0040be02  6892f79e00           push 0x9ef792
// 0040be07  64a100000000         mov eax, dword ptr fs:[0]
// 0040be0d  50                   push eax
// 0040be0e  64892500000000       mov dword ptr fs:[0], esp
// 0040be15  83ec38               sub esp, 0x38
// 0040be18  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0040be1c  53                   push ebx
// 0040be1d  56                   push esi
// 0040be1e  57                   push edi
// 0040be1f  8bf1                 mov esi, ecx
// 0040be21  50                   push eax
// 0040be22  8d4c242c             lea ecx, [esp + 0x2c]
// 0040be26  51                   push ecx
// 0040be27  8bce                 mov ecx, esi
// 0040be29  e8a2c60300           call 0x4484d0
// 0040be2e  8bf8                 mov edi, eax
// 0040be30  8b542454             mov edx, dword ptr [esp + 0x54]
// 0040be34  52                   push edx
// 0040be35  8d442410             lea eax, [esp + 0x10]
// 0040be39  50                   push eax
// 0040be3a  8bce                 mov ecx, esi
// 0040be3c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0040be44  e887c60300           call 0x4484d0
// 0040be49  57                   push edi
// 0040be4a  50                   push eax
// 0040be4b  c644245401           mov byte ptr [esp + 0x54], 1
// 0040be50  ff15ac04a400         call dword ptr [0xa404ac]
// 0040be56  83c408               add esp, 8
// 0040be59  8d4c240c             lea ecx, [esp + 0xc]
// 0040be5d  8ad8                 mov bl, al
// 0040be5f  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0040be64  ff15d004a400         call dword ptr [0xa404d0]
// 0040be6a  8d4c2428             lea ecx, [esp + 0x28]
// 0040be6e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0040be76  ff15d004a400         call dword ptr [0xa404d0]
// 0040be7c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0040be80  5f                   pop edi
// 0040be81  5e                   pop esi
// 0040be82  8ac3                 mov al, bl
// 0040be84  5b                   pop ebx
// 0040be85  64890d00000000       mov dword ptr fs:[0], ecx
// 0040be8c  83c444               add esp, 0x44
// 0040be8f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Message.cpp
