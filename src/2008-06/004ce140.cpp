// roc 2008-06 004ce140  unit: RBX::Network::PhysicsSender  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce140
//
// 004ce140  53                   push ebx
// 004ce141  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004ce145  56                   push esi
// 004ce146  33f6                 xor esi, esi
// 004ce148  57                   push edi
// 004ce149  8bf9                 mov edi, ecx
// 004ce14b  85db                 test ebx, ebx
// 004ce14d  7634                 jbe 0x4ce183
// 004ce14f  55                   push ebp
// 004ce150  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004ce154  eb0a                 jmp 0x4ce160
// 004ce156  8da42400000000       lea esp, [esp]
// 004ce15d  8d4900               lea ecx, [ecx]
// 004ce160  0fb6042e             movzx eax, byte ptr [esi + ebp]
// 004ce164  0fb74cc708           movzx ecx, word ptr [edi + eax*8 + 8]
// 004ce169  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 004ce16d  8d04c7               lea eax, [edi + eax*8]
// 004ce170  6a00                 push 0
// 004ce172  51                   push ecx
// 004ce173  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004ce177  52                   push edx
// 004ce178  e88374fdff           call 0x4a5600
// 004ce17d  46                   inc esi
// 004ce17e  3bf3                 cmp esi, ebx
// 004ce180  72de                 jb 0x4ce160
// 004ce182  5d                   pop ebp
// 004ce183  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ce187  8b03                 mov eax, dword ptr [ebx]
// 004ce189  2507000080           and eax, 0x80000007
// 004ce18e  7905                 jns 0x4ce195
// 004ce190  48                   dec eax
// 004ce191  83c8f8               or eax, 0xfffffff8
// 004ce194  40                   inc eax
// 004ce195  7435                 je 0x4ce1cc
// 004ce197  b108                 mov cl, 8
// 004ce199  2ac8                 sub cl, al
// 004ce19b  33c0                 xor eax, eax
// 004ce19d  660fb6f1             movzx si, cl
// 004ce1a1  8d5708               lea edx, [edi + 8]
// 004ce1a4  663932               cmp word ptr [edx], si
// 004ce1a7  7711                 ja 0x4ce1ba
// 004ce1a9  40                   inc eax
// 004ce1aa  83c208               add edx, 8
// 004ce1ad  3d00010000           cmp eax, 0x100
// 004ce1b2  72f0                 jb 0x4ce1a4
// 004ce1b4  5f                   pop edi
// 004ce1b5  5e                   pop esi
// 004ce1b6  5b                   pop ebx
// 004ce1b7  c20c00               ret 0xc
// 004ce1ba  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 004ce1be  0fb6c9               movzx ecx, cl
// 004ce1c1  6a00                 push 0
// 004ce1c3  51                   push ecx
// 004ce1c4  52                   push edx
// 004ce1c5  8bcb                 mov ecx, ebx
// 004ce1c7  e83474fdff           call 0x4a5600
// 004ce1cc  5f                   pop edi
// 004ce1cd  5e                   pop esi
// 004ce1ce  5b                   pop ebx
// 004ce1cf  c20c00               ret 0xc
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?EncodeArray@HuffmanEncodingTree@@QAEXPAEIPAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
