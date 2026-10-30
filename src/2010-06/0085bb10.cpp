// roc 2010-06 0085bb10  unit: CXTRegistryManager  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085bb10
//
// 0085bb10  6aff                 push -1
// 0085bb12  6837879b00           push 0x9b8737
// 0085bb17  64a100000000         mov eax, dword ptr fs:[0]
// 0085bb1d  50                   push eax
// 0085bb1e  b81c100000           mov eax, 0x101c
// 0085bb23  e828d0f4ff           call 0x7a8b50
// 0085bb28  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085bb2d  33c4                 xor eax, esp
// 0085bb2f  89842418100000       mov dword ptr [esp + 0x1018], eax
// 0085bb36  53                   push ebx
// 0085bb37  55                   push ebp
// 0085bb38  56                   push esi
// 0085bb39  57                   push edi
// 0085bb3a  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085bb3f  33c4                 xor eax, esp
// 0085bb41  50                   push eax
// 0085bb42  8d842430100000       lea eax, [esp + 0x1030]
// 0085bb49  64a300000000         mov dword ptr fs:[0], eax
// 0085bb4f  8b842444100000       mov eax, dword ptr [esp + 0x1044]
// 0085bb56  8bac244c100000       mov ebp, dword ptr [esp + 0x104c]
// 0085bb5d  8bbc2440100000       mov edi, dword ptr [esp + 0x1040]
// 0085bb64  8b9c2448100000       mov ebx, dword ptr [esp + 0x1048]
// 0085bb6b  8bf1                 mov esi, ecx
// 0085bb6d  b94c62c200           mov ecx, 0xc2624c
// 0085bb72  89442420             mov dword ptr [esp + 0x20], eax
// 0085bb76  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0085bb7a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0085bb82  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0085bb88  84c0                 test al, al
// 0085bb8a  0f84e3000000         je 0x85bc73
// 0085bb90  8bce                 mov ecx, esi
// 0085bb92  e829fdffff           call 0x85b8c0
// 0085bb97  85c0                 test eax, eax
// 0085bb99  7506                 jne 0x85bba1
// 0085bb9b  55                   push ebp
// 0085bb9c  e909010000           jmp 0x85bcaa
// 0085bba1  8b16                 mov edx, dword ptr [esi]
// 0085bba3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085bba7  8b5208               mov edx, dword ptr [edx + 8]
// 0085bbaa  6819000200           push 0x20019
// 0085bbaf  50                   push eax
// 0085bbb0  8bce                 mov ecx, esi
// 0085bbb2  ffd2                 call edx
// 0085bbb4  8be8                 mov ebp, eax
// 0085bbb6  896c2420             mov dword ptr [esp + 0x20], ebp
// 0085bbba  c784243810000000000000 mov dword ptr [esp + 0x1038], 0
// 0085bbc5  85ed                 test ebp, ebp
// 0085bbc7  7509                 jne 0x85bbd2
// 0085bbc9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085bbcd  e9d7000000           jmp 0x85bca9
// 0085bbd2  8d4c2418             lea ecx, [esp + 0x18]
// 0085bbd6  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0085bbdc  8d4c2424             lea ecx, [esp + 0x24]
// 0085bbe0  51                   push ecx
// 0085bbe1  6a00                 push 0
// 0085bbe3  8d542430             lea edx, [esp + 0x30]
// 0085bbe7  52                   push edx
// 0085bbe8  6a00                 push 0
// 0085bbea  53                   push ebx
// 0085bbeb  55                   push ebp
// 0085bbec  c684245010000001     mov byte ptr [esp + 0x1050], 1
// 0085bbf4  ff1528a09e00         call dword ptr [0x9ea028]
// 0085bbfa  894610               mov dword ptr [esi + 0x10], eax
// 0085bbfd  85c0                 test eax, eax
// 0085bbff  7423                 je 0x85bc24
// 0085bc01  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085bc05  50                   push eax
// 0085bc06  8bcf                 mov ecx, edi
// 0085bc08  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0085bc0e  8d4c2418             lea ecx, [esp + 0x18]
// 0085bc12  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0085bc18  55                   push ebp
// 0085bc19  ff1510a09e00         call dword ptr [0x9ea010]
// 0085bc1f  e98e000000           jmp 0x85bcb2
// 0085bc24  8b542424             mov edx, dword ptr [esp + 0x24]
// 0085bc28  8d4c2424             lea ecx, [esp + 0x24]
// 0085bc2c  51                   push ecx
// 0085bc2d  52                   push edx
// 0085bc2e  8d4c2420             lea ecx, [esp + 0x20]
// 0085bc32  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 0085bc38  50                   push eax
// 0085bc39  8d442430             lea eax, [esp + 0x30]
// 0085bc3d  50                   push eax
// 0085bc3e  6a00                 push 0
// 0085bc40  53                   push ebx
// 0085bc41  55                   push ebp
// 0085bc42  ff1528a09e00         call dword ptr [0x9ea028]
// 0085bc48  6aff                 push -1
// 0085bc4a  8d4c241c             lea ecx, [esp + 0x1c]
// 0085bc4e  894610               mov dword ptr [esi + 0x10], eax
// 0085bc51  ff1500c49e00         call dword ptr [0x9ec400]
// 0085bc57  837e1000             cmp dword ptr [esi + 0x10], 0
// 0085bc5b  7407                 je 0x85bc64
// 0085bc5d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085bc61  51                   push ecx
// 0085bc62  eba2                 jmp 0x85bc06
// 0085bc64  8d542418             lea edx, [esp + 0x18]
// 0085bc68  52                   push edx
// 0085bc69  8bcf                 mov ecx, edi
// 0085bc6b  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 0085bc71  eb9b                 jmp 0x85bc0e
// 0085bc73  c644241700           mov byte ptr [esp + 0x17], 0
// 0085bc78  85ed                 test ebp, ebp
// 0085bc7a  7506                 jne 0x85bc82
// 0085bc7c  8d442417             lea eax, [esp + 0x17]
// 0085bc80  8be8                 mov ebp, eax
// 0085bc82  b94c62c200           mov ecx, 0xc2624c
// 0085bc87  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0085bc8d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085bc91  50                   push eax
// 0085bc92  6800100000           push 0x1000
// 0085bc97  8d4c2434             lea ecx, [esp + 0x34]
// 0085bc9b  51                   push ecx
// 0085bc9c  55                   push ebp
// 0085bc9d  53                   push ebx
// 0085bc9e  52                   push edx
// 0085bc9f  ff155ca29e00         call dword ptr [0x9ea25c]
// 0085bca5  8d44242c             lea eax, [esp + 0x2c]
// 0085bca9  50                   push eax
// 0085bcaa  8bcf                 mov ecx, edi
// 0085bcac  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0085bcb2  8bc7                 mov eax, edi
// 0085bcb4  8b8c2430100000       mov ecx, dword ptr [esp + 0x1030]
// 0085bcbb  64890d00000000       mov dword ptr fs:[0], ecx
// 0085bcc2  59                   pop ecx
// 0085bcc3  5f                   pop edi
// 0085bcc4  5e                   pop esi
// 0085bcc5  5d                   pop ebp
// 0085bcc6  5b                   pop ebx
// 0085bcc7  8b8c2418100000       mov ecx, dword ptr [esp + 0x1018]
// 0085bcce  33cc                 xor ecx, esp
// 0085bcd0  e8ffd7f4ff           call 0x7a94d4
// 0085bcd5  81c428100000         add esp, 0x1028
// 0085bcdb  c21000               ret 0x10
// copied from an identical function in another client (function ?GetProfileStringA@CXTRegistryManager@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp