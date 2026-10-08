// roc 2008-06 004d0a00  unit: RBX::Network::PhysicsSender  size: 400 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d0a00
//
// 004d0a00  6aff                 push -1
// 004d0a02  681b937c00           push 0x7c931b
// 004d0a07  64a100000000         mov eax, dword ptr fs:[0]
// 004d0a0d  50                   push eax
// 004d0a0e  64892500000000       mov dword ptr fs:[0], esp
// 004d0a15  81ec20010000         sub esp, 0x120
// 004d0a1b  53                   push ebx
// 004d0a1c  55                   push ebp
// 004d0a1d  56                   push esi
// 004d0a1e  8bf1                 mov esi, ecx
// 004d0a20  57                   push edi
// 004d0a21  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0a25  e86646fdff           call 0x4a5090
// 004d0a2a  8b4604               mov eax, dword ptr [esi + 4]
// 004d0a2d  33ff                 xor edi, edi
// 004d0a2f  33ed                 xor ebp, ebp
// 004d0a31  89bc2438010000       mov dword ptr [esp + 0x138], edi
// 004d0a38  897c2410             mov dword ptr [esp + 0x10], edi
// 004d0a3c  3bc7                 cmp eax, edi
// 004d0a3e  0f8693000000         jbe 0x4d0ad7
// 004d0a44  bb51000000           mov ebx, 0x51
// 004d0a49  8da42400000000       lea esp, [esp]
// 004d0a50  3b9c2444010000       cmp ebx, dword ptr [esp + 0x144]
// 004d0a57  7f7e                 jg 0x4d0ad7
// 004d0a59  8b06                 mov eax, dword ptr [esi]
// 004d0a5b  8b0cf8               mov ecx, dword ptr [eax + edi*8]
// 004d0a5e  3b4cf804             cmp ecx, dword ptr [eax + edi*8 + 4]
// 004d0a62  8d04f8               lea eax, [eax + edi*8]
// 004d0a65  0f94c0               sete al
// 004d0a68  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0a6c  84c0                 test al, al
// 004d0a6e  7407                 je 0x4d0a77
// 004d0a70  e8eb4afdff           call 0x4a5560
// 004d0a75  eb05                 jmp 0x4d0a7c
// 004d0a77  e8c44afdff           call 0x4a5540
// 004d0a7c  8b16                 mov edx, dword ptr [esi]
// 004d0a7e  8b04fa               mov eax, dword ptr [edx + edi*8]
// 004d0a81  6a01                 push 1
// 004d0a83  6a20                 push 0x20
// 004d0a85  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0a89  51                   push ecx
// 004d0a8a  8d4c2428             lea ecx, [esp + 0x28]
// 004d0a8e  89442420             mov dword ptr [esp + 0x20], eax
// 004d0a92  e8694bfdff           call 0x4a5600
// 004d0a97  8b16                 mov edx, dword ptr [esi]
// 004d0a99  8b0cfa               mov ecx, dword ptr [edx + edi*8]
// 004d0a9c  8d04fa               lea eax, [edx + edi*8]
// 004d0a9f  83c521               add ebp, 0x21
// 004d0aa2  83c321               add ebx, 0x21
// 004d0aa5  3b4804               cmp ecx, dword ptr [eax + 4]
// 004d0aa8  741f                 je 0x4d0ac9
// 004d0aaa  8b5004               mov edx, dword ptr [eax + 4]
// 004d0aad  6a01                 push 1
// 004d0aaf  6a20                 push 0x20
// 004d0ab1  8d442420             lea eax, [esp + 0x20]
// 004d0ab5  50                   push eax
// 004d0ab6  8d4c2428             lea ecx, [esp + 0x28]
// 004d0aba  89542424             mov dword ptr [esp + 0x24], edx
// 004d0abe  e83d4bfdff           call 0x4a5600
// 004d0ac3  83c520               add ebp, 0x20
// 004d0ac6  83c320               add ebx, 0x20
// 004d0ac9  ff442410             inc dword ptr [esp + 0x10]
// 004d0acd  47                   inc edi
// 004d0ace  3b7e04               cmp edi, dword ptr [esi + 4]
// 004d0ad1  0f8279ffffff         jb 0x4d0a50
// 004d0ad7  0fb74c2410           movzx ecx, word ptr [esp + 0x10]
// 004d0adc  8bbc2440010000       mov edi, dword ptr [esp + 0x140]
// 004d0ae3  8b1f                 mov ebx, dword ptr [edi]
// 004d0ae5  6a01                 push 1
// 004d0ae7  6a10                 push 0x10
// 004d0ae9  8d542420             lea edx, [esp + 0x20]
// 004d0aed  894c2420             mov dword ptr [esp + 0x20], ecx
// 004d0af1  52                   push edx
// 004d0af2  8bcf                 mov ecx, edi
// 004d0af4  e8974cfdff           call 0x4a5790
// 004d0af9  8b07                 mov eax, dword ptr [edi]
// 004d0afb  2bc3                 sub eax, ebx
// 004d0afd  03e8                 add ebp, eax
// 004d0aff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d0b03  50                   push eax
// 004d0b04  8d4c2420             lea ecx, [esp + 0x20]
// 004d0b08  51                   push ecx
// 004d0b09  8bcf                 mov ecx, edi
// 004d0b0b  e88049fdff           call 0x4a5490
// 004d0b10  80bc244801000000     cmp byte ptr [esp + 0x148], 0
// 004d0b18  7445                 je 0x4d0b5f
// 004d0b1a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d0b1e  6685c0               test ax, ax
// 004d0b21  743c                 je 0x4d0b5f
// 004d0b23  8b7e04               mov edi, dword ptr [esi + 4]
// 004d0b26  0fb7c0               movzx eax, ax
// 004d0b29  33c9                 xor ecx, ecx
// 004d0b2b  2bf8                 sub edi, eax
// 004d0b2d  89442414             mov dword ptr [esp + 0x14], eax
// 004d0b31  7429                 je 0x4d0b5c
// 004d0b33  8d14c500000000       lea edx, [eax*8]
// 004d0b3a  8d9b00000000         lea ebx, [ebx]
// 004d0b40  8b06                 mov eax, dword ptr [esi]
// 004d0b42  8b1c02               mov ebx, dword ptr [edx + eax]
// 004d0b45  891cc8               mov dword ptr [eax + ecx*8], ebx
// 004d0b48  8b5c0204             mov ebx, dword ptr [edx + eax + 4]
// 004d0b4c  895cc804             mov dword ptr [eax + ecx*8 + 4], ebx
// 004d0b50  41                   inc ecx
// 004d0b51  83c208               add edx, 8
// 004d0b54  3bcf                 cmp ecx, edi
// 004d0b56  72e8                 jb 0x4d0b40
// 004d0b58  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d0b5c  294604               sub dword ptr [esi + 4], eax
// 004d0b5f  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0b63  c7842438010000ffffffff mov dword ptr [esp + 0x138], 0xffffffff
// 004d0b6e  e82d46fdff           call 0x4a51a0
// 004d0b73  8b8c2430010000       mov ecx, dword ptr [esp + 0x130]
// 004d0b7a  5f                   pop edi
// 004d0b7b  5e                   pop esi
// 004d0b7c  8bc5                 mov eax, ebp
// 004d0b7e  5d                   pop ebp
// 004d0b7f  5b                   pop ebx
// 004d0b80  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0b87  81c42c010000         add esp, 0x12c
// 004d0b8d  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Serialize@?$RangeList@I@DataStructures@@QAEIPAVBitStream@RakNet@@H_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
