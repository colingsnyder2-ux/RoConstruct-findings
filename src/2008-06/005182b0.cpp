// from server: 100% by auto
// roc 2008-06 005182b0  unit: G3D::TextInput::WrongSymbol  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005182b0
//
// 005182b0  6aff                 push -1
// 005182b2  6868c77c00           push 0x7cc768
// 005182b7  64a100000000         mov eax, dword ptr fs:[0]
// 005182bd  50                   push eax
// 005182be  64892500000000       mov dword ptr fs:[0], esp
// 005182c5  83ec34               sub esp, 0x34
// 005182c8  56                   push esi
// 005182c9  57                   push edi
// 005182ca  33ff                 xor edi, edi
// 005182cc  8bf1                 mov esi, ecx
// 005182ce  897c2408             mov dword ptr [esp + 8], edi
// 005182d2  397e1c               cmp dword ptr [esi + 0x1c], edi
// 005182d5  752c                 jne 0x518303
// 005182d7  8d442410             lea eax, [esp + 0x10]
// 005182db  50                   push eax
// 005182dc  e86feaffff           call 0x516d50
// 005182e1  8d4c2410             lea ecx, [esp + 0x10]
// 005182e5  51                   push ecx
// 005182e6  8bce                 mov ecx, esi
// 005182e8  897c2448             mov dword ptr [esp + 0x48], edi
// 005182ec  e87ffbffff           call 0x517e70
// 005182f1  8d4c2410             lea ecx, [esp + 0x10]
// 005182f5  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005182fd  ff1568248000         call dword ptr [0x802468]
// 00518303  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00518306  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00518309  03d7                 add edx, edi
// 0051830b  3bfa                 cmp edi, edx
// 0051830d  7606                 jbe 0x518315
// 0051830f  ff1590288000         call dword ptr [0x802890]
// 00518315  8b06                 mov eax, dword ptr [esi]
// 00518317  8d4c2408             lea ecx, [esp + 8]
// 0051831b  89442408             mov dword ptr [esp + 8], eax
// 0051831f  897c240c             mov dword ptr [esp + 0xc], edi
// 00518323  e8f8dcf7ff           call 0x496020
// 00518328  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0051832c  8bf0                 mov esi, eax
// 0051832e  56                   push esi
// 0051832f  8bcf                 mov ecx, edi
// 00518331  ff155c248000         call dword ptr [0x80245c]
// 00518337  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0051833a  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0051833d  8b5620               mov edx, dword ptr [esi + 0x20]
// 00518340  895720               mov dword ptr [edi + 0x20], edx
// 00518343  8b4624               mov eax, dword ptr [esi + 0x24]
// 00518346  894724               mov dword ptr [edi + 0x24], eax
// 00518349  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0051834c  894f28               mov dword ptr [edi + 0x28], ecx
// 0051834f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00518353  8bc7                 mov eax, edi
// 00518355  5f                   pop edi
// 00518356  5e                   pop esi
// 00518357  64890d00000000       mov dword ptr fs:[0], ecx
// 0051835e  83c440               add esp, 0x40
// 00518361  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peek@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
