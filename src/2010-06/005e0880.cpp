// roc 2010-06 005e0880  unit: RBX::GlobalSettings  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0880
//
// 005e0880  64a100000000         mov eax, dword ptr fs:[0]
// 005e0886  6aff                 push -1
// 005e0888  68c87b9900           push 0x997bc8
// 005e088d  50                   push eax
// 005e088e  64892500000000       mov dword ptr fs:[0], esp
// 005e0895  83ec14               sub esp, 0x14
// 005e0898  53                   push ebx
// 005e0899  55                   push ebp
// 005e089a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005e089e  56                   push esi
// 005e089f  55                   push ebp
// 005e08a0  8bf1                 mov esi, ecx
// 005e08a2  e829f4ffff           call 0x5dfcd0
// 005e08a7  8bd8                 mov ebx, eax
// 005e08a9  85f6                 test esi, esi
// 005e08ab  7506                 jne 0x5e08b3
// 005e08ad  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e08b3  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e08b6  57                   push edi
// 005e08b7  8b3e                 mov edi, dword ptr [esi]
// 005e08b9  89442414             mov dword ptr [esp + 0x14], eax
// 005e08bd  85ff                 test edi, edi
// 005e08bf  7404                 je 0x5e08c5
// 005e08c1  3bff                 cmp edi, edi
// 005e08c3  7406                 je 0x5e08cb
// 005e08c5  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e08cb  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 005e08cf  740f                 je 0x5e08e0
// 005e08d1  8d4b0c               lea ecx, [ebx + 0xc]
// 005e08d4  51                   push ecx
// 005e08d5  8bcd                 mov ecx, ebp
// 005e08d7  e8c4100500           call 0x6319a0
// 005e08dc  84c0                 test al, al
// 005e08de  747d                 je 0x5e095d
// 005e08e0  8b5500               mov edx, dword ptr [ebp]
// 005e08e3  8b6d04               mov ebp, dword ptr [ebp + 4]
// 005e08e6  33c0                 xor eax, eax
// 005e08e8  89542418             mov dword ptr [esp + 0x18], edx
// 005e08ec  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005e08f0  3be8                 cmp ebp, eax
// 005e08f2  740d                 je 0x5e0901
// 005e08f4  83c504               add ebp, 4
// 005e08f7  b901000000           mov ecx, 1
// 005e08fc  f00fc14d00           lock xadd dword ptr [ebp], ecx
// 005e0901  89442420             mov dword ptr [esp + 0x20], eax
// 005e0905  8d542418             lea edx, [esp + 0x18]
// 005e0909  52                   push edx
// 005e090a  53                   push ebx
// 005e090b  89442434             mov dword ptr [esp + 0x34], eax
// 005e090f  57                   push edi
// 005e0910  8d44241c             lea eax, [esp + 0x1c]
// 005e0914  50                   push eax
// 005e0915  8bce                 mov ecx, esi
// 005e0917  e844fdffff           call 0x5e0660
// 005e091c  8b38                 mov edi, dword ptr [eax]
// 005e091e  8b5804               mov ebx, dword ptr [eax + 4]
// 005e0921  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e0925  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005e092d  85c0                 test eax, eax
// 005e092f  742c                 je 0x5e095d
// 005e0931  8bf0                 mov esi, eax
// 005e0933  83c004               add eax, 4
// 005e0936  83c9ff               or ecx, 0xffffffff
// 005e0939  f00fc108             lock xadd dword ptr [eax], ecx
// 005e093d  751e                 jne 0x5e095d
// 005e093f  8b16                 mov edx, dword ptr [esi]
// 005e0941  8b4204               mov eax, dword ptr [edx + 4]
// 005e0944  8bce                 mov ecx, esi
// 005e0946  ffd0                 call eax
// 005e0948  8d4e08               lea ecx, [esi + 8]
// 005e094b  83caff               or edx, 0xffffffff
// 005e094e  f00fc111             lock xadd dword ptr [ecx], edx
// 005e0952  7509                 jne 0x5e095d
// 005e0954  8b06                 mov eax, dword ptr [esi]
// 005e0956  8b5008               mov edx, dword ptr [eax + 8]
// 005e0959  8bce                 mov ecx, esi
// 005e095b  ffd2                 call edx
// 005e095d  85ff                 test edi, edi
// 005e095f  7529                 jne 0x5e098a
// 005e0961  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e0967  3b5f18               cmp ebx, dword ptr [edi + 0x18]
// 005e096a  5f                   pop edi
// 005e096b  7506                 jne 0x5e0973
// 005e096d  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e0973  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e0977  5e                   pop esi
// 005e0978  5d                   pop ebp
// 005e0979  8d4314               lea eax, [ebx + 0x14]
// 005e097c  5b                   pop ebx
// 005e097d  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0984  83c420               add esp, 0x20
// 005e0987  c20400               ret 4
// 005e098a  8b3f                 mov edi, dword ptr [edi]
// 005e098c  ebd9                 jmp 0x5e0967
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??A?$map@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@@std@@QAEAAHABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
