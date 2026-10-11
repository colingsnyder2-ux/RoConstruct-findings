// from server: 100% by auto
// roc 2007-08 004c3e20  unit: RakPeer  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c3e20
//
// 004c3e20  6aff                 push -1
// 004c3e22  682bbc7400           push 0x74bc2b
// 004c3e27  64a100000000         mov eax, dword ptr fs:[0]
// 004c3e2d  50                   push eax
// 004c3e2e  81ec18010000         sub esp, 0x118
// 004c3e34  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c3e39  33c4                 xor eax, esp
// 004c3e3b  89842414010000       mov dword ptr [esp + 0x114], eax
// 004c3e42  53                   push ebx
// 004c3e43  55                   push ebp
// 004c3e44  56                   push esi
// 004c3e45  57                   push edi
// 004c3e46  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c3e4b  33c4                 xor eax, esp
// 004c3e4d  50                   push eax
// 004c3e4e  8d84242c010000       lea eax, [esp + 0x12c]
// 004c3e55  64a300000000         mov dword ptr fs:[0], eax
// 004c3e5b  8bbc2440010000       mov edi, dword ptr [esp + 0x140]
// 004c3e62  85ff                 test edi, edi
// 004c3e64  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 004c3e6b  8bac2444010000       mov ebp, dword ptr [esp + 0x144]
// 004c3e72  8bd9                 mov ebx, ecx
// 004c3e74  7672                 jbe 0x4c3ee8
// 004c3e76  6a00                 push 0
// 004c3e78  8d4f07               lea ecx, [edi + 7]
// 004c3e7b  c1e903               shr ecx, 3
// 004c3e7e  51                   push ecx
// 004c3e7f  50                   push eax
// 004c3e80  8d4c2420             lea ecx, [esp + 0x20]
// 004c3e84  e827bafdff           call 0x49f8b0
// 004c3e89  85ff                 test edi, edi
// 004c3e8b  8b33                 mov esi, dword ptr [ebx]
// 004c3e8d  c784243401000000000000 mov dword ptr [esp + 0x134], 0
// 004c3e98  763a                 jbe 0x4c3ed4
// 004c3e9a  8d9b00000000         lea ebx, [ebx]
// 004c3ea0  8d4c2414             lea ecx, [esp + 0x14]
// 004c3ea4  e8c7bafdff           call 0x49f970
// 004c3ea9  84c0                 test al, al
// 004c3eab  7505                 jne 0x4c3eb2
// 004c3ead  8b7608               mov esi, dword ptr [esi + 8]
// 004c3eb0  eb03                 jmp 0x4c3eb5
// 004c3eb2  8b760c               mov esi, dword ptr [esi + 0xc]
// 004c3eb5  837e0800             cmp dword ptr [esi + 8], 0
// 004c3eb9  7514                 jne 0x4c3ecf
// 004c3ebb  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004c3ebf  750e                 jne 0x4c3ecf
// 004c3ec1  6a01                 push 1
// 004c3ec3  6a08                 push 8
// 004c3ec5  56                   push esi
// 004c3ec6  8bcd                 mov ecx, ebp
// 004c3ec8  e8c3befdff           call 0x49fd90
// 004c3ecd  8b33                 mov esi, dword ptr [ebx]
// 004c3ecf  83ef01               sub edi, 1
// 004c3ed2  75cc                 jne 0x4c3ea0
// 004c3ed4  8d4c2414             lea ecx, [esp + 0x14]
// 004c3ed8  c7842434010000ffffffff mov dword ptr [esp + 0x134], 0xffffffff
// 004c3ee3  e848bafdff           call 0x49f930
// 004c3ee8  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 004c3eef  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3ef6  59                   pop ecx
// 004c3ef7  5f                   pop edi
// 004c3ef8  5e                   pop esi
// 004c3ef9  5d                   pop ebp
// 004c3efa  5b                   pop ebx
// 004c3efb  8b8c2414010000       mov ecx, dword ptr [esp + 0x114]
// 004c3f02  33cc                 xor ecx, esp
// 004c3f04  e815cb1600           call 0x630a1e
// 004c3f09  81c424010000         add esp, 0x124
// 004c3f0f  c20c00               ret 0xc

// from server: 66% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp