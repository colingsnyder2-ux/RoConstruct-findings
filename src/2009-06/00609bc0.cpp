// roc 2009-06 00609bc0  unit: RBX::GlobalSettings  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609bc0
//
// 00609bc0  64a100000000         mov eax, dword ptr fs:[0]
// 00609bc6  6aff                 push -1
// 00609bc8  6843778600           push 0x867743
// 00609bcd  50                   push eax
// 00609bce  64892500000000       mov dword ptr fs:[0], esp
// 00609bd5  83ec20               sub esp, 0x20
// 00609bd8  56                   push esi
// 00609bd9  8bf1                 mov esi, ecx
// 00609bdb  8b4604               mov eax, dword ptr [esi + 4]
// 00609bde  57                   push edi
// 00609bdf  83f803               cmp eax, 3
// 00609be2  752b                 jne 0x609c0f
// 00609be4  8b7608               mov esi, dword ptr [esi + 8]
// 00609be7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00609beb  56                   push esi
// 00609bec  8bcf                 mov ecx, edi
// 00609bee  ff1564e48900         call dword ptr [0x89e464]
// 00609bf4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00609bf7  89471c               mov dword ptr [edi + 0x1c], eax
// 00609bfa  5f                   pop edi
// 00609bfb  b001                 mov al, 1
// 00609bfd  5e                   pop esi
// 00609bfe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00609c02  64890d00000000       mov dword ptr fs:[0], ecx
// 00609c09  83c42c               add esp, 0x2c
// 00609c0c  c20400               ret 4
// 00609c0f  83f802               cmp eax, 2
// 00609c12  0f85b1000000         jne 0x609cc9
// 00609c18  8b4e08               mov ecx, dword ptr [esi + 8]
// 00609c1b  53                   push ebx
// 00609c1c  51                   push ecx
// 00609c1d  8d4c2410             lea ecx, [esp + 0x10]
// 00609c21  e88a930300           call 0x642fb0
// 00609c26  8bf8                 mov edi, eax
// 00609c28  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00609c2c  57                   push edi
// 00609c2d  8bcb                 mov ecx, ebx
// 00609c2f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00609c37  ff1564e48900         call dword ptr [0x89e464]
// 00609c3d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 00609c40  8d4c240c             lea ecx, [esp + 0xc]
// 00609c44  89531c               mov dword ptr [ebx + 0x1c], edx
// 00609c47  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00609c4f  ff15c4e48900         call dword ptr [0x89e4c4]
// 00609c55  8bce                 mov ecx, esi
// 00609c57  e874feffff           call 0x609ad0
// 00609c5c  6a20                 push 0x20
// 00609c5e  e8d5ed1000           call 0x718a38
// 00609c63  8bf8                 mov edi, eax
// 00609c65  83c404               add esp, 4
// 00609c68  897c243c             mov dword ptr [esp + 0x3c], edi
// 00609c6c  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00609c74  85ff                 test edi, edi
// 00609c76  742f                 je 0x609ca7
// 00609c78  53                   push ebx
// 00609c79  8bcf                 mov ecx, edi
// 00609c7b  ff15b8e48900         call dword ptr [0x89e4b8]
// 00609c81  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00609c84  89471c               mov dword ptr [edi + 0x1c], eax
// 00609c87  5b                   pop ebx
// 00609c88  897e08               mov dword ptr [esi + 8], edi
// 00609c8b  5f                   pop edi
// 00609c8c  c7460403000000       mov dword ptr [esi + 4], 3
// 00609c93  b001                 mov al, 1
// 00609c95  5e                   pop esi
// 00609c96  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00609c9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00609ca1  83c42c               add esp, 0x2c
// 00609ca4  c20400               ret 4
// 00609ca7  33ff                 xor edi, edi
// 00609ca9  5b                   pop ebx
// 00609caa  897e08               mov dword ptr [esi + 8], edi
// 00609cad  5f                   pop edi
// 00609cae  c7460403000000       mov dword ptr [esi + 4], 3
// 00609cb5  b001                 mov al, 1
// 00609cb7  5e                   pop esi
// 00609cb8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00609cbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00609cc3  83c42c               add esp, 0x2c
// 00609cc6  c20400               ret 4
// 00609cc9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00609ccd  5f                   pop edi
// 00609cce  32c0                 xor al, al
// 00609cd0  5e                   pop esi
// 00609cd1  64890d00000000       mov dword ptr fs:[0], ecx
// 00609cd8  83c42c               add esp, 0x2c
// 00609cdb  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
