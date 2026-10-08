// roc 2007-08 00442f70  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442f70
//
// 00442f70  83ec0c               sub esp, 0xc
// 00442f73  53                   push ebx
// 00442f74  55                   push ebp
// 00442f75  56                   push esi
// 00442f76  8bf1                 mov esi, ecx
// 00442f78  8b5608               mov edx, dword ptr [esi + 8]
// 00442f7b  33c0                 xor eax, eax
// 00442f7d  85d2                 test edx, edx
// 00442f7f  57                   push edi
// 00442f80  89442410             mov dword ptr [esp + 0x10], eax
// 00442f84  7504                 jne 0x442f8a
// 00442f86  33c9                 xor ecx, ecx
// 00442f88  eb08                 jmp 0x442f92
// 00442f8a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00442f8d  2bca                 sub ecx, edx
// 00442f8f  c1f902               sar ecx, 2
// 00442f92  85c9                 test ecx, ecx
// 00442f94  8b5614               mov edx, dword ptr [esi + 0x14]
// 00442f97  8d7c2410             lea edi, [esp + 0x10]
// 00442f9b  894c2414             mov dword ptr [esp + 0x14], ecx
// 00442f9f  89542418             mov dword ptr [esp + 0x18], edx
// 00442fa3  897e14               mov dword ptr [esi + 0x14], edi
// 00442fa6  765d                 jbe 0x443005
// 00442fa8  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00442fac  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00442fb0  8b5608               mov edx, dword ptr [esi + 8]
// 00442fb3  85d2                 test edx, edx
// 00442fb5  8bf8                 mov edi, eax
// 00442fb7  740c                 je 0x442fc5
// 00442fb9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00442fbc  2bca                 sub ecx, edx
// 00442fbe  c1f902               sar ecx, 2
// 00442fc1  3bc1                 cmp eax, ecx
// 00442fc3  7206                 jb 0x442fcb
// 00442fc5  ff15d8e67700         call dword ptr [0x77e6d8]
// 00442fcb  8b4608               mov eax, dword ptr [esi + 8]
// 00442fce  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00442fd1  50                   push eax
// 00442fd2  83ec08               sub esp, 8
// 00442fd5  8bc4                 mov eax, esp
// 00442fd7  8bce                 mov ecx, esi
// 00442fd9  8928                 mov dword ptr [eax], ebp
// 00442fdb  895804               mov dword ptr [eax + 4], ebx
// 00442fde  e89dfcffff           call 0x442c80
// 00442fe3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00442fe7  83c001               add eax, 1
// 00442fea  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00442fee  89442410             mov dword ptr [esp + 0x10], eax
// 00442ff2  72bc                 jb 0x442fb0
// 00442ff4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00442ff8  894e14               mov dword ptr [esi + 0x14], ecx
// 00442ffb  5f                   pop edi
// 00442ffc  5e                   pop esi
// 00442ffd  5d                   pop ebp
// 00442ffe  5b                   pop ebx
// 00442fff  83c40c               add esp, 0xc
// 00443002  c20800               ret 8
// 00443005  5f                   pop edi
// 00443006  895614               mov dword ptr [esi + 0x14], edx
// 00443009  5e                   pop esi
// 0044300a  5d                   pop ebp
// 0044300b  5b                   pop ebx
// 0044300c  83c40c               add esp, 0xc
// 0044300f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Feature.cpp (function ?raise@?$Notifier@VInstance@RBX@@VPropertyChanged@2@@RBX@@IBEXVPropertyChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
