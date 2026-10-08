// roc 2009-12 005fa030  unit: G3D::LineSegment  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa030
//
// 005fa030  51                   push ecx
// 005fa031  53                   push ebx
// 005fa032  55                   push ebp
// 005fa033  56                   push esi
// 005fa034  57                   push edi
// 005fa035  8bf9                 mov edi, ecx
// 005fa037  803f00               cmp byte ptr [edi], 0
// 005fa03a  bd01000000           mov ebp, 1
// 005fa03f  746b                 je 0x5fa0ac
// 005fa041  33db                 xor ebx, ebx
// 005fa043  395f50               cmp dword ptr [edi + 0x50], ebx
// 005fa046  7e5b                 jle 0x5fa0a3
// 005fa048  8d7728               lea esi, [edi + 0x28]
// 005fa04b  eb03                 jmp 0x5fa050
// 005fa04d  8d4900               lea ecx, [ecx]
// 005fa050  8b4604               mov eax, dword ptr [esi + 4]
// 005fa053  3b4608               cmp eax, dword ptr [esi + 8]
// 005fa056  8b0e                 mov ecx, dword ptr [esi]
// 005fa058  7d0c                 jge 0x5fa066
// 005fa05a  03c8                 add ecx, eax
// 005fa05c  7403                 je 0x5fa061
// 005fa05e  c60120               mov byte ptr [ecx], 0x20
// 005fa061  016e04               add dword ptr [esi + 4], ebp
// 005fa064  eb36                 jmp 0x5fa09c
// 005fa066  8d542413             lea edx, [esp + 0x13]
// 005fa06a  3bd1                 cmp edx, ecx
// 005fa06c  7219                 jb 0x5fa087
// 005fa06e  03c8                 add ecx, eax
// 005fa070  3bd1                 cmp edx, ecx
// 005fa072  7313                 jae 0x5fa087
// 005fa074  8d442413             lea eax, [esp + 0x13]
// 005fa078  50                   push eax
// 005fa079  8bce                 mov ecx, esi
// 005fa07b  c644241720           mov byte ptr [esp + 0x17], 0x20
// 005fa080  e83bffffff           call 0x5f9fc0
// 005fa085  eb15                 jmp 0x5fa09c
// 005fa087  6a00                 push 0
// 005fa089  40                   inc eax
// 005fa08a  50                   push eax
// 005fa08b  8bce                 mov ecx, esi
// 005fa08d  e83efeffff           call 0x5f9ed0
// 005fa092  8b0e                 mov ecx, dword ptr [esi]
// 005fa094  8b5604               mov edx, dword ptr [esi + 4]
// 005fa097  c64411ff20           mov byte ptr [ecx + edx - 1], 0x20
// 005fa09c  03dd                 add ebx, ebp
// 005fa09e  3b5f50               cmp ebx, dword ptr [edi + 0x50]
// 005fa0a1  7cad                 jl 0x5fa050
// 005fa0a3  8b4750               mov eax, dword ptr [edi + 0x50]
// 005fa0a6  c60700               mov byte ptr [edi], 0
// 005fa0a9  894704               mov dword ptr [edi + 4], eax
// 005fa0ac  8b472c               mov eax, dword ptr [edi + 0x2c]
// 005fa0af  3b4730               cmp eax, dword ptr [edi + 0x30]
// 005fa0b2  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 005fa0b5  8d7728               lea esi, [edi + 0x28]
// 005fa0b8  7d0f                 jge 0x5fa0c9
// 005fa0ba  03c8                 add ecx, eax
// 005fa0bc  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 005fa0c0  7402                 je 0x5fa0c4
// 005fa0c2  8819                 mov byte ptr [ecx], bl
// 005fa0c4  016e04               add dword ptr [esi + 4], ebp
// 005fa0c7  eb3c                 jmp 0x5fa105
// 005fa0c9  8d542418             lea edx, [esp + 0x18]
// 005fa0cd  3bd1                 cmp edx, ecx
// 005fa0cf  721c                 jb 0x5fa0ed
// 005fa0d1  03c8                 add ecx, eax
// 005fa0d3  3bd1                 cmp edx, ecx
// 005fa0d5  7316                 jae 0x5fa0ed
// 005fa0d7  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 005fa0db  8d442418             lea eax, [esp + 0x18]
// 005fa0df  50                   push eax
// 005fa0e0  8bce                 mov ecx, esi
// 005fa0e2  885c241c             mov byte ptr [esp + 0x1c], bl
// 005fa0e6  e8d5feffff           call 0x5f9fc0
// 005fa0eb  eb18                 jmp 0x5fa105
// 005fa0ed  6a00                 push 0
// 005fa0ef  40                   inc eax
// 005fa0f0  50                   push eax
// 005fa0f1  8bce                 mov ecx, esi
// 005fa0f3  e8d8fdffff           call 0x5f9ed0
// 005fa0f8  8b0e                 mov ecx, dword ptr [esi]
// 005fa0fa  8b5604               mov edx, dword ptr [esi + 4]
// 005fa0fd  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 005fa101  885c11ff             mov byte ptr [ecx + edx - 1], bl
// 005fa105  80fb0d               cmp bl, 0xd
// 005fa108  7403                 je 0x5fa10d
// 005fa10a  016f04               add dword ptr [edi + 4], ebp
// 005fa10d  80fb22               cmp bl, 0x22
// 005fa110  750a                 jne 0x5fa11c
// 005fa112  807f0800             cmp byte ptr [edi + 8], 0
// 005fa116  0f94c0               sete al
// 005fa119  884708               mov byte ptr [edi + 8], al
// 005fa11c  80fb0a               cmp bl, 0xa
// 005fa11f  0f94c0               sete al
// 005fa122  8807                 mov byte ptr [edi], al
// 005fa124  84c0                 test al, al
// 005fa126  7407                 je 0x5fa12f
// 005fa128  c7470400000000       mov dword ptr [edi + 4], 0
// 005fa12f  5f                   pop edi
// 005fa130  5e                   pop esi
// 005fa131  5d                   pop ebp
// 005fa132  5b                   pop ebx
// 005fa133  59                   pop ecx
// 005fa134  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?indentAppend@TextOutput@G3D@@AAEXD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
