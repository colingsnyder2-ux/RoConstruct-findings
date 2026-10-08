// roc 2009-12 005fc770  unit: G3D::TextInput::WrongSymbol  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc770
//
// 005fc770  6aff                 push -1
// 005fc772  6878f99300           push 0x93f978
// 005fc777  64a100000000         mov eax, dword ptr fs:[0]
// 005fc77d  50                   push eax
// 005fc77e  64892500000000       mov dword ptr fs:[0], esp
// 005fc785  83ec34               sub esp, 0x34
// 005fc788  56                   push esi
// 005fc789  57                   push edi
// 005fc78a  33ff                 xor edi, edi
// 005fc78c  8bf1                 mov esi, ecx
// 005fc78e  897c2408             mov dword ptr [esp + 8], edi
// 005fc792  397e1c               cmp dword ptr [esi + 0x1c], edi
// 005fc795  752c                 jne 0x5fc7c3
// 005fc797  8d442410             lea eax, [esp + 0x10]
// 005fc79b  50                   push eax
// 005fc79c  e86feaffff           call 0x5fb210
// 005fc7a1  8d4c2410             lea ecx, [esp + 0x10]
// 005fc7a5  51                   push ecx
// 005fc7a6  8bce                 mov ecx, esi
// 005fc7a8  897c2448             mov dword ptr [esp + 0x48], edi
// 005fc7ac  e87ffbffff           call 0x5fc330
// 005fc7b1  8d4c2410             lea ecx, [esp + 0x10]
// 005fc7b5  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005fc7bd  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc7c3  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005fc7c6  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005fc7c9  03d7                 add edx, edi
// 005fc7cb  3bfa                 cmp edi, edx
// 005fc7cd  7606                 jbe 0x5fc7d5
// 005fc7cf  ff1560b79800         call dword ptr [0x98b760]
// 005fc7d5  8b06                 mov eax, dword ptr [esi]
// 005fc7d7  8d4c2408             lea ecx, [esp + 8]
// 005fc7db  89442408             mov dword ptr [esp + 8], eax
// 005fc7df  897c240c             mov dword ptr [esp + 0xc], edi
// 005fc7e3  e898fe0600           call 0x66c680
// 005fc7e8  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 005fc7ec  8bf0                 mov esi, eax
// 005fc7ee  56                   push esi
// 005fc7ef  8bcf                 mov ecx, edi
// 005fc7f1  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fc7f7  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005fc7fa  894f1c               mov dword ptr [edi + 0x1c], ecx
// 005fc7fd  8b5620               mov edx, dword ptr [esi + 0x20]
// 005fc800  895720               mov dword ptr [edi + 0x20], edx
// 005fc803  8b4624               mov eax, dword ptr [esi + 0x24]
// 005fc806  894724               mov dword ptr [edi + 0x24], eax
// 005fc809  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 005fc80c  894f28               mov dword ptr [edi + 0x28], ecx
// 005fc80f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005fc813  8bc7                 mov eax, edi
// 005fc815  5f                   pop edi
// 005fc816  5e                   pop esi
// 005fc817  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc81e  83c440               add esp, 0x40
// 005fc821  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peek@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
