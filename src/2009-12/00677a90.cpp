// roc 2009-12 00677a90  unit: RBX::GlobalSettings  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677a90
//
// 00677a90  64a100000000         mov eax, dword ptr fs:[0]
// 00677a96  6aff                 push -1
// 00677a98  6838749400           push 0x947438
// 00677a9d  50                   push eax
// 00677a9e  64892500000000       mov dword ptr fs:[0], esp
// 00677aa5  83ec14               sub esp, 0x14
// 00677aa8  53                   push ebx
// 00677aa9  55                   push ebp
// 00677aaa  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00677aae  56                   push esi
// 00677aaf  55                   push ebp
// 00677ab0  8bf1                 mov esi, ecx
// 00677ab2  e8b9f3ffff           call 0x676e70
// 00677ab7  8bd8                 mov ebx, eax
// 00677ab9  85f6                 test esi, esi
// 00677abb  7506                 jne 0x677ac3
// 00677abd  ff1560b79800         call dword ptr [0x98b760]
// 00677ac3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00677ac6  57                   push edi
// 00677ac7  8b3e                 mov edi, dword ptr [esi]
// 00677ac9  89442414             mov dword ptr [esp + 0x14], eax
// 00677acd  85ff                 test edi, edi
// 00677acf  7404                 je 0x677ad5
// 00677ad1  3bff                 cmp edi, edi
// 00677ad3  7406                 je 0x677adb
// 00677ad5  ff1560b79800         call dword ptr [0x98b760]
// 00677adb  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 00677adf  740f                 je 0x677af0
// 00677ae1  8d4b0c               lea ecx, [ebx + 0xc]
// 00677ae4  51                   push ecx
// 00677ae5  8bcd                 mov ecx, ebp
// 00677ae7  e814e10400           call 0x6c5c00
// 00677aec  84c0                 test al, al
// 00677aee  747d                 je 0x677b6d
// 00677af0  8b5500               mov edx, dword ptr [ebp]
// 00677af3  8b6d04               mov ebp, dword ptr [ebp + 4]
// 00677af6  33c0                 xor eax, eax
// 00677af8  89542418             mov dword ptr [esp + 0x18], edx
// 00677afc  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00677b00  3be8                 cmp ebp, eax
// 00677b02  740d                 je 0x677b11
// 00677b04  83c504               add ebp, 4
// 00677b07  b901000000           mov ecx, 1
// 00677b0c  f00fc14d00           lock xadd dword ptr [ebp], ecx
// 00677b11  89442420             mov dword ptr [esp + 0x20], eax
// 00677b15  8d542418             lea edx, [esp + 0x18]
// 00677b19  52                   push edx
// 00677b1a  53                   push ebx
// 00677b1b  89442434             mov dword ptr [esp + 0x34], eax
// 00677b1f  57                   push edi
// 00677b20  8d44241c             lea eax, [esp + 0x1c]
// 00677b24  50                   push eax
// 00677b25  8bce                 mov ecx, esi
// 00677b27  e844fdffff           call 0x677870
// 00677b2c  8b38                 mov edi, dword ptr [eax]
// 00677b2e  8b5804               mov ebx, dword ptr [eax + 4]
// 00677b31  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00677b35  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00677b3d  85c0                 test eax, eax
// 00677b3f  742c                 je 0x677b6d
// 00677b41  8bf0                 mov esi, eax
// 00677b43  83c004               add eax, 4
// 00677b46  83c9ff               or ecx, 0xffffffff
// 00677b49  f00fc108             lock xadd dword ptr [eax], ecx
// 00677b4d  751e                 jne 0x677b6d
// 00677b4f  8b16                 mov edx, dword ptr [esi]
// 00677b51  8b4204               mov eax, dword ptr [edx + 4]
// 00677b54  8bce                 mov ecx, esi
// 00677b56  ffd0                 call eax
// 00677b58  8d4e08               lea ecx, [esi + 8]
// 00677b5b  83caff               or edx, 0xffffffff
// 00677b5e  f00fc111             lock xadd dword ptr [ecx], edx
// 00677b62  7509                 jne 0x677b6d
// 00677b64  8b06                 mov eax, dword ptr [esi]
// 00677b66  8b5008               mov edx, dword ptr [eax + 8]
// 00677b69  8bce                 mov ecx, esi
// 00677b6b  ffd2                 call edx
// 00677b6d  85ff                 test edi, edi
// 00677b6f  7529                 jne 0x677b9a
// 00677b71  ff1560b79800         call dword ptr [0x98b760]
// 00677b77  3b5f18               cmp ebx, dword ptr [edi + 0x18]
// 00677b7a  5f                   pop edi
// 00677b7b  7506                 jne 0x677b83
// 00677b7d  ff1560b79800         call dword ptr [0x98b760]
// 00677b83  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00677b87  5e                   pop esi
// 00677b88  5d                   pop ebp
// 00677b89  8d4314               lea eax, [ebx + 0x14]
// 00677b8c  5b                   pop ebx
// 00677b8d  64890d00000000       mov dword ptr fs:[0], ecx
// 00677b94  83c420               add esp, 0x20
// 00677b97  c20400               ret 4
// 00677b9a  8b3f                 mov edi, dword ptr [edi]
// 00677b9c  ebd9                 jmp 0x677b77
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??A?$map@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@@std@@QAEAAHABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
