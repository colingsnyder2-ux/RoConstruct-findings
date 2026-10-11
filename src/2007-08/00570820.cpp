// roc 2007-08 00570820  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570820
//
// 00570820  6aff                 push -1
// 00570822  68c81a7500           push 0x751ac8
// 00570827  64a100000000         mov eax, dword ptr fs:[0]
// 0057082d  50                   push eax
// 0057082e  64892500000000       mov dword ptr fs:[0], esp
// 00570835  83ec10               sub esp, 0x10
// 00570838  53                   push ebx
// 00570839  55                   push ebp
// 0057083a  56                   push esi
// 0057083b  57                   push edi
// 0057083c  8bf1                 mov esi, ecx
// 0057083e  e87dffffff           call 0x5707c0
// 00570843  8bc8                 mov ecx, eax
// 00570845  89442410             mov dword ptr [esp + 0x10], eax
// 00570849  e8024f1b00           call 0x725750
// 0057084e  c644241401           mov byte ptr [esp + 0x14], 1
// 00570853  8b5e08               mov ebx, dword ptr [esi + 8]
// 00570856  395e04               cmp dword ptr [esi + 4], ebx
// 00570859  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0057085f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00570867  7602                 jbe 0x57086b
// 00570869  ffd5                 call ebp
// 0057086b  8b7e04               mov edi, dword ptr [esi + 4]
// 0057086e  3b7e08               cmp edi, dword ptr [esi + 8]
// 00570871  7602                 jbe 0x570875
// 00570873  ffd5                 call ebp
// 00570875  6a00                 push 0
// 00570877  6860005700           push 0x570060
// 0057087c  8d442438             lea eax, [esp + 0x38]
// 00570880  50                   push eax
// 00570881  53                   push ebx
// 00570882  57                   push edi
// 00570883  897c2430             mov dword ptr [esp + 0x30], edi
// 00570887  e814f9ffff           call 0x5701a0
// 0057088c  8b7e08               mov edi, dword ptr [esi + 8]
// 0057088f  83c414               add esp, 0x14
// 00570892  397e04               cmp dword ptr [esi + 4], edi
// 00570895  8bd8                 mov ebx, eax
// 00570897  7602                 jbe 0x57089b
// 00570899  ffd5                 call ebp
// 0057089b  85f6                 test esi, esi
// 0057089d  7404                 je 0x5708a3
// 0057089f  3bf6                 cmp esi, esi
// 005708a1  7402                 je 0x5708a5
// 005708a3  ffd5                 call ebp
// 005708a5  3bdf                 cmp ebx, edi
// 005708a7  7415                 je 0x5708be
// 005708a9  85f6                 test esi, esi
// 005708ab  7502                 jne 0x5708af
// 005708ad  ffd5                 call ebp
// 005708af  3b5e08               cmp ebx, dword ptr [esi + 8]
// 005708b2  7202                 jb 0x5708b6
// 005708b4  ffd5                 call ebp
// 005708b6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005708ba  390b                 cmp dword ptr [ebx], ecx
// 005708bc  7413                 je 0x5708d1
// 005708be  8d542430             lea edx, [esp + 0x30]
// 005708c2  52                   push edx
// 005708c3  53                   push ebx
// 005708c4  56                   push esi
// 005708c5  8d442424             lea eax, [esp + 0x24]
// 005708c9  50                   push eax
// 005708ca  8bce                 mov ecx, esi
// 005708cc  e8afd60500           call 0x5cdf80
// 005708d1  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005708d4  83c610               add esi, 0x10
// 005708d7  3b7e08               cmp edi, dword ptr [esi + 8]
// 005708da  7604                 jbe 0x5708e0
// 005708dc  ffd5                 call ebp
// 005708de  8bff                 mov edi, edi
// 005708e0  8b5e08               mov ebx, dword ptr [esi + 8]
// 005708e3  395e04               cmp dword ptr [esi + 4], ebx
// 005708e6  7602                 jbe 0x5708ea
// 005708e8  ffd5                 call ebp
// 005708ea  3bf6                 cmp esi, esi
// 005708ec  7402                 je 0x5708f0
// 005708ee  ffd5                 call ebp
// 005708f0  3bfb                 cmp edi, ebx
// 005708f2  741f                 je 0x570913
// 005708f4  3b7e08               cmp edi, dword ptr [esi + 8]
// 005708f7  7202                 jb 0x5708fb
// 005708f9  ffd5                 call ebp
// 005708fb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005708ff  51                   push ecx
// 00570900  8b0f                 mov ecx, dword ptr [edi]
// 00570902  e819ffffff           call 0x570820
// 00570907  3b7e08               cmp edi, dword ptr [esi + 8]
// 0057090a  7202                 jb 0x57090e
// 0057090c  ffd5                 call ebp
// 0057090e  83c704               add edi, 4
// 00570911  ebcd                 jmp 0x5708e0
// 00570913  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00570917  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0057091f  e84c4e1b00           call 0x725770
// 00570924  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00570928  5f                   pop edi
// 00570929  5e                   pop esi
// 0057092a  5d                   pop ebp
// 0057092b  5b                   pop ebx
// 0057092c  64890d00000000       mov dword ptr fs:[0], ecx
// 00570933  83c41c               add esp, 0x1c
// 00570936  c20400               ret 4
// library openrbx-client/App\reflection\reflection_function.cpp (function ?declare@?$MemberDescriptorContainer@VFunctionDescriptor@Reflection@RBX@@@Reflection@RBX@@QAEXPAVFunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_function.cpp
