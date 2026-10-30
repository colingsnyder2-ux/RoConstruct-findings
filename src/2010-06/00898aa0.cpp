// roc 2010-06 00898aa0  unit: CXTCaptionTheme  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00898aa0
//
// 00898aa0  6aff                 push -1
// 00898aa2  6838be9b00           push 0x9bbe38
// 00898aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00898aad  50                   push eax
// 00898aae  83ec20               sub esp, 0x20
// 00898ab1  53                   push ebx
// 00898ab2  56                   push esi
// 00898ab3  57                   push edi
// 00898ab4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00898ab9  33c4                 xor eax, esp
// 00898abb  50                   push eax
// 00898abc  8d442430             lea eax, [esp + 0x30]
// 00898ac0  64a300000000         mov dword ptr fs:[0], eax
// 00898ac6  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00898aca  8d9fd0000000         lea ebx, [edi + 0xd0]
// 00898ad0  8bcb                 mov ecx, ebx
// 00898ad2  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00898ad8  84c0                 test al, al
// 00898ada  0f8581000000         jne 0x898b61
// 00898ae0  8b07                 mov eax, dword ptr [edi]
// 00898ae2  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00898ae8  8d4c2410             lea ecx, [esp + 0x10]
// 00898aec  51                   push ecx
// 00898aed  8bcf                 mov ecx, edi
// 00898aef  ffd2                 call edx
// 00898af1  8b4720               mov eax, dword ptr [edi + 0x20]
// 00898af4  6a00                 push 0
// 00898af6  6a00                 push 0
// 00898af8  6a31                 push 0x31
// 00898afa  50                   push eax
// 00898afb  ff1554ba9e00         call dword ptr [0x9eba54]
// 00898b01  50                   push eax
// 00898b02  e89df9f0ff           call 0x7a84a4
// 00898b07  8b742440             mov esi, dword ptr [esp + 0x40]
// 00898b0b  50                   push eax
// 00898b0c  56                   push esi
// 00898b0d  8d4c2428             lea ecx, [esp + 0x28]
// 00898b11  e88a6bf6ff           call 0x7ff6a0
// 00898b16  8b16                 mov edx, dword ptr [esi]
// 00898b18  8b4778               mov eax, dword ptr [edi + 0x78]
// 00898b1b  8b5238               mov edx, dword ptr [edx + 0x38]
// 00898b1e  50                   push eax
// 00898b1f  8bce                 mov ecx, esi
// 00898b21  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00898b29  ffd2                 call edx
// 00898b2b  8b3e                 mov edi, dword ptr [esi]
// 00898b2d  6825880000           push 0x8825
// 00898b32  8d442414             lea eax, [esp + 0x14]
// 00898b36  50                   push eax
// 00898b37  8bcb                 mov ecx, ebx
// 00898b39  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00898b3f  50                   push eax
// 00898b40  8bcb                 mov ecx, ebx
// 00898b42  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00898b48  8b5770               mov edx, dword ptr [edi + 0x70]
// 00898b4b  50                   push eax
// 00898b4c  8bce                 mov ecx, esi
// 00898b4e  ffd2                 call edx
// 00898b50  8d4c2420             lea ecx, [esp + 0x20]
// 00898b54  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00898b5c  e8bf6bf6ff           call 0x7ff720
// 00898b61  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00898b65  64890d00000000       mov dword ptr fs:[0], ecx
// 00898b6c  59                   pop ecx
// 00898b6d  5f                   pop edi
// 00898b6e  5e                   pop esi
// 00898b6f  5b                   pop ebx
// 00898b70  83c42c               add esp, 0x2c
// 00898b73  c20800               ret 8
// copied from an identical function in another client (function ?DrawCaptionText@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaptionTheme.cpp