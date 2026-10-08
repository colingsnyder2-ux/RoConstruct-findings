// from server: 100% by auto
// roc 2009-06 0057c1e0  unit: G3D::TextInput::WrongSymbol  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c1e0
//
// 0057c1e0  6aff                 push -1
// 0057c1e2  68780a8600           push 0x860a78
// 0057c1e7  64a100000000         mov eax, dword ptr fs:[0]
// 0057c1ed  50                   push eax
// 0057c1ee  64892500000000       mov dword ptr fs:[0], esp
// 0057c1f5  83ec34               sub esp, 0x34
// 0057c1f8  56                   push esi
// 0057c1f9  57                   push edi
// 0057c1fa  33ff                 xor edi, edi
// 0057c1fc  8bf1                 mov esi, ecx
// 0057c1fe  897c2408             mov dword ptr [esp + 8], edi
// 0057c202  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0057c205  752c                 jne 0x57c233
// 0057c207  8d442410             lea eax, [esp + 0x10]
// 0057c20b  50                   push eax
// 0057c20c  e86feaffff           call 0x57ac80
// 0057c211  8d4c2410             lea ecx, [esp + 0x10]
// 0057c215  51                   push ecx
// 0057c216  8bce                 mov ecx, esi
// 0057c218  897c2448             mov dword ptr [esp + 0x48], edi
// 0057c21c  e87ffbffff           call 0x57bda0
// 0057c221  8d4c2410             lea ecx, [esp + 0x10]
// 0057c225  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0057c22d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057c233  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057c236  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0057c239  03d7                 add edx, edi
// 0057c23b  3bfa                 cmp edi, edx
// 0057c23d  7606                 jbe 0x57c245
// 0057c23f  ff15ace98900         call dword ptr [0x89e9ac]
// 0057c245  8b06                 mov eax, dword ptr [esi]
// 0057c247  8d4c2408             lea ecx, [esp + 8]
// 0057c24b  89442408             mov dword ptr [esp + 8], eax
// 0057c24f  897c240c             mov dword ptr [esp + 0xc], edi
// 0057c253  e808bee9ff           call 0x418060
// 0057c258  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0057c25c  8bf0                 mov esi, eax
// 0057c25e  56                   push esi
// 0057c25f  8bcf                 mov ecx, edi
// 0057c261  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057c267  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057c26a  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0057c26d  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057c270  895720               mov dword ptr [edi + 0x20], edx
// 0057c273  8b4624               mov eax, dword ptr [esi + 0x24]
// 0057c276  894724               mov dword ptr [edi + 0x24], eax
// 0057c279  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0057c27c  894f28               mov dword ptr [edi + 0x28], ecx
// 0057c27f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057c283  8bc7                 mov eax, edi
// 0057c285  5f                   pop edi
// 0057c286  5e                   pop esi
// 0057c287  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c28e  83c440               add esp, 0x40
// 0057c291  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peek@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
