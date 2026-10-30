// roc 2012-06 00a69990  unit: CXTCaptionTheme  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69990
//
// 00a69990  6aff                 push -1
// 00a69992  68b88aae00           push 0xae8ab8
// 00a69997  64a100000000         mov eax, dword ptr fs:[0]
// 00a6999d  50                   push eax
// 00a6999e  83ec20               sub esp, 0x20
// 00a699a1  53                   push ebx
// 00a699a2  56                   push esi
// 00a699a3  57                   push edi
// 00a699a4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a699a9  33c4                 xor eax, esp
// 00a699ab  50                   push eax
// 00a699ac  8d442430             lea eax, [esp + 0x30]
// 00a699b0  64a300000000         mov dword ptr fs:[0], eax
// 00a699b6  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a699ba  8d9fd0000000         lea ebx, [edi + 0xd0]
// 00a699c0  8bcb                 mov ecx, ebx
// 00a699c2  ff156046b200         call dword ptr [0xb24660]
// 00a699c8  84c0                 test al, al
// 00a699ca  0f8581000000         jne 0xa69a51
// 00a699d0  8b07                 mov eax, dword ptr [edi]
// 00a699d2  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00a699d8  8d4c2410             lea ecx, [esp + 0x10]
// 00a699dc  51                   push ecx
// 00a699dd  8bcf                 mov ecx, edi
// 00a699df  ffd2                 call edx
// 00a699e1  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a699e4  6a00                 push 0
// 00a699e6  6a00                 push 0
// 00a699e8  6a31                 push 0x31
// 00a699ea  50                   push eax
// 00a699eb  ff15043cb200         call dword ptr [0xb23c04]
// 00a699f1  50                   push eax
// 00a699f2  e8f791f1ff           call 0x982bee
// 00a699f7  8b742440             mov esi, dword ptr [esp + 0x40]
// 00a699fb  50                   push eax
// 00a699fc  56                   push esi
// 00a699fd  8d4c2428             lea ecx, [esp + 0x28]
// 00a69a01  e82abbf6ff           call 0x9d5530
// 00a69a06  8b16                 mov edx, dword ptr [esi]
// 00a69a08  8b4778               mov eax, dword ptr [edi + 0x78]
// 00a69a0b  8b5238               mov edx, dword ptr [edx + 0x38]
// 00a69a0e  50                   push eax
// 00a69a0f  8bce                 mov ecx, esi
// 00a69a11  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a69a19  ffd2                 call edx
// 00a69a1b  8b3e                 mov edi, dword ptr [esi]
// 00a69a1d  6825880000           push 0x8825
// 00a69a22  8d442414             lea eax, [esp + 0x14]
// 00a69a26  50                   push eax
// 00a69a27  8bcb                 mov ecx, ebx
// 00a69a29  ff155846b200         call dword ptr [0xb24658]
// 00a69a2f  50                   push eax
// 00a69a30  8bcb                 mov ecx, ebx
// 00a69a32  ff159847b200         call dword ptr [0xb24798]
// 00a69a38  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a69a3b  50                   push eax
// 00a69a3c  8bce                 mov ecx, esi
// 00a69a3e  ffd2                 call edx
// 00a69a40  8d4c2420             lea ecx, [esp + 0x20]
// 00a69a44  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00a69a4c  e85fbbf6ff           call 0x9d55b0
// 00a69a51  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a69a55  64890d00000000       mov dword ptr fs:[0], ecx
// 00a69a5c  59                   pop ecx
// 00a69a5d  5f                   pop edi
// 00a69a5e  5e                   pop esi
// 00a69a5f  5b                   pop ebx
// 00a69a60  83c42c               add esp, 0x2c
// 00a69a63  c20800               ret 8
// copied from an identical function in another client (function ?DrawCaptionText@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaptionTheme.cpp