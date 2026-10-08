// roc 2007-03 005cfb20  unit: seg_005c0000  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cfb20
//
// 005cfb20  64a100000000         mov eax, dword ptr fs:[0]
// 005cfb26  6aff                 push -1
// 005cfb28  68a8d57400           push 0x74d5a8
// 005cfb2d  50                   push eax
// 005cfb2e  64892500000000       mov dword ptr fs:[0], esp
// 005cfb35  53                   push ebx
// 005cfb36  56                   push esi
// 005cfb37  57                   push edi
// 005cfb38  8bd9                 mov ebx, ecx
// 005cfb3a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005cfb3e  6a00                 push 0
// 005cfb40  68f0cd8800           push 0x88cdf0
// 005cfb45  6864108800           push 0x881064
// 005cfb4a  6a00                 push 0
// 005cfb4c  57                   push edi
// 005cfb4d  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005cfb55  e86cf60400           call 0x61f1c6
// 005cfb5a  8bf0                 mov esi, eax
// 005cfb5c  83c414               add esp, 0x14
// 005cfb5f  85f6                 test esi, esi
// 005cfb61  741d                 je 0x5cfb80
// 005cfb63  8dbbd8feffff         lea edi, [ebx - 0x128]
// 005cfb69  57                   push edi
// 005cfb6a  e8a1fbebff           call 0x48f710
// 005cfb6f  83c404               add esp, 4
// 005cfb72  3bf0                 cmp esi, eax
// 005cfb74  755a                 jne 0x5cfbd0
// 005cfb76  56                   push esi
// 005cfb77  8bcf                 mov ecx, edi
// 005cfb79  e802f4ffff           call 0x5cef80
// 005cfb7e  eb50                 jmp 0x5cfbd0
// 005cfb80  6a00                 push 0
// 005cfb82  68acb88800           push 0x88b8ac
// 005cfb87  6864108800           push 0x881064
// 005cfb8c  6a00                 push 0
// 005cfb8e  57                   push edi
// 005cfb8f  e832f60400           call 0x61f1c6
// 005cfb94  83c414               add esp, 0x14
// 005cfb97  85c0                 test eax, eax
// 005cfb99  740e                 je 0x5cfba9
// 005cfb9b  50                   push eax
// 005cfb9c  8d8bd8feffff         lea ecx, [ebx - 0x128]
// 005cfba2  e809f5ffff           call 0x5cf0b0
// 005cfba7  eb27                 jmp 0x5cfbd0
// 005cfba9  6a00                 push 0
// 005cfbab  68b4358a00           push 0x8a35b4
// 005cfbb0  6864108800           push 0x881064
// 005cfbb5  6a00                 push 0
// 005cfbb7  57                   push edi
// 005cfbb8  e809f60400           call 0x61f1c6
// 005cfbbd  83c414               add esp, 0x14
// 005cfbc0  85c0                 test eax, eax
// 005cfbc2  740c                 je 0x5cfbd0
// 005cfbc4  50                   push eax
// 005cfbc5  8d8bd8feffff         lea ecx, [ebx - 0x128]
// 005cfbcb  e8c0fdffff           call 0x5cf990
// 005cfbd0  8b742424             mov esi, dword ptr [esp + 0x24]
// 005cfbd4  85f6                 test esi, esi
// 005cfbd6  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005cfbde  742a                 je 0x5cfc0a
// 005cfbe0  8d4604               lea eax, [esi + 4]
// 005cfbe3  83c9ff               or ecx, 0xffffffff
// 005cfbe6  f00fc108             lock xadd dword ptr [eax], ecx
// 005cfbea  751e                 jne 0x5cfc0a
// 005cfbec  8b16                 mov edx, dword ptr [esi]
// 005cfbee  8b4204               mov eax, dword ptr [edx + 4]
// 005cfbf1  8bce                 mov ecx, esi
// 005cfbf3  ffd0                 call eax
// 005cfbf5  8d4e08               lea ecx, [esi + 8]
// 005cfbf8  83caff               or edx, 0xffffffff
// 005cfbfb  f00fc111             lock xadd dword ptr [ecx], edx
// 005cfbff  7509                 jne 0x5cfc0a
// 005cfc01  8b06                 mov eax, dword ptr [esi]
// 005cfc03  8b5008               mov edx, dword ptr [eax + 8]
// 005cfc06  8bce                 mov ecx, esi
// 005cfc08  ffd2                 call edx
// 005cfc0a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cfc0e  5f                   pop edi
// 005cfc0f  5e                   pop esi
// 005cfc10  64890d00000000       mov dword ptr fs:[0], ecx
// 005cfc17  5b                   pop ebx
// 005cfc18  83c40c               add esp, 0xc
// 005cfc1b  c20c00               ret 0xc
// library rbxgs/v8datamodel\LocakBackpack.cpp (function ?onEvent@LocalBackpack@RBX@@EAEXPBVInstance@2@UChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/LocakBackpack.cpp
