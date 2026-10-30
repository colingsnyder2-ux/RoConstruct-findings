// roc 2011-06 008f2ec0  unit: CXTCaptionButton  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2ec0
//
// 008f2ec0  6aff                 push -1
// 008f2ec2  6858eba000           push 0xa0eb58
// 008f2ec7  64a100000000         mov eax, dword ptr fs:[0]
// 008f2ecd  50                   push eax
// 008f2ece  83ec34               sub esp, 0x34
// 008f2ed1  53                   push ebx
// 008f2ed2  56                   push esi
// 008f2ed3  57                   push edi
// 008f2ed4  a12058c900           mov eax, dword ptr [0xc95820]
// 008f2ed9  33c4                 xor eax, esp
// 008f2edb  50                   push eax
// 008f2edc  8d442444             lea eax, [esp + 0x44]
// 008f2ee0  64a300000000         mov dword ptr fs:[0], eax
// 008f2ee6  8bf9                 mov edi, ecx
// 008f2ee8  8d4c2420             lea ecx, [esp + 0x20]
// 008f2eec  e86fdbf2ff           call 0x820a60
// 008f2ef1  0fb74c245c           movzx ecx, word ptr [esp + 0x5c]
// 008f2ef6  8d442410             lea eax, [esp + 0x10]
// 008f2efa  50                   push eax
// 008f2efb  33db                 xor ebx, ebx
// 008f2efd  51                   push ecx
// 008f2efe  895c2454             mov dword ptr [esp + 0x54], ebx
// 008f2f02  895c2418             mov dword ptr [esp + 0x18], ebx
// 008f2f06  e835edf2ff           call 0x821c40
// 008f2f0b  83c408               add esp, 8
// 008f2f0e  3bc3                 cmp eax, ebx
// 008f2f10  7528                 jne 0x8f2f3a
// 008f2f12  8d4c2420             lea ecx, [esp + 0x20]
// 008f2f16  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008f2f1e  e83dfff2ff           call 0x822e60
// 008f2f23  33c0                 xor eax, eax
// 008f2f25  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008f2f29  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2f30  59                   pop ecx
// 008f2f31  5f                   pop edi
// 008f2f32  5e                   pop esi
// 008f2f33  5b                   pop ebx
// 008f2f34  83c440               add esp, 0x40
// 008f2f37  c21000               ret 0x10
// 008f2f3a  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008f2f3e  740c                 je 0x8f2f4c
// 008f2f40  50                   push eax
// 008f2f41  8d4c2424             lea ecx, [esp + 0x24]
// 008f2f45  e8d6fef2ff           call 0x822e20
// 008f2f4a  eb4c                 jmp 0x8f2f98
// 008f2f4c  be90e7a500           mov esi, 0xa5e790
// 008f2f51  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008f2f55  89742418             mov dword ptr [esp + 0x18], esi
// 008f2f59  50                   push eax
// 008f2f5a  8d4c241c             lea ecx, [esp + 0x1c]
// 008f2f5e  c644245001           mov byte ptr [esp + 0x50], 1
// 008f2f63  e8c076f1ff           call 0x80a628
// 008f2f68  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f2f6c  52                   push edx
// 008f2f6d  8d4c2460             lea ecx, [esp + 0x60]
// 008f2f71  e80aefd5ff           call 0x651e80
// 008f2f76  8bc8                 mov ecx, eax
// 008f2f78  e863bcf6ff           call 0x85ebe0
// 008f2f7d  50                   push eax
// 008f2f7e  8d4c2424             lea ecx, [esp + 0x24]
// 008f2f82  e859fef2ff           call 0x822de0
// 008f2f87  8d4c2418             lea ecx, [esp + 0x18]
// 008f2f8b  885c244c             mov byte ptr [esp + 0x4c], bl
// 008f2f8f  89742418             mov dword ptr [esp + 0x18], esi
// 008f2f93  e89809b2ff           call 0x413930
// 008f2f98  8d4c2420             lea ecx, [esp + 0x20]
// 008f2f9c  e82fdbf2ff           call 0x820ad0
// 008f2fa1  85c0                 test eax, eax
// 008f2fa3  0f8569ffffff         jne 0x8f2f12
// 008f2fa9  8b442460             mov eax, dword ptr [esp + 0x60]
// 008f2fad  50                   push eax
// 008f2fae  83ec24               sub esp, 0x24
// 008f2fb1  8bcc                 mov ecx, esp
// 008f2fb3  89a42488000000       mov dword ptr [esp + 0x88], esp
// 008f2fba  e8a1daf2ff           call 0x820a60
// 008f2fbf  83ec24               sub esp, 0x24
// 008f2fc2  8d54246c             lea edx, [esp + 0x6c]
// 008f2fc6  8bcc                 mov ecx, esp
// 008f2fc8  89642460             mov dword ptr [esp + 0x60], esp
// 008f2fcc  52                   push edx
// 008f2fcd  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008f2fd5  e896daf2ff           call 0x820a70
// 008f2fda  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008f2fe1  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008f2fe8  50                   push eax
// 008f2fe9  51                   push ecx
// 008f2fea  8bcf                 mov ecx, edi
// 008f2fec  889c24a0000000       mov byte ptr [esp + 0xa0], bl
// 008f2ff3  e898fdffff           call 0x8f2d90
// 008f2ff8  8d4c2420             lea ecx, [esp + 0x20]
// 008f2ffc  8bf0                 mov esi, eax
// 008f2ffe  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008f3006  e855fef2ff           call 0x822e60
// 008f300b  8bc6                 mov eax, esi
// 008f300d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008f3011  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3018  59                   pop ecx
// 008f3019  5f                   pop edi
// 008f301a  5e                   pop esi
// 008f301b  5b                   pop ebx
// 008f301c  83c440               add esp, 0x40
// 008f301f  c21000               ret 0x10
// copied from an identical function in another client (function ?SetBitmap@CXTButton@@UAEHVCSize@@IH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp