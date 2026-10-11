// roc 2007-08 004baef0  unit: RakPeer  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004baef0
//
// 004baef0  55                   push ebp
// 004baef1  8bec                 mov ebp, esp
// 004baef3  83ec44               sub esp, 0x44
// 004baef6  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004baef9  53                   push ebx
// 004baefa  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 004baefd  56                   push esi
// 004baefe  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004baf01  57                   push edi
// 004baf02  6a40                 push 0x40
// 004baf04  b910000000           mov ecx, 0x10
// 004baf09  8d7dbc               lea edi, [ebp - 0x44]
// 004baf0c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004baf0e  8b7508               mov esi, dword ptr [ebp + 8]
// 004baf11  6a00                 push 0
// 004baf13  b910000000           mov ecx, 0x10
// 004baf18  8bfb                 mov edi, ebx
// 004baf1a  50                   push eax
// 004baf1b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004baf1d  e86a5c1700           call 0x630b8c
// 004baf22  bf00000080           mov edi, 0x80000000
// 004baf27  83c40c               add esp, 0xc
// 004baf2a  857df8               test dword ptr [ebp - 8], edi
// 004baf2d  be01000000           mov esi, 1
// 004baf32  89750c               mov dword ptr [ebp + 0xc], esi
// 004baf35  0f8511010000         jne 0x4bb04c
// 004baf3b  8d4dbc               lea ecx, [ebp - 0x44]
// 004baf3e  51                   push ecx
// 004baf3f  53                   push ebx
// 004baf40  e8dbebffff           call 0x4b9b20
// 004baf45  83c408               add esp, 8
// 004baf48  84c0                 test al, al
// 004baf4a  0f84fc000000         je 0x4bb04c
// 004baf50  b80f000000           mov eax, 0xf
// 004baf55  8d4b34               lea ecx, [ebx + 0x34]
// 004baf58  83790800             cmp dword ptr [ecx + 8], 0
// 004baf5c  7529                 jne 0x4baf87
// 004baf5e  83790400             cmp dword ptr [ecx + 4], 0
// 004baf62  7517                 jne 0x4baf7b
// 004baf64  833900               cmp dword ptr [ecx], 0
// 004baf67  7516                 jne 0x4baf7f
// 004baf69  8379fc00             cmp dword ptr [ecx - 4], 0
// 004baf6d  7515                 jne 0x4baf84
// 004baf6f  83e804               sub eax, 4
// 004baf72  83e910               sub ecx, 0x10
// 004baf75  85c0                 test eax, eax
// 004baf77  7ddf                 jge 0x4baf58
// 004baf79  eb0c                 jmp 0x4baf87
// 004baf7b  2bc6                 sub eax, esi
// 004baf7d  eb08                 jmp 0x4baf87
// 004baf7f  83e802               sub eax, 2
// 004baf82  eb03                 jmp 0x4baf87
// 004baf84  83e803               sub eax, 3
// 004baf87  85c0                 test eax, eax
// 004baf89  8bc8                 mov ecx, eax
// 004baf8b  7c2c                 jl 0x4bafb9
// 004baf8d  8d4900               lea ecx, [ecx]
// 004baf90  837c8dbc00           cmp dword ptr [ebp + ecx*4 - 0x44], 0
// 004baf95  7504                 jne 0x4baf9b
// 004baf97  2bce                 sub ecx, esi
// 004baf99  79f5                 jns 0x4baf90
// 004baf9b  3bc1                 cmp eax, ecx
// 004baf9d  741a                 je 0x4bafb9
// 004baf9f  2bc1                 sub eax, ecx
// 004bafa1  c1e005               shl eax, 5
// 004bafa4  8bf0                 mov esi, eax
// 004bafa6  8d55bc               lea edx, [ebp - 0x44]
// 004bafa9  56                   push esi
// 004bafaa  52                   push edx
// 004bafab  e8b0ebffff           call 0x4b9b60
// 004bafb0  83c408               add esp, 8
// 004bafb3  83c601               add esi, 1
// 004bafb6  89750c               mov dword ptr [ebp + 0xc], esi
// 004bafb9  857df8               test dword ptr [ebp - 8], edi
// 004bafbc  7545                 jne 0x4bb003
// 004bafbe  8bff                 mov edi, edi
// 004bafc0  b80f000000           mov eax, 0xf
// 004bafc5  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 004bafc8  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004bafcc  3bca                 cmp ecx, edx
// 004bafce  7709                 ja 0x4bafd9
// 004bafd0  7231                 jb 0x4bb003
// 004bafd2  83e801               sub eax, 1
// 004bafd5  79ee                 jns 0x4bafc5
// 004bafd7  eb2a                 jmp 0x4bb003
// 004bafd9  33d2                 xor edx, edx
// 004bafdb  33c9                 xor ecx, ecx
// 004bafdd  8d4900               lea ecx, [ecx]
// 004bafe0  8b448dbc             mov eax, dword ptr [ebp + ecx*4 - 0x44]
// 004bafe4  8d3400               lea esi, [eax + eax]
// 004bafe7  0bf2                 or esi, edx
// 004bafe9  89748dbc             mov dword ptr [ebp + ecx*4 - 0x44], esi
// 004bafed  c1e81f               shr eax, 0x1f
// 004baff0  83c101               add ecx, 1
// 004baff3  83f910               cmp ecx, 0x10
// 004baff6  8bd0                 mov edx, eax
// 004baff8  72e6                 jb 0x4bafe0
// 004baffa  83450c01             add dword ptr [ebp + 0xc], 1
// 004baffe  857df8               test dword ptr [ebp - 8], edi
// 004bb001  74bd                 je 0x4bafc0
// 004bb003  be01000000           mov esi, 1
// 004bb008  eb06                 jmp 0x4bb010
// 004bb00a  8d9b00000000         lea ebx, [ebx]
// 004bb010  b80f000000           mov eax, 0xf
// 004bb015  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 004bb018  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004bb01c  3bd1                 cmp edx, ecx
// 004bb01e  7708                 ja 0x4bb028
// 004bb020  724e                 jb 0x4bb070
// 004bb022  2bc6                 sub eax, esi
// 004bb024  79ef                 jns 0x4bb015
// 004bb026  eb48                 jmp 0x4bb070
// 004bb028  33c9                 xor ecx, ecx
// 004bb02a  ba0f000000           mov edx, 0xf
// 004bb02f  90                   nop 
// 004bb030  8b4495bc             mov eax, dword ptr [ebp + edx*4 - 0x44]
// 004bb034  8bf8                 mov edi, eax
// 004bb036  d1ef                 shr edi, 1
// 004bb038  0bf9                 or edi, ecx
// 004bb03a  c1e01f               shl eax, 0x1f
// 004bb03d  897c95bc             mov dword ptr [ebp + edx*4 - 0x44], edi
// 004bb041  2bd6                 sub edx, esi
// 004bb043  8bc8                 mov ecx, eax
// 004bb045  79e9                 jns 0x4bb030
// 004bb047  29750c               sub dword ptr [ebp + 0xc], esi
// 004bb04a  ebc4                 jmp 0x4bb010
// 004bb04c  8d45bc               lea eax, [ebp - 0x44]
// 004bb04f  53                   push ebx
// 004bb050  50                   push eax
// 004bb051  e8caeaffff           call 0x4b9b20
// 004bb056  83c408               add esp, 8
// 004bb059  84c0                 test al, al
// 004bb05b  7413                 je 0x4bb070
// 004bb05d  8d4dbc               lea ecx, [ebp - 0x44]
// 004bb060  51                   push ecx
// 004bb061  e88aebffff           call 0x4b9bf0
// 004bb066  83c404               add esp, 4
// 004bb069  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 004bb070  33db                 xor ebx, ebx
// 004bb072  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 004bb075  0f84ba000000         je 0x4bb135
// 004bb07b  eb03                 jmp 0x4bb080
// 004bb07d  8d4900               lea ecx, [ecx]
// 004bb080  29750c               sub dword ptr [ebp + 0xc], esi
// 004bb083  03de                 add ebx, esi
// 004bb085  b80f000000           mov eax, 0xf
// 004bb08a  8d9b00000000         lea ebx, [ebx]
// 004bb090  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004bb093  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004bb096  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004bb09a  3bd1                 cmp edx, ecx
// 004bb09c  776a                 ja 0x4bb108
// 004bb09e  7204                 jb 0x4bb0a4
// 004bb0a0  2bc6                 sub eax, esi
// 004bb0a2  79ec                 jns 0x4bb090
// 004bb0a4  8d45bc               lea eax, [ebp - 0x44]
// 004bb0a7  8945fc               mov dword ptr [ebp - 4], eax
// 004bb0aa  c7450803000000       mov dword ptr [ebp + 8], 3
// 004bb0b1  8b75fc               mov esi, dword ptr [ebp - 4]
// 004bb0b4  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 004bb0b7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004bb0ba  8b06                 mov eax, dword ptr [esi]
// 004bb0bc  33d2                 xor edx, edx
// 004bb0be  2907                 sub dword ptr [edi], eax
// 004bb0c0  8b4604               mov eax, dword ptr [esi + 4]
// 004bb0c3  194704               sbb dword ptr [edi + 4], eax
// 004bb0c6  8b4608               mov eax, dword ptr [esi + 8]
// 004bb0c9  194708               sbb dword ptr [edi + 8], eax
// 004bb0cc  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bb0cf  19470c               sbb dword ptr [edi + 0xc], eax
// 004bb0d2  e322                 jecxz 0x4bb0f6
// 004bb0d4  42                   inc edx
// 004bb0d5  42                   inc edx
// 004bb0d6  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bb0d9  1904d7               sbb dword ptr [edi + edx*8], eax
// 004bb0dc  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bb0e0  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004bb0e4  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bb0e8  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004bb0ec  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bb0f0  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004bb0f4  e2de                 loop 0x4bb0d4
// 004bb0f6  8b7510               mov esi, dword ptr [ebp + 0x10]
// 004bb0f9  53                   push ebx
// 004bb0fa  56                   push esi
// 004bb0fb  e860eaffff           call 0x4b9b60
// 004bb100  83c408               add esp, 8
// 004bb103  33db                 xor ebx, ebx
// 004bb105  830e01               or dword ptr [esi], 1
// 004bb108  33c9                 xor ecx, ecx
// 004bb10a  ba0f000000           mov edx, 0xf
// 004bb10f  be01000000           mov esi, 1
// 004bb114  8b4495bc             mov eax, dword ptr [ebp + edx*4 - 0x44]
// 004bb118  8bf8                 mov edi, eax
// 004bb11a  d1ef                 shr edi, 1
// 004bb11c  0bf9                 or edi, ecx
// 004bb11e  c1e01f               shl eax, 0x1f
// 004bb121  897c95bc             mov dword ptr [ebp + edx*4 - 0x44], edi
// 004bb125  2bd6                 sub edx, esi
// 004bb127  8bc8                 mov ecx, eax
// 004bb129  79e9                 jns 0x4bb114
// 004bb12b  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 004bb12f  0f854bffffff         jne 0x4bb080
// 004bb135  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bb138  53                   push ebx
// 004bb139  51                   push ecx
// 004bb13a  e821eaffff           call 0x4b9b60
// 004bb13f  83c408               add esp, 8
// 004bb142  5f                   pop edi
// 004bb143  5e                   pop esi
// 004bb144  5b                   pop ebx
// 004bb145  8be5                 mov esp, ebp
// 004bb147  5d                   pop ebp
// 004bb148  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$udivide@$$BY0BA@I@big@@YAXAAY0BA@I000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
