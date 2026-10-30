// roc 2010-06 007d5df0  unit: CXTPReportControl  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d5df0
//
// 007d5df0  6aff                 push -1
// 007d5df2  68180f9b00           push 0x9b0f18
// 007d5df7  64a100000000         mov eax, dword ptr fs:[0]
// 007d5dfd  50                   push eax
// 007d5dfe  83ec1c               sub esp, 0x1c
// 007d5e01  53                   push ebx
// 007d5e02  55                   push ebp
// 007d5e03  56                   push esi
// 007d5e04  57                   push edi
// 007d5e05  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007d5e0a  33c4                 xor eax, esp
// 007d5e0c  50                   push eax
// 007d5e0d  8d442430             lea eax, [esp + 0x30]
// 007d5e11  64a300000000         mov dword ptr fs:[0], eax
// 007d5e17  894c2420             mov dword ptr [esp + 0x20], ecx
// 007d5e1b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007d5e1f  e8bcad0000           call 0x7e0be0
// 007d5e24  8b742440             mov esi, dword ptr [esp + 0x40]
// 007d5e28  33db                 xor ebx, ebx
// 007d5e2a  3bf3                 cmp esi, ebx
// 007d5e2c  7455                 je 0x7d5e83
// 007d5e2e  395e28               cmp dword ptr [esi + 0x28], ebx
// 007d5e31  7450                 je 0x7d5e83
// 007d5e33  8b06                 mov eax, dword ptr [esi]
// 007d5e35  8b5070               mov edx, dword ptr [eax + 0x70]
// 007d5e38  685093a500           push 0xa59350
// 007d5e3d  8bce                 mov ecx, esi
// 007d5e3f  ffd2                 call edx
// 007d5e41  8bf8                 mov edi, eax
// 007d5e43  897c2424             mov dword ptr [esp + 0x24], edi
// 007d5e47  8d442418             lea eax, [esp + 0x18]
// 007d5e4b  50                   push eax
// 007d5e4c  680c00a000           push 0xa0000c
// 007d5e51  56                   push esi
// 007d5e52  895c2444             mov dword ptr [esp + 0x44], ebx
// 007d5e56  895c2424             mov dword ptr [esp + 0x24], ebx
// 007d5e5a  e811ec0200           call 0x804a70
// 007d5e5f  83c40c               add esp, 0xc
// 007d5e62  8bce                 mov ecx, esi
// 007d5e64  e897fc0200           call 0x805b00
// 007d5e69  837c241801           cmp dword ptr [esp + 0x18], 1
// 007d5e6e  742b                 je 0x7d5e9b
// 007d5e70  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007d5e78  3bfb                 cmp edi, ebx
// 007d5e7a  7407                 je 0x7d5e83
// 007d5e7c  8bcf                 mov ecx, edi
// 007d5e7e  e89920fdff           call 0x7a7f1c
// 007d5e83  33c0                 xor eax, eax
// 007d5e85  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007d5e89  64890d00000000       mov dword ptr fs:[0], ecx
// 007d5e90  59                   pop ecx
// 007d5e91  5f                   pop edi
// 007d5e92  5e                   pop esi
// 007d5e93  5d                   pop ebp
// 007d5e94  5b                   pop ebx
// 007d5e95  83c428               add esp, 0x28
// 007d5e98  c20800               ret 8
// 007d5e9b  8b17                 mov edx, dword ptr [edi]
// 007d5e9d  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 007d5ea3  684893a500           push 0xa59348
// 007d5ea8  8bcf                 mov ecx, edi
// 007d5eaa  ffd0                 call eax
// 007d5eac  8be8                 mov ebp, eax
// 007d5eae  896c2428             mov dword ptr [esp + 0x28], ebp
// 007d5eb2  8b5500               mov edx, dword ptr [ebp]
// 007d5eb5  8b4204               mov eax, dword ptr [edx + 4]
// 007d5eb8  6a01                 push 1
// 007d5eba  53                   push ebx
// 007d5ebb  8bcd                 mov ecx, ebp
// 007d5ebd  c644244001           mov byte ptr [esp + 0x40], 1
// 007d5ec2  ffd0                 call eax
// 007d5ec4  8944241c             mov dword ptr [esp + 0x1c], eax
// 007d5ec8  3bc3                 cmp eax, ebx
// 007d5eca  0f84ae000000         je 0x7d5f7e
// 007d5ed0  8b5500               mov edx, dword ptr [ebp]
// 007d5ed3  8b5208               mov edx, dword ptr [edx + 8]
// 007d5ed6  8d44241c             lea eax, [esp + 0x1c]
// 007d5eda  50                   push eax
// 007d5edb  8bcd                 mov ecx, ebp
// 007d5edd  ffd2                 call edx
// 007d5edf  8bf0                 mov esi, eax
// 007d5ee1  8974242c             mov dword ptr [esp + 0x2c], esi
// 007d5ee5  c644243802           mov byte ptr [esp + 0x38], 2
// 007d5eea  895c2440             mov dword ptr [esp + 0x40], ebx
// 007d5eee  e88d8e0000           call 0x7ded80
// 007d5ef3  8b16                 mov edx, dword ptr [esi]
// 007d5ef5  8b5264               mov edx, dword ptr [edx + 0x64]
// 007d5ef8  50                   push eax
// 007d5ef9  8d442444             lea eax, [esp + 0x44]
// 007d5efd  50                   push eax
// 007d5efe  8bce                 mov ecx, esi
// 007d5f00  ffd2                 call edx
// 007d5f02  85c0                 test eax, eax
// 007d5f04  740c                 je 0x7d5f12
// 007d5f06  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007d5f0a  8b01                 mov eax, dword ptr [ecx]
// 007d5f0c  8b5060               mov edx, dword ptr [eax + 0x60]
// 007d5f0f  56                   push esi
// 007d5f10  ffd2                 call edx
// 007d5f12  8b442440             mov eax, dword ptr [esp + 0x40]
// 007d5f16  3bc3                 cmp eax, ebx
// 007d5f18  0f8488000000         je 0x7d5fa6
// 007d5f1e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007d5f22  89442414             mov dword ptr [esp + 0x14], eax
// 007d5f26  8b01                 mov eax, dword ptr [ecx]
// 007d5f28  8b8000020000         mov eax, dword ptr [eax + 0x200]
// 007d5f2e  8d542414             lea edx, [esp + 0x14]
// 007d5f32  52                   push edx
// 007d5f33  ffd0                 call eax
// 007d5f35  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007d5f39  8bf8                 mov edi, eax
// 007d5f3b  3bfb                 cmp edi, ebx
// 007d5f3d  7506                 jne 0x7d5f45
// 007d5f3f  394c2414             cmp dword ptr [esp + 0x14], ecx
// 007d5f43  7411                 je 0x7d5f56
// 007d5f45  3bcb                 cmp ecx, ebx
// 007d5f47  7409                 je 0x7d5f52
// 007d5f49  e8ce1ffdff           call 0x7a7f1c
// 007d5f4e  895c2440             mov dword ptr [esp + 0x40], ebx
// 007d5f52  3bfb                 cmp edi, ebx
// 007d5f54  750e                 jne 0x7d5f64
// 007d5f56  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d5f5a  51                   push ecx
// 007d5f5b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007d5f5f  e8ccb00000           call 0x7e1030
// 007d5f64  8bce                 mov ecx, esi
// 007d5f66  c644243801           mov byte ptr [esp + 0x38], 1
// 007d5f6b  e8ac1ffdff           call 0x7a7f1c
// 007d5f70  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 007d5f74  0f8556ffffff         jne 0x7d5ed0
// 007d5f7a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007d5f7e  8b5500               mov edx, dword ptr [ebp]
// 007d5f81  8b02                 mov eax, dword ptr [edx]
// 007d5f83  6a01                 push 1
// 007d5f85  8bcd                 mov ecx, ebp
// 007d5f87  885c243c             mov byte ptr [esp + 0x3c], bl
// 007d5f8b  ffd0                 call eax
// 007d5f8d  8bcf                 mov ecx, edi
// 007d5f8f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007d5f97  e8801ffdff           call 0x7a7f1c
// 007d5f9c  b801000000           mov eax, 1
// 007d5fa1  e9dffeffff           jmp 0x7d5e85
// 007d5fa6  53                   push ebx
// 007d5fa7  6a06                 push 6
// 007d5fa9  e86225fdff           call 0x7a8510
// copied from an identical function in another client (function ?_ReadRecodsFromData@CXTPReportControl@@MAEHPAVCXTPPropExchange@@AAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp