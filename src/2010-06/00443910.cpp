// roc 2010-06 00443910  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00443910
//
// 00443910  6aff                 push -1
// 00443912  6822e19900           push 0x99e122
// 00443917  64a100000000         mov eax, dword ptr fs:[0]
// 0044391d  50                   push eax
// 0044391e  64892500000000       mov dword ptr fs:[0], esp
// 00443925  83ec38               sub esp, 0x38
// 00443928  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0044392c  53                   push ebx
// 0044392d  56                   push esi
// 0044392e  57                   push edi
// 0044392f  8bf1                 mov esi, ecx
// 00443931  50                   push eax
// 00443932  8d4c242c             lea ecx, [esp + 0x2c]
// 00443936  51                   push ecx
// 00443937  8bce                 mov ecx, esi
// 00443939  e812a31b00           call 0x5fdc50
// 0044393e  8bf8                 mov edi, eax
// 00443940  8b542454             mov edx, dword ptr [esp + 0x54]
// 00443944  52                   push edx
// 00443945  8d442410             lea eax, [esp + 0x10]
// 00443949  50                   push eax
// 0044394a  8bce                 mov ecx, esi
// 0044394c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00443954  e8f7a21b00           call 0x5fdc50
// 00443959  57                   push edi
// 0044395a  50                   push eax
// 0044395b  c644245401           mov byte ptr [esp + 0x54], 1
// 00443960  ff158ca49e00         call dword ptr [0x9ea48c]
// 00443966  83c408               add esp, 8
// 00443969  8d4c240c             lea ecx, [esp + 0xc]
// 0044396d  8ad8                 mov bl, al
// 0044396f  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00443974  ff1500a49e00         call dword ptr [0x9ea400]
// 0044397a  8d4c2428             lea ecx, [esp + 0x28]
// 0044397e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00443986  ff1500a49e00         call dword ptr [0x9ea400]
// 0044398c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00443990  5f                   pop edi
// 00443991  5e                   pop esi
// 00443992  8ac3                 mov al, bl
// 00443994  5b                   pop ebx
// 00443995  64890d00000000       mov dword ptr fs:[0], ecx
// 0044399c  83c444               add esp, 0x44
// 0044399f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Message.cpp
