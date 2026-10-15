// roc 2008-06 0058f270  unit: TextXmlWriterWithEmbeddedContent  size: 612 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058f270
//
// 0058f270  55                   push ebp
// 0058f271  8bec                 mov ebp, esp
// 0058f273  6aff                 push -1
// 0058f275  68ea197d00           push 0x7d19ea
// 0058f27a  64a100000000         mov eax, dword ptr fs:[0]
// 0058f280  50                   push eax
// 0058f281  64892500000000       mov dword ptr fs:[0], esp
// 0058f288  83ec50               sub esp, 0x50
// 0058f28b  53                   push ebx
// 0058f28c  56                   push esi
// 0058f28d  57                   push edi
// 0058f28e  8b7d08               mov edi, dword ptr [ebp + 8]
// 0058f291  8bf1                 mov esi, ecx
// 0058f293  8d5f10               lea ebx, [edi + 0x10]
// 0058f296  8bcb                 mov ecx, ebx
// 0058f298  8965f0               mov dword ptr [ebp - 0x10], esp
// 0058f29b  8975e4               mov dword ptr [ebp - 0x1c], esi
// 0058f29e  e84dcffeff           call 0x57c1f0
// 0058f2a3  84c0                 test al, al
// 0058f2a5  0f8403030000         je 0x58f5ae
// 0058f2ab  8d4da4               lea ecx, [ebp - 0x5c]
// 0058f2ae  ff1560248000         call dword ptr [0x802460]
// 0058f2b4  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0058f2bb  e8b04ffcff           call 0x554270
// 0058f2c0  8945c0               mov dword ptr [ebp - 0x40], eax
// 0058f2c3  8d45a4               lea eax, [ebp - 0x5c]
// 0058f2c6  50                   push eax
// 0058f2c7  8bcb                 mov ecx, ebx
// 0058f2c9  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0058f2d0  e8fbd0feff           call 0x57c3d0
// 0058f2d5  8b5dc0               mov ebx, dword ptr [ebp - 0x40]
// 0058f2d8  e8934ffcff           call 0x554270
// 0058f2dd  3bd8                 cmp ebx, eax
// 0058f2df  7510                 jne 0x58f2f1
// 0058f2e1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0058f2e4  6a00                 push 0
// 0058f2e6  51                   push ecx
// 0058f2e7  57                   push edi
// 0058f2e8  8bce                 mov ecx, esi
// 0058f2ea  e821f8ffff           call 0x58eb10
// 0058f2ef  eb48                 jmp 0x58f339
// 0058f2f1  8b45c0               mov eax, dword ptr [ebp - 0x40]
// 0058f2f4  83781c10             cmp dword ptr [eax + 0x1c], 0x10
// 0058f2f8  7205                 jb 0x58f2ff
// 0058f2fa  8b4008               mov eax, dword ptr [eax + 8]
// 0058f2fd  eb03                 jmp 0x58f302
// 0058f2ff  83c008               add eax, 8
// 0058f302  8b157c539700         mov edx, dword ptr [0x97537c]
// 0058f308  50                   push eax
// 0058f309  52                   push edx
// 0058f30a  8d4dd0               lea ecx, [ebp - 0x30]
// 0058f30d  c745c800000000       mov dword ptr [ebp - 0x38], 0
// 0058f314  e807d6ffff           call 0x58c920
// 0058f319  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0058f31c  8d45c8               lea eax, [ebp - 0x38]
// 0058f31f  50                   push eax
// 0058f320  51                   push ecx
// 0058f321  57                   push edi
// 0058f322  8bce                 mov ecx, esi
// 0058f324  c645fc02             mov byte ptr [ebp - 4], 2
// 0058f328  e8e3f7ffff           call 0x58eb10
// 0058f32d  8d4dd0               lea ecx, [ebp - 0x30]
// 0058f330  c645fc01             mov byte ptr [ebp - 4], 1
// 0058f334  e897cffeff           call 0x57c2d0
// 0058f339  8b1570539700         mov edx, dword ptr [0x975370]
// 0058f33f  52                   push edx
// 0058f340  8bcf                 mov ecx, edi
// 0058f342  e869cffeff           call 0x57c2b0
// 0058f347  85c0                 test eax, eax
// 0058f349  0f853c020000         jne 0x58f58b
// 0058f34f  3945b8               cmp dword ptr [ebp - 0x48], eax
// 0058f352  7516                 jne 0x58f36a
// 0058f354  8b4624               mov eax, dword ptr [esi + 0x24]
// 0058f357  682c1b8300           push 0x831b2c
// 0058f35c  50                   push eax
// 0058f35d  e8eeb0ebff           call 0x44a450
// 0058f362  83c408               add esp, 8
// 0058f365  e921020000           jmp 0x58f58b
// 0058f36a  8d4da4               lea ecx, [ebp - 0x5c]
// 0058f36d  e86ec7fcff           call 0x55bae0
// 0058f372  84c0                 test al, al
// 0058f374  0f85d9010000         jne 0x58f553
// 0058f37a  8d4da4               lea ecx, [ebp - 0x5c]
// 0058f37d  e8cec7fcff           call 0x55bb50
// 0058f382  84c0                 test al, al
// 0058f384  0f85c9010000         jne 0x58f553
// 0058f38a  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0058f38d  8b5628               mov edx, dword ptr [esi + 0x28]
// 0058f390  8d5e28               lea ebx, [esi + 0x28]
// 0058f393  894dec               mov dword ptr [ebp - 0x14], ecx
// 0058f396  8d45e8               lea eax, [ebp - 0x18]
// 0058f399  50                   push eax
// 0058f39a  8d4da4               lea ecx, [ebp - 0x5c]
// 0058f39d  8955e8               mov dword ptr [ebp - 0x18], edx
// 0058f3a0  51                   push ecx
// 0058f3a1  8d55d8               lea edx, [ebp - 0x28]
// 0058f3a4  52                   push edx
// 0058f3a5  8bcb                 mov ecx, ebx
// 0058f3a7  e844fbffff           call 0x58eef0
// 0058f3ac  8bc8                 mov ecx, eax
// 0058f3ae  e8edd80500           call 0x5ecca0
// 0058f3b3  84c0                 test al, al
// 0058f3b5  0f8438010000         je 0x58f4f3
// 0058f3bb  8d45a4               lea eax, [ebp - 0x5c]
// 0058f3be  50                   push eax
// 0058f3bf  8d4dd4               lea ecx, [ebp - 0x2c]
// 0058f3c2  51                   push ecx
// 0058f3c3  8bcb                 mov ecx, ebx
// 0058f3c5  e836faffff           call 0x58ee00
// 0058f3ca  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 0058f3d1  83ec20               sub esp, 0x20
// 0058f3d4  8d55a4               lea edx, [ebp - 0x5c]
// 0058f3d7  8bcc                 mov ecx, esp
// 0058f3d9  8965ec               mov dword ptr [ebp - 0x14], esp
// 0058f3dc  52                   push edx
// 0058f3dd  c645fc04             mov byte ptr [ebp - 4], 4
// 0058f3e1  e8fa66e8ff           call 0x415ae0
// 0058f3e6  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0058f3e9  8d45ec               lea eax, [ebp - 0x14]
// 0058f3ec  50                   push eax
// 0058f3ed  e82e2bfdff           call 0x561f20
// 0058f3f2  8b08                 mov ecx, dword ptr [eax]
// 0058f3f4  51                   push ecx
// 0058f3f5  8d4d0c               lea ecx, [ebp + 0xc]
// 0058f3f8  c70000000000         mov dword ptr [eax], 0
// 0058f3fe  e8ade1ffff           call 0x58d5b0
// 0058f403  8d4dec               lea ecx, [ebp - 0x14]
// 0058f406  e805d5fcff           call 0x55c910
// 0058f40b  8b7dc0               mov edi, dword ptr [ebp - 0x40]
// 0058f40e  c745fc03000000       mov dword ptr [ebp - 4], 3
// 0058f415  e8564efcff           call 0x554270
// 0058f41a  3bf8                 cmp edi, eax
// 0058f41c  750b                 jne 0x58f429
// 0058f41e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058f421  68801b8300           push 0x831b80
// 0058f426  51                   push ecx
// 0058f427  eb32                 jmp 0x58f45b
// 0058f429  8b45c0               mov eax, dword ptr [ebp - 0x40]
// 0058f42c  83781c10             cmp dword ptr [eax + 0x1c], 0x10
// 0058f430  7205                 jb 0x58f437
// 0058f432  8b4008               mov eax, dword ptr [eax + 8]
// 0058f435  eb03                 jmp 0x58f43a
// 0058f437  83c008               add eax, 8
// 0058f43a  8b5624               mov edx, dword ptr [esi + 0x24]
// 0058f43d  687c1b8300           push 0x831b7c
// 0058f442  50                   push eax
// 0058f443  68601b8300           push 0x831b60
// 0058f448  52                   push edx
// 0058f449  e802b0ebff           call 0x44a450
// 0058f44e  83c408               add esp, 8
// 0058f451  50                   push eax
// 0058f452  e8f9afebff           call 0x44a450
// 0058f457  83c408               add esp, 8
// 0058f45a  50                   push eax
// 0058f45b  e8f0afebff           call 0x44a450
// 0058f460  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0058f463  8b08                 mov ecx, dword ptr [eax]
// 0058f465  8b5104               mov edx, dword ptr [ecx + 4]
// 0058f468  8b440228             mov eax, dword ptr [edx + eax + 0x28]
// 0058f46c  83c408               add esp, 8
// 0058f46f  85c0                 test eax, eax
// 0058f471  0f94c1               sete cl
// 0058f474  884ddc               mov byte ptr [ebp - 0x24], cl
// 0058f477  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058f47a  8b39                 mov edi, dword ptr [ecx]
// 0058f47c  8b7f04               mov edi, dword ptr [edi + 4]
// 0058f47f  8b4c0f28             mov ecx, dword ptr [edi + ecx + 0x28]
// 0058f483  33d2                 xor edx, edx
// 0058f485  885508               mov byte ptr [ebp + 8], dl
// 0058f488  8b7d08               mov edi, dword ptr [ebp + 8]
// 0058f48b  57                   push edi
// 0058f48c  8d7d0c               lea edi, [ebp + 0xc]
// 0058f48f  57                   push edi
// 0058f490  51                   push ecx
// 0058f491  8855e0               mov byte ptr [ebp - 0x20], dl
// 0058f494  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0058f497  51                   push ecx
// 0058f498  c645ec01             mov byte ptr [ebp - 0x14], 1
// 0058f49c  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0058f49f  51                   push ecx
// 0058f4a0  52                   push edx
// 0058f4a1  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 0058f4a4  52                   push edx
// 0058f4a5  50                   push eax
// 0058f4a6  8d45d8               lea eax, [ebp - 0x28]
// 0058f4a9  50                   push eax
// 0058f4aa  8d4d0f               lea ecx, [ebp + 0xf]
// 0058f4ad  e8beeaffff           call 0x58df70
// 0058f4b2  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058f4b5  68541b8300           push 0x831b54
// 0058f4ba  51                   push ecx
// 0058f4bb  e890afebff           call 0x44a450
// 0058f4c0  83c408               add esp, 8
// 0058f4c3  8d4d0c               lea ecx, [ebp + 0xc]
// 0058f4c6  c645fc01             mov byte ptr [ebp - 4], 1
// 0058f4ca  e841d4fcff           call 0x55c910
// 0058f4cf  e9b7000000           jmp 0x58f58b

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_xml_embedded_native_3db81fc0eeabb0bf.cpp
