// roc 2009-06 00473050  unit: RBX::LDraw2Lua::LDrawParser  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00473050
//
// 00473050  6aff                 push -1
// 00473052  68443e8500           push 0x853e44
// 00473057  64a100000000         mov eax, dword ptr fs:[0]
// 0047305d  50                   push eax
// 0047305e  64892500000000       mov dword ptr fs:[0], esp
// 00473065  83ec08               sub esp, 8
// 00473068  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047306c  53                   push ebx
// 0047306d  56                   push esi
// 0047306e  57                   push edi
// 0047306f  8bf9                 mov edi, ecx
// 00473071  50                   push eax
// 00473072  8d4f04               lea ecx, [edi + 4]
// 00473075  897c2414             mov dword ptr [esp + 0x14], edi
// 00473079  c70734db8b00         mov dword ptr [edi], 0x8bdb34
// 0047307f  ff15b4e48900         call dword ptr [0x89e4b4]
// 00473085  33db                 xor ebx, ebx
// 00473087  6a04                 push 4
// 00473089  895c2420             mov dword ptr [esp + 0x20], ebx
// 0047308d  8d7720               lea esi, [edi + 0x20]
// 00473090  e8a3592a00           call 0x718a38
// 00473095  83c404               add esp, 4
// 00473098  3bc3                 cmp eax, ebx
// 0047309a  7404                 je 0x4730a0
// 0047309c  8930                 mov dword ptr [eax], esi
// 0047309e  eb02                 jmp 0x4730a2
// 004730a0  33c0                 xor eax, eax
// 004730a2  8906                 mov dword ptr [esi], eax
// 004730a4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004730a8  895e0c               mov dword ptr [esi + 0xc], ebx
// 004730ab  895e10               mov dword ptr [esi + 0x10], ebx
// 004730ae  895e14               mov dword ptr [esi + 0x14], ebx
// 004730b1  8bc7                 mov eax, edi
// 004730b3  5f                   pop edi
// 004730b4  5e                   pop esi
// 004730b5  5b                   pop ebx
// 004730b6  64890d00000000       mov dword ptr fs:[0], ecx
// 004730bd  83c414               add esp, 0x14
// 004730c0  c20400               ret 4
// copied from an identical function in another client (function ??0RenderQueueInvocationSequence@Ogre@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreRenderQueueInvocation.cpp