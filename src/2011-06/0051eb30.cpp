// roc 2011-06 0051eb30  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051eb30
//
// 0051eb30  53                   push ebx
// 0051eb31  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0051eb35  56                   push esi
// 0051eb36  33f6                 xor esi, esi
// 0051eb38  57                   push edi
// 0051eb39  8bf9                 mov edi, ecx
// 0051eb3b  85db                 test ebx, ebx
// 0051eb3d  7634                 jbe 0x51eb73
// 0051eb3f  55                   push ebp
// 0051eb40  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051eb44  eb0a                 jmp 0x51eb50
// 0051eb46  8da42400000000       lea esp, [esp]
// 0051eb4d  8d4900               lea ecx, [ecx]
// 0051eb50  0fb6042e             movzx eax, byte ptr [esi + ebp]
// 0051eb54  0fb74cc708           movzx ecx, word ptr [edi + eax*8 + 8]
// 0051eb59  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 0051eb5d  8d04c7               lea eax, [edi + eax*8]
// 0051eb60  6a00                 push 0
// 0051eb62  51                   push ecx
// 0051eb63  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051eb67  52                   push edx
// 0051eb68  e863e4fcff           call 0x4ecfd0
// 0051eb6d  46                   inc esi
// 0051eb6e  3bf3                 cmp esi, ebx
// 0051eb70  72de                 jb 0x51eb50
// 0051eb72  5d                   pop ebp
// 0051eb73  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051eb77  8b0b                 mov ecx, dword ptr [ebx]
// 0051eb79  f6c107               test cl, 7
// 0051eb7c  743b                 je 0x51ebb9
// 0051eb7e  80e107               and cl, 7
// 0051eb81  b008                 mov al, 8
// 0051eb83  2ac1                 sub al, cl
// 0051eb85  33c9                 xor ecx, ecx
// 0051eb87  660fb6f0             movzx si, al
// 0051eb8b  8d5708               lea edx, [edi + 8]
// 0051eb8e  8bff                 mov edi, edi
// 0051eb90  663932               cmp word ptr [edx], si
// 0051eb93  7712                 ja 0x51eba7
// 0051eb95  41                   inc ecx
// 0051eb96  83c208               add edx, 8
// 0051eb99  81f900010000         cmp ecx, 0x100
// 0051eb9f  72ef                 jb 0x51eb90
// 0051eba1  5f                   pop edi
// 0051eba2  5e                   pop esi
// 0051eba3  5b                   pop ebx
// 0051eba4  c20c00               ret 0xc
// 0051eba7  8b4ccf04             mov ecx, dword ptr [edi + ecx*8 + 4]
// 0051ebab  0fb6c0               movzx eax, al
// 0051ebae  6a00                 push 0
// 0051ebb0  50                   push eax
// 0051ebb1  51                   push ecx
// 0051ebb2  8bcb                 mov ecx, ebx
// 0051ebb4  e817e4fcff           call 0x4ecfd0
// 0051ebb9  5f                   pop edi
// 0051ebba  5e                   pop esi
// 0051ebbb  5b                   pop ebx
// 0051ebbc  c20c00               ret 0xc
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?EncodeArray@HuffmanEncodingTree@RakNet@@QAEXPAEIPAVBitStream@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
