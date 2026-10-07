// roc 2009-06 004fd7b0  unit: RBX::Network::NetworkOwnerJob  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fd7b0
//
// 004fd7b0  53                   push ebx
// 004fd7b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004fd7b5  56                   push esi
// 004fd7b6  33f6                 xor esi, esi
// 004fd7b8  57                   push edi
// 004fd7b9  8bf9                 mov edi, ecx
// 004fd7bb  85db                 test ebx, ebx
// 004fd7bd  7634                 jbe 0x4fd7f3
// 004fd7bf  55                   push ebp
// 004fd7c0  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004fd7c4  eb0a                 jmp 0x4fd7d0
// 004fd7c6  8da42400000000       lea esp, [esp]
// 004fd7cd  8d4900               lea ecx, [ecx]
// 004fd7d0  0fb6042e             movzx eax, byte ptr [esi + ebp]
// 004fd7d4  0fb74cc708           movzx ecx, word ptr [edi + eax*8 + 8]
// 004fd7d9  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 004fd7dd  8d04c7               lea eax, [edi + eax*8]
// 004fd7e0  6a00                 push 0
// 004fd7e2  51                   push ecx
// 004fd7e3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004fd7e7  52                   push edx
// 004fd7e8  e853c4fdff           call 0x4d9c40
// 004fd7ed  46                   inc esi
// 004fd7ee  3bf3                 cmp esi, ebx
// 004fd7f0  72de                 jb 0x4fd7d0
// 004fd7f2  5d                   pop ebp
// 004fd7f3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004fd7f7  8b0b                 mov ecx, dword ptr [ebx]
// 004fd7f9  f6c107               test cl, 7
// 004fd7fc  743b                 je 0x4fd839
// 004fd7fe  80e107               and cl, 7
// 004fd801  b008                 mov al, 8
// 004fd803  2ac1                 sub al, cl
// 004fd805  33c9                 xor ecx, ecx
// 004fd807  660fb6f0             movzx si, al
// 004fd80b  8d5708               lea edx, [edi + 8]
// 004fd80e  8bff                 mov edi, edi
// 004fd810  663932               cmp word ptr [edx], si
// 004fd813  7712                 ja 0x4fd827
// 004fd815  41                   inc ecx
// 004fd816  83c208               add edx, 8
// 004fd819  81f900010000         cmp ecx, 0x100
// 004fd81f  72ef                 jb 0x4fd810
// 004fd821  5f                   pop edi
// 004fd822  5e                   pop esi
// 004fd823  5b                   pop ebx
// 004fd824  c20c00               ret 0xc
// 004fd827  8b4ccf04             mov ecx, dword ptr [edi + ecx*8 + 4]
// 004fd82b  0fb6c0               movzx eax, al
// 004fd82e  6a00                 push 0
// 004fd830  50                   push eax
// 004fd831  51                   push ecx
// 004fd832  8bcb                 mov ecx, ebx
// 004fd834  e807c4fdff           call 0x4d9c40
// 004fd839  5f                   pop edi
// 004fd83a  5e                   pop esi
// 004fd83b  5b                   pop ebx
// 004fd83c  c20c00               ret 0xc
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?EncodeArray@HuffmanEncodingTree@RakNet@@QAEXPAEIPAVBitStream@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
