// roc 2009-12 00677030  unit: RBX::GlobalSettings  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677030
//
// 00677030  64a100000000         mov eax, dword ptr fs:[0]
// 00677036  6aff                 push -1
// 00677038  6833559400           push 0x945533
// 0067703d  50                   push eax
// 0067703e  64892500000000       mov dword ptr fs:[0], esp
// 00677045  83ec20               sub esp, 0x20
// 00677048  56                   push esi
// 00677049  8bf1                 mov esi, ecx
// 0067704b  8b4604               mov eax, dword ptr [esi + 4]
// 0067704e  57                   push edi
// 0067704f  83f803               cmp eax, 3
// 00677052  752b                 jne 0x67707f
// 00677054  8b7608               mov esi, dword ptr [esi + 8]
// 00677057  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0067705b  56                   push esi
// 0067705c  8bcf                 mov ecx, edi
// 0067705e  ff159cb69800         call dword ptr [0x98b69c]
// 00677064  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00677067  89471c               mov dword ptr [edi + 0x1c], eax
// 0067706a  5f                   pop edi
// 0067706b  b001                 mov al, 1
// 0067706d  5e                   pop esi
// 0067706e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00677072  64890d00000000       mov dword ptr fs:[0], ecx
// 00677079  83c42c               add esp, 0x2c
// 0067707c  c20400               ret 4
// 0067707f  83f802               cmp eax, 2
// 00677082  0f85b1000000         jne 0x677139
// 00677088  8b4e08               mov ecx, dword ptr [esi + 8]
// 0067708b  53                   push ebx
// 0067708c  51                   push ecx
// 0067708d  8d4c2410             lea ecx, [esp + 0x10]
// 00677091  e82adbddff           call 0x454bc0
// 00677096  8bf8                 mov edi, eax
// 00677098  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0067709c  57                   push edi
// 0067709d  8bcb                 mov ecx, ebx
// 0067709f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 006770a7  ff159cb69800         call dword ptr [0x98b69c]
// 006770ad  8b571c               mov edx, dword ptr [edi + 0x1c]
// 006770b0  8d4c240c             lea ecx, [esp + 0xc]
// 006770b4  89531c               mov dword ptr [ebx + 0x1c], edx
// 006770b7  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 006770bf  ff15e4b69800         call dword ptr [0x98b6e4]
// 006770c5  8bce                 mov ecx, esi
// 006770c7  e874feffff           call 0x676f40
// 006770cc  6a20                 push 0x20
// 006770ce  e88dc71700           call 0x7f3860
// 006770d3  8bf8                 mov edi, eax
// 006770d5  83c404               add esp, 4
// 006770d8  897c243c             mov dword ptr [esp + 0x3c], edi
// 006770dc  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006770e4  85ff                 test edi, edi
// 006770e6  742f                 je 0x677117
// 006770e8  53                   push ebx
// 006770e9  8bcf                 mov ecx, edi
// 006770eb  ff15f0b69800         call dword ptr [0x98b6f0]
// 006770f1  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 006770f4  89471c               mov dword ptr [edi + 0x1c], eax
// 006770f7  5b                   pop ebx
// 006770f8  897e08               mov dword ptr [esi + 8], edi
// 006770fb  5f                   pop edi
// 006770fc  c7460403000000       mov dword ptr [esi + 4], 3
// 00677103  b001                 mov al, 1
// 00677105  5e                   pop esi
// 00677106  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0067710a  64890d00000000       mov dword ptr fs:[0], ecx
// 00677111  83c42c               add esp, 0x2c
// 00677114  c20400               ret 4
// 00677117  33ff                 xor edi, edi
// 00677119  5b                   pop ebx
// 0067711a  897e08               mov dword ptr [esi + 8], edi
// 0067711d  5f                   pop edi
// 0067711e  c7460403000000       mov dword ptr [esi + 4], 3
// 00677125  b001                 mov al, 1
// 00677127  5e                   pop esi
// 00677128  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0067712c  64890d00000000       mov dword ptr fs:[0], ecx
// 00677133  83c42c               add esp, 0x2c
// 00677136  c20400               ret 4
// 00677139  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067713d  5f                   pop edi
// 0067713e  32c0                 xor al, al
// 00677140  5e                   pop esi
// 00677141  64890d00000000       mov dword ptr fs:[0], ecx
// 00677148  83c42c               add esp, 0x2c
// 0067714b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
