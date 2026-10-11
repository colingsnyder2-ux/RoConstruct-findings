// roc 2010-06 005dfe20  unit: RBX::GlobalSettings  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfe20
//
// 005dfe20  64a100000000         mov eax, dword ptr fs:[0]
// 005dfe26  6aff                 push -1
// 005dfe28  68837b9900           push 0x997b83
// 005dfe2d  50                   push eax
// 005dfe2e  64892500000000       mov dword ptr fs:[0], esp
// 005dfe35  83ec20               sub esp, 0x20
// 005dfe38  56                   push esi
// 005dfe39  8bf1                 mov esi, ecx
// 005dfe3b  8b4604               mov eax, dword ptr [esi + 4]
// 005dfe3e  57                   push edi
// 005dfe3f  83f803               cmp eax, 3
// 005dfe42  752b                 jne 0x5dfe6f
// 005dfe44  8b7608               mov esi, dword ptr [esi + 8]
// 005dfe47  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005dfe4b  56                   push esi
// 005dfe4c  8bcf                 mov ecx, edi
// 005dfe4e  ff1568a49e00         call dword ptr [0x9ea468]
// 005dfe54  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005dfe57  89471c               mov dword ptr [edi + 0x1c], eax
// 005dfe5a  5f                   pop edi
// 005dfe5b  b001                 mov al, 1
// 005dfe5d  5e                   pop esi
// 005dfe5e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dfe62  64890d00000000       mov dword ptr fs:[0], ecx
// 005dfe69  83c42c               add esp, 0x2c
// 005dfe6c  c20400               ret 4
// 005dfe6f  83f802               cmp eax, 2
// 005dfe72  0f85b1000000         jne 0x5dff29
// 005dfe78  8b4e08               mov ecx, dword ptr [esi + 8]
// 005dfe7b  53                   push ebx
// 005dfe7c  51                   push ecx
// 005dfe7d  8d4c2410             lea ecx, [esp + 0x10]
// 005dfe81  e81a130400           call 0x6211a0
// 005dfe86  8bf8                 mov edi, eax
// 005dfe88  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 005dfe8c  57                   push edi
// 005dfe8d  8bcb                 mov ecx, ebx
// 005dfe8f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005dfe97  ff1568a49e00         call dword ptr [0x9ea468]
// 005dfe9d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 005dfea0  8d4c240c             lea ecx, [esp + 0xc]
// 005dfea4  89531c               mov dword ptr [ebx + 0x1c], edx
// 005dfea7  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005dfeaf  ff1500a49e00         call dword ptr [0x9ea400]
// 005dfeb5  8bce                 mov ecx, esi
// 005dfeb7  e874feffff           call 0x5dfd30
// 005dfebc  6a20                 push 0x20
// 005dfebe  e8dd7a1c00           call 0x7a79a0
// 005dfec3  8bf8                 mov edi, eax
// 005dfec5  83c404               add esp, 4
// 005dfec8  897c243c             mov dword ptr [esp + 0x3c], edi
// 005dfecc  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005dfed4  85ff                 test edi, edi
// 005dfed6  742f                 je 0x5dff07
// 005dfed8  53                   push ebx
// 005dfed9  8bcf                 mov ecx, edi
// 005dfedb  ff150ca49e00         call dword ptr [0x9ea40c]
// 005dfee1  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005dfee4  89471c               mov dword ptr [edi + 0x1c], eax
// 005dfee7  5b                   pop ebx
// 005dfee8  897e08               mov dword ptr [esi + 8], edi
// 005dfeeb  5f                   pop edi
// 005dfeec  c7460403000000       mov dword ptr [esi + 4], 3
// 005dfef3  b001                 mov al, 1
// 005dfef5  5e                   pop esi
// 005dfef6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dfefa  64890d00000000       mov dword ptr fs:[0], ecx
// 005dff01  83c42c               add esp, 0x2c
// 005dff04  c20400               ret 4
// 005dff07  33ff                 xor edi, edi
// 005dff09  5b                   pop ebx
// 005dff0a  897e08               mov dword ptr [esi + 8], edi
// 005dff0d  5f                   pop edi
// 005dff0e  c7460403000000       mov dword ptr [esi + 4], 3
// 005dff15  b001                 mov al, 1
// 005dff17  5e                   pop esi
// 005dff18  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dff1c  64890d00000000       mov dword ptr fs:[0], ecx
// 005dff23  83c42c               add esp, 0x2c
// 005dff26  c20400               ret 4
// 005dff29  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dff2d  5f                   pop edi
// 005dff2e  32c0                 xor al, al
// 005dff30  5e                   pop esi
// 005dff31  64890d00000000       mov dword ptr fs:[0], ecx
// 005dff38  83c42c               add esp, 0x2c
// 005dff3b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
