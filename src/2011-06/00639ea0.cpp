// roc 2011-06 00639ea0  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00639ea0
//
// 00639ea0  6aff                 push -1
// 00639ea2  6860b39e00           push 0x9eb360
// 00639ea7  64a100000000         mov eax, dword ptr fs:[0]
// 00639ead  50                   push eax
// 00639eae  64892500000000       mov dword ptr fs:[0], esp
// 00639eb5  83ec38               sub esp, 0x38
// 00639eb8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00639ebc  53                   push ebx
// 00639ebd  56                   push esi
// 00639ebe  57                   push edi
// 00639ebf  8bf1                 mov esi, ecx
// 00639ec1  50                   push eax
// 00639ec2  8d4c242c             lea ecx, [esp + 0x2c]
// 00639ec6  51                   push ecx
// 00639ec7  8bce                 mov ecx, esi
// 00639ec9  e802e6e0ff           call 0x4484d0
// 00639ece  8bf8                 mov edi, eax
// 00639ed0  8b542454             mov edx, dword ptr [esp + 0x54]
// 00639ed4  52                   push edx
// 00639ed5  8d442410             lea eax, [esp + 0x10]
// 00639ed9  50                   push eax
// 00639eda  8bce                 mov ecx, esi
// 00639edc  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00639ee4  e8e7e5e0ff           call 0x4484d0
// 00639ee9  57                   push edi
// 00639eea  50                   push eax
// 00639eeb  c644245401           mov byte ptr [esp + 0x54], 1
// 00639ef0  ff15ac04a400         call dword ptr [0xa404ac]
// 00639ef6  83c408               add esp, 8
// 00639ef9  8d4c240c             lea ecx, [esp + 0xc]
// 00639efd  8ad8                 mov bl, al
// 00639eff  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00639f04  ff15d004a400         call dword ptr [0xa404d0]
// 00639f0a  8d4c2428             lea ecx, [esp + 0x28]
// 00639f0e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00639f16  ff15d004a400         call dword ptr [0xa404d0]
// 00639f1c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00639f20  5f                   pop edi
// 00639f21  5e                   pop esi
// 00639f22  8ac3                 mov al, bl
// 00639f24  5b                   pop ebx
// 00639f25  64890d00000000       mov dword ptr fs:[0], ecx
// 00639f2c  83c444               add esp, 0x44
// 00639f2f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Message.cpp
