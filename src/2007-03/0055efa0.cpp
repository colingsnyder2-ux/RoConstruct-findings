// roc 2007-03 0055efa0  unit: seg_00550000  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055efa0
//
// 0055efa0  64a100000000         mov eax, dword ptr fs:[0]
// 0055efa6  6aff                 push -1
// 0055efa8  6823507500           push 0x755023
// 0055efad  50                   push eax
// 0055efae  64892500000000       mov dword ptr fs:[0], esp
// 0055efb5  83ec20               sub esp, 0x20
// 0055efb8  56                   push esi
// 0055efb9  8bf1                 mov esi, ecx
// 0055efbb  8b4604               mov eax, dword ptr [esi + 4]
// 0055efbe  83f803               cmp eax, 3
// 0055efc1  57                   push edi
// 0055efc2  752b                 jne 0x55efef
// 0055efc4  8b7608               mov esi, dword ptr [esi + 8]
// 0055efc7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0055efcb  56                   push esi
// 0055efcc  8bcf                 mov ecx, edi
// 0055efce  ff154ce77700         call dword ptr [0x77e74c]
// 0055efd4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0055efd7  89471c               mov dword ptr [edi + 0x1c], eax
// 0055efda  5f                   pop edi
// 0055efdb  b001                 mov al, 1
// 0055efdd  5e                   pop esi
// 0055efde  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055efe2  64890d00000000       mov dword ptr fs:[0], ecx
// 0055efe9  83c42c               add esp, 0x2c
// 0055efec  c20400               ret 4
// 0055efef  83f802               cmp eax, 2
// 0055eff2  0f85b1000000         jne 0x55f0a9
// 0055eff8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055effb  53                   push ebx
// 0055effc  51                   push ecx
// 0055effd  8d4c2410             lea ecx, [esp + 0x10]
// 0055f001  e81a5bf2ff           call 0x484b20
// 0055f006  8bf8                 mov edi, eax
// 0055f008  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0055f00c  57                   push edi
// 0055f00d  8bcb                 mov ecx, ebx
// 0055f00f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0055f017  ff154ce77700         call dword ptr [0x77e74c]
// 0055f01d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0055f020  8d4c240c             lea ecx, [esp + 0xc]
// 0055f024  89531c               mov dword ptr [ebx + 0x1c], edx
// 0055f027  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0055f02f  ff158ce77700         call dword ptr [0x77e78c]
// 0055f035  8bce                 mov ecx, esi
// 0055f037  e884feffff           call 0x55eec0
// 0055f03c  6a20                 push 0x20
// 0055f03e  e8c5f00b00           call 0x61e108
// 0055f043  8bf8                 mov edi, eax
// 0055f045  83c404               add esp, 4
// 0055f048  897c243c             mov dword ptr [esp + 0x3c], edi
// 0055f04c  85ff                 test edi, edi
// 0055f04e  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0055f056  742f                 je 0x55f087
// 0055f058  53                   push ebx
// 0055f059  8bcf                 mov ecx, edi
// 0055f05b  ff157ce77700         call dword ptr [0x77e77c]
// 0055f061  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0055f064  89471c               mov dword ptr [edi + 0x1c], eax
// 0055f067  5b                   pop ebx
// 0055f068  897e08               mov dword ptr [esi + 8], edi
// 0055f06b  5f                   pop edi
// 0055f06c  c7460403000000       mov dword ptr [esi + 4], 3
// 0055f073  b001                 mov al, 1
// 0055f075  5e                   pop esi
// 0055f076  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055f07a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f081  83c42c               add esp, 0x2c
// 0055f084  c20400               ret 4
// 0055f087  33ff                 xor edi, edi
// 0055f089  5b                   pop ebx
// 0055f08a  897e08               mov dword ptr [esi + 8], edi
// 0055f08d  5f                   pop edi
// 0055f08e  c7460403000000       mov dword ptr [esi + 4], 3
// 0055f095  b001                 mov al, 1
// 0055f097  5e                   pop esi
// 0055f098  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055f09c  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f0a3  83c42c               add esp, 0x2c
// 0055f0a6  c20400               ret 4
// 0055f0a9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055f0ad  5f                   pop edi
// 0055f0ae  32c0                 xor al, al
// 0055f0b0  5e                   pop esi
// 0055f0b1  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f0b8  83c42c               add esp, 0x2c
// 0055f0bb  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
