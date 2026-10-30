// roc 2010-06 008a8af0  unit: CXTButtonTheme  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a8af0
//
// 008a8af0  6aff                 push -1
// 008a8af2  6811cc9b00           push 0x9bcc11
// 008a8af7  64a100000000         mov eax, dword ptr fs:[0]
// 008a8afd  50                   push eax
// 008a8afe  83ec2c               sub esp, 0x2c
// 008a8b01  53                   push ebx
// 008a8b02  55                   push ebp
// 008a8b03  56                   push esi
// 008a8b04  57                   push edi
// 008a8b05  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a8b0a  33c4                 xor eax, esp
// 008a8b0c  50                   push eax
// 008a8b0d  8d442440             lea eax, [esp + 0x40]
// 008a8b11  64a300000000         mov dword ptr fs:[0], eax
// 008a8b17  8bf1                 mov esi, ecx
// 008a8b19  8d4c2414             lea ecx, [esp + 0x14]
// 008a8b1d  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008a8b23  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 008a8b27  8d442414             lea eax, [esp + 0x14]
// 008a8b2b  50                   push eax
// 008a8b2c  8bcd                 mov ecx, ebp
// 008a8b2e  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 008a8b36  e84df4efff           call 0x7a7f88
// 008a8b3b  8d4c2414             lea ecx, [esp + 0x14]
// 008a8b3f  ff15eccd9e00         call dword ptr [0x9ecdec]
// 008a8b45  84c0                 test al, al
// 008a8b47  0f8525010000         jne 0x8a8c72
// 008a8b4d  e8ae87f5ff           call 0x801300
// 008a8b52  8d4c2414             lea ecx, [esp + 0x14]
// 008a8b56  51                   push ecx
// 008a8b57  e80458f5ff           call 0x7fe360
// 008a8b5c  8b16                 mov edx, dword ptr [esi]
// 008a8b5e  8b4220               mov eax, dword ptr [edx + 0x20]
// 008a8b61  83c404               add esp, 4
// 008a8b64  55                   push ebp
// 008a8b65  8bce                 mov ecx, esi
// 008a8b67  ffd0                 call eax
// 008a8b69  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008a8b6d  50                   push eax
// 008a8b6e  57                   push edi
// 008a8b6f  8d4c2438             lea ecx, [esp + 0x38]
// 008a8b73  e8286bf5ff           call 0x7ff6a0
// 008a8b78  8d4c2428             lea ecx, [esp + 0x28]
// 008a8b7c  51                   push ecx
// 008a8b7d  8d4c2418             lea ecx, [esp + 0x18]
// 008a8b81  c644244c01           mov byte ptr [esp + 0x4c], 1
// 008a8b86  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008a8b8c  50                   push eax
// 008a8b8d  8d4c241c             lea ecx, [esp + 0x1c]
// 008a8b91  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008a8b97  8b5708               mov edx, dword ptr [edi + 8]
// 008a8b9a  50                   push eax
// 008a8b9b  52                   push edx
// 008a8b9c  ff1594a19e00         call dword ptr [0x9ea194]
// 008a8ba2  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a8ba6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a8baa  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008a8bae  8b16                 mov edx, dword ptr [esi]
// 008a8bb0  8b5244               mov edx, dword ptr [edx + 0x44]
// 008a8bb3  55                   push ebp
// 008a8bb4  89442424             mov dword ptr [esp + 0x24], eax
// 008a8bb8  894c2428             mov dword ptr [esp + 0x28], ecx
// 008a8bbc  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a8bc0  8d442424             lea eax, [esp + 0x24]
// 008a8bc4  50                   push eax
// 008a8bc5  51                   push ecx
// 008a8bc6  53                   push ebx
// 008a8bc7  8d442428             lea eax, [esp + 0x28]
// 008a8bcb  50                   push eax
// 008a8bcc  8bce                 mov ecx, esi
// 008a8bce  ffd2                 call edx
// 008a8bd0  837d7c00             cmp dword ptr [ebp + 0x7c], 0
// 008a8bd4  7505                 jne 0x8a8bdb
// 008a8bd6  f6c301               test bl, 1
// 008a8bd9  7413                 je 0x8a8bee
// 008a8bdb  837e1800             cmp dword ptr [esi + 0x18], 0
// 008a8bdf  740d                 je 0x8a8bee
// 008a8be1  b801000000           mov eax, 1
// 008a8be6  01442418             add dword ptr [esp + 0x18], eax
// 008a8bea  0144241c             add dword ptr [esp + 0x1c], eax
// 008a8bee  8b07                 mov eax, dword ptr [edi]
// 008a8bf0  8b16                 mov edx, dword ptr [esi]
// 008a8bf2  55                   push ebp
// 008a8bf3  89442460             mov dword ptr [esp + 0x60], eax
// 008a8bf7  8b4248               mov eax, dword ptr [edx + 0x48]
// 008a8bfa  53                   push ebx
// 008a8bfb  8bce                 mov ecx, esi
// 008a8bfd  ffd0                 call eax
// 008a8bff  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008a8c03  50                   push eax
// 008a8c04  8b4238               mov eax, dword ptr [edx + 0x38]
// 008a8c07  8bcf                 mov ecx, edi
// 008a8c09  ffd0                 call eax
// 008a8c0b  f7c300010000         test ebx, 0x100
// 008a8c11  750c                 jne 0x8a8c1f
// 008a8c13  8d4c2414             lea ecx, [esp + 0x14]
// 008a8c17  51                   push ecx
// 008a8c18  8bcd                 mov ecx, ebp
// 008a8c1a  e869f3efff           call 0x7a7f88
// 008a8c1f  6a00                 push 0
// 008a8c21  8bcf                 mov ecx, edi
// 008a8c23  e85afcefff           call 0x7a8882
// 008a8c28  8d4c2414             lea ecx, [esp + 0x14]
// 008a8c2c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008a8c32  8d4c2414             lea ecx, [esp + 0x14]
// 008a8c36  8bf0                 mov esi, eax
// 008a8c38  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008a8c3e  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a8c42  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a8c46  8b7f04               mov edi, dword ptr [edi + 4]
// 008a8c49  6a02                 push 2
// 008a8c4b  52                   push edx
// 008a8c4c  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a8c50  51                   push ecx
// 008a8c51  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a8c55  52                   push edx
// 008a8c56  51                   push ecx
// 008a8c57  56                   push esi
// 008a8c58  50                   push eax
// 008a8c59  6a00                 push 0
// 008a8c5b  6a00                 push 0
// 008a8c5d  57                   push edi
// 008a8c5e  ff15a8ba9e00         call dword ptr [0x9ebaa8]
// 008a8c64  8d4c2430             lea ecx, [esp + 0x30]
// 008a8c68  c644244800           mov byte ptr [esp + 0x48], 0
// 008a8c6d  e8ae6af5ff           call 0x7ff720
// 008a8c72  8d4c2414             lea ecx, [esp + 0x14]
// 008a8c76  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008a8c7c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a8c80  64890d00000000       mov dword ptr fs:[0], ecx
// 008a8c87  59                   pop ecx
// 008a8c88  5f                   pop edi
// 008a8c89  5e                   pop esi
// 008a8c8a  5d                   pop ebp
// 008a8c8b  5b                   pop ebx
// 008a8c8c  83c438               add esp, 0x38
// 008a8c8f  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawButtonText@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp