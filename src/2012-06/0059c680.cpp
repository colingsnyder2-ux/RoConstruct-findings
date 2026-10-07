// roc 2012-06 0059c680  unit: VAuthoringSettings::?$FactoryProduct  size: 463 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c680
//
// 0059c680  6aff                 push -1
// 0059c682  687916ab00           push 0xab1679
// 0059c687  64a100000000         mov eax, dword ptr fs:[0]
// 0059c68d  50                   push eax
// 0059c68e  64892500000000       mov dword ptr fs:[0], esp
// 0059c695  81ec20010000         sub esp, 0x120
// 0059c69b  53                   push ebx
// 0059c69c  55                   push ebp
// 0059c69d  56                   push esi
// 0059c69e  8bf1                 mov esi, ecx
// 0059c6a0  57                   push edi
// 0059c6a1  8d4c241c             lea ecx, [esp + 0x1c]
// 0059c6a5  e8f6aefcff           call 0x5675a0
// 0059c6aa  8b4604               mov eax, dword ptr [esi + 4]
// 0059c6ad  33ed                 xor ebp, ebp
// 0059c6af  89ac2438010000       mov dword ptr [esp + 0x138], ebp
// 0059c6b6  896c2418             mov dword ptr [esp + 0x18], ebp
// 0059c6ba  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059c6be  3bc5                 cmp eax, ebp
// 0059c6c0  7678                 jbe 0x59c73a
// 0059c6c2  bb51000000           mov ebx, 0x51
// 0059c6c7  3b9c2444010000       cmp ebx, dword ptr [esp + 0x144]
// 0059c6ce  776a                 ja 0x59c73a
// 0059c6d0  8b06                 mov eax, dword ptr [esi]
// 0059c6d2  8d3ced00000000       lea edi, [ebp*8]
// 0059c6d9  8b0c38               mov ecx, dword ptr [eax + edi]
// 0059c6dc  03c7                 add eax, edi
// 0059c6de  3b4804               cmp ecx, dword ptr [eax + 4]
// 0059c6e1  6a01                 push 1
// 0059c6e3  6a08                 push 8
// 0059c6e5  8d44241c             lea eax, [esp + 0x1c]
// 0059c6e9  0f94c2               sete dl
// 0059c6ec  50                   push eax
// 0059c6ed  8d4c2428             lea ecx, [esp + 0x28]
// 0059c6f1  88542420             mov byte ptr [esp + 0x20], dl
// 0059c6f5  e896b6fcff           call 0x567d90
// 0059c6fa  8b0e                 mov ecx, dword ptr [esi]
// 0059c6fc  03cf                 add ecx, edi
// 0059c6fe  51                   push ecx
// 0059c6ff  8d4c2420             lea ecx, [esp + 0x20]
// 0059c703  e8c8e3ffff           call 0x59aad0
// 0059c708  8b16                 mov edx, dword ptr [esi]
// 0059c70a  8344241028           add dword ptr [esp + 0x10], 0x28
// 0059c70f  8d0417               lea eax, [edi + edx]
// 0059c712  8d4804               lea ecx, [eax + 4]
// 0059c715  8b00                 mov eax, dword ptr [eax]
// 0059c717  83c328               add ebx, 0x28
// 0059c71a  3b01                 cmp eax, dword ptr [ecx]
// 0059c71c  7412                 je 0x59c730
// 0059c71e  51                   push ecx
// 0059c71f  8d4c2420             lea ecx, [esp + 0x20]
// 0059c723  e8a8e3ffff           call 0x59aad0
// 0059c728  8344241020           add dword ptr [esp + 0x10], 0x20
// 0059c72d  83c320               add ebx, 0x20
// 0059c730  ff442418             inc dword ptr [esp + 0x18]
// 0059c734  45                   inc ebp
// 0059c735  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0059c738  728d                 jb 0x59c6c7
// 0059c73a  8bbc2440010000       mov edi, dword ptr [esp + 0x140]
// 0059c741  8b07                 mov eax, dword ptr [edi]
// 0059c743  8d48ff               lea ecx, [eax - 1]
// 0059c746  83e107               and ecx, 7
// 0059c749  2bc1                 sub eax, ecx
// 0059c74b  8d5807               lea ebx, [eax + 7]
// 0059c74e  891f                 mov dword ptr [edi], ebx
// 0059c750  f6058c45e20001       test byte ptr [0xe2458c], 1
// 0059c757  7521                 jne 0x59c77a
// 0059c759  830d8c45e20001       or dword ptr [0xe2458c], 1
// 0059c760  c684243801000001     mov byte ptr [esp + 0x138], 1
// 0059c768  e893b3fcff           call 0x567b00
// 0059c76d  a28845e200           mov byte ptr [0xe24588], al
// 0059c772  c684243801000000     mov byte ptr [esp + 0x138], 0
// 0059c77a  803d8845e20000       cmp byte ptr [0xe24588], 0
// 0059c781  751f                 jne 0x59c7a2
// 0059c783  6a02                 push 2
// 0059c785  8d542418             lea edx, [esp + 0x18]
// 0059c789  52                   push edx
// 0059c78a  8d442420             lea eax, [esp + 0x20]
// 0059c78e  50                   push eax
// 0059c78f  e8acb3fcff           call 0x567b40
// 0059c794  83c40c               add esp, 0xc
// 0059c797  6a01                 push 1
// 0059c799  6a10                 push 0x10
// 0059c79b  8d4c241c             lea ecx, [esp + 0x1c]
// 0059c79f  51                   push ecx
// 0059c7a0  eb09                 jmp 0x59c7ab
// 0059c7a2  6a01                 push 1
// 0059c7a4  6a10                 push 0x10
// 0059c7a6  8d542420             lea edx, [esp + 0x20]
// 0059c7aa  52                   push edx
// 0059c7ab  8bcf                 mov ecx, edi
// 0059c7ad  e8deb5fcff           call 0x567d90
// 0059c7b2  8b07                 mov eax, dword ptr [edi]
// 0059c7b4  2bc3                 sub eax, ebx
// 0059c7b6  01442410             add dword ptr [esp + 0x10], eax
// 0059c7ba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059c7be  50                   push eax
// 0059c7bf  8d4c2420             lea ecx, [esp + 0x20]
// 0059c7c3  51                   push ecx
// 0059c7c4  8bcf                 mov ecx, edi
// 0059c7c6  e855b4fcff           call 0x567c20
// 0059c7cb  80bc244801000000     cmp byte ptr [esp + 0x148], 0
// 0059c7d3  7447                 je 0x59c81c
// 0059c7d5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059c7d9  6685c9               test cx, cx
// 0059c7dc  743e                 je 0x59c81c
// 0059c7de  8b7e04               mov edi, dword ptr [esi + 4]
// 0059c7e1  0fb7d1               movzx edx, cx
// 0059c7e4  8bdf                 mov ebx, edi
// 0059c7e6  33c0                 xor eax, eax
// 0059c7e8  2bda                 sub ebx, edx
// 0059c7ea  742a                 je 0x59c816
// 0059c7ec  8d642400             lea esp, [esp]
// 0059c7f0  8b0e                 mov ecx, dword ptr [esi]
// 0059c7f2  03d0                 add edx, eax
// 0059c7f4  8b1cd1               mov ebx, dword ptr [ecx + edx*8]
// 0059c7f7  8d14d1               lea edx, [ecx + edx*8]
// 0059c7fa  891cc1               mov dword ptr [ecx + eax*8], ebx
// 0059c7fd  8b5204               mov edx, dword ptr [edx + 4]
// 0059c800  8d4cc104             lea ecx, [ecx + eax*8 + 4]
// 0059c804  8911                 mov dword ptr [ecx], edx
// 0059c806  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059c80a  0fb7d1               movzx edx, cx
// 0059c80d  8bdf                 mov ebx, edi
// 0059c80f  40                   inc eax
// 0059c810  2bda                 sub ebx, edx
// 0059c812  3bc3                 cmp eax, ebx
// 0059c814  72da                 jb 0x59c7f0
// 0059c816  0fb7c1               movzx eax, cx
// 0059c819  294604               sub dword ptr [esi + 4], eax
// 0059c81c  8d4c241c             lea ecx, [esp + 0x1c]
// 0059c820  c7842438010000ffffffff mov dword ptr [esp + 0x138], 0xffffffff
// 0059c82b  e880aefcff           call 0x5676b0
// 0059c830  8b8c2430010000       mov ecx, dword ptr [esp + 0x130]
// 0059c837  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059c83b  5f                   pop edi
// 0059c83c  5e                   pop esi
// 0059c83d  5d                   pop ebp
// 0059c83e  5b                   pop ebx
// 0059c83f  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c846  81c42c010000         add esp, 0x12c
// 0059c84c  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Serialize@?$RangeList@Uuint24_t@RakNet@@@DataStructures@@QAEIPAVBitStream@RakNet@@I_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
