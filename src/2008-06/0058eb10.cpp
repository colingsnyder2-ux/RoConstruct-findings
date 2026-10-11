// roc 2008-06 0058eb10  unit: TextXmlWriter  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058eb10
//
// 0058eb10  64a100000000         mov eax, dword ptr fs:[0]
// 0058eb16  6aff                 push -1
// 0058eb18  68620f7d00           push 0x7d0f62
// 0058eb1d  50                   push eax
// 0058eb1e  64892500000000       mov dword ptr fs:[0], esp
// 0058eb25  83ec38               sub esp, 0x38
// 0058eb28  55                   push ebp
// 0058eb29  56                   push esi
// 0058eb2a  57                   push edi
// 0058eb2b  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0058eb2f  8bf1                 mov esi, ecx
// 0058eb31  85ff                 test edi, edi
// 0058eb33  7e13                 jle 0x58eb48
// 0058eb35  8b4624               mov eax, dword ptr [esi + 0x24]
// 0058eb38  6a09                 push 9
// 0058eb3a  50                   push eax
// 0058eb3b  e800bbebff           call 0x44a640
// 0058eb40  83c408               add esp, 8
// 0058eb43  83ef01               sub edi, 1
// 0058eb46  75ed                 jne 0x58eb35
// 0058eb48  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0058eb4c  8b4710               mov eax, dword ptr [edi + 0x10]
// 0058eb4f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058eb52  83c004               add eax, 4
// 0058eb55  50                   push eax
// 0058eb56  6a3c                 push 0x3c
// 0058eb58  51                   push ecx
// 0058eb59  e8e2baebff           call 0x44a640
// 0058eb5e  8b2d84238000         mov ebp, dword ptr [0x802384]
// 0058eb64  83c408               add esp, 8
// 0058eb67  50                   push eax
// 0058eb68  ffd5                 call ebp
// 0058eb6a  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0058eb6d  83c408               add esp, 8
// 0058eb70  85ff                 test edi, edi
// 0058eb72  0f848f000000         je 0x58ec07
// 0058eb78  53                   push ebx
// 0058eb79  8da42400000000       lea esp, [esp]
// 0058eb80  8b4708               mov eax, dword ptr [edi + 8]
// 0058eb83  8b5624               mov edx, dword ptr [esi + 0x24]
// 0058eb86  8d5f08               lea ebx, [edi + 8]
// 0058eb89  68181b8300           push 0x831b18
// 0058eb8e  83c004               add eax, 4
// 0058eb91  50                   push eax
// 0058eb92  6a20                 push 0x20
// 0058eb94  52                   push edx
// 0058eb95  e8a6baebff           call 0x44a640
// 0058eb9a  83c408               add esp, 8
// 0058eb9d  50                   push eax
// 0058eb9e  ffd5                 call ebp
// 0058eba0  83c408               add esp, 8
// 0058eba3  50                   push eax
// 0058eba4  e8a7b8ebff           call 0x44a450
// 0058eba9  83c408               add esp, 8
// 0058ebac  56                   push esi
// 0058ebad  8d442414             lea eax, [esp + 0x14]
// 0058ebb1  50                   push eax
// 0058ebb2  8bcb                 mov ecx, ebx
// 0058ebb4  e897e4feff           call 0x57d050
// 0058ebb9  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0058ebbd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058ebc0  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0058ebc8  7205                 jb 0x58ebcf
// 0058ebca  8b4004               mov eax, dword ptr [eax + 4]
// 0058ebcd  eb03                 jmp 0x58ebd2
// 0058ebcf  83c004               add eax, 4
// 0058ebd2  50                   push eax
// 0058ebd3  51                   push ecx
// 0058ebd4  e8c7f8ffff           call 0x58e4a0
// 0058ebd9  83c408               add esp, 8
// 0058ebdc  8d4c2410             lea ecx, [esp + 0x10]
// 0058ebe0  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0058ebe8  ff1568248000         call dword ptr [0x802468]
// 0058ebee  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058ebf1  6a22                 push 0x22
// 0058ebf3  51                   push ecx
// 0058ebf4  e847baebff           call 0x44a640
// 0058ebf9  8b3f                 mov edi, dword ptr [edi]
// 0058ebfb  83c408               add esp, 8
// 0058ebfe  85ff                 test edi, edi
// 0058ec00  0f857affffff         jne 0x58eb80
// 0058ec06  5b                   pop ebx
// 0058ec07  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 0058ec0b  85ff                 test edi, edi
// 0058ec0d  747c                 je 0x58ec8b
// 0058ec0f  8b4708               mov eax, dword ptr [edi + 8]
// 0058ec12  8b5624               mov edx, dword ptr [esi + 0x24]
// 0058ec15  83c708               add edi, 8
// 0058ec18  68181b8300           push 0x831b18
// 0058ec1d  83c004               add eax, 4
// 0058ec20  50                   push eax
// 0058ec21  6a20                 push 0x20
// 0058ec23  52                   push edx
// 0058ec24  e817baebff           call 0x44a640
// 0058ec29  83c408               add esp, 8
// 0058ec2c  50                   push eax
// 0058ec2d  ffd5                 call ebp
// 0058ec2f  83c408               add esp, 8
// 0058ec32  50                   push eax
// 0058ec33  e818b8ebff           call 0x44a450
// 0058ec38  83c408               add esp, 8
// 0058ec3b  56                   push esi
// 0058ec3c  8d44242c             lea eax, [esp + 0x2c]
// 0058ec40  50                   push eax
// 0058ec41  8bcf                 mov ecx, edi
// 0058ec43  e808e4feff           call 0x57d050
// 0058ec48  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0058ec4c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058ec4f  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 0058ec57  7205                 jb 0x58ec5e
// 0058ec59  8b4004               mov eax, dword ptr [eax + 4]
// 0058ec5c  eb03                 jmp 0x58ec61
// 0058ec5e  83c004               add eax, 4
// 0058ec61  50                   push eax
// 0058ec62  51                   push ecx
// 0058ec63  e838f8ffff           call 0x58e4a0
// 0058ec68  83c408               add esp, 8
// 0058ec6b  8d4c2428             lea ecx, [esp + 0x28]
// 0058ec6f  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0058ec77  ff1568248000         call dword ptr [0x802468]
// 0058ec7d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058ec80  6a22                 push 0x22
// 0058ec82  51                   push ecx
// 0058ec83  e8b8b9ebff           call 0x44a640
// 0058ec88  83c408               add esp, 8
// 0058ec8b  8b5624               mov edx, dword ptr [esi + 0x24]
// 0058ec8e  6a3e                 push 0x3e
// 0058ec90  52                   push edx
// 0058ec91  e8aab9ebff           call 0x44a640
// 0058ec96  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0058ec9a  83c408               add esp, 8
// 0058ec9d  5f                   pop edi
// 0058ec9e  5e                   pop esi
// 0058ec9f  5d                   pop ebp
// 0058eca0  64890d00000000       mov dword ptr fs:[0], ecx
// 0058eca7  83c444               add esp, 0x44
// 0058ecaa  c20c00               ret 0xc
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?writeOpenTag@TextXmlWriter@@IAEXPBVXmlElement@@HPBVXmlAttribute@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
