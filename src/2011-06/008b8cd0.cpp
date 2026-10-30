// roc 2011-06 008b8cd0  unit: CXTRegistryManager  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8cd0
//
// 008b8cd0  6aff                 push -1
// 008b8cd2  6837b9a000           push 0xa0b937
// 008b8cd7  64a100000000         mov eax, dword ptr fs:[0]
// 008b8cdd  50                   push eax
// 008b8cde  b81c100000           mov eax, 0x101c
// 008b8ce3  e86825f5ff           call 0x80b250
// 008b8ce8  a12058c900           mov eax, dword ptr [0xc95820]
// 008b8ced  33c4                 xor eax, esp
// 008b8cef  89842418100000       mov dword ptr [esp + 0x1018], eax
// 008b8cf6  53                   push ebx
// 008b8cf7  55                   push ebp
// 008b8cf8  56                   push esi
// 008b8cf9  57                   push edi
// 008b8cfa  a12058c900           mov eax, dword ptr [0xc95820]
// 008b8cff  33c4                 xor eax, esp
// 008b8d01  50                   push eax
// 008b8d02  8d842430100000       lea eax, [esp + 0x1030]
// 008b8d09  64a300000000         mov dword ptr fs:[0], eax
// 008b8d0f  8b842444100000       mov eax, dword ptr [esp + 0x1044]
// 008b8d16  8bac244c100000       mov ebp, dword ptr [esp + 0x104c]
// 008b8d1d  8bbc2440100000       mov edi, dword ptr [esp + 0x1040]
// 008b8d24  8b9c2448100000       mov ebx, dword ptr [esp + 0x1048]
// 008b8d2b  8bf1                 mov esi, ecx
// 008b8d2d  b9388fd100           mov ecx, 0xd18f38
// 008b8d32  89442420             mov dword ptr [esp + 0x20], eax
// 008b8d36  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008b8d3a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008b8d42  ff15b026a400         call dword ptr [0xa426b0]
// 008b8d48  84c0                 test al, al
// 008b8d4a  0f84e3000000         je 0x8b8e33
// 008b8d50  8bce                 mov ecx, esi
// 008b8d52  e829fdffff           call 0x8b8a80
// 008b8d57  85c0                 test eax, eax
// 008b8d59  7506                 jne 0x8b8d61
// 008b8d5b  55                   push ebp
// 008b8d5c  e909010000           jmp 0x8b8e6a
// 008b8d61  8b16                 mov edx, dword ptr [esi]
// 008b8d63  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b8d67  8b5208               mov edx, dword ptr [edx + 8]
// 008b8d6a  6819000200           push 0x20019
// 008b8d6f  50                   push eax
// 008b8d70  8bce                 mov ecx, esi
// 008b8d72  ffd2                 call edx
// 008b8d74  8be8                 mov ebp, eax
// 008b8d76  896c2420             mov dword ptr [esp + 0x20], ebp
// 008b8d7a  c784243810000000000000 mov dword ptr [esp + 0x1038], 0
// 008b8d85  85ed                 test ebp, ebp
// 008b8d87  7509                 jne 0x8b8d92
// 008b8d89  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b8d8d  e9d7000000           jmp 0x8b8e69
// 008b8d92  8d4c2418             lea ecx, [esp + 0x18]
// 008b8d96  ff15b42da400         call dword ptr [0xa42db4]
// 008b8d9c  8d4c2424             lea ecx, [esp + 0x24]
// 008b8da0  51                   push ecx
// 008b8da1  6a00                 push 0
// 008b8da3  8d542430             lea edx, [esp + 0x30]
// 008b8da7  52                   push edx
// 008b8da8  6a00                 push 0
// 008b8daa  53                   push ebx
// 008b8dab  55                   push ebp
// 008b8dac  c684245010000001     mov byte ptr [esp + 0x1050], 1
// 008b8db4  ff153400a400         call dword ptr [0xa40034]
// 008b8dba  894610               mov dword ptr [esi + 0x10], eax
// 008b8dbd  85c0                 test eax, eax
// 008b8dbf  7423                 je 0x8b8de4
// 008b8dc1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b8dc5  50                   push eax
// 008b8dc6  8bcf                 mov ecx, edi
// 008b8dc8  ff15002ea400         call dword ptr [0xa42e00]
// 008b8dce  8d4c2418             lea ecx, [esp + 0x18]
// 008b8dd2  ff15082ea400         call dword ptr [0xa42e08]
// 008b8dd8  55                   push ebp
// 008b8dd9  ff150400a400         call dword ptr [0xa40004]
// 008b8ddf  e98e000000           jmp 0x8b8e72
// 008b8de4  8b542424             mov edx, dword ptr [esp + 0x24]
// 008b8de8  8d4c2424             lea ecx, [esp + 0x24]
// 008b8dec  51                   push ecx
// 008b8ded  52                   push edx
// 008b8dee  8d4c2420             lea ecx, [esp + 0x20]
// 008b8df2  ff15e023a400         call dword ptr [0xa423e0]
// 008b8df8  50                   push eax
// 008b8df9  8d442430             lea eax, [esp + 0x30]
// 008b8dfd  50                   push eax
// 008b8dfe  6a00                 push 0
// 008b8e00  53                   push ebx
// 008b8e01  55                   push ebp
// 008b8e02  ff153400a400         call dword ptr [0xa40034]
// 008b8e08  6aff                 push -1
// 008b8e0a  8d4c241c             lea ecx, [esp + 0x1c]
// 008b8e0e  894610               mov dword ptr [esi + 0x10], eax
// 008b8e11  ff15e423a400         call dword ptr [0xa423e4]
// 008b8e17  837e1000             cmp dword ptr [esi + 0x10], 0
// 008b8e1b  7407                 je 0x8b8e24
// 008b8e1d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b8e21  51                   push ecx
// 008b8e22  eba2                 jmp 0x8b8dc6
// 008b8e24  8d542418             lea edx, [esp + 0x18]
// 008b8e28  52                   push edx
// 008b8e29  8bcf                 mov ecx, edi
// 008b8e2b  ff15e42da400         call dword ptr [0xa42de4]
// 008b8e31  eb9b                 jmp 0x8b8dce
// 008b8e33  c644241700           mov byte ptr [esp + 0x17], 0
// 008b8e38  85ed                 test ebp, ebp
// 008b8e3a  7506                 jne 0x8b8e42
// 008b8e3c  8d442417             lea eax, [esp + 0x17]
// 008b8e40  8be8                 mov ebp, eax
// 008b8e42  b9388fd100           mov ecx, 0xd18f38
// 008b8e47  ff15c82da400         call dword ptr [0xa42dc8]
// 008b8e4d  8b542420             mov edx, dword ptr [esp + 0x20]
// 008b8e51  50                   push eax
// 008b8e52  6800100000           push 0x1000
// 008b8e57  8d4c2434             lea ecx, [esp + 0x34]
// 008b8e5b  51                   push ecx
// 008b8e5c  55                   push ebp
// 008b8e5d  53                   push ebx
// 008b8e5e  52                   push edx
// 008b8e5f  ff154402a400         call dword ptr [0xa40244]
// 008b8e65  8d44242c             lea eax, [esp + 0x2c]
// 008b8e69  50                   push eax
// 008b8e6a  8bcf                 mov ecx, edi
// 008b8e6c  ff15002ea400         call dword ptr [0xa42e00]
// 008b8e72  8bc7                 mov eax, edi
// 008b8e74  8b8c2430100000       mov ecx, dword ptr [esp + 0x1030]
// 008b8e7b  64890d00000000       mov dword ptr fs:[0], ecx
// 008b8e82  59                   pop ecx
// 008b8e83  5f                   pop edi
// 008b8e84  5e                   pop esi
// 008b8e85  5d                   pop ebp
// 008b8e86  5b                   pop ebx
// 008b8e87  8b8c2418100000       mov ecx, dword ptr [esp + 0x1018]
// 008b8e8e  33cc                 xor ecx, esp
// 008b8e90  e8622af5ff           call 0x80b8f7
// 008b8e95  81c428100000         add esp, 0x1028
// 008b8e9b  c21000               ret 0x10
// copied from an identical function in another client (function ?GetProfileStringA@CXTRegistryManager@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp