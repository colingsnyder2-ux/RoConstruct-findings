// roc 2007-08 005e49e0  unit: RBX::VInstance::?$FilteredSelection  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e49e0
//
// 005e49e0  6aff                 push -1
// 005e49e2  681ba47500           push 0x75a41b
// 005e49e7  64a100000000         mov eax, dword ptr fs:[0]
// 005e49ed  50                   push eax
// 005e49ee  64892500000000       mov dword ptr fs:[0], esp
// 005e49f5  83ec18               sub esp, 0x18
// 005e49f8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e49fc  85c0                 test eax, eax
// 005e49fe  53                   push ebx
// 005e49ff  56                   push esi
// 005e4a00  57                   push edi
// 005e4a01  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e4a09  7431                 je 0x5e4a3c
// 005e4a0b  8d4c241c             lea ecx, [esp + 0x1c]
// 005e4a0f  51                   push ecx
// 005e4a10  8d88a4000000         lea ecx, [eax + 0xa4]
// 005e4a16  e8d596e3ff           call 0x41e0f0
// 005e4a1b  50                   push eax
// 005e4a1c  8d542418             lea edx, [esp + 0x18]
// 005e4a20  52                   push edx
// 005e4a21  e8bad7e7ff           call 0x4621e0
// 005e4a26  83c408               add esp, 8
// 005e4a29  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e4a2d  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 005e4a35  bb03000000           mov ebx, 3
// 005e4a3a  eb17                 jmp 0x5e4a53
// 005e4a3c  33f6                 xor esi, esi
// 005e4a3e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e4a46  89742410             mov dword ptr [esp + 0x10], esi
// 005e4a4a  8d44240c             lea eax, [esp + 0xc]
// 005e4a4e  bb04000000           mov ebx, 4
// 005e4a53  8b08                 mov ecx, dword ptr [eax]
// 005e4a55  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005e4a59  890f                 mov dword ptr [edi], ecx
// 005e4a5b  8b4004               mov eax, dword ptr [eax + 4]
// 005e4a5e  85c0                 test eax, eax
// 005e4a60  894704               mov dword ptr [edi + 4], eax
// 005e4a63  740c                 je 0x5e4a71
// 005e4a65  83c004               add eax, 4
// 005e4a68  ba01000000           mov edx, 1
// 005e4a6d  f00fc110             lock xadd dword ptr [eax], edx
// 005e4a71  83cb08               or ebx, 8
// 005e4a74  f6c304               test bl, 4
// 005e4a77  7435                 je 0x5e4aae
// 005e4a79  83e3fb               and ebx, 0xfffffffb
// 005e4a7c  85f6                 test esi, esi
// 005e4a7e  895c240c             mov dword ptr [esp + 0xc], ebx
// 005e4a82  742a                 je 0x5e4aae
// 005e4a84  8d4604               lea eax, [esi + 4]
// 005e4a87  83c9ff               or ecx, 0xffffffff
// 005e4a8a  f00fc108             lock xadd dword ptr [eax], ecx
// 005e4a8e  751e                 jne 0x5e4aae
// 005e4a90  8b16                 mov edx, dword ptr [esi]
// 005e4a92  8b4204               mov eax, dword ptr [edx + 4]
// 005e4a95  8bce                 mov ecx, esi
// 005e4a97  ffd0                 call eax
// 005e4a99  8d4e08               lea ecx, [esi + 8]
// 005e4a9c  83caff               or edx, 0xffffffff
// 005e4a9f  f00fc111             lock xadd dword ptr [ecx], edx
// 005e4aa3  7509                 jne 0x5e4aae
// 005e4aa5  8b06                 mov eax, dword ptr [esi]
// 005e4aa7  8b5008               mov edx, dword ptr [eax + 8]
// 005e4aaa  8bce                 mov ecx, esi
// 005e4aac  ffd2                 call edx
// 005e4aae  f6c302               test bl, 2
// 005e4ab1  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 005e4ab9  7439                 je 0x5e4af4
// 005e4abb  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e4abf  83e3fd               and ebx, 0xfffffffd
// 005e4ac2  85f6                 test esi, esi
// 005e4ac4  895c240c             mov dword ptr [esp + 0xc], ebx
// 005e4ac8  742a                 je 0x5e4af4
// 005e4aca  8d4604               lea eax, [esi + 4]
// 005e4acd  83c9ff               or ecx, 0xffffffff
// 005e4ad0  f00fc108             lock xadd dword ptr [eax], ecx
// 005e4ad4  751e                 jne 0x5e4af4
// 005e4ad6  8b16                 mov edx, dword ptr [esi]
// 005e4ad8  8b4204               mov eax, dword ptr [edx + 4]
// 005e4adb  8bce                 mov ecx, esi
// 005e4add  ffd0                 call eax
// 005e4adf  8d4e08               lea ecx, [esi + 8]
// 005e4ae2  83caff               or edx, 0xffffffff
// 005e4ae5  f00fc111             lock xadd dword ptr [ecx], edx
// 005e4ae9  7509                 jne 0x5e4af4
// 005e4aeb  8b06                 mov eax, dword ptr [esi]
// 005e4aed  8b5008               mov edx, dword ptr [eax + 8]
// 005e4af0  8bce                 mov ecx, esi
// 005e4af2  ffd2                 call edx
// 005e4af4  f6c301               test bl, 1
// 005e4af7  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005e4aff  7439                 je 0x5e4b3a
// 005e4b01  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e4b05  83e3fe               and ebx, 0xfffffffe
// 005e4b08  85f6                 test esi, esi
// 005e4b0a  895c240c             mov dword ptr [esp + 0xc], ebx
// 005e4b0e  742a                 je 0x5e4b3a
// 005e4b10  8d4604               lea eax, [esi + 4]
// 005e4b13  83c9ff               or ecx, 0xffffffff
// 005e4b16  f00fc108             lock xadd dword ptr [eax], ecx
// 005e4b1a  751e                 jne 0x5e4b3a
// 005e4b1c  8b16                 mov edx, dword ptr [esi]
// 005e4b1e  8b4204               mov eax, dword ptr [edx + 4]
// 005e4b21  8bce                 mov ecx, esi
// 005e4b23  ffd0                 call eax
// 005e4b25  8d4e08               lea ecx, [esi + 8]
// 005e4b28  83caff               or edx, 0xffffffff
// 005e4b2b  f00fc111             lock xadd dword ptr [ecx], edx
// 005e4b2f  7509                 jne 0x5e4b3a
// 005e4b31  8b06                 mov eax, dword ptr [esi]
// 005e4b33  8b5008               mov edx, dword ptr [eax + 8]
// 005e4b36  8bce                 mov ecx, esi
// 005e4b38  ffd2                 call edx
// 005e4b3a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e4b3e  8bc7                 mov eax, edi
// 005e4b40  5f                   pop edi
// 005e4b41  5e                   pop esi
// 005e4b42  5b                   pop ebx
// 005e4b43  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4b4a  83c424               add esp, 0x24
// 005e4b4d  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_from@VGuiItem@RBX@@@RBX@@YA?AV?$shared_ptr@VGuiItem@RBX@@@boost@@PAVGuiItem@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
