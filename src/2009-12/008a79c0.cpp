// roc 2009-12 008a79c0  unit: CXTRegistryManager  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a79c0
//
// 008a79c0  6aff                 push -1
// 008a79c2  6887279600           push 0x962787
// 008a79c7  64a100000000         mov eax, dword ptr fs:[0]
// 008a79cd  50                   push eax
// 008a79ce  b81c100000           mov eax, 0x101c
// 008a79d3  e838d0f4ff           call 0x7f4a10
// 008a79d8  a10052b600           mov eax, dword ptr [0xb65200]
// 008a79dd  33c4                 xor eax, esp
// 008a79df  89842418100000       mov dword ptr [esp + 0x1018], eax
// 008a79e6  53                   push ebx
// 008a79e7  55                   push ebp
// 008a79e8  56                   push esi
// 008a79e9  57                   push edi
// 008a79ea  a10052b600           mov eax, dword ptr [0xb65200]
// 008a79ef  33c4                 xor eax, esp
// 008a79f1  50                   push eax
// 008a79f2  8d842430100000       lea eax, [esp + 0x1030]
// 008a79f9  64a300000000         mov dword ptr fs:[0], eax
// 008a79ff  8b842444100000       mov eax, dword ptr [esp + 0x1044]
// 008a7a06  8bac244c100000       mov ebp, dword ptr [esp + 0x104c]
// 008a7a0d  8bbc2440100000       mov edi, dword ptr [esp + 0x1040]
// 008a7a14  8b9c2448100000       mov ebx, dword ptr [esp + 0x1048]
// 008a7a1b  8bf1                 mov esi, ecx
// 008a7a1d  b91cbbb900           mov ecx, 0xb9bb1c
// 008a7a22  89442420             mov dword ptr [esp + 0x20], eax
// 008a7a26  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008a7a2a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008a7a32  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a7a38  84c0                 test al, al
// 008a7a3a  0f84e3000000         je 0x8a7b23
// 008a7a40  8bce                 mov ecx, esi
// 008a7a42  e829fdffff           call 0x8a7770
// 008a7a47  85c0                 test eax, eax
// 008a7a49  7506                 jne 0x8a7a51
// 008a7a4b  55                   push ebp
// 008a7a4c  e909010000           jmp 0x8a7b5a
// 008a7a51  8b16                 mov edx, dword ptr [esi]
// 008a7a53  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a7a57  8b5208               mov edx, dword ptr [edx + 8]
// 008a7a5a  6819000200           push 0x20019
// 008a7a5f  50                   push eax
// 008a7a60  8bce                 mov ecx, esi
// 008a7a62  ffd2                 call edx
// 008a7a64  8be8                 mov ebp, eax
// 008a7a66  896c2420             mov dword ptr [esp + 0x20], ebp
// 008a7a6a  c784243810000000000000 mov dword ptr [esp + 0x1038], 0
// 008a7a75  85ed                 test ebp, ebp
// 008a7a77  7509                 jne 0x8a7a82
// 008a7a79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a7a7d  e9d7000000           jmp 0x8a7b59
// 008a7a82  8d4c2418             lea ecx, [esp + 0x18]
// 008a7a86  ff1574de9800         call dword ptr [0x98de74]
// 008a7a8c  8d4c2424             lea ecx, [esp + 0x24]
// 008a7a90  51                   push ecx
// 008a7a91  6a00                 push 0
// 008a7a93  8d542430             lea edx, [esp + 0x30]
// 008a7a97  52                   push edx
// 008a7a98  6a00                 push 0
// 008a7a9a  53                   push ebx
// 008a7a9b  55                   push ebp
// 008a7a9c  c684245010000001     mov byte ptr [esp + 0x1050], 1
// 008a7aa4  ff1520b09800         call dword ptr [0x98b020]
// 008a7aaa  894610               mov dword ptr [esi + 0x10], eax
// 008a7aad  85c0                 test eax, eax
// 008a7aaf  7423                 je 0x8a7ad4
// 008a7ab1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a7ab5  50                   push eax
// 008a7ab6  8bcf                 mov ecx, edi
// 008a7ab8  ff15b8de9800         call dword ptr [0x98deb8]
// 008a7abe  8d4c2418             lea ecx, [esp + 0x18]
// 008a7ac2  ff15c0de9800         call dword ptr [0x98dec0]
// 008a7ac8  55                   push ebp
// 008a7ac9  ff1508b09800         call dword ptr [0x98b008]
// 008a7acf  e98e000000           jmp 0x8a7b62
// 008a7ad4  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a7ad8  8d4c2424             lea ecx, [esp + 0x24]
// 008a7adc  51                   push ecx
// 008a7add  52                   push edx
// 008a7ade  8d4c2420             lea ecx, [esp + 0x20]
// 008a7ae2  ff155cd29800         call dword ptr [0x98d25c]
// 008a7ae8  50                   push eax
// 008a7ae9  8d442430             lea eax, [esp + 0x30]
// 008a7aed  50                   push eax
// 008a7aee  6a00                 push 0
// 008a7af0  53                   push ebx
// 008a7af1  55                   push ebp
// 008a7af2  ff1520b09800         call dword ptr [0x98b020]
// 008a7af8  6aff                 push -1
// 008a7afa  8d4c241c             lea ecx, [esp + 0x1c]
// 008a7afe  894610               mov dword ptr [esi + 0x10], eax
// 008a7b01  ff1560d29800         call dword ptr [0x98d260]
// 008a7b07  837e1000             cmp dword ptr [esi + 0x10], 0
// 008a7b0b  7407                 je 0x8a7b14
// 008a7b0d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a7b11  51                   push ecx
// 008a7b12  eba2                 jmp 0x8a7ab6
// 008a7b14  8d542418             lea edx, [esp + 0x18]
// 008a7b18  52                   push edx
// 008a7b19  8bcf                 mov ecx, edi
// 008a7b1b  ff1594de9800         call dword ptr [0x98de94]
// 008a7b21  eb9b                 jmp 0x8a7abe
// 008a7b23  c644241700           mov byte ptr [esp + 0x17], 0
// 008a7b28  85ed                 test ebp, ebp
// 008a7b2a  7506                 jne 0x8a7b32
// 008a7b2c  8d442417             lea eax, [esp + 0x17]
// 008a7b30  8be8                 mov ebp, eax
// 008a7b32  b91cbbb900           mov ecx, 0xb9bb1c
// 008a7b37  ff1580de9800         call dword ptr [0x98de80]
// 008a7b3d  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a7b41  50                   push eax
// 008a7b42  6800100000           push 0x1000
// 008a7b47  8d4c2434             lea ecx, [esp + 0x34]
// 008a7b4b  51                   push ecx
// 008a7b4c  55                   push ebp
// 008a7b4d  53                   push ebx
// 008a7b4e  52                   push edx
// 008a7b4f  ff1530b39800         call dword ptr [0x98b330]
// 008a7b55  8d44242c             lea eax, [esp + 0x2c]
// 008a7b59  50                   push eax
// 008a7b5a  8bcf                 mov ecx, edi
// 008a7b5c  ff15b8de9800         call dword ptr [0x98deb8]
// 008a7b62  8bc7                 mov eax, edi
// 008a7b64  8b8c2430100000       mov ecx, dword ptr [esp + 0x1030]
// 008a7b6b  64890d00000000       mov dword ptr fs:[0], ecx
// 008a7b72  59                   pop ecx
// 008a7b73  5f                   pop edi
// 008a7b74  5e                   pop esi
// 008a7b75  5d                   pop ebp
// 008a7b76  5b                   pop ebx
// 008a7b77  8b8c2418100000       mov ecx, dword ptr [esp + 0x1018]
// 008a7b7e  33cc                 xor ecx, esp
// 008a7b80  e815d8f4ff           call 0x7f539a
// 008a7b85  81c428100000         add esp, 0x1028
// 008a7b8b  c21000               ret 0x10
// copied from an identical function in another client (function ?GetProfileStringA@CXTRegistryManager@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp