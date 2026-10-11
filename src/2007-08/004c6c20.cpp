// roc 2007-08 004c6c20  unit: RakPeer  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c6c20
//
// 004c6c20  6aff                 push -1
// 004c6c22  681bb67400           push 0x74b61b
// 004c6c27  64a100000000         mov eax, dword ptr fs:[0]
// 004c6c2d  50                   push eax
// 004c6c2e  81ec28010000         sub esp, 0x128
// 004c6c34  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c6c39  33c4                 xor eax, esp
// 004c6c3b  89842424010000       mov dword ptr [esp + 0x124], eax
// 004c6c42  53                   push ebx
// 004c6c43  55                   push ebp
// 004c6c44  56                   push esi
// 004c6c45  57                   push edi
// 004c6c46  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c6c4b  33c4                 xor eax, esp
// 004c6c4d  50                   push eax
// 004c6c4e  8d84243c010000       lea eax, [esp + 0x13c]
// 004c6c55  64a300000000         mov dword ptr fs:[0], eax
// 004c6c5b  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 004c6c62  8bf1                 mov esi, ecx
// 004c6c64  8d4c2424             lea ecx, [esp + 0x24]
// 004c6c68  895c2420             mov dword ptr [esp + 0x20], ebx
// 004c6c6c  e8af8bfdff           call 0x49f820
// 004c6c71  8b4604               mov eax, dword ptr [esi + 4]
// 004c6c74  33ff                 xor edi, edi
// 004c6c76  33ed                 xor ebp, ebp
// 004c6c78  3bc7                 cmp eax, edi
// 004c6c7a  89bc2444010000       mov dword ptr [esp + 0x144], edi
// 004c6c81  897c2414             mov dword ptr [esp + 0x14], edi
// 004c6c85  0f8697000000         jbe 0x4c6d22
// 004c6c8b  bb51000000           mov ebx, 0x51
// 004c6c90  3b9c2450010000       cmp ebx, dword ptr [esp + 0x150]
// 004c6c97  0f8f81000000         jg 0x4c6d1e
// 004c6c9d  8b06                 mov eax, dword ptr [esi]
// 004c6c9f  8b0cf8               mov ecx, dword ptr [eax + edi*8]
// 004c6ca2  3b4cf804             cmp ecx, dword ptr [eax + edi*8 + 4]
// 004c6ca6  8d04f8               lea eax, [eax + edi*8]
// 004c6ca9  0f94c0               sete al
// 004c6cac  84c0                 test al, al
// 004c6cae  8d4c2424             lea ecx, [esp + 0x24]
// 004c6cb2  7407                 je 0x4c6cbb
// 004c6cb4  e83790fdff           call 0x49fcf0
// 004c6cb9  eb05                 jmp 0x4c6cc0
// 004c6cbb  e81090fdff           call 0x49fcd0
// 004c6cc0  8b16                 mov edx, dword ptr [esi]
// 004c6cc2  8b04fa               mov eax, dword ptr [edx + edi*8]
// 004c6cc5  6a01                 push 1
// 004c6cc7  6a20                 push 0x20
// 004c6cc9  8d4c2420             lea ecx, [esp + 0x20]
// 004c6ccd  51                   push ecx
// 004c6cce  8d4c2430             lea ecx, [esp + 0x30]
// 004c6cd2  89442424             mov dword ptr [esp + 0x24], eax
// 004c6cd6  e8b590fdff           call 0x49fd90
// 004c6cdb  8b16                 mov edx, dword ptr [esi]
// 004c6cdd  8b0cfa               mov ecx, dword ptr [edx + edi*8]
// 004c6ce0  8d04fa               lea eax, [edx + edi*8]
// 004c6ce3  83c521               add ebp, 0x21
// 004c6ce6  83c321               add ebx, 0x21
// 004c6ce9  3b4804               cmp ecx, dword ptr [eax + 4]
// 004c6cec  741f                 je 0x4c6d0d
// 004c6cee  8b5004               mov edx, dword ptr [eax + 4]
// 004c6cf1  6a01                 push 1
// 004c6cf3  6a20                 push 0x20
// 004c6cf5  8d442424             lea eax, [esp + 0x24]
// 004c6cf9  50                   push eax
// 004c6cfa  8d4c2430             lea ecx, [esp + 0x30]
// 004c6cfe  89542428             mov dword ptr [esp + 0x28], edx
// 004c6d02  e88990fdff           call 0x49fd90
// 004c6d07  83c520               add ebp, 0x20
// 004c6d0a  83c320               add ebx, 0x20
// 004c6d0d  8344241401           add dword ptr [esp + 0x14], 1
// 004c6d12  83c701               add edi, 1
// 004c6d15  3b7e04               cmp edi, dword ptr [esi + 4]
// 004c6d18  0f8272ffffff         jb 0x4c6c90
// 004c6d1e  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004c6d22  0fb74c2414           movzx ecx, word ptr [esp + 0x14]
// 004c6d27  8b3b                 mov edi, dword ptr [ebx]
// 004c6d29  6a01                 push 1
// 004c6d2b  6a10                 push 0x10
// 004c6d2d  8d542424             lea edx, [esp + 0x24]
// 004c6d31  894c2424             mov dword ptr [esp + 0x24], ecx
// 004c6d35  52                   push edx
// 004c6d36  8bcb                 mov ecx, ebx
// 004c6d38  e8e391fdff           call 0x49ff20
// 004c6d3d  8b03                 mov eax, dword ptr [ebx]
// 004c6d3f  2bc7                 sub eax, edi
// 004c6d41  03e8                 add ebp, eax
// 004c6d43  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c6d47  50                   push eax
// 004c6d48  8d4c2428             lea ecx, [esp + 0x28]
// 004c6d4c  51                   push ecx
// 004c6d4d  8bcb                 mov ecx, ebx
// 004c6d4f  e8cc8efdff           call 0x49fc20
// 004c6d54  80bc245401000000     cmp byte ptr [esp + 0x154], 0
// 004c6d5c  7443                 je 0x4c6da1
// 004c6d5e  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c6d62  6685c0               test ax, ax
// 004c6d65  743a                 je 0x4c6da1
// 004c6d67  8b7e04               mov edi, dword ptr [esi + 4]
// 004c6d6a  0fb7c0               movzx eax, ax
// 004c6d6d  33c9                 xor ecx, ecx
// 004c6d6f  2bf8                 sub edi, eax
// 004c6d71  89442418             mov dword ptr [esp + 0x18], eax
// 004c6d75  7427                 je 0x4c6d9e
// 004c6d77  8d14c500000000       lea edx, [eax*8]
// 004c6d7e  8bff                 mov edi, edi
// 004c6d80  8b06                 mov eax, dword ptr [esi]
// 004c6d82  8b1c02               mov ebx, dword ptr [edx + eax]
// 004c6d85  891cc8               mov dword ptr [eax + ecx*8], ebx
// 004c6d88  8b5c0204             mov ebx, dword ptr [edx + eax + 4]
// 004c6d8c  895cc804             mov dword ptr [eax + ecx*8 + 4], ebx
// 004c6d90  83c101               add ecx, 1
// 004c6d93  83c208               add edx, 8
// 004c6d96  3bcf                 cmp ecx, edi
// 004c6d98  72e6                 jb 0x4c6d80
// 004c6d9a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c6d9e  294604               sub dword ptr [esi + 4], eax
// 004c6da1  8d4c2424             lea ecx, [esp + 0x24]
// 004c6da5  c7842444010000ffffffff mov dword ptr [esp + 0x144], 0xffffffff
// 004c6db0  e87b8bfdff           call 0x49f930
// 004c6db5  8bc5                 mov eax, ebp
// 004c6db7  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 004c6dbe  64890d00000000       mov dword ptr fs:[0], ecx
// 004c6dc5  59                   pop ecx
// 004c6dc6  5f                   pop edi
// 004c6dc7  5e                   pop esi
// 004c6dc8  5d                   pop ebp
// 004c6dc9  5b                   pop ebx
// 004c6dca  8b8c2424010000       mov ecx, dword ptr [esp + 0x124]
// 004c6dd1  33cc                 xor ecx, esp
// 004c6dd3  e8469c1600           call 0x630a1e
// 004c6dd8  81c434010000         add esp, 0x134
// 004c6dde  c20c00               ret 0xc
// library openrbx-raknet/ReliabilityLayer.cpp (function ?Serialize@?$RangeList@I@DataStructures@@QAEIPAVBitStream@RakNet@@H_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet ReliabilityLayer.cpp
