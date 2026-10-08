// roc 2007-08 004c79d0  unit: RakPeer  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c79d0
//
// 004c79d0  83ec0c               sub esp, 0xc
// 004c79d3  53                   push ebx
// 004c79d4  55                   push ebp
// 004c79d5  8bd9                 mov ebx, ecx
// 004c79d7  8b4308               mov eax, dword ptr [ebx + 8]
// 004c79da  33ed                 xor ebp, ebp
// 004c79dc  3bc5                 cmp eax, ebp
// 004c79de  56                   push esi
// 004c79df  57                   push edi
// 004c79e0  7432                 je 0x4c7a14
// 004c79e2  3d00020000           cmp eax, 0x200
// 004c79e7  7628                 jbe 0x4c7a11
// 004c79e9  8b03                 mov eax, dword ptr [ebx]
// 004c79eb  3bc5                 cmp eax, ebp
// 004c79ed  741d                 je 0x4c7a0c
// 004c79ef  8b48fc               mov ecx, dword ptr [eax - 4]
// 004c79f2  8d70fc               lea esi, [eax - 4]
// 004c79f5  6820cc4000           push 0x40cc20
// 004c79fa  51                   push ecx
// 004c79fb  6a08                 push 8
// 004c79fd  50                   push eax
// 004c79fe  e8f4901600           call 0x630af7
// 004c7a03  56                   push esi
// 004c7a04  e859821600           call 0x62fc62
// 004c7a09  83c404               add esp, 4
// 004c7a0c  896b08               mov dword ptr [ebx + 8], ebp
// 004c7a0f  892b                 mov dword ptr [ebx], ebp
// 004c7a11  896b04               mov dword ptr [ebx + 4], ebp
// 004c7a14  8b742420             mov esi, dword ptr [esp + 0x20]
// 004c7a18  6a01                 push 1
// 004c7a1a  6a10                 push 0x10
// 004c7a1c  8d542418             lea edx, [esp + 0x18]
// 004c7a20  52                   push edx
// 004c7a21  8bce                 mov ecx, esi
// 004c7a23  e82880fdff           call 0x49fa50
// 004c7a28  66396c2410           cmp word ptr [esp + 0x10], bp
// 004c7a2d  0f868f000000         jbe 0x4c7ac2
// 004c7a33  8b4608               mov eax, dword ptr [esi + 8]
// 004c7a36  8d7801               lea edi, [eax + 1]
// 004c7a39  3b3e                 cmp edi, dword ptr [esi]
// 004c7a3b  7f1d                 jg 0x4c7a5a
// 004c7a3d  8bc8                 mov ecx, eax
// 004c7a3f  83e107               and ecx, 7
// 004c7a42  ba80000000           mov edx, 0x80
// 004c7a47  d3fa                 sar edx, cl
// 004c7a49  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004c7a4c  c1f803               sar eax, 3
// 004c7a4f  841408               test byte ptr [eax + ecx], dl
// 004c7a52  897e08               mov dword ptr [esi + 8], edi
// 004c7a55  0f95442420           setne byte ptr [esp + 0x20]
// 004c7a5a  6a01                 push 1
// 004c7a5c  6a20                 push 0x20
// 004c7a5e  8d54241c             lea edx, [esp + 0x1c]
// 004c7a62  52                   push edx
// 004c7a63  8bce                 mov ecx, esi
// 004c7a65  e8367ffdff           call 0x49f9a0
// 004c7a6a  84c0                 test al, al
// 004c7a6c  7427                 je 0x4c7a95
// 004c7a6e  807c242000           cmp byte ptr [esp + 0x20], 0
// 004c7a73  752c                 jne 0x4c7aa1
// 004c7a75  6a01                 push 1
// 004c7a77  6a20                 push 0x20
// 004c7a79  8d442420             lea eax, [esp + 0x20]
// 004c7a7d  50                   push eax
// 004c7a7e  8bce                 mov ecx, esi
// 004c7a80  e81b7ffdff           call 0x49f9a0
// 004c7a85  84c0                 test al, al
// 004c7a87  740c                 je 0x4c7a95
// 004c7a89  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c7a8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c7a91  3bc8                 cmp ecx, eax
// 004c7a93  7316                 jae 0x4c7aab
// 004c7a95  5f                   pop edi
// 004c7a96  5e                   pop esi
// 004c7a97  5d                   pop ebp
// 004c7a98  32c0                 xor al, al
// 004c7a9a  5b                   pop ebx
// 004c7a9b  83c40c               add esp, 0xc
// 004c7a9e  c20400               ret 4
// 004c7aa1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c7aa5  8bc8                 mov ecx, eax
// 004c7aa7  894c2418             mov dword ptr [esp + 0x18], ecx
// 004c7aab  51                   push ecx
// 004c7aac  50                   push eax
// 004c7aad  8bcb                 mov ecx, ebx
// 004c7aaf  e88ce2ffff           call 0x4c5d40
// 004c7ab4  83c501               add ebp, 1
// 004c7ab7  663b6c2410           cmp bp, word ptr [esp + 0x10]
// 004c7abc  0f8271ffffff         jb 0x4c7a33
// 004c7ac2  5f                   pop edi
// 004c7ac3  5e                   pop esi
// 004c7ac4  5d                   pop ebp
// 004c7ac5  b001                 mov al, 1
// 004c7ac7  5b                   pop ebx
// 004c7ac8  83c40c               add esp, 0xc
// 004c7acb  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Deserialize@?$RangeList@I@DataStructures@@QAE_NPAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
