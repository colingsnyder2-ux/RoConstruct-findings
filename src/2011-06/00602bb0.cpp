// roc 2011-06 00602bb0  unit: RBX::UnifiedWidget  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602bb0
//
// 00602bb0  64a100000000         mov eax, dword ptr fs:[0]
// 00602bb6  6aff                 push -1
// 00602bb8  68837e9e00           push 0x9e7e83
// 00602bbd  50                   push eax
// 00602bbe  64892500000000       mov dword ptr fs:[0], esp
// 00602bc5  83ec20               sub esp, 0x20
// 00602bc8  56                   push esi
// 00602bc9  8bf1                 mov esi, ecx
// 00602bcb  8b4604               mov eax, dword ptr [esi + 4]
// 00602bce  57                   push edi
// 00602bcf  83f803               cmp eax, 3
// 00602bd2  752b                 jne 0x602bff
// 00602bd4  8b7608               mov esi, dword ptr [esi + 8]
// 00602bd7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00602bdb  56                   push esi
// 00602bdc  8bcf                 mov ecx, edi
// 00602bde  ff15a804a400         call dword ptr [0xa404a8]
// 00602be4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00602be7  89471c               mov dword ptr [edi + 0x1c], eax
// 00602bea  5f                   pop edi
// 00602beb  b001                 mov al, 1
// 00602bed  5e                   pop esi
// 00602bee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00602bf2  64890d00000000       mov dword ptr fs:[0], ecx
// 00602bf9  83c42c               add esp, 0x2c
// 00602bfc  c20400               ret 4
// 00602bff  83f802               cmp eax, 2
// 00602c02  0f85b1000000         jne 0x602cb9
// 00602c08  8b4e08               mov ecx, dword ptr [esi + 8]
// 00602c0b  53                   push ebx
// 00602c0c  51                   push ecx
// 00602c0d  8d4c2410             lea ecx, [esp + 0x10]
// 00602c11  e8eac3e6ff           call 0x46f000
// 00602c16  8bf8                 mov edi, eax
// 00602c18  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00602c1c  57                   push edi
// 00602c1d  8bcb                 mov ecx, ebx
// 00602c1f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00602c27  ff15a804a400         call dword ptr [0xa404a8]
// 00602c2d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 00602c30  8d4c240c             lea ecx, [esp + 0xc]
// 00602c34  89531c               mov dword ptr [ebx + 0x1c], edx
// 00602c37  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00602c3f  ff15d004a400         call dword ptr [0xa404d0]
// 00602c45  8bce                 mov ecx, esi
// 00602c47  e864feffff           call 0x602ab0
// 00602c4c  6a20                 push 0x20
// 00602c4e  e80b742000           call 0x80a05e
// 00602c53  8bf8                 mov edi, eax
// 00602c55  83c404               add esp, 4
// 00602c58  897c243c             mov dword ptr [esp + 0x3c], edi
// 00602c5c  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00602c64  85ff                 test edi, edi
// 00602c66  742f                 je 0x602c97
// 00602c68  53                   push ebx
// 00602c69  8bcf                 mov ecx, edi
// 00602c6b  ff15c804a400         call dword ptr [0xa404c8]
// 00602c71  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00602c74  89471c               mov dword ptr [edi + 0x1c], eax
// 00602c77  5b                   pop ebx
// 00602c78  897e08               mov dword ptr [esi + 8], edi
// 00602c7b  5f                   pop edi
// 00602c7c  c7460403000000       mov dword ptr [esi + 4], 3
// 00602c83  b001                 mov al, 1
// 00602c85  5e                   pop esi
// 00602c86  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00602c8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00602c91  83c42c               add esp, 0x2c
// 00602c94  c20400               ret 4
// 00602c97  33ff                 xor edi, edi
// 00602c99  5b                   pop ebx
// 00602c9a  897e08               mov dword ptr [esi + 8], edi
// 00602c9d  5f                   pop edi
// 00602c9e  c7460403000000       mov dword ptr [esi + 4], 3
// 00602ca5  b001                 mov al, 1
// 00602ca7  5e                   pop esi
// 00602ca8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00602cac  64890d00000000       mov dword ptr fs:[0], ecx
// 00602cb3  83c42c               add esp, 0x2c
// 00602cb6  c20400               ret 4
// 00602cb9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00602cbd  5f                   pop edi
// 00602cbe  32c0                 xor al, al
// 00602cc0  5e                   pop esi
// 00602cc1  64890d00000000       mov dword ptr fs:[0], ecx
// 00602cc8  83c42c               add esp, 0x2c
// 00602ccb  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
