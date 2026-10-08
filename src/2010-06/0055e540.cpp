// from server: 100% by auto
// roc 2010-06 0055e540  unit: G3D::TextInput::WrongSymbol  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e540
//
// 0055e540  6aff                 push -1
// 0055e542  6878169900           push 0x991678
// 0055e547  64a100000000         mov eax, dword ptr fs:[0]
// 0055e54d  50                   push eax
// 0055e54e  64892500000000       mov dword ptr fs:[0], esp
// 0055e555  83ec34               sub esp, 0x34
// 0055e558  56                   push esi
// 0055e559  57                   push edi
// 0055e55a  33ff                 xor edi, edi
// 0055e55c  8bf1                 mov esi, ecx
// 0055e55e  897c2408             mov dword ptr [esp + 8], edi
// 0055e562  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0055e565  752c                 jne 0x55e593
// 0055e567  8d442410             lea eax, [esp + 0x10]
// 0055e56b  50                   push eax
// 0055e56c  e86feaffff           call 0x55cfe0
// 0055e571  8d4c2410             lea ecx, [esp + 0x10]
// 0055e575  51                   push ecx
// 0055e576  8bce                 mov ecx, esi
// 0055e578  897c2448             mov dword ptr [esp + 0x48], edi
// 0055e57c  e87ffbffff           call 0x55e100
// 0055e581  8d4c2410             lea ecx, [esp + 0x10]
// 0055e585  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0055e58d  ff1500a49e00         call dword ptr [0x9ea400]
// 0055e593  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0055e596  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0055e599  03d7                 add edx, edi
// 0055e59b  3bfa                 cmp edi, edx
// 0055e59d  7606                 jbe 0x55e5a5
// 0055e59f  ff150ca99e00         call dword ptr [0x9ea90c]
// 0055e5a5  8b06                 mov eax, dword ptr [esi]
// 0055e5a7  8d4c2408             lea ecx, [esp + 8]
// 0055e5ab  89442408             mov dword ptr [esp + 8], eax
// 0055e5af  897c240c             mov dword ptr [esp + 0xc], edi
// 0055e5b3  e858510700           call 0x5d3710
// 0055e5b8  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0055e5bc  8bf0                 mov esi, eax
// 0055e5be  56                   push esi
// 0055e5bf  8bcf                 mov ecx, edi
// 0055e5c1  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055e5c7  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0055e5ca  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0055e5cd  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055e5d0  895720               mov dword ptr [edi + 0x20], edx
// 0055e5d3  8b4624               mov eax, dword ptr [esi + 0x24]
// 0055e5d6  894724               mov dword ptr [edi + 0x24], eax
// 0055e5d9  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0055e5dc  894f28               mov dword ptr [edi + 0x28], ecx
// 0055e5df  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0055e5e3  8bc7                 mov eax, edi
// 0055e5e5  5f                   pop edi
// 0055e5e6  5e                   pop esi
// 0055e5e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e5ee  83c440               add esp, 0x40
// 0055e5f1  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peek@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
