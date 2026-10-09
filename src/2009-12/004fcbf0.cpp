// roc 2009-12 004fcbf0  unit: RBX::Network::Player  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fcbf0
//
// 004fcbf0  55                   push ebp
// 004fcbf1  8bec                 mov ebp, esp
// 004fcbf3  6aff                 push -1
// 004fcbf5  68c0609300           push 0x9360c0
// 004fcbfa  64a100000000         mov eax, dword ptr fs:[0]
// 004fcc00  50                   push eax
// 004fcc01  64892500000000       mov dword ptr fs:[0], esp
// 004fcc08  83ec08               sub esp, 8
// 004fcc0b  53                   push ebx
// 004fcc0c  56                   push esi
// 004fcc0d  8bf1                 mov esi, ecx
// 004fcc0f  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fcc12  57                   push edi
// 004fcc13  8965f0               mov dword ptr [ebp - 0x10], esp
// 004fcc16  85d2                 test edx, edx
// 004fcc18  7504                 jne 0x4fcc1e
// 004fcc1a  33c9                 xor ecx, ecx
// 004fcc1c  eb0a                 jmp 0x4fcc28
// 004fcc1e  8b4614               mov eax, dword ptr [esi + 0x14]
// 004fcc21  2bc2                 sub eax, edx
// 004fcc23  c1f802               sar eax, 2
// 004fcc26  8bc8                 mov ecx, eax
// 004fcc28  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004fcc2b  85ff                 test edi, edi
// 004fcc2d  0f84de010000         je 0x4fce11
// 004fcc33  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 004fcc36  8bc3                 mov eax, ebx
// 004fcc38  2bc2                 sub eax, edx
// 004fcc3a  c1f802               sar eax, 2
// 004fcc3d  baffffff3f           mov edx, 0x3fffffff
// 004fcc42  2bd0                 sub edx, eax
// 004fcc44  3bd7                 cmp edx, edi
// 004fcc46  7305                 jae 0x4fcc4d
// 004fcc48  e81355f4ff           call 0x442160
// 004fcc4d  8d1438               lea edx, [eax + edi]
// 004fcc50  3bca                 cmp ecx, edx
// 004fcc52  0f83f9000000         jae 0x4fcd51
// 004fcc58  8bc1                 mov eax, ecx
// 004fcc5a  d1e8                 shr eax, 1
// 004fcc5c  bbffffff3f           mov ebx, 0x3fffffff
// 004fcc61  2bd8                 sub ebx, eax
// 004fcc63  3bd9                 cmp ebx, ecx
// 004fcc65  730c                 jae 0x4fcc73
// 004fcc67  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 004fcc6e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004fcc71  eb05                 jmp 0x4fcc78
// 004fcc73  03c8                 add ecx, eax
// 004fcc75  894dec               mov dword ptr [ebp - 0x14], ecx
// 004fcc78  3bca                 cmp ecx, edx
// 004fcc7a  7305                 jae 0x4fcc81
// 004fcc7c  8955ec               mov dword ptr [ebp - 0x14], edx
// 004fcc7f  8bca                 mov ecx, edx
// 004fcc81  6a00                 push 0
// 004fcc83  51                   push ecx
// 004fcc84  e8b73cf3ff           call 0x430940
// 004fcc89  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 004fcc8c  2b5e0c               sub ebx, dword ptr [esi + 0xc]
// 004fcc8f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004fcc92  83c408               add esp, 8
// 004fcc95  51                   push ecx
// 004fcc96  c1fb02               sar ebx, 2
// 004fcc99  57                   push edi
// 004fcc9a  8d1498               lea edx, [eax + ebx*4]
// 004fcc9d  52                   push edx
// 004fcc9e  8bce                 mov ecx, esi
// 004fcca0  894510               mov dword ptr [ebp + 0x10], eax
// 004fcca3  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004fccaa  e8a15b2700           call 0x772850
// 004fccaf  8b460c               mov eax, dword ptr [esi + 0xc]
// 004fccb2  c6451400             mov byte ptr [ebp + 0x14], 0
// 004fccb6  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004fccb9  52                   push edx
// 004fccba  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004fccbd  52                   push edx
// 004fccbe  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004fccc1  8d4e08               lea ecx, [esi + 8]
// 004fccc4  51                   push ecx
// 004fccc5  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004fccc8  51                   push ecx
// 004fccc9  52                   push edx
// 004fccca  50                   push eax
// 004fcccb  e8c077f4ff           call 0x444490
// 004fccd0  8b4610               mov eax, dword ptr [esi + 0x10]
// 004fccd3  83c418               add esp, 0x18
// 004fccd6  c6451400             mov byte ptr [ebp + 0x14], 0
// 004fccda  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004fccdd  52                   push edx
// 004fccde  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004fcce1  52                   push edx
// 004fcce2  8d0c3b               lea ecx, [ebx + edi]
// 004fcce5  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004fcce8  8d5608               lea edx, [esi + 8]
// 004fcceb  52                   push edx
// 004fccec  8d0c8b               lea ecx, [ebx + ecx*4]
// 004fccef  51                   push ecx
// 004fccf0  50                   push eax
// 004fccf1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004fccf4  50                   push eax
// 004fccf5  e89677f4ff           call 0x444490
// 004fccfa  8b460c               mov eax, dword ptr [esi + 0xc]
// 004fccfd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004fcd00  2bc8                 sub ecx, eax
// 004fcd02  c1f902               sar ecx, 2
// 004fcd05  83c418               add esp, 0x18
// 004fcd08  03f9                 add edi, ecx
// 004fcd0a  85c0                 test eax, eax
// 004fcd0c  7409                 je 0x4fcd17
// 004fcd0e  50                   push eax
// 004fcd0f  e8466b2f00           call 0x7f385a
// 004fcd14  83c404               add esp, 4
// 004fcd17  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004fcd1a  8d0493               lea eax, [ebx + edx*4]
// 004fcd1d  8d0cbb               lea ecx, [ebx + edi*4]
// 004fcd20  894614               mov dword ptr [esi + 0x14], eax
// 004fcd23  894e10               mov dword ptr [esi + 0x10], ecx
// 004fcd26  895e0c               mov dword ptr [esi + 0xc], ebx
// 004fcd29  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004fcd2c  64890d00000000       mov dword ptr fs:[0], ecx
// 004fcd33  5f                   pop edi
// 004fcd34  5e                   pop esi
// 004fcd35  5b                   pop ebx
// 004fcd36  8be5                 mov esp, ebp
// 004fcd38  5d                   pop ebp
// 004fcd39  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
