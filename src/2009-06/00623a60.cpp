// roc 2009-06 00623a60  unit: ArchiveBinder  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623a60
//
// 00623a60  6aff                 push -1
// 00623a62  64a100000000         mov eax, dword ptr fs:[0]
// 00623a68  68e08a8600           push 0x868ae0
// 00623a6d  50                   push eax
// 00623a6e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00623a72  64892500000000       mov dword ptr fs:[0], esp
// 00623a79  83ec34               sub esp, 0x34
// 00623a7c  53                   push ebx
// 00623a7d  55                   push ebp
// 00623a7e  56                   push esi
// 00623a7f  57                   push edi
// 00623a80  50                   push eax
// 00623a81  8bf1                 mov esi, ecx
// 00623a83  e898e7ffff           call 0x622220
// 00623a88  33db                 xor ebx, ebx
// 00623a8a  8be8                 mov ebp, eax
// 00623a8c  3bf3                 cmp esi, ebx
// 00623a8e  7506                 jne 0x623a96
// 00623a90  ff15ace98900         call dword ptr [0x89e9ac]
// 00623a96  8b3e                 mov edi, dword ptr [esi]
// 00623a98  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00623a9b  894c2414             mov dword ptr [esp + 0x14], ecx
// 00623a9f  3bfb                 cmp edi, ebx
// 00623aa1  7404                 je 0x623aa7
// 00623aa3  3bff                 cmp edi, edi
// 00623aa5  7406                 je 0x623aad
// 00623aa7  ff15ace98900         call dword ptr [0x89e9ac]
// 00623aad  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00623ab1  7416                 je 0x623ac9
// 00623ab3  8b442454             mov eax, dword ptr [esp + 0x54]
// 00623ab7  8d550c               lea edx, [ebp + 0xc]
// 00623aba  52                   push edx
// 00623abb  50                   push eax
// 00623abc  ff15e0e48900         call dword ptr [0x89e4e0]
// 00623ac2  83c408               add esp, 8
// 00623ac5  84c0                 test al, al
// 00623ac7  744d                 je 0x623b16
// 00623ac9  895c2410             mov dword ptr [esp + 0x10], ebx
// 00623acd  895c2414             mov dword ptr [esp + 0x14], ebx
// 00623ad1  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00623ad5  51                   push ecx
// 00623ad6  8d4c2424             lea ecx, [esp + 0x24]
// 00623ada  895c2450             mov dword ptr [esp + 0x50], ebx
// 00623ade  ff15b8e48900         call dword ptr [0x89e4b8]
// 00623ae4  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00623ae8  895c2440             mov dword ptr [esp + 0x40], ebx
// 00623aec  8d542420             lea edx, [esp + 0x20]
// 00623af0  52                   push edx
// 00623af1  55                   push ebp
// 00623af2  57                   push edi
// 00623af3  8d442424             lea eax, [esp + 0x24]
// 00623af7  50                   push eax
// 00623af8  8bce                 mov ecx, esi
// 00623afa  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00623aff  e81cfdffff           call 0x623820
// 00623b04  8b38                 mov edi, dword ptr [eax]
// 00623b06  8b6804               mov ebp, dword ptr [eax + 4]
// 00623b09  8d4c2420             lea ecx, [esp + 0x20]
// 00623b0d  885c244c             mov byte ptr [esp + 0x4c], bl
// 00623b11  e88ae6ffff           call 0x6221a0
// 00623b16  3bfb                 cmp edi, ebx
// 00623b18  752b                 jne 0x623b45
// 00623b1a  ff15ace98900         call dword ptr [0x89e9ac]
// 00623b20  33ff                 xor edi, edi
// 00623b22  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 00623b25  7506                 jne 0x623b2d
// 00623b27  ff15ace98900         call dword ptr [0x89e9ac]
// 00623b2d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00623b31  5f                   pop edi
// 00623b32  5e                   pop esi
// 00623b33  8d4528               lea eax, [ebp + 0x28]
// 00623b36  5d                   pop ebp
// 00623b37  5b                   pop ebx
// 00623b38  64890d00000000       mov dword ptr fs:[0], ecx
// 00623b3f  83c440               add esp, 0x40
// 00623b42  c20400               ret 4
// 00623b45  8b3f                 mov edi, dword ptr [edi]
// 00623b47  ebd9                 jmp 0x623b22
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@@std@@QAEAAVInstanceHandle@RBX@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
