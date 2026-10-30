// roc 2009-12 0047d110  unit: RBX::LDraw2Lua::LDrawParser  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d110
//
// 0047d110  6aff                 push -1
// 0047d112  6864e99200           push 0x92e964
// 0047d117  64a100000000         mov eax, dword ptr fs:[0]
// 0047d11d  50                   push eax
// 0047d11e  64892500000000       mov dword ptr fs:[0], esp
// 0047d125  83ec08               sub esp, 8
// 0047d128  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047d12c  53                   push ebx
// 0047d12d  56                   push esi
// 0047d12e  57                   push edi
// 0047d12f  8bf9                 mov edi, ecx
// 0047d131  50                   push eax
// 0047d132  8d4f04               lea ecx, [edi + 4]
// 0047d135  897c2414             mov dword ptr [esp + 0x14], edi
// 0047d139  c70744209b00         mov dword ptr [edi], 0x9b2044
// 0047d13f  ff15f4b69800         call dword ptr [0x98b6f4]
// 0047d145  33db                 xor ebx, ebx
// 0047d147  6a04                 push 4
// 0047d149  895c2420             mov dword ptr [esp + 0x20], ebx
// 0047d14d  8d7720               lea esi, [edi + 0x20]
// 0047d150  e80b673700           call 0x7f3860
// 0047d155  83c404               add esp, 4
// 0047d158  3bc3                 cmp eax, ebx
// 0047d15a  7404                 je 0x47d160
// 0047d15c  8930                 mov dword ptr [eax], esi
// 0047d15e  eb02                 jmp 0x47d162
// 0047d160  33c0                 xor eax, eax
// 0047d162  8906                 mov dword ptr [esi], eax
// 0047d164  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047d168  895e0c               mov dword ptr [esi + 0xc], ebx
// 0047d16b  895e10               mov dword ptr [esi + 0x10], ebx
// 0047d16e  895e14               mov dword ptr [esi + 0x14], ebx
// 0047d171  8bc7                 mov eax, edi
// 0047d173  5f                   pop edi
// 0047d174  5e                   pop esi
// 0047d175  5b                   pop ebx
// 0047d176  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d17d  83c414               add esp, 0x14
// 0047d180  c20400               ret 4
// copied from an identical function in another client (function ??0RenderQueueInvocationSequence@Ogre@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreRenderQueueInvocation.cpp