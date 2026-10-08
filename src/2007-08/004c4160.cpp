// roc 2007-08 004c4160  unit: RakPeer  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4160
//
// 004c4160  53                   push ebx
// 004c4161  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c4165  56                   push esi
// 004c4166  33f6                 xor esi, esi
// 004c4168  85db                 test ebx, ebx
// 004c416a  57                   push edi
// 004c416b  8bf9                 mov edi, ecx
// 004c416d  7636                 jbe 0x4c41a5
// 004c416f  55                   push ebp
// 004c4170  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004c4174  eb0a                 jmp 0x4c4180
// 004c4176  8da42400000000       lea esp, [esp]
// 004c417d  8d4900               lea ecx, [ecx]
// 004c4180  0fb6042e             movzx eax, byte ptr [esi + ebp]
// 004c4184  0fb74cc708           movzx ecx, word ptr [edi + eax*8 + 8]
// 004c4189  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 004c418d  8d04c7               lea eax, [edi + eax*8]
// 004c4190  6a00                 push 0
// 004c4192  51                   push ecx
// 004c4193  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c4197  52                   push edx
// 004c4198  e8f3bbfdff           call 0x49fd90
// 004c419d  83c601               add esi, 1
// 004c41a0  3bf3                 cmp esi, ebx
// 004c41a2  72dc                 jb 0x4c4180
// 004c41a4  5d                   pop ebp
// 004c41a5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c41a9  8b03                 mov eax, dword ptr [ebx]
// 004c41ab  2507000080           and eax, 0x80000007
// 004c41b0  7905                 jns 0x4c41b7
// 004c41b2  48                   dec eax
// 004c41b3  83c8f8               or eax, 0xfffffff8
// 004c41b6  40                   inc eax
// 004c41b7  7437                 je 0x4c41f0
// 004c41b9  b108                 mov cl, 8
// 004c41bb  2ac8                 sub cl, al
// 004c41bd  33c0                 xor eax, eax
// 004c41bf  660fb6f1             movzx si, cl
// 004c41c3  8d5708               lea edx, [edi + 8]
// 004c41c6  663932               cmp word ptr [edx], si
// 004c41c9  7713                 ja 0x4c41de
// 004c41cb  83c001               add eax, 1
// 004c41ce  83c208               add edx, 8
// 004c41d1  3d00010000           cmp eax, 0x100
// 004c41d6  72ee                 jb 0x4c41c6
// 004c41d8  5f                   pop edi
// 004c41d9  5e                   pop esi
// 004c41da  5b                   pop ebx
// 004c41db  c20c00               ret 0xc
// 004c41de  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 004c41e2  0fb6c9               movzx ecx, cl
// 004c41e5  6a00                 push 0
// 004c41e7  51                   push ecx
// 004c41e8  52                   push edx
// 004c41e9  8bcb                 mov ecx, ebx
// 004c41eb  e8a0bbfdff           call 0x49fd90
// 004c41f0  5f                   pop edi
// 004c41f1  5e                   pop esi
// 004c41f2  5b                   pop ebx
// 004c41f3  c20c00               ret 0xc
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?EncodeArray@HuffmanEncodingTree@@QAEXPAEIPAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
