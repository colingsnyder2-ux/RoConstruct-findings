// roc 2008-06 00618a40  unit: RBX::VFlag::?$FactoryProduct  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618a40
//
// 00618a40  6aff                 push -1
// 00618a42  68fb7b7c00           push 0x7c7bfb
// 00618a47  64a100000000         mov eax, dword ptr fs:[0]
// 00618a4d  50                   push eax
// 00618a4e  64892500000000       mov dword ptr fs:[0], esp
// 00618a55  83ec18               sub esp, 0x18
// 00618a58  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00618a5c  53                   push ebx
// 00618a5d  56                   push esi
// 00618a5e  57                   push edi
// 00618a5f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00618a67  85c0                 test eax, eax
// 00618a69  7431                 je 0x618a9c
// 00618a6b  8d4c241c             lea ecx, [esp + 0x1c]
// 00618a6f  51                   push ecx
// 00618a70  8d88e4000000         lea ecx, [eax + 0xe4]
// 00618a76  e81525e1ff           call 0x42af90
// 00618a7b  50                   push eax
// 00618a7c  8d542418             lea edx, [esp + 0x18]
// 00618a80  52                   push edx
// 00618a81  e8ea95e8ff           call 0x4a2070
// 00618a86  83c408               add esp, 8
// 00618a89  8b742410             mov esi, dword ptr [esp + 0x10]
// 00618a8d  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 00618a95  bb03000000           mov ebx, 3
// 00618a9a  eb15                 jmp 0x618ab1
// 00618a9c  33f6                 xor esi, esi
// 00618a9e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00618aa6  89742410             mov dword ptr [esp + 0x10], esi
// 00618aaa  8d44240c             lea eax, [esp + 0xc]
// 00618aae  8d5e04               lea ebx, [esi + 4]
// 00618ab1  8b08                 mov ecx, dword ptr [eax]
// 00618ab3  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00618ab7  890f                 mov dword ptr [edi], ecx
// 00618ab9  8b4004               mov eax, dword ptr [eax + 4]
// 00618abc  894704               mov dword ptr [edi + 4], eax
// 00618abf  85c0                 test eax, eax
// 00618ac1  740c                 je 0x618acf
// 00618ac3  83c004               add eax, 4
// 00618ac6  ba01000000           mov edx, 1
// 00618acb  f00fc110             lock xadd dword ptr [eax], edx
// 00618acf  83cb08               or ebx, 8
// 00618ad2  f6c304               test bl, 4
// 00618ad5  7435                 je 0x618b0c
// 00618ad7  83e3fb               and ebx, 0xfffffffb
// 00618ada  895c240c             mov dword ptr [esp + 0xc], ebx
// 00618ade  85f6                 test esi, esi
// 00618ae0  742a                 je 0x618b0c
// 00618ae2  8d4604               lea eax, [esi + 4]
// 00618ae5  83c9ff               or ecx, 0xffffffff
// 00618ae8  f00fc108             lock xadd dword ptr [eax], ecx
// 00618aec  751e                 jne 0x618b0c
// 00618aee  8b16                 mov edx, dword ptr [esi]
// 00618af0  8b4204               mov eax, dword ptr [edx + 4]
// 00618af3  8bce                 mov ecx, esi
// 00618af5  ffd0                 call eax
// 00618af7  8d4e08               lea ecx, [esi + 8]
// 00618afa  83caff               or edx, 0xffffffff
// 00618afd  f00fc111             lock xadd dword ptr [ecx], edx
// 00618b01  7509                 jne 0x618b0c
// 00618b03  8b06                 mov eax, dword ptr [esi]
// 00618b05  8b5008               mov edx, dword ptr [eax + 8]
// 00618b08  8bce                 mov ecx, esi
// 00618b0a  ffd2                 call edx
// 00618b0c  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00618b14  f6c302               test bl, 2
// 00618b17  7439                 je 0x618b52
// 00618b19  8b742418             mov esi, dword ptr [esp + 0x18]
// 00618b1d  83e3fd               and ebx, 0xfffffffd
// 00618b20  895c240c             mov dword ptr [esp + 0xc], ebx
// 00618b24  85f6                 test esi, esi
// 00618b26  742a                 je 0x618b52
// 00618b28  8d4604               lea eax, [esi + 4]
// 00618b2b  83c9ff               or ecx, 0xffffffff
// 00618b2e  f00fc108             lock xadd dword ptr [eax], ecx
// 00618b32  751e                 jne 0x618b52
// 00618b34  8b16                 mov edx, dword ptr [esi]
// 00618b36  8b4204               mov eax, dword ptr [edx + 4]
// 00618b39  8bce                 mov ecx, esi
// 00618b3b  ffd0                 call eax
// 00618b3d  8d4e08               lea ecx, [esi + 8]
// 00618b40  83caff               or edx, 0xffffffff
// 00618b43  f00fc111             lock xadd dword ptr [ecx], edx
// 00618b47  7509                 jne 0x618b52
// 00618b49  8b06                 mov eax, dword ptr [esi]
// 00618b4b  8b5008               mov edx, dword ptr [eax + 8]
// 00618b4e  8bce                 mov ecx, esi
// 00618b50  ffd2                 call edx
// 00618b52  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00618b5a  f6c301               test bl, 1
// 00618b5d  7439                 je 0x618b98
// 00618b5f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00618b63  83e3fe               and ebx, 0xfffffffe
// 00618b66  895c240c             mov dword ptr [esp + 0xc], ebx
// 00618b6a  85f6                 test esi, esi
// 00618b6c  742a                 je 0x618b98
// 00618b6e  8d4604               lea eax, [esi + 4]
// 00618b71  83c9ff               or ecx, 0xffffffff
// 00618b74  f00fc108             lock xadd dword ptr [eax], ecx
// 00618b78  751e                 jne 0x618b98
// 00618b7a  8b16                 mov edx, dword ptr [esi]
// 00618b7c  8b4204               mov eax, dword ptr [edx + 4]
// 00618b7f  8bce                 mov ecx, esi
// 00618b81  ffd0                 call eax
// 00618b83  8d4e08               lea ecx, [esi + 8]
// 00618b86  83caff               or edx, 0xffffffff
// 00618b89  f00fc111             lock xadd dword ptr [ecx], edx
// 00618b8d  7509                 jne 0x618b98
// 00618b8f  8b06                 mov eax, dword ptr [esi]
// 00618b91  8b5008               mov edx, dword ptr [eax + 8]
// 00618b94  8bce                 mov ecx, esi
// 00618b96  ffd2                 call edx
// 00618b98  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00618b9c  8bc7                 mov eax, edi
// 00618b9e  5f                   pop edi
// 00618b9f  5e                   pop esi
// 00618ba0  5b                   pop ebx
// 00618ba1  64890d00000000       mov dword ptr fs:[0], ecx
// 00618ba8  83c424               add esp, 0x24
// 00618bab  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ??$shared_from@VGuiItem@RBX@@@RBX@@YA?AV?$shared_ptr@VGuiItem@RBX@@@boost@@PAVGuiItem@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
