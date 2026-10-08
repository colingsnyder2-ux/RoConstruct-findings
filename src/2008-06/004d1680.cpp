// roc 2008-06 004d1680  unit: RBX::Network::PhysicsSender  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d1680
//
// 004d1680  83ec0c               sub esp, 0xc
// 004d1683  53                   push ebx
// 004d1684  55                   push ebp
// 004d1685  8bd9                 mov ebx, ecx
// 004d1687  8b4308               mov eax, dword ptr [ebx + 8]
// 004d168a  33ed                 xor ebp, ebp
// 004d168c  56                   push esi
// 004d168d  57                   push edi
// 004d168e  3bc5                 cmp eax, ebp
// 004d1690  7432                 je 0x4d16c4
// 004d1692  3d00020000           cmp eax, 0x200
// 004d1697  7628                 jbe 0x4d16c1
// 004d1699  8b03                 mov eax, dword ptr [ebx]
// 004d169b  3bc5                 cmp eax, ebp
// 004d169d  741d                 je 0x4d16bc
// 004d169f  8b48fc               mov ecx, dword ptr [eax - 4]
// 004d16a2  8d70fc               lea esi, [eax - 4]
// 004d16a5  6810d44700           push 0x47d410
// 004d16aa  51                   push ecx
// 004d16ab  6a08                 push 8
// 004d16ad  50                   push eax
// 004d16ae  e8a8ff1c00           call 0x6a165b
// 004d16b3  56                   push esi
// 004d16b4  e8c1ef1c00           call 0x6a067a
// 004d16b9  83c404               add esp, 4
// 004d16bc  896b08               mov dword ptr [ebx + 8], ebp
// 004d16bf  892b                 mov dword ptr [ebx], ebp
// 004d16c1  896b04               mov dword ptr [ebx + 4], ebp
// 004d16c4  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d16c8  6a01                 push 1
// 004d16ca  6a10                 push 0x10
// 004d16cc  8d542418             lea edx, [esp + 0x18]
// 004d16d0  52                   push edx
// 004d16d1  8bce                 mov ecx, esi
// 004d16d3  e8e83bfdff           call 0x4a52c0
// 004d16d8  33c0                 xor eax, eax
// 004d16da  663b442410           cmp ax, word ptr [esp + 0x10]
// 004d16df  0f838d000000         jae 0x4d1772
// 004d16e5  8b4608               mov eax, dword ptr [esi + 8]
// 004d16e8  8d7801               lea edi, [eax + 1]
// 004d16eb  3b3e                 cmp edi, dword ptr [esi]
// 004d16ed  7f1d                 jg 0x4d170c
// 004d16ef  8bc8                 mov ecx, eax
// 004d16f1  83e107               and ecx, 7
// 004d16f4  ba80000000           mov edx, 0x80
// 004d16f9  d3fa                 sar edx, cl
// 004d16fb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d16fe  c1f803               sar eax, 3
// 004d1701  841408               test byte ptr [eax + ecx], dl
// 004d1704  897e08               mov dword ptr [esi + 8], edi
// 004d1707  0f95442420           setne byte ptr [esp + 0x20]
// 004d170c  6a01                 push 1
// 004d170e  6a20                 push 0x20
// 004d1710  8d54241c             lea edx, [esp + 0x1c]
// 004d1714  52                   push edx
// 004d1715  8bce                 mov ecx, esi
// 004d1717  e8f43afdff           call 0x4a5210
// 004d171c  84c0                 test al, al
// 004d171e  7427                 je 0x4d1747
// 004d1720  807c242000           cmp byte ptr [esp + 0x20], 0
// 004d1725  752c                 jne 0x4d1753
// 004d1727  6a01                 push 1
// 004d1729  6a20                 push 0x20
// 004d172b  8d442420             lea eax, [esp + 0x20]
// 004d172f  50                   push eax
// 004d1730  8bce                 mov ecx, esi
// 004d1732  e8d93afdff           call 0x4a5210
// 004d1737  84c0                 test al, al
// 004d1739  740c                 je 0x4d1747
// 004d173b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d173f  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d1743  3bc8                 cmp ecx, eax
// 004d1745  7316                 jae 0x4d175d
// 004d1747  5f                   pop edi
// 004d1748  5e                   pop esi
// 004d1749  5d                   pop ebp
// 004d174a  32c0                 xor al, al
// 004d174c  5b                   pop ebx
// 004d174d  83c40c               add esp, 0xc
// 004d1750  c20400               ret 4
// 004d1753  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d1757  8bc8                 mov ecx, eax
// 004d1759  894c2418             mov dword ptr [esp + 0x18], ecx
// 004d175d  51                   push ecx
// 004d175e  50                   push eax
// 004d175f  8bcb                 mov ecx, ebx
// 004d1761  e85ae5ffff           call 0x4cfcc0
// 004d1766  45                   inc ebp
// 004d1767  663b6c2410           cmp bp, word ptr [esp + 0x10]
// 004d176c  0f8273ffffff         jb 0x4d16e5
// 004d1772  5f                   pop edi
// 004d1773  5e                   pop esi
// 004d1774  5d                   pop ebp
// 004d1775  b001                 mov al, 1
// 004d1777  5b                   pop ebx
// 004d1778  83c40c               add esp, 0xc
// 004d177b  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Deserialize@?$RangeList@I@DataStructures@@QAE_NPAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
