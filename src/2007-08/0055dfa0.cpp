// roc 2007-08 0055dfa0  unit: RBX::DataModel  size: 298 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055dfa0
//
// 0055dfa0  6aff                 push -1
// 0055dfa2  6898657500           push 0x756598
// 0055dfa7  64a100000000         mov eax, dword ptr fs:[0]
// 0055dfad  50                   push eax
// 0055dfae  64892500000000       mov dword ptr fs:[0], esp
// 0055dfb5  83ec10               sub esp, 0x10
// 0055dfb8  53                   push ebx
// 0055dfb9  55                   push ebp
// 0055dfba  56                   push esi
// 0055dfbb  57                   push edi
// 0055dfbc  8bf9                 mov edi, ecx
// 0055dfbe  8d442430             lea eax, [esp + 0x30]
// 0055dfc2  50                   push eax
// 0055dfc3  8d4c2414             lea ecx, [esp + 0x14]
// 0055dfc7  8d7704               lea esi, [edi + 4]
// 0055dfca  51                   push ecx
// 0055dfcb  8bce                 mov ecx, esi
// 0055dfcd  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0055dfd5  e806f9ffff           call 0x55d8e0
// 0055dfda  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0055dfde  85db                 test ebx, ebx
// 0055dfe0  8b5604               mov edx, dword ptr [esi + 4]
// 0055dfe3  8954241c             mov dword ptr [esp + 0x1c], edx
// 0055dfe7  7404                 je 0x55dfed
// 0055dfe9  3bde                 cmp ebx, esi
// 0055dfeb  7406                 je 0x55dff3
// 0055dfed  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055dff3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0055dff7  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0055dffb  7564                 jne 0x55e061
// 0055dffd  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 0055e000  8d442430             lea eax, [esp + 0x30]
// 0055e004  50                   push eax
// 0055e005  8bce                 mov ecx, esi
// 0055e007  e894feffff           call 0x55dea0
// 0055e00c  8938                 mov dword ptr [eax], edi
// 0055e00e  8b442434             mov eax, dword ptr [esp + 0x34]
// 0055e012  85c0                 test eax, eax
// 0055e014  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0055e01c  742c                 je 0x55e04a
// 0055e01e  8bf0                 mov esi, eax
// 0055e020  83c004               add eax, 4
// 0055e023  83c9ff               or ecx, 0xffffffff
// 0055e026  f00fc108             lock xadd dword ptr [eax], ecx
// 0055e02a  751e                 jne 0x55e04a
// 0055e02c  8b16                 mov edx, dword ptr [esi]
// 0055e02e  8b4204               mov eax, dword ptr [edx + 4]
// 0055e031  8bce                 mov ecx, esi
// 0055e033  ffd0                 call eax
// 0055e035  8d4e08               lea ecx, [esi + 8]
// 0055e038  83caff               or edx, 0xffffffff
// 0055e03b  f00fc111             lock xadd dword ptr [ecx], edx
// 0055e03f  7509                 jne 0x55e04a
// 0055e041  8b06                 mov eax, dword ptr [esi]
// 0055e043  8b5008               mov edx, dword ptr [eax + 8]
// 0055e046  8bce                 mov ecx, esi
// 0055e048  ffd2                 call edx
// 0055e04a  8bc7                 mov eax, edi
// 0055e04c  5f                   pop edi
// 0055e04d  5e                   pop esi
// 0055e04e  5d                   pop ebp
// 0055e04f  5b                   pop ebx
// 0055e050  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055e054  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e05b  83c41c               add esp, 0x1c
// 0055e05e  c20800               ret 8
// 0055e061  85db                 test ebx, ebx
// 0055e063  7506                 jne 0x55e06b
// 0055e065  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055e06b  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0055e06e  7506                 jne 0x55e076
// 0055e070  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055e076  8b742434             mov esi, dword ptr [esp + 0x34]
// 0055e07a  85f6                 test esi, esi
// 0055e07c  8b6d14               mov ebp, dword ptr [ebp + 0x14]
// 0055e07f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0055e087  742a                 je 0x55e0b3
// 0055e089  8d4604               lea eax, [esi + 4]
// 0055e08c  83c9ff               or ecx, 0xffffffff
// 0055e08f  f00fc108             lock xadd dword ptr [eax], ecx
// 0055e093  751e                 jne 0x55e0b3
// 0055e095  8b16                 mov edx, dword ptr [esi]
// 0055e097  8b4204               mov eax, dword ptr [edx + 4]
// 0055e09a  8bce                 mov ecx, esi
// 0055e09c  ffd0                 call eax
// 0055e09e  8d4e08               lea ecx, [esi + 8]
// 0055e0a1  83caff               or edx, 0xffffffff
// 0055e0a4  f00fc111             lock xadd dword ptr [ecx], edx
// 0055e0a8  7509                 jne 0x55e0b3
// 0055e0aa  8b06                 mov eax, dword ptr [esi]
// 0055e0ac  8b5008               mov edx, dword ptr [eax + 8]
// 0055e0af  8bce                 mov ecx, esi
// 0055e0b1  ffd2                 call edx
// 0055e0b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055e0b7  5f                   pop edi
// 0055e0b8  5e                   pop esi
// 0055e0b9  8bc5                 mov eax, ebp
// 0055e0bb  5d                   pop ebp
// 0055e0bc  5b                   pop ebx
// 0055e0bd  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e0c4  83c41c               add esp, 0x1c
// 0055e0c7  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getHandleIndex@XmlWriter@@QAEHVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
