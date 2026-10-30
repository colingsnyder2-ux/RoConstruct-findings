// roc 2010-06 004834b0  unit: RBX::LDraw2Lua::LDrawParser  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004834b0
//
// 004834b0  6aff                 push -1
// 004834b2  68c45a9800           push 0x985ac4
// 004834b7  64a100000000         mov eax, dword ptr fs:[0]
// 004834bd  50                   push eax
// 004834be  64892500000000       mov dword ptr fs:[0], esp
// 004834c5  83ec08               sub esp, 8
// 004834c8  8b442418             mov eax, dword ptr [esp + 0x18]
// 004834cc  53                   push ebx
// 004834cd  56                   push esi
// 004834ce  57                   push edi
// 004834cf  8bf9                 mov edi, ecx
// 004834d1  50                   push eax
// 004834d2  8d4f04               lea ecx, [edi + 4]
// 004834d5  897c2414             mov dword ptr [esp + 0x14], edi
// 004834d9  c7076c31a100         mov dword ptr [edi], 0xa1316c
// 004834df  ff1510a49e00         call dword ptr [0x9ea410]
// 004834e5  33db                 xor ebx, ebx
// 004834e7  6a04                 push 4
// 004834e9  895c2420             mov dword ptr [esp + 0x20], ebx
// 004834ed  8d7720               lea esi, [edi + 0x20]
// 004834f0  e8ab443200           call 0x7a79a0
// 004834f5  83c404               add esp, 4
// 004834f8  3bc3                 cmp eax, ebx
// 004834fa  7404                 je 0x483500
// 004834fc  8930                 mov dword ptr [eax], esi
// 004834fe  eb02                 jmp 0x483502
// 00483500  33c0                 xor eax, eax
// 00483502  8906                 mov dword ptr [esi], eax
// 00483504  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00483508  895e0c               mov dword ptr [esi + 0xc], ebx
// 0048350b  895e10               mov dword ptr [esi + 0x10], ebx
// 0048350e  895e14               mov dword ptr [esi + 0x14], ebx
// 00483511  8bc7                 mov eax, edi
// 00483513  5f                   pop edi
// 00483514  5e                   pop esi
// 00483515  5b                   pop ebx
// 00483516  64890d00000000       mov dword ptr fs:[0], ecx
// 0048351d  83c414               add esp, 0x14
// 00483520  c20400               ret 4
// copied from an identical function in another client (function ??0RenderQueueInvocationSequence@Ogre@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreRenderQueueInvocation.cpp