// roc 2009-06 00809cf0  unit: CXTCaptionTheme  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00809cf0
//
// 00809cf0  6aff                 push -1
// 00809cf2  6878228800           push 0x882278
// 00809cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00809cfd  50                   push eax
// 00809cfe  83ec20               sub esp, 0x20
// 00809d01  53                   push ebx
// 00809d02  56                   push esi
// 00809d03  57                   push edi
// 00809d04  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00809d09  33c4                 xor eax, esp
// 00809d0b  50                   push eax
// 00809d0c  8d442430             lea eax, [esp + 0x30]
// 00809d10  64a300000000         mov dword ptr fs:[0], eax
// 00809d16  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00809d1a  8d9fd0000000         lea ebx, [edi + 0xd0]
// 00809d20  8bcb                 mov ecx, ebx
// 00809d22  ff155cfb8900         call dword ptr [0x89fb5c]
// 00809d28  84c0                 test al, al
// 00809d2a  0f8581000000         jne 0x809db1
// 00809d30  8b07                 mov eax, dword ptr [edi]
// 00809d32  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00809d38  8d4c2410             lea ecx, [esp + 0x10]
// 00809d3c  51                   push ecx
// 00809d3d  8bcf                 mov ecx, edi
// 00809d3f  ffd2                 call edx
// 00809d41  8b4720               mov eax, dword ptr [edi + 0x20]
// 00809d44  6a00                 push 0
// 00809d46  6a00                 push 0
// 00809d48  6a31                 push 0x31
// 00809d4a  50                   push eax
// 00809d4b  ff1590ee8900         call dword ptr [0x89ee90]
// 00809d51  50                   push eax
// 00809d52  e8dff7f0ff           call 0x719536
// 00809d57  8b742440             mov esi, dword ptr [esp + 0x40]
// 00809d5b  50                   push eax
// 00809d5c  56                   push esi
// 00809d5d  8d4c2428             lea ecx, [esp + 0x28]
// 00809d61  e8fa6af6ff           call 0x770860
// 00809d66  8b16                 mov edx, dword ptr [esi]
// 00809d68  8b4778               mov eax, dword ptr [edi + 0x78]
// 00809d6b  8b5238               mov edx, dword ptr [edx + 0x38]
// 00809d6e  50                   push eax
// 00809d6f  8bce                 mov ecx, esi
// 00809d71  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00809d79  ffd2                 call edx
// 00809d7b  8b3e                 mov edi, dword ptr [esi]
// 00809d7d  6825880000           push 0x8825
// 00809d82  8d442414             lea eax, [esp + 0x14]
// 00809d86  50                   push eax
// 00809d87  8bcb                 mov ecx, ebx
// 00809d89  ff1554fb8900         call dword ptr [0x89fb54]
// 00809d8f  50                   push eax
// 00809d90  8bcb                 mov ecx, ebx
// 00809d92  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00809d98  8b5770               mov edx, dword ptr [edi + 0x70]
// 00809d9b  50                   push eax
// 00809d9c  8bce                 mov ecx, esi
// 00809d9e  ffd2                 call edx
// 00809da0  8d4c2420             lea ecx, [esp + 0x20]
// 00809da4  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00809dac  e82f6bf6ff           call 0x7708e0
// 00809db1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00809db5  64890d00000000       mov dword ptr fs:[0], ecx
// 00809dbc  59                   pop ecx
// 00809dbd  5f                   pop edi
// 00809dbe  5e                   pop esi
// 00809dbf  5b                   pop ebx
// 00809dc0  83c42c               add esp, 0x2c
// 00809dc3  c20800               ret 8
// copied from an identical function in another client (function ?DrawCaptionText@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaptionTheme.cpp