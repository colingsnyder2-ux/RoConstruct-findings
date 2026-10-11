// roc 2012-06 0040d4d0  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040d4d0
//
// 0040d4d0  6aff                 push -1
// 0040d4d2  68b207ad00           push 0xad07b2
// 0040d4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0040d4dd  50                   push eax
// 0040d4de  64892500000000       mov dword ptr fs:[0], esp
// 0040d4e5  83ec38               sub esp, 0x38
// 0040d4e8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0040d4ec  53                   push ebx
// 0040d4ed  56                   push esi
// 0040d4ee  57                   push edi
// 0040d4ef  8bf1                 mov esi, ecx
// 0040d4f1  50                   push eax
// 0040d4f2  8d4c242c             lea ecx, [esp + 0x2c]
// 0040d4f6  51                   push ecx
// 0040d4f7  8bce                 mov ecx, esi
// 0040d4f9  e8923f3800           call 0x791490
// 0040d4fe  8bf8                 mov edi, eax
// 0040d500  8b542454             mov edx, dword ptr [esp + 0x54]
// 0040d504  52                   push edx
// 0040d505  8d442410             lea eax, [esp + 0x10]
// 0040d509  50                   push eax
// 0040d50a  8bce                 mov ecx, esi
// 0040d50c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0040d514  e8773f3800           call 0x791490
// 0040d519  57                   push edi
// 0040d51a  50                   push eax
// 0040d51b  c644245401           mov byte ptr [esp + 0x54], 1
// 0040d520  ff156026b200         call dword ptr [0xb22660]
// 0040d526  83c408               add esp, 8
// 0040d529  8d4c240c             lea ecx, [esp + 0xc]
// 0040d52d  8ad8                 mov bl, al
// 0040d52f  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0040d534  ff153c26b200         call dword ptr [0xb2263c]
// 0040d53a  8d4c2428             lea ecx, [esp + 0x28]
// 0040d53e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0040d546  ff153c26b200         call dword ptr [0xb2263c]
// 0040d54c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0040d550  5f                   pop edi
// 0040d551  5e                   pop esi
// 0040d552  8ac3                 mov al, bl
// 0040d554  5b                   pop ebx
// 0040d555  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d55c  83c444               add esp, 0x44
// 0040d55f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Message.cpp
