// roc 2010-06 004466c0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004466c0
//
// 004466c0  55                   push ebp
// 004466c1  8bec                 mov ebp, esp
// 004466c3  6aff                 push -1
// 004466c5  6870159800           push 0x981570
// 004466ca  64a100000000         mov eax, dword ptr fs:[0]
// 004466d0  50                   push eax
// 004466d1  64892500000000       mov dword ptr fs:[0], esp
// 004466d8  83ec08               sub esp, 8
// 004466db  53                   push ebx
// 004466dc  56                   push esi
// 004466dd  8bf1                 mov esi, ecx
// 004466df  8b560c               mov edx, dword ptr [esi + 0xc]
// 004466e2  57                   push edi
// 004466e3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004466e6  85d2                 test edx, edx
// 004466e8  7504                 jne 0x4466ee
// 004466ea  33c9                 xor ecx, ecx
// 004466ec  eb0a                 jmp 0x4466f8
// 004466ee  8b4614               mov eax, dword ptr [esi + 0x14]
// 004466f1  2bc2                 sub eax, edx
// 004466f3  c1f802               sar eax, 2
// 004466f6  8bc8                 mov ecx, eax
// 004466f8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004466fb  85ff                 test edi, edi
// 004466fd  0f84de010000         je 0x4468e1
// 00446703  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00446706  8bc3                 mov eax, ebx
// 00446708  2bc2                 sub eax, edx
// 0044670a  c1f802               sar eax, 2
// 0044670d  baffffff3f           mov edx, 0x3fffffff
// 00446712  2bd0                 sub edx, eax
// 00446714  3bd7                 cmp edx, edi
// 00446716  7305                 jae 0x44671d
// 00446718  e8d3d6fdff           call 0x423df0
// 0044671d  8d1438               lea edx, [eax + edi]
// 00446720  3bca                 cmp ecx, edx
// 00446722  0f83f9000000         jae 0x446821
// 00446728  8bc1                 mov eax, ecx
// 0044672a  d1e8                 shr eax, 1
// 0044672c  bbffffff3f           mov ebx, 0x3fffffff
// 00446731  2bd8                 sub ebx, eax
// 00446733  3bd9                 cmp ebx, ecx
// 00446735  730c                 jae 0x446743
// 00446737  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0044673e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00446741  eb05                 jmp 0x446748
// 00446743  03c8                 add ecx, eax
// 00446745  894dec               mov dword ptr [ebp - 0x14], ecx
// 00446748  3bca                 cmp ecx, edx
// 0044674a  7305                 jae 0x446751
// 0044674c  8955ec               mov dword ptr [ebp - 0x14], edx
// 0044674f  8bca                 mov ecx, edx
// 00446751  6a00                 push 0
// 00446753  51                   push ecx
// 00446754  e8b7eb4800           call 0x8d5310
// 00446759  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0044675c  2b5e0c               sub ebx, dword ptr [esi + 0xc]
// 0044675f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00446762  83c408               add esp, 8
// 00446765  51                   push ecx
// 00446766  c1fb02               sar ebx, 2
// 00446769  57                   push edi
// 0044676a  8d1498               lea edx, [eax + ebx*4]
// 0044676d  52                   push edx
// 0044676e  8bce                 mov ecx, esi
// 00446770  894510               mov dword ptr [ebp + 0x10], eax
// 00446773  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044677a  e811082c00           call 0x706f90
// 0044677f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00446782  c6451400             mov byte ptr [ebp + 0x14], 0
// 00446786  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00446789  52                   push edx
// 0044678a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044678d  52                   push edx
// 0044678e  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00446791  8d4e08               lea ecx, [esi + 8]
// 00446794  51                   push ecx
// 00446795  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00446798  51                   push ecx
// 00446799  52                   push edx
// 0044679a  50                   push eax
// 0044679b  e8b0f0ffff           call 0x445850
// 004467a0  8b4610               mov eax, dword ptr [esi + 0x10]
// 004467a3  83c418               add esp, 0x18
// 004467a6  c6451400             mov byte ptr [ebp + 0x14], 0
// 004467aa  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004467ad  52                   push edx
// 004467ae  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004467b1  52                   push edx
// 004467b2  8d0c3b               lea ecx, [ebx + edi]
// 004467b5  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004467b8  8d5608               lea edx, [esi + 8]
// 004467bb  52                   push edx
// 004467bc  8d0c8b               lea ecx, [ebx + ecx*4]
// 004467bf  51                   push ecx
// 004467c0  50                   push eax
// 004467c1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004467c4  50                   push eax
// 004467c5  e886f0ffff           call 0x445850
// 004467ca  8b460c               mov eax, dword ptr [esi + 0xc]
// 004467cd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004467d0  2bc8                 sub ecx, eax
// 004467d2  c1f902               sar ecx, 2
// 004467d5  83c418               add esp, 0x18
// 004467d8  03f9                 add edi, ecx
// 004467da  85c0                 test eax, eax
// 004467dc  7409                 je 0x4467e7
// 004467de  50                   push eax
// 004467df  e8b6113600           call 0x7a799a
// 004467e4  83c404               add esp, 4
// 004467e7  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004467ea  8d0493               lea eax, [ebx + edx*4]
// 004467ed  8d0cbb               lea ecx, [ebx + edi*4]
// 004467f0  894614               mov dword ptr [esi + 0x14], eax
// 004467f3  894e10               mov dword ptr [esi + 0x10], ecx
// 004467f6  895e0c               mov dword ptr [esi + 0xc], ebx
// 004467f9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004467fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00446803  5f                   pop edi
// 00446804  5e                   pop esi
// 00446805  5b                   pop ebx
// 00446806  8be5                 mov esp, ebp
// 00446808  5d                   pop ebp
// 00446809  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
