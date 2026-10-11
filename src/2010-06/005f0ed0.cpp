// roc 2010-06 005f0ed0  unit: TextXmlWriter  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f0ed0
//
// 005f0ed0  64a100000000         mov eax, dword ptr fs:[0]
// 005f0ed6  6aff                 push -1
// 005f0ed8  6823859900           push 0x998523
// 005f0edd  50                   push eax
// 005f0ede  64892500000000       mov dword ptr fs:[0], esp
// 005f0ee5  83ec3c               sub esp, 0x3c
// 005f0ee8  53                   push ebx
// 005f0ee9  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 005f0eed  56                   push esi
// 005f0eee  57                   push edi
// 005f0eef  8bf1                 mov esi, ecx
// 005f0ef1  8d7b10               lea edi, [ebx + 0x10]
// 005f0ef4  8bcf                 mov ecx, edi
// 005f0ef6  e855edfeff           call 0x5dfc50
// 005f0efb  6a00                 push 0
// 005f0efd  84c0                 test al, al
// 005f0eff  0f84ae000000         je 0x5f0fb3
// 005f0f05  8b442460             mov eax, dword ptr [esp + 0x60]
// 005f0f09  50                   push eax
// 005f0f0a  53                   push ebx
// 005f0f0b  8bce                 mov ecx, esi
// 005f0f0d  e82efeffff           call 0x5f0d40
// 005f0f12  8d4c2428             lea ecx, [esp + 0x28]
// 005f0f16  ff1504a49e00         call dword ptr [0x9ea404]
// 005f0f1c  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005f0f24  e8c734faff           call 0x5943f0
// 005f0f29  89442444             mov dword ptr [esp + 0x44], eax
// 005f0f2d  8d4c2428             lea ecx, [esp + 0x28]
// 005f0f31  51                   push ecx
// 005f0f32  bb01000000           mov ebx, 1
// 005f0f37  8bcf                 mov ecx, edi
// 005f0f39  895c2454             mov dword ptr [esp + 0x54], ebx
// 005f0f3d  e8deeefeff           call 0x5dfe20
// 005f0f42  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 005f0f47  7517                 jne 0x5f0f60
// 005f0f49  8b5624               mov edx, dword ptr [esi + 0x24]
// 005f0f4c  6808eea200           push 0xa2ee08
// 005f0f51  52                   push edx
// 005f0f52  e8c9cfe5ff           call 0x44df20
// 005f0f57  8d4c2430             lea ecx, [esp + 0x30]
// 005f0f5b  e991000000           jmp 0x5f0ff1
// 005f0f60  8b4624               mov eax, dword ptr [esi + 0x24]
// 005f0f63  6800eea200           push 0xa2ee00
// 005f0f68  50                   push eax
// 005f0f69  e8b2cfe5ff           call 0x44df20
// 005f0f6e  83c408               add esp, 8
// 005f0f71  56                   push esi
// 005f0f72  8d4c2410             lea ecx, [esp + 0x10]
// 005f0f76  51                   push ecx
// 005f0f77  8bcf                 mov ecx, edi
// 005f0f79  e812fbfeff           call 0x5e0a90
// 005f0f7e  8b5624               mov edx, dword ptr [esi + 0x24]
// 005f0f81  50                   push eax
// 005f0f82  52                   push edx
// 005f0f83  c644245802           mov byte ptr [esp + 0x58], 2
// 005f0f88  ff15e8a49e00         call dword ptr [0x9ea4e8]
// 005f0f8e  83c408               add esp, 8
// 005f0f91  8d4c240c             lea ecx, [esp + 0xc]
// 005f0f95  885c2450             mov byte ptr [esp + 0x50], bl
// 005f0f99  ff1500a49e00         call dword ptr [0x9ea400]
// 005f0f9f  8b4624               mov eax, dword ptr [esi + 0x24]
// 005f0fa2  68f8eda200           push 0xa2edf8
// 005f0fa7  50                   push eax
// 005f0fa8  e873cfe5ff           call 0x44df20
// 005f0fad  8d4c2430             lea ecx, [esp + 0x30]
// 005f0fb1  eb3e                 jmp 0x5f0ff1
// 005f0fb3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f0fb7  51                   push ecx
// 005f0fb8  53                   push ebx
// 005f0fb9  8bce                 mov ecx, esi
// 005f0fbb  e880fdffff           call 0x5f0d40
// 005f0fc0  56                   push esi
// 005f0fc1  8d542410             lea edx, [esp + 0x10]
// 005f0fc5  52                   push edx
// 005f0fc6  8bcf                 mov ecx, edi
// 005f0fc8  e8c3fafeff           call 0x5e0a90
// 005f0fcd  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005f0fd1  8b7624               mov esi, dword ptr [esi + 0x24]
// 005f0fd4  c744245003000000     mov dword ptr [esp + 0x50], 3
// 005f0fdc  7205                 jb 0x5f0fe3
// 005f0fde  8b4004               mov eax, dword ptr [eax + 4]
// 005f0fe1  eb03                 jmp 0x5f0fe6
// 005f0fe3  83c004               add eax, 4
// 005f0fe6  50                   push eax
// 005f0fe7  56                   push esi
// 005f0fe8  e863f9ffff           call 0x5f0950
// 005f0fed  8d4c2414             lea ecx, [esp + 0x14]
// 005f0ff1  83c408               add esp, 8
// 005f0ff4  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 005f0ffc  ff1500a49e00         call dword ptr [0x9ea400]
// 005f1002  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f1006  5f                   pop edi
// 005f1007  5e                   pop esi
// 005f1008  5b                   pop ebx
// 005f1009  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1010  83c448               add esp, 0x48
// 005f1013  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serializeNode@TextXmlWriter@@MAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
