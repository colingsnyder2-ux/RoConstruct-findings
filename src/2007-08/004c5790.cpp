// roc 2007-08 004c5790  unit: RakPeer  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5790
//
// 004c5790  53                   push ebx
// 004c5791  56                   push esi
// 004c5792  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c5796  8b0e                 mov ecx, dword ptr [esi]
// 004c5798  8a4610               mov al, byte ptr [esi + 0x10]
// 004c579b  57                   push edi
// 004c579c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004c57a0  8b1f                 mov ebx, dword ptr [edi]
// 004c57a2  6a01                 push 1
// 004c57a4  6a20                 push 0x20
// 004c57a6  8d54241c             lea edx, [esp + 0x1c]
// 004c57aa  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004c57ae  52                   push edx
// 004c57af  8bcf                 mov ecx, edi
// 004c57b1  8844241c             mov byte ptr [esp + 0x1c], al
// 004c57b5  e8d6a5fdff           call 0x49fd90
// 004c57ba  6a01                 push 1
// 004c57bc  6a03                 push 3
// 004c57be  8d442418             lea eax, [esp + 0x18]
// 004c57c2  50                   push eax
// 004c57c3  8bcf                 mov ecx, edi
// 004c57c5  e8c6a5fdff           call 0x49fd90
// 004c57ca  8b4610               mov eax, dword ptr [esi + 0x10]
// 004c57cd  83f801               cmp eax, 1
// 004c57d0  740a                 je 0x4c57dc
// 004c57d2  83f804               cmp eax, 4
// 004c57d5  7405                 je 0x4c57dc
// 004c57d7  83f803               cmp eax, 3
// 004c57da  7526                 jne 0x4c5802
// 004c57dc  6a01                 push 1
// 004c57de  6a05                 push 5
// 004c57e0  8d4e14               lea ecx, [esi + 0x14]
// 004c57e3  51                   push ecx
// 004c57e4  8bcf                 mov ecx, edi
// 004c57e6  e8a5a5fdff           call 0x49fd90
// 004c57eb  8b5618               mov edx, dword ptr [esi + 0x18]
// 004c57ee  6a01                 push 1
// 004c57f0  6a20                 push 0x20
// 004c57f2  8d44241c             lea eax, [esp + 0x1c]
// 004c57f6  50                   push eax
// 004c57f7  8bcf                 mov ecx, edi
// 004c57f9  89542420             mov dword ptr [esp + 0x20], edx
// 004c57fd  e88ea5fdff           call 0x49fd90
// 004c5802  837e2400             cmp dword ptr [esi + 0x24], 0
// 004c5806  8bcf                 mov ecx, edi
// 004c5808  0f97c0               seta al
// 004c580b  84c0                 test al, al
// 004c580d  0f8482000000         je 0x4c5895
// 004c5813  e8d8a4fdff           call 0x49fcf0
// 004c5818  0fb74e1c             movzx ecx, word ptr [esi + 0x1c]
// 004c581c  6a01                 push 1
// 004c581e  6a10                 push 0x10
// 004c5820  8d54241c             lea edx, [esp + 0x1c]
// 004c5824  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004c5828  52                   push edx
// 004c5829  8bcf                 mov ecx, edi
// 004c582b  e860a5fdff           call 0x49fd90
// 004c5830  8b4620               mov eax, dword ptr [esi + 0x20]
// 004c5833  6a01                 push 1
// 004c5835  6a20                 push 0x20
// 004c5837  8d4c241c             lea ecx, [esp + 0x1c]
// 004c583b  51                   push ecx
// 004c583c  8bcf                 mov ecx, edi
// 004c583e  89442420             mov dword ptr [esp + 0x20], eax
// 004c5842  e8d9a6fdff           call 0x49ff20
// 004c5847  8b5624               mov edx, dword ptr [esi + 0x24]
// 004c584a  6a01                 push 1
// 004c584c  6a20                 push 0x20
// 004c584e  8d44241c             lea eax, [esp + 0x1c]
// 004c5852  50                   push eax
// 004c5853  8bcf                 mov ecx, edi
// 004c5855  89542420             mov dword ptr [esp + 0x20], edx
// 004c5859  e8c2a6fdff           call 0x49ff20
// 004c585e  0fb74e38             movzx ecx, word ptr [esi + 0x38]
// 004c5862  6a01                 push 1
// 004c5864  6a10                 push 0x10
// 004c5866  8d54241c             lea edx, [esp + 0x1c]
// 004c586a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004c586e  52                   push edx
// 004c586f  8bcf                 mov ecx, edi
// 004c5871  e8aaa6fdff           call 0x49ff20
// 004c5876  8b4638               mov eax, dword ptr [esi + 0x38]
// 004c5879  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004c587c  83c007               add eax, 7
// 004c587f  c1e803               shr eax, 3
// 004c5882  50                   push eax
// 004c5883  51                   push ecx
// 004c5884  8bcf                 mov ecx, edi
// 004c5886  e875a6fdff           call 0x49ff00
// 004c588b  8b07                 mov eax, dword ptr [edi]
// 004c588d  5f                   pop edi
// 004c588e  5e                   pop esi
// 004c588f  2bc3                 sub eax, ebx
// 004c5891  5b                   pop ebx
// 004c5892  c21000               ret 0x10
// 004c5895  e836a4fdff           call 0x49fcd0
// 004c589a  ebc2                 jmp 0x4c585e
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?WriteToBitStreamFromInternalPacket@ReliabilityLayer@@AAEHPAVBitStream@RakNet@@QBUInternalPacket@@_J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
