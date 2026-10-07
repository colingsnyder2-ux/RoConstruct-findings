// roc 2007-08 0050f1a0  unit: G3D::TextInput::WrongSymbol  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f1a0
//
// 0050f1a0  6aff                 push -1
// 0050f1a2  68a8007500           push 0x7500a8
// 0050f1a7  64a100000000         mov eax, dword ptr fs:[0]
// 0050f1ad  50                   push eax
// 0050f1ae  83ec34               sub esp, 0x34
// 0050f1b1  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050f1b6  33c4                 xor eax, esp
// 0050f1b8  89442430             mov dword ptr [esp + 0x30], eax
// 0050f1bc  53                   push ebx
// 0050f1bd  55                   push ebp
// 0050f1be  56                   push esi
// 0050f1bf  57                   push edi
// 0050f1c0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050f1c5  33c4                 xor eax, esp
// 0050f1c7  50                   push eax
// 0050f1c8  8d442448             lea eax, [esp + 0x48]
// 0050f1cc  64a300000000         mov dword ptr fs:[0], eax
// 0050f1d2  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0050f1d6  33ff                 xor edi, edi
// 0050f1d8  8bf1                 mov esi, ecx
// 0050f1da  397e10               cmp dword ptr [esi + 0x10], edi
// 0050f1dd  897c2414             mov dword ptr [esp + 0x14], edi
// 0050f1e1  752c                 jne 0x50f20f
// 0050f1e3  8d442418             lea eax, [esp + 0x18]
// 0050f1e7  50                   push eax
// 0050f1e8  e883e9ffff           call 0x50db70
// 0050f1ed  8d4c2418             lea ecx, [esp + 0x18]
// 0050f1f1  51                   push ecx
// 0050f1f2  8bce                 mov ecx, esi
// 0050f1f4  897c2454             mov dword ptr [esp + 0x54], edi
// 0050f1f8  e833fbffff           call 0x50ed30
// 0050f1fd  8d4c2418             lea ecx, [esp + 0x18]
// 0050f201  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0050f209  ff15ace67700         call dword ptr [0x77e6ac]
// 0050f20f  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0050f212  8b5610               mov edx, dword ptr [esi + 0x10]
// 0050f215  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0050f21b  03d7                 add edx, edi
// 0050f21d  3bfa                 cmp edi, edx
// 0050f21f  7602                 jbe 0x50f223
// 0050f221  ffd5                 call ebp
// 0050f223  8b4610               mov eax, dword ptr [esi + 0x10]
// 0050f226  03460c               add eax, dword ptr [esi + 0xc]
// 0050f229  3bf8                 cmp edi, eax
// 0050f22b  7202                 jb 0x50f22f
// 0050f22d  ffd5                 call ebp
// 0050f22f  8b4608               mov eax, dword ptr [esi + 8]
// 0050f232  3bc7                 cmp eax, edi
// 0050f234  7702                 ja 0x50f238
// 0050f236  2bf8                 sub edi, eax
// 0050f238  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050f23b  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0050f23e  56                   push esi
// 0050f23f  8bcb                 mov ecx, ebx
// 0050f241  ff159ce67700         call dword ptr [0x77e69c]
// 0050f247  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0050f24a  89531c               mov dword ptr [ebx + 0x1c], edx
// 0050f24d  8b4620               mov eax, dword ptr [esi + 0x20]
// 0050f250  894320               mov dword ptr [ebx + 0x20], eax
// 0050f253  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0050f256  894b24               mov dword ptr [ebx + 0x24], ecx
// 0050f259  8b5628               mov edx, dword ptr [esi + 0x28]
// 0050f25c  895328               mov dword ptr [ebx + 0x28], edx
// 0050f25f  8bc3                 mov eax, ebx
// 0050f261  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0050f265  64890d00000000       mov dword ptr fs:[0], ecx
// 0050f26c  59                   pop ecx
// 0050f26d  5f                   pop edi
// 0050f26e  5e                   pop esi
// 0050f26f  5d                   pop ebp
// 0050f270  5b                   pop ebx
// 0050f271  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0050f275  33cc                 xor ecx, esp
// 0050f277  e8a2171200           call 0x630a1e
// 0050f27c  83c440               add esp, 0x40
// 0050f27f  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peek@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
