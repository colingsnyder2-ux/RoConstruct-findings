// roc 2009-06 0061f4b0  unit: TextXmlWriter  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061f4b0
//
// 0061f4b0  64a100000000         mov eax, dword ptr fs:[0]
// 0061f4b6  6aff                 push -1
// 0061f4b8  6813878600           push 0x868713
// 0061f4bd  50                   push eax
// 0061f4be  64892500000000       mov dword ptr fs:[0], esp
// 0061f4c5  83ec3c               sub esp, 0x3c
// 0061f4c8  53                   push ebx
// 0061f4c9  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0061f4cd  56                   push esi
// 0061f4ce  57                   push edi
// 0061f4cf  8bf1                 mov esi, ecx
// 0061f4d1  8d7b10               lea edi, [ebx + 0x10]
// 0061f4d4  8bcf                 mov ecx, edi
// 0061f4d6  e815a5feff           call 0x6099f0
// 0061f4db  6a00                 push 0
// 0061f4dd  84c0                 test al, al
// 0061f4df  0f84ae000000         je 0x61f593
// 0061f4e5  8b442460             mov eax, dword ptr [esp + 0x60]
// 0061f4e9  50                   push eax
// 0061f4ea  53                   push ebx
// 0061f4eb  8bce                 mov ecx, esi
// 0061f4ed  e82efeffff           call 0x61f320
// 0061f4f2  8d4c2428             lea ecx, [esp + 0x28]
// 0061f4f6  ff15c0e48900         call dword ptr [0x89e4c0]
// 0061f4fc  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0061f504  e857e4faff           call 0x5cd960
// 0061f509  89442444             mov dword ptr [esp + 0x44], eax
// 0061f50d  8d4c2428             lea ecx, [esp + 0x28]
// 0061f511  51                   push ecx
// 0061f512  bb01000000           mov ebx, 1
// 0061f517  8bcf                 mov ecx, edi
// 0061f519  895c2454             mov dword ptr [esp + 0x54], ebx
// 0061f51d  e89ea6feff           call 0x609bc0
// 0061f522  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0061f527  7517                 jne 0x61f540
// 0061f529  8b5624               mov edx, dword ptr [esi + 0x24]
// 0061f52c  6844948d00           push 0x8d9444
// 0061f531  52                   push edx
// 0061f532  e8d971e2ff           call 0x446710
// 0061f537  8d4c2430             lea ecx, [esp + 0x30]
// 0061f53b  e991000000           jmp 0x61f5d1
// 0061f540  8b4624               mov eax, dword ptr [esi + 0x24]
// 0061f543  683c948d00           push 0x8d943c
// 0061f548  50                   push eax
// 0061f549  e8c271e2ff           call 0x446710
// 0061f54e  83c408               add esp, 8
// 0061f551  56                   push esi
// 0061f552  8d4c2410             lea ecx, [esp + 0x10]
// 0061f556  51                   push ecx
// 0061f557  8bcf                 mov ecx, edi
// 0061f559  e8d2b2feff           call 0x60a830
// 0061f55e  8b5624               mov edx, dword ptr [esi + 0x24]
// 0061f561  50                   push eax
// 0061f562  52                   push edx
// 0061f563  c644245802           mov byte ptr [esp + 0x58], 2
// 0061f568  ff15e0e38900         call dword ptr [0x89e3e0]
// 0061f56e  83c408               add esp, 8
// 0061f571  8d4c240c             lea ecx, [esp + 0xc]
// 0061f575  885c2450             mov byte ptr [esp + 0x50], bl
// 0061f579  ff15c4e48900         call dword ptr [0x89e4c4]
// 0061f57f  8b4624               mov eax, dword ptr [esi + 0x24]
// 0061f582  6834948d00           push 0x8d9434
// 0061f587  50                   push eax
// 0061f588  e88371e2ff           call 0x446710
// 0061f58d  8d4c2430             lea ecx, [esp + 0x30]
// 0061f591  eb3e                 jmp 0x61f5d1
// 0061f593  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0061f597  51                   push ecx
// 0061f598  53                   push ebx
// 0061f599  8bce                 mov ecx, esi
// 0061f59b  e880fdffff           call 0x61f320
// 0061f5a0  56                   push esi
// 0061f5a1  8d542410             lea edx, [esp + 0x10]
// 0061f5a5  52                   push edx
// 0061f5a6  8bcf                 mov ecx, edi
// 0061f5a8  e883b2feff           call 0x60a830
// 0061f5ad  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061f5b1  8b7624               mov esi, dword ptr [esi + 0x24]
// 0061f5b4  c744245003000000     mov dword ptr [esp + 0x50], 3
// 0061f5bc  7205                 jb 0x61f5c3
// 0061f5be  8b4004               mov eax, dword ptr [eax + 4]
// 0061f5c1  eb03                 jmp 0x61f5c6
// 0061f5c3  83c004               add eax, 4
// 0061f5c6  50                   push eax
// 0061f5c7  56                   push esi
// 0061f5c8  e853fcffff           call 0x61f220
// 0061f5cd  8d4c2414             lea ecx, [esp + 0x14]
// 0061f5d1  83c408               add esp, 8
// 0061f5d4  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0061f5dc  ff15c4e48900         call dword ptr [0x89e4c4]
// 0061f5e2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f5e6  5f                   pop edi
// 0061f5e7  5e                   pop esi
// 0061f5e8  5b                   pop ebx
// 0061f5e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f5f0  83c448               add esp, 0x48
// 0061f5f3  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serializeNode@TextXmlWriter@@MAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
