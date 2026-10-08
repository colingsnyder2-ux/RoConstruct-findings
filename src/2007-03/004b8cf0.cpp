// roc 2007-03 004b8cf0  unit: seg_004b0000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8cf0
//
// 004b8cf0  53                   push ebx
// 004b8cf1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004b8cf5  56                   push esi
// 004b8cf6  33f6                 xor esi, esi
// 004b8cf8  85db                 test ebx, ebx
// 004b8cfa  57                   push edi
// 004b8cfb  8bf9                 mov edi, ecx
// 004b8cfd  7636                 jbe 0x4b8d35
// 004b8cff  55                   push ebp
// 004b8d00  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004b8d04  eb0a                 jmp 0x4b8d10
// 004b8d06  8da42400000000       lea esp, [esp]
// 004b8d0d  8d4900               lea ecx, [ecx]
// 004b8d10  0fb6042e             movzx eax, byte ptr [esi + ebp]
// 004b8d14  0fb74cc708           movzx ecx, word ptr [edi + eax*8 + 8]
// 004b8d19  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 004b8d1d  8d04c7               lea eax, [edi + eax*8]
// 004b8d20  6a00                 push 0
// 004b8d22  51                   push ecx
// 004b8d23  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004b8d27  52                   push edx
// 004b8d28  e883f0fdff           call 0x497db0
// 004b8d2d  83c601               add esi, 1
// 004b8d30  3bf3                 cmp esi, ebx
// 004b8d32  72dc                 jb 0x4b8d10
// 004b8d34  5d                   pop ebp
// 004b8d35  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004b8d39  8b03                 mov eax, dword ptr [ebx]
// 004b8d3b  2507000080           and eax, 0x80000007
// 004b8d40  7905                 jns 0x4b8d47
// 004b8d42  48                   dec eax
// 004b8d43  83c8f8               or eax, 0xfffffff8
// 004b8d46  40                   inc eax
// 004b8d47  7437                 je 0x4b8d80
// 004b8d49  b108                 mov cl, 8
// 004b8d4b  2ac8                 sub cl, al
// 004b8d4d  33c0                 xor eax, eax
// 004b8d4f  660fb6f1             movzx si, cl
// 004b8d53  8d5708               lea edx, [edi + 8]
// 004b8d56  663932               cmp word ptr [edx], si
// 004b8d59  7713                 ja 0x4b8d6e
// 004b8d5b  83c001               add eax, 1
// 004b8d5e  83c208               add edx, 8
// 004b8d61  3d00010000           cmp eax, 0x100
// 004b8d66  72ee                 jb 0x4b8d56
// 004b8d68  5f                   pop edi
// 004b8d69  5e                   pop esi
// 004b8d6a  5b                   pop ebx
// 004b8d6b  c20c00               ret 0xc
// 004b8d6e  8b54c704             mov edx, dword ptr [edi + eax*8 + 4]
// 004b8d72  0fb6c9               movzx ecx, cl
// 004b8d75  6a00                 push 0
// 004b8d77  51                   push ecx
// 004b8d78  52                   push edx
// 004b8d79  8bcb                 mov ecx, ebx
// 004b8d7b  e830f0fdff           call 0x497db0
// 004b8d80  5f                   pop edi
// 004b8d81  5e                   pop esi
// 004b8d82  5b                   pop ebx
// 004b8d83  c20c00               ret 0xc
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?EncodeArray@HuffmanEncodingTree@@QAEXPAEIPAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
