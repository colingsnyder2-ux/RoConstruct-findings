// roc 2008-06 00652e90  unit: RBX::ScoreHud  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00652e90
//
// 00652e90  55                   push ebp
// 00652e91  8bec                 mov ebp, esp
// 00652e93  6aff                 push -1
// 00652e95  68c0b87d00           push 0x7db8c0
// 00652e9a  64a100000000         mov eax, dword ptr fs:[0]
// 00652ea0  50                   push eax
// 00652ea1  64892500000000       mov dword ptr fs:[0], esp
// 00652ea8  83ec40               sub esp, 0x40
// 00652eab  53                   push ebx
// 00652eac  56                   push esi
// 00652ead  8bf1                 mov esi, ecx
// 00652eaf  8b460c               mov eax, dword ptr [esi + 0xc]
// 00652eb2  57                   push edi
// 00652eb3  8965f0               mov dword ptr [ebp - 0x10], esp
// 00652eb6  8975e8               mov dword ptr [ebp - 0x18], esi
// 00652eb9  85c0                 test eax, eax
// 00652ebb  7504                 jne 0x652ec1
// 00652ebd  33db                 xor ebx, ebx
// 00652ebf  eb16                 jmp 0x652ed7
// 00652ec1  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00652ec4  2bc8                 sub ecx, eax
// 00652ec6  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00652ecb  f7e9                 imul ecx
// 00652ecd  c1fa02               sar edx, 2
// 00652ed0  8bda                 mov ebx, edx
// 00652ed2  c1eb1f               shr ebx, 0x1f
// 00652ed5  03da                 add ebx, edx
// 00652ed7  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00652eda  85ff                 test edi, edi
// 00652edc  0f8474020000         je 0x653156
// 00652ee2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00652ee5  8bd1                 mov edx, ecx
// 00652ee7  2b560c               sub edx, dword ptr [esi + 0xc]
// 00652eea  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00652eef  f7ea                 imul edx
// 00652ef1  c1fa02               sar edx, 2
// 00652ef4  8bc2                 mov eax, edx
// 00652ef6  c1e81f               shr eax, 0x1f
// 00652ef9  03c2                 add eax, edx
// 00652efb  baaaaaaa0a           mov edx, 0xaaaaaaa
// 00652f00  2bd0                 sub edx, eax
// 00652f02  3bd7                 cmp edx, edi
// 00652f04  7305                 jae 0x652f0b
// 00652f06  e8353ee7ff           call 0x4c6d40
// 00652f0b  03c7                 add eax, edi
// 00652f0d  3bd8                 cmp ebx, eax
// 00652f0f  0f8316010000         jae 0x65302b
// 00652f15  8bcb                 mov ecx, ebx
// 00652f17  d1e9                 shr ecx, 1
// 00652f19  baaaaaaa0a           mov edx, 0xaaaaaaa
// 00652f1e  2bd1                 sub edx, ecx
// 00652f20  3bd3                 cmp edx, ebx
// 00652f22  7304                 jae 0x652f28
// 00652f24  33db                 xor ebx, ebx
// 00652f26  eb02                 jmp 0x652f2a
// 00652f28  03d9                 add ebx, ecx
// 00652f2a  3bd8                 cmp ebx, eax
// 00652f2c  7302                 jae 0x652f30
// 00652f2e  8bd8                 mov ebx, eax
// 00652f30  6a00                 push 0
// 00652f32  53                   push ebx
// 00652f33  e8d8d9fcff           call 0x620910
// 00652f38  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00652f3b  c645e400             mov byte ptr [ebp - 0x1c], 0
// 00652f3f  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 00652f42  52                   push edx
// 00652f43  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00652f46  52                   push edx
// 00652f47  8d5608               lea edx, [esi + 8]
// 00652f4a  52                   push edx
// 00652f4b  50                   push eax
// 00652f4c  8945ec               mov dword ptr [ebp - 0x14], eax
// 00652f4f  894510               mov dword ptr [ebp + 0x10], eax
// 00652f52  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00652f55  50                   push eax
// 00652f56  51                   push ecx
// 00652f57  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00652f5e  e84de9ffff           call 0x6518b0
// 00652f63  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00652f66  83c420               add esp, 0x20
// 00652f69  51                   push ecx
// 00652f6a  57                   push edi
// 00652f6b  50                   push eax
// 00652f6c  8bce                 mov ecx, esi
// 00652f6e  894510               mov dword ptr [ebp + 0x10], eax
// 00652f71  e8cafcffff           call 0x652c40
// 00652f76  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00652f79  c6451400             mov byte ptr [ebp + 0x14], 0
// 00652f7d  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00652f80  52                   push edx
// 00652f81  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00652f84  52                   push edx
// 00652f85  8d5608               lea edx, [esi + 8]
// 00652f88  52                   push edx
// 00652f89  50                   push eax
// 00652f8a  894510               mov dword ptr [ebp + 0x10], eax
// 00652f8d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00652f90  51                   push ecx
// 00652f91  50                   push eax
// 00652f92  e819e9ffff           call 0x6518b0
// 00652f97  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00652f9a  8b5610               mov edx, dword ptr [esi + 0x10]
// 00652f9d  2bd1                 sub edx, ecx
// 00652f9f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00652fa4  f7ea                 imul edx
// 00652fa6  c1fa02               sar edx, 2
// 00652fa9  8bc2                 mov eax, edx
// 00652fab  c1e81f               shr eax, 0x1f
// 00652fae  03c2                 add eax, edx
// 00652fb0  83c418               add esp, 0x18
// 00652fb3  03f8                 add edi, eax
// 00652fb5  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00652fbc  85c9                 test ecx, ecx
// 00652fbe  741e                 je 0x652fde
// 00652fc0  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00652fc3  52                   push edx
// 00652fc4  8d4608               lea eax, [esi + 8]
// 00652fc7  50                   push eax
// 00652fc8  8b4610               mov eax, dword ptr [esi + 0x10]
// 00652fcb  50                   push eax
// 00652fcc  51                   push ecx
// 00652fcd  e86eedffff           call 0x651d40
// 00652fd2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00652fd5  51                   push ecx
// 00652fd6  e89fd60400           call 0x6a067a
// 00652fdb  83c414               add esp, 0x14
// 00652fde  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00652fe1  8d145b               lea edx, [ebx + ebx*2]
// 00652fe4  8d0cd0               lea ecx, [eax + edx*8]
// 00652fe7  8d147f               lea edx, [edi + edi*2]
// 00652fea  894e14               mov dword ptr [esi + 0x14], ecx
// 00652fed  8d0cd0               lea ecx, [eax + edx*8]
// 00652ff0  894e10               mov dword ptr [esi + 0x10], ecx
// 00652ff3  89460c               mov dword ptr [esi + 0xc], eax
// 00652ff6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00652ff9  64890d00000000       mov dword ptr fs:[0], ecx
// 00653000  5f                   pop edi
// 00653001  5e                   pop esi
// 00653002  5b                   pop ebx
// 00653003  8be5                 mov esp, ebp
// 00653005  5d                   pop ebp
// 00653006  c21000               ret 0x10
// library ogre-1.6.4/OgreScriptCompiler.cpp (function ?_Insert_n@?$vector@U?$pair@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$_Iterator@$00@?$list@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$allocator@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@@std@@@std@@@std@@V?$allocator@U?$pair@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$_Iterator@$00@?$list@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$allocator@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@@std@@@std@@@std@@@2@@std@@IAEXV?$_Vector_const_iterator@U?$pair@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$_Iterator@$00@?$list@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$allocator@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@@std@@@std@@@std@@V?$allocator@U?$pair@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$_Iterator@$00@?$list@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$allocator@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@@std@@@std@@@std@@@2@@2@IABU?$pair@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$_Iterator@$00@?$list@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@V?$allocator@V?$SharedPtr@VAbstractNode@Ogre@@@Ogre@@@std@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreScriptCompiler.cpp
