// roc 2009-06 007ccbd0  unit: CXTRegistryManager  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ccbd0
//
// 007ccbd0  6aff                 push -1
// 007ccbd2  6867e68700           push 0x87e667
// 007ccbd7  64a100000000         mov eax, dword ptr fs:[0]
// 007ccbdd  50                   push eax
// 007ccbde  b81c100000           mov eax, 0x101c
// 007ccbe3  e8f8cff4ff           call 0x719be0
// 007ccbe8  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ccbed  33c4                 xor eax, esp
// 007ccbef  89842418100000       mov dword ptr [esp + 0x1018], eax
// 007ccbf6  53                   push ebx
// 007ccbf7  55                   push ebp
// 007ccbf8  56                   push esi
// 007ccbf9  57                   push edi
// 007ccbfa  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ccbff  33c4                 xor eax, esp
// 007ccc01  50                   push eax
// 007ccc02  8d842430100000       lea eax, [esp + 0x1030]
// 007ccc09  64a300000000         mov dword ptr fs:[0], eax
// 007ccc0f  8b842444100000       mov eax, dword ptr [esp + 0x1044]
// 007ccc16  8bac244c100000       mov ebp, dword ptr [esp + 0x104c]
// 007ccc1d  8bbc2440100000       mov edi, dword ptr [esp + 0x1040]
// 007ccc24  8b9c2448100000       mov ebx, dword ptr [esp + 0x1048]
// 007ccc2b  8bf1                 mov esi, ecx
// 007ccc2d  b9c426a500           mov ecx, 0xa526c4
// 007ccc32  89442420             mov dword ptr [esp + 0x20], eax
// 007ccc36  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007ccc3a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007ccc42  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ccc48  84c0                 test al, al
// 007ccc4a  0f84e3000000         je 0x7ccd33
// 007ccc50  8bce                 mov ecx, esi
// 007ccc52  e829fdffff           call 0x7cc980
// 007ccc57  85c0                 test eax, eax
// 007ccc59  7506                 jne 0x7ccc61
// 007ccc5b  55                   push ebp
// 007ccc5c  e909010000           jmp 0x7ccd6a
// 007ccc61  8b16                 mov edx, dword ptr [esi]
// 007ccc63  8b442420             mov eax, dword ptr [esp + 0x20]
// 007ccc67  8b5208               mov edx, dword ptr [edx + 8]
// 007ccc6a  6819000200           push 0x20019
// 007ccc6f  50                   push eax
// 007ccc70  8bce                 mov ecx, esi
// 007ccc72  ffd2                 call edx
// 007ccc74  8be8                 mov ebp, eax
// 007ccc76  896c2420             mov dword ptr [esp + 0x20], ebp
// 007ccc7a  c784243810000000000000 mov dword ptr [esp + 0x1038], 0
// 007ccc85  85ed                 test ebp, ebp
// 007ccc87  7509                 jne 0x7ccc92
// 007ccc89  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ccc8d  e9d7000000           jmp 0x7ccd69
// 007ccc92  8d4c2418             lea ecx, [esp + 0x18]
// 007ccc96  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007ccc9c  8d4c2424             lea ecx, [esp + 0x24]
// 007ccca0  51                   push ecx
// 007ccca1  6a00                 push 0
// 007ccca3  8d542430             lea edx, [esp + 0x30]
// 007ccca7  52                   push edx
// 007ccca8  6a00                 push 0
// 007cccaa  53                   push ebx
// 007cccab  55                   push ebp
// 007cccac  c684245010000001     mov byte ptr [esp + 0x1050], 1
// 007cccb4  ff1520e08900         call dword ptr [0x89e020]
// 007cccba  894610               mov dword ptr [esi + 0x10], eax
// 007cccbd  85c0                 test eax, eax
// 007cccbf  7423                 je 0x7ccce4
// 007cccc1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007cccc5  50                   push eax
// 007cccc6  8bcf                 mov ecx, edi
// 007cccc8  ff1508fd8900         call dword ptr [0x89fd08]
// 007cccce  8d4c2418             lea ecx, [esp + 0x18]
// 007cccd2  ff1510fd8900         call dword ptr [0x89fd10]
// 007cccd8  55                   push ebp
// 007cccd9  ff1508e08900         call dword ptr [0x89e008]
// 007cccdf  e98e000000           jmp 0x7ccd72
// 007ccce4  8b542424             mov edx, dword ptr [esp + 0x24]
// 007ccce8  8d4c2424             lea ecx, [esp + 0x24]
// 007cccec  51                   push ecx
// 007ccced  52                   push edx
// 007cccee  8d4c2420             lea ecx, [esp + 0x20]
// 007cccf2  ff1508f18900         call dword ptr [0x89f108]
// 007cccf8  50                   push eax
// 007cccf9  8d442430             lea eax, [esp + 0x30]
// 007cccfd  50                   push eax
// 007cccfe  6a00                 push 0
// 007ccd00  53                   push ebx
// 007ccd01  55                   push ebp
// 007ccd02  ff1520e08900         call dword ptr [0x89e020]
// 007ccd08  6aff                 push -1
// 007ccd0a  8d4c241c             lea ecx, [esp + 0x1c]
// 007ccd0e  894610               mov dword ptr [esi + 0x10], eax
// 007ccd11  ff1504f18900         call dword ptr [0x89f104]
// 007ccd17  837e1000             cmp dword ptr [esi + 0x10], 0
// 007ccd1b  7407                 je 0x7ccd24
// 007ccd1d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ccd21  51                   push ecx
// 007ccd22  eba2                 jmp 0x7cccc6
// 007ccd24  8d542418             lea edx, [esp + 0x18]
// 007ccd28  52                   push edx
// 007ccd29  8bcf                 mov ecx, edi
// 007ccd2b  ff15e4fc8900         call dword ptr [0x89fce4]
// 007ccd31  eb9b                 jmp 0x7cccce
// 007ccd33  c644241700           mov byte ptr [esp + 0x17], 0
// 007ccd38  85ed                 test ebp, ebp
// 007ccd3a  7506                 jne 0x7ccd42
// 007ccd3c  8d442417             lea eax, [esp + 0x17]
// 007ccd40  8be8                 mov ebp, eax
// 007ccd42  b9c426a500           mov ecx, 0xa526c4
// 007ccd47  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ccd4d  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ccd51  50                   push eax
// 007ccd52  6800100000           push 0x1000
// 007ccd57  8d4c2434             lea ecx, [esp + 0x34]
// 007ccd5b  51                   push ecx
// 007ccd5c  55                   push ebp
// 007ccd5d  53                   push ebx
// 007ccd5e  52                   push edx
// 007ccd5f  ff1574e38900         call dword ptr [0x89e374]
// 007ccd65  8d44242c             lea eax, [esp + 0x2c]
// 007ccd69  50                   push eax
// 007ccd6a  8bcf                 mov ecx, edi
// 007ccd6c  ff1508fd8900         call dword ptr [0x89fd08]
// 007ccd72  8bc7                 mov eax, edi
// 007ccd74  8b8c2430100000       mov ecx, dword ptr [esp + 0x1030]
// 007ccd7b  64890d00000000       mov dword ptr fs:[0], ecx
// 007ccd82  59                   pop ecx
// 007ccd83  5f                   pop edi
// 007ccd84  5e                   pop esi
// 007ccd85  5d                   pop ebp
// 007ccd86  5b                   pop ebx
// 007ccd87  8b8c2418100000       mov ecx, dword ptr [esp + 0x1018]
// 007ccd8e  33cc                 xor ecx, esp
// 007ccd90  e8e5d7f4ff           call 0x71a57a
// 007ccd95  81c428100000         add esp, 0x1028
// 007ccd9b  c21000               ret 0x10
// copied from an identical function in another client (function ?GetProfileStringA@CXTRegistryManager@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBD00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp