// roc 2007-08 0055d4d0  unit: RBX::DataModel  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d4d0
//
// 0055d4d0  64a100000000         mov eax, dword ptr fs:[0]
// 0055d4d6  6aff                 push -1
// 0055d4d8  68c33b7500           push 0x753bc3
// 0055d4dd  50                   push eax
// 0055d4de  64892500000000       mov dword ptr fs:[0], esp
// 0055d4e5  83ec20               sub esp, 0x20
// 0055d4e8  56                   push esi
// 0055d4e9  8bf1                 mov esi, ecx
// 0055d4eb  8b4604               mov eax, dword ptr [esi + 4]
// 0055d4ee  83f803               cmp eax, 3
// 0055d4f1  57                   push edi
// 0055d4f2  752b                 jne 0x55d51f
// 0055d4f4  8b7608               mov esi, dword ptr [esi + 8]
// 0055d4f7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0055d4fb  56                   push esi
// 0055d4fc  8bcf                 mov ecx, edi
// 0055d4fe  ff1590e67700         call dword ptr [0x77e690]
// 0055d504  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0055d507  89471c               mov dword ptr [edi + 0x1c], eax
// 0055d50a  5f                   pop edi
// 0055d50b  b001                 mov al, 1
// 0055d50d  5e                   pop esi
// 0055d50e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055d512  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d519  83c42c               add esp, 0x2c
// 0055d51c  c20400               ret 4
// 0055d51f  83f802               cmp eax, 2
// 0055d522  0f85b1000000         jne 0x55d5d9
// 0055d528  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055d52b  53                   push ebx
// 0055d52c  51                   push ecx
// 0055d52d  8d4c2410             lea ecx, [esp + 0x10]
// 0055d531  e8daf9eeff           call 0x44cf10
// 0055d536  8bf8                 mov edi, eax
// 0055d538  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0055d53c  57                   push edi
// 0055d53d  8bcb                 mov ecx, ebx
// 0055d53f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0055d547  ff1590e67700         call dword ptr [0x77e690]
// 0055d54d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0055d550  8d4c240c             lea ecx, [esp + 0xc]
// 0055d554  89531c               mov dword ptr [ebx + 0x1c], edx
// 0055d557  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0055d55f  ff15ace67700         call dword ptr [0x77e6ac]
// 0055d565  8bce                 mov ecx, esi
// 0055d567  e864feffff           call 0x55d3d0
// 0055d56c  6a20                 push 0x20
// 0055d56e  e883290d00           call 0x62fef6
// 0055d573  8bf8                 mov edi, eax
// 0055d575  83c404               add esp, 4
// 0055d578  897c243c             mov dword ptr [esp + 0x3c], edi
// 0055d57c  85ff                 test edi, edi
// 0055d57e  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0055d586  742f                 je 0x55d5b7
// 0055d588  53                   push ebx
// 0055d589  8bcf                 mov ecx, edi
// 0055d58b  ff159ce67700         call dword ptr [0x77e69c]
// 0055d591  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0055d594  89471c               mov dword ptr [edi + 0x1c], eax
// 0055d597  5b                   pop ebx
// 0055d598  897e08               mov dword ptr [esi + 8], edi
// 0055d59b  5f                   pop edi
// 0055d59c  c7460403000000       mov dword ptr [esi + 4], 3
// 0055d5a3  b001                 mov al, 1
// 0055d5a5  5e                   pop esi
// 0055d5a6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055d5aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d5b1  83c42c               add esp, 0x2c
// 0055d5b4  c20400               ret 4
// 0055d5b7  33ff                 xor edi, edi
// 0055d5b9  5b                   pop ebx
// 0055d5ba  897e08               mov dword ptr [esi + 8], edi
// 0055d5bd  5f                   pop edi
// 0055d5be  c7460403000000       mov dword ptr [esi + 4], 3
// 0055d5c5  b001                 mov al, 1
// 0055d5c7  5e                   pop esi
// 0055d5c8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055d5cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d5d3  83c42c               add esp, 0x2c
// 0055d5d6  c20400               ret 4
// 0055d5d9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055d5dd  5f                   pop edi
// 0055d5de  32c0                 xor al, al
// 0055d5e0  5e                   pop esi
// 0055d5e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d5e8  83c42c               add esp, 0x2c
// 0055d5eb  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
