// roc 2010-06 005138b0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005138b0
//
// 005138b0  53                   push ebx
// 005138b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005138b5  56                   push esi
// 005138b6  33f6                 xor esi, esi
// 005138b8  57                   push edi
// 005138b9  8bf9                 mov edi, ecx
// 005138bb  85db                 test ebx, ebx
// 005138bd  7634                 jbe 0x5138f3
// 005138bf  55                   push ebp
// 005138c0  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005138c4  eb0a                 jmp 0x5138d0
// 005138c6  8da42400000000       lea esp, [esp]
// 005138cd  8d4900               lea ecx, [ecx]
// 005138d0  0fb6042e             movzx eax, byte ptr [esi + ebp]
// 005138d4  0fb74cc708           movzx ecx, word ptr [edi + eax*8 + 8]
// 005138d9  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 005138dd  8d04c7               lea eax, [edi + eax*8]
// 005138e0  6a00                 push 0
// 005138e2  51                   push ecx
// 005138e3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005138e7  52                   push edx
// 005138e8  e8639bfcff           call 0x4dd450
// 005138ed  46                   inc esi
// 005138ee  3bf3                 cmp esi, ebx
// 005138f0  72de                 jb 0x5138d0
// 005138f2  5d                   pop ebp
// 005138f3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005138f7  8b0b                 mov ecx, dword ptr [ebx]
// 005138f9  f6c107               test cl, 7
// 005138fc  743b                 je 0x513939
// 005138fe  80e107               and cl, 7
// 00513901  b008                 mov al, 8
// 00513903  2ac1                 sub al, cl
// 00513905  33c9                 xor ecx, ecx
// 00513907  660fb6f0             movzx si, al
// 0051390b  8d5708               lea edx, [edi + 8]
// 0051390e  8bff                 mov edi, edi
// 00513910  663932               cmp word ptr [edx], si
// 00513913  7712                 ja 0x513927
// 00513915  41                   inc ecx
// 00513916  83c208               add edx, 8
// 00513919  81f900010000         cmp ecx, 0x100
// 0051391f  72ef                 jb 0x513910
// 00513921  5f                   pop edi
// 00513922  5e                   pop esi
// 00513923  5b                   pop ebx
// 00513924  c20c00               ret 0xc
// 00513927  8b4ccf04             mov ecx, dword ptr [edi + ecx*8 + 4]
// 0051392b  0fb6c0               movzx eax, al
// 0051392e  6a00                 push 0
// 00513930  50                   push eax
// 00513931  51                   push ecx
// 00513932  8bcb                 mov ecx, ebx
// 00513934  e8179bfcff           call 0x4dd450
// 00513939  5f                   pop edi
// 0051393a  5e                   pop esi
// 0051393b  5b                   pop ebx
// 0051393c  c20c00               ret 0xc
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?EncodeArray@HuffmanEncodingTree@RakNet@@QAEXPAEIPAVBitStream@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
