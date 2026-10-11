// roc 2009-06 0060a620  unit: RBX::GlobalSettings  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060a620
//
// 0060a620  64a100000000         mov eax, dword ptr fs:[0]
// 0060a626  6aff                 push -1
// 0060a628  68a8e58600           push 0x86e5a8
// 0060a62d  50                   push eax
// 0060a62e  64892500000000       mov dword ptr fs:[0], esp
// 0060a635  83ec14               sub esp, 0x14
// 0060a638  53                   push ebx
// 0060a639  55                   push ebp
// 0060a63a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0060a63e  56                   push esi
// 0060a63f  55                   push ebp
// 0060a640  8bf1                 mov esi, ecx
// 0060a642  e829f4ffff           call 0x609a70
// 0060a647  8bd8                 mov ebx, eax
// 0060a649  85f6                 test esi, esi
// 0060a64b  7506                 jne 0x60a653
// 0060a64d  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a653  8b4618               mov eax, dword ptr [esi + 0x18]
// 0060a656  57                   push edi
// 0060a657  8b3e                 mov edi, dword ptr [esi]
// 0060a659  89442414             mov dword ptr [esp + 0x14], eax
// 0060a65d  85ff                 test edi, edi
// 0060a65f  7404                 je 0x60a665
// 0060a661  3bff                 cmp edi, edi
// 0060a663  7406                 je 0x60a66b
// 0060a665  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a66b  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 0060a66f  740f                 je 0x60a680
// 0060a671  8d4b0c               lea ecx, [ebx + 0xc]
// 0060a674  51                   push ecx
// 0060a675  8bcd                 mov ecx, ebp
// 0060a677  e8041f0400           call 0x64c580
// 0060a67c  84c0                 test al, al
// 0060a67e  747d                 je 0x60a6fd
// 0060a680  8b5500               mov edx, dword ptr [ebp]
// 0060a683  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0060a686  33c0                 xor eax, eax
// 0060a688  89542418             mov dword ptr [esp + 0x18], edx
// 0060a68c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0060a690  3be8                 cmp ebp, eax
// 0060a692  740d                 je 0x60a6a1
// 0060a694  83c504               add ebp, 4
// 0060a697  b901000000           mov ecx, 1
// 0060a69c  f00fc14d00           lock xadd dword ptr [ebp], ecx
// 0060a6a1  89442420             mov dword ptr [esp + 0x20], eax
// 0060a6a5  8d542418             lea edx, [esp + 0x18]
// 0060a6a9  52                   push edx
// 0060a6aa  53                   push ebx
// 0060a6ab  89442434             mov dword ptr [esp + 0x34], eax
// 0060a6af  57                   push edi
// 0060a6b0  8d44241c             lea eax, [esp + 0x1c]
// 0060a6b4  50                   push eax
// 0060a6b5  8bce                 mov ecx, esi
// 0060a6b7  e844fdffff           call 0x60a400
// 0060a6bc  8b38                 mov edi, dword ptr [eax]
// 0060a6be  8b5804               mov ebx, dword ptr [eax + 4]
// 0060a6c1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060a6c5  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0060a6cd  85c0                 test eax, eax
// 0060a6cf  742c                 je 0x60a6fd
// 0060a6d1  8bf0                 mov esi, eax
// 0060a6d3  83c004               add eax, 4
// 0060a6d6  83c9ff               or ecx, 0xffffffff
// 0060a6d9  f00fc108             lock xadd dword ptr [eax], ecx
// 0060a6dd  751e                 jne 0x60a6fd
// 0060a6df  8b16                 mov edx, dword ptr [esi]
// 0060a6e1  8b4204               mov eax, dword ptr [edx + 4]
// 0060a6e4  8bce                 mov ecx, esi
// 0060a6e6  ffd0                 call eax
// 0060a6e8  8d4e08               lea ecx, [esi + 8]
// 0060a6eb  83caff               or edx, 0xffffffff
// 0060a6ee  f00fc111             lock xadd dword ptr [ecx], edx
// 0060a6f2  7509                 jne 0x60a6fd
// 0060a6f4  8b06                 mov eax, dword ptr [esi]
// 0060a6f6  8b5008               mov edx, dword ptr [eax + 8]
// 0060a6f9  8bce                 mov ecx, esi
// 0060a6fb  ffd2                 call edx
// 0060a6fd  85ff                 test edi, edi
// 0060a6ff  7529                 jne 0x60a72a
// 0060a701  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a707  3b5f18               cmp ebx, dword ptr [edi + 0x18]
// 0060a70a  5f                   pop edi
// 0060a70b  7506                 jne 0x60a713
// 0060a70d  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a713  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060a717  5e                   pop esi
// 0060a718  5d                   pop ebp
// 0060a719  8d4314               lea eax, [ebx + 0x14]
// 0060a71c  5b                   pop ebx
// 0060a71d  64890d00000000       mov dword ptr fs:[0], ecx
// 0060a724  83c420               add esp, 0x20
// 0060a727  c20400               ret 4
// 0060a72a  8b3f                 mov edi, dword ptr [edi]
// 0060a72c  ebd9                 jmp 0x60a707
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??A?$map@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@@std@@QAEAAHABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
