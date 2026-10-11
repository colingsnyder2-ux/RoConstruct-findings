// roc 2008-06 0057c3d0  unit: RBX::VInstance::?$SignalDesc  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c3d0
//
// 0057c3d0  64a100000000         mov eax, dword ptr fs:[0]
// 0057c3d6  6aff                 push -1
// 0057c3d8  68530e7d00           push 0x7d0e53
// 0057c3dd  50                   push eax
// 0057c3de  64892500000000       mov dword ptr fs:[0], esp
// 0057c3e5  83ec20               sub esp, 0x20
// 0057c3e8  56                   push esi
// 0057c3e9  8bf1                 mov esi, ecx
// 0057c3eb  8b4604               mov eax, dword ptr [esi + 4]
// 0057c3ee  57                   push edi
// 0057c3ef  83f803               cmp eax, 3
// 0057c3f2  752b                 jne 0x57c41f
// 0057c3f4  8b7608               mov esi, dword ptr [esi + 8]
// 0057c3f7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0057c3fb  56                   push esi
// 0057c3fc  8bcf                 mov ecx, edi
// 0057c3fe  ff150c248000         call dword ptr [0x80240c]
// 0057c404  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0057c407  89471c               mov dword ptr [edi + 0x1c], eax
// 0057c40a  5f                   pop edi
// 0057c40b  b001                 mov al, 1
// 0057c40d  5e                   pop esi
// 0057c40e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057c412  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c419  83c42c               add esp, 0x2c
// 0057c41c  c20400               ret 4
// 0057c41f  83f802               cmp eax, 2
// 0057c422  0f85b1000000         jne 0x57c4d9
// 0057c428  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057c42b  53                   push ebx
// 0057c42c  51                   push ecx
// 0057c42d  8d4c2410             lea ecx, [esp + 0x10]
// 0057c431  e80a900900           call 0x615440
// 0057c436  8bf8                 mov edi, eax
// 0057c438  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0057c43c  57                   push edi
// 0057c43d  8bcb                 mov ecx, ebx
// 0057c43f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0057c447  ff150c248000         call dword ptr [0x80240c]
// 0057c44d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0057c450  8d4c240c             lea ecx, [esp + 0xc]
// 0057c454  89531c               mov dword ptr [ebx + 0x1c], edx
// 0057c457  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0057c45f  ff1568248000         call dword ptr [0x802468]
// 0057c465  8bce                 mov ecx, esi
// 0057c467  e864feffff           call 0x57c2d0
// 0057c46c  6a20                 push 0x20
// 0057c46e  e8ad441200           call 0x6a0920
// 0057c473  8bf8                 mov edi, eax
// 0057c475  83c404               add esp, 4
// 0057c478  897c243c             mov dword ptr [esp + 0x3c], edi
// 0057c47c  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0057c484  85ff                 test edi, edi
// 0057c486  742f                 je 0x57c4b7
// 0057c488  53                   push ebx
// 0057c489  8bcf                 mov ecx, edi
// 0057c48b  ff155c248000         call dword ptr [0x80245c]
// 0057c491  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0057c494  89471c               mov dword ptr [edi + 0x1c], eax
// 0057c497  5b                   pop ebx
// 0057c498  897e08               mov dword ptr [esi + 8], edi
// 0057c49b  5f                   pop edi
// 0057c49c  c7460403000000       mov dword ptr [esi + 4], 3
// 0057c4a3  b001                 mov al, 1
// 0057c4a5  5e                   pop esi
// 0057c4a6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057c4aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c4b1  83c42c               add esp, 0x2c
// 0057c4b4  c20400               ret 4
// 0057c4b7  33ff                 xor edi, edi
// 0057c4b9  5b                   pop ebx
// 0057c4ba  897e08               mov dword ptr [esi + 8], edi
// 0057c4bd  5f                   pop edi
// 0057c4be  c7460403000000       mov dword ptr [esi + 4], 3
// 0057c4c5  b001                 mov al, 1
// 0057c4c7  5e                   pop esi
// 0057c4c8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057c4cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c4d3  83c42c               add esp, 0x2c
// 0057c4d6  c20400               ret 4
// 0057c4d9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057c4dd  5f                   pop edi
// 0057c4de  32c0                 xor al, al
// 0057c4e0  5e                   pop esi
// 0057c4e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c4e8  83c42c               add esp, 0x2c
// 0057c4eb  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
