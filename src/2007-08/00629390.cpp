// from server: 100% by auto
// roc 2007-08 00629390  unit: RBX::AssemblyStage  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629390
//
// 00629390  53                   push ebx
// 00629391  56                   push esi
// 00629392  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00629396  57                   push edi
// 00629397  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0062939b  57                   push edi
// 0062939c  56                   push esi
// 0062939d  e85efcffff           call 0x629000
// 006293a2  83c408               add esp, 8
// 006293a5  833f0c               cmp dword ptr [edi], 0xc
// 006293a8  7516                 jne 0x6293c0
// 006293aa  8b4708               mov eax, dword ptr [edi + 8]
// 006293ad  a900010000           test eax, 0x100
// 006293b2  750c                 jne 0x6293c0
// 006293b4  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006293b8  3bc1                 cmp eax, ecx
// 006293ba  7c04                 jl 0x6293c0
// 006293bc  834624ff             add dword ptr [esi + 0x24], -1
// 006293c0  8b16                 mov edx, dword ptr [esi]
// 006293c2  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 006293c5  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006293c9  83c301               add ebx, 1
// 006293cc  3bd8                 cmp ebx, eax
// 006293ce  7e1e                 jle 0x6293ee
// 006293d0  81fbfa000000         cmp ebx, 0xfa
// 006293d6  7c11                 jl 0x6293e9
// 006293d8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006293db  68fc4b7c00           push 0x7c4bfc
// 006293e0  51                   push ecx
// 006293e1  e8dae1feff           call 0x6175c0
// 006293e6  83c408               add esp, 8
// 006293e9  8b16                 mov edx, dword ptr [esi]
// 006293eb  885a4b               mov byte ptr [edx + 0x4b], bl
// 006293ee  83462401             add dword ptr [esi + 0x24], 1
// 006293f2  8b4624               mov eax, dword ptr [esi + 0x24]
// 006293f5  83c0ff               add eax, -1
// 006293f8  50                   push eax
// 006293f9  8bc7                 mov eax, edi
// 006293fb  8bce                 mov ecx, esi
// 006293fd  e86efeffff           call 0x629270
// 00629402  83c404               add esp, 4
// 00629405  5f                   pop edi
// 00629406  5e                   pop esi
// 00629407  5b                   pop ebx
// 00629408  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_exp2nextreg)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
