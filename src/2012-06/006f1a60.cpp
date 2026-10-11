// roc 2012-06 006f1a60  unit: RBX::DataModel  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1a60
//
// 006f1a60  64a100000000         mov eax, dword ptr fs:[0]
// 006f1a66  6aff                 push -1
// 006f1a68  6843caab00           push 0xabca43
// 006f1a6d  50                   push eax
// 006f1a6e  64892500000000       mov dword ptr fs:[0], esp
// 006f1a75  83ec20               sub esp, 0x20
// 006f1a78  56                   push esi
// 006f1a79  8bf1                 mov esi, ecx
// 006f1a7b  8b4604               mov eax, dword ptr [esi + 4]
// 006f1a7e  57                   push edi
// 006f1a7f  83f803               cmp eax, 3
// 006f1a82  752b                 jne 0x6f1aaf
// 006f1a84  8b7608               mov esi, dword ptr [esi + 8]
// 006f1a87  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006f1a8b  56                   push esi
// 006f1a8c  8bcf                 mov ecx, edi
// 006f1a8e  ff155826b200         call dword ptr [0xb22658]
// 006f1a94  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006f1a97  89471c               mov dword ptr [edi + 0x1c], eax
// 006f1a9a  5f                   pop edi
// 006f1a9b  b001                 mov al, 1
// 006f1a9d  5e                   pop esi
// 006f1a9e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006f1aa2  64890d00000000       mov dword ptr fs:[0], ecx
// 006f1aa9  83c42c               add esp, 0x2c
// 006f1aac  c20400               ret 4
// 006f1aaf  83f802               cmp eax, 2
// 006f1ab2  0f85b1000000         jne 0x6f1b69
// 006f1ab8  8b4e08               mov ecx, dword ptr [esi + 8]
// 006f1abb  53                   push ebx
// 006f1abc  51                   push ecx
// 006f1abd  8d4c2410             lea ecx, [esp + 0x10]
// 006f1ac1  e88a84d8ff           call 0x479f50
// 006f1ac6  8bf8                 mov edi, eax
// 006f1ac8  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 006f1acc  57                   push edi
// 006f1acd  8bcb                 mov ecx, ebx
// 006f1acf  c744243800000000     mov dword ptr [esp + 0x38], 0
// 006f1ad7  ff155826b200         call dword ptr [0xb22658]
// 006f1add  8b571c               mov edx, dword ptr [edi + 0x1c]
// 006f1ae0  8d4c240c             lea ecx, [esp + 0xc]
// 006f1ae4  89531c               mov dword ptr [ebx + 0x1c], edx
// 006f1ae7  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 006f1aef  ff153c26b200         call dword ptr [0xb2263c]
// 006f1af5  8bce                 mov ecx, esi
// 006f1af7  e864feffff           call 0x6f1960
// 006f1afc  6a20                 push 0x20
// 006f1afe  e817062900           call 0x98211a
// 006f1b03  8bf8                 mov edi, eax
// 006f1b05  83c404               add esp, 4
// 006f1b08  897c243c             mov dword ptr [esp + 0x3c], edi
// 006f1b0c  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006f1b14  85ff                 test edi, edi
// 006f1b16  742f                 je 0x6f1b47
// 006f1b18  53                   push ebx
// 006f1b19  8bcf                 mov ecx, edi
// 006f1b1b  ff154426b200         call dword ptr [0xb22644]
// 006f1b21  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 006f1b24  89471c               mov dword ptr [edi + 0x1c], eax
// 006f1b27  5b                   pop ebx
// 006f1b28  897e08               mov dword ptr [esi + 8], edi
// 006f1b2b  5f                   pop edi
// 006f1b2c  c7460403000000       mov dword ptr [esi + 4], 3
// 006f1b33  b001                 mov al, 1
// 006f1b35  5e                   pop esi
// 006f1b36  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006f1b3a  64890d00000000       mov dword ptr fs:[0], ecx
// 006f1b41  83c42c               add esp, 0x2c
// 006f1b44  c20400               ret 4
// 006f1b47  33ff                 xor edi, edi
// 006f1b49  5b                   pop ebx
// 006f1b4a  897e08               mov dword ptr [esi + 8], edi
// 006f1b4d  5f                   pop edi
// 006f1b4e  c7460403000000       mov dword ptr [esi + 4], 3
// 006f1b55  b001                 mov al, 1
// 006f1b57  5e                   pop esi
// 006f1b58  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006f1b5c  64890d00000000       mov dword ptr fs:[0], ecx
// 006f1b63  83c42c               add esp, 0x2c
// 006f1b66  c20400               ret 4
// 006f1b69  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006f1b6d  5f                   pop edi
// 006f1b6e  32c0                 xor al, al
// 006f1b70  5e                   pop esi
// 006f1b71  64890d00000000       mov dword ptr fs:[0], ecx
// 006f1b78  83c42c               add esp, 0x2c
// 006f1b7b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
