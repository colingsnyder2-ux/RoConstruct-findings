// roc 2007-08 005e3a10  unit: RBX::Unlocked  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3a10
//
// 005e3a10  6aff                 push -1
// 005e3a12  68abab7500           push 0x75abab
// 005e3a17  64a100000000         mov eax, dword ptr fs:[0]
// 005e3a1d  50                   push eax
// 005e3a1e  64892500000000       mov dword ptr fs:[0], esp
// 005e3a25  51                   push ecx
// 005e3a26  56                   push esi
// 005e3a27  57                   push edi
// 005e3a28  8bf9                 mov edi, ecx
// 005e3a2a  897c2408             mov dword ptr [esp + 8], edi
// 005e3a2e  8b7710               mov esi, dword ptr [edi + 0x10]
// 005e3a31  85f6                 test esi, esi
// 005e3a33  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e3a3b  742a                 je 0x5e3a67
// 005e3a3d  8d4604               lea eax, [esi + 4]
// 005e3a40  83c9ff               or ecx, 0xffffffff
// 005e3a43  f00fc108             lock xadd dword ptr [eax], ecx
// 005e3a47  751e                 jne 0x5e3a67
// 005e3a49  8b16                 mov edx, dword ptr [esi]
// 005e3a4b  8b4204               mov eax, dword ptr [edx + 4]
// 005e3a4e  8bce                 mov ecx, esi
// 005e3a50  ffd0                 call eax
// 005e3a52  8d4e08               lea ecx, [esi + 8]
// 005e3a55  83caff               or edx, 0xffffffff
// 005e3a58  f00fc111             lock xadd dword ptr [ecx], edx
// 005e3a5c  7509                 jne 0x5e3a67
// 005e3a5e  8b06                 mov eax, dword ptr [esi]
// 005e3a60  8b5008               mov edx, dword ptr [eax + 8]
// 005e3a63  8bce                 mov ecx, esi
// 005e3a65  ffd2                 call edx
// 005e3a67  8b7708               mov esi, dword ptr [edi + 8]
// 005e3a6a  85f6                 test esi, esi
// 005e3a6c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e3a74  742a                 je 0x5e3aa0
// 005e3a76  8d4604               lea eax, [esi + 4]
// 005e3a79  83c9ff               or ecx, 0xffffffff
// 005e3a7c  f00fc108             lock xadd dword ptr [eax], ecx
// 005e3a80  751e                 jne 0x5e3aa0
// 005e3a82  8b16                 mov edx, dword ptr [esi]
// 005e3a84  8b4204               mov eax, dword ptr [edx + 4]
// 005e3a87  8bce                 mov ecx, esi
// 005e3a89  ffd0                 call eax
// 005e3a8b  8d4e08               lea ecx, [esi + 8]
// 005e3a8e  83caff               or edx, 0xffffffff
// 005e3a91  f00fc111             lock xadd dword ptr [ecx], edx
// 005e3a95  7509                 jne 0x5e3aa0
// 005e3a97  8b06                 mov eax, dword ptr [esi]
// 005e3a99  8b5008               mov edx, dword ptr [eax + 8]
// 005e3a9c  8bce                 mov ecx, esi
// 005e3a9e  ffd2                 call edx
// 005e3aa0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e3aa4  5f                   pop edi
// 005e3aa5  5e                   pop esi
// 005e3aa6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3aad  83c410               add esp, 0x10
// 005e3ab0  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??1PartByLocalCharacter@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
