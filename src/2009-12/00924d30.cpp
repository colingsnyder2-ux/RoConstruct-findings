// roc 2009-12 00924d30  unit: seg_00920000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00924d30
//
// 00924d30  55                   push ebp
// 00924d31  8bec                 mov ebp, esp
// 00924d33  6aff                 push -1
// 00924d35  68687c9600           push 0x967c68
// 00924d3a  64a100000000         mov eax, dword ptr fs:[0]
// 00924d40  50                   push eax
// 00924d41  64892500000000       mov dword ptr fs:[0], esp
// 00924d48  83ec30               sub esp, 0x30
// 00924d4b  894dd0               mov dword ptr [ebp - 0x30], ecx
// 00924d4e  8d45d6               lea eax, [ebp - 0x2a]
// 00924d51  8945ec               mov dword ptr [ebp - 0x14], eax
// 00924d54  8d4dd7               lea ecx, [ebp - 0x29]
// 00924d57  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00924d5a  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00924d61  6a00                 push 0
// 00924d63  6a01                 push 1
// 00924d65  e8d6bbb0ff           call 0x430940
// 00924d6a  83c408               add esp, 8
// 00924d6d  8945d8               mov dword ptr [ebp - 0x28], eax
// 00924d70  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 00924d73  8955dc               mov dword ptr [ebp - 0x24], edx
// 00924d76  837ddc00             cmp dword ptr [ebp - 0x24], 0
// 00924d7a  7410                 je 0x924d8c
// 00924d7c  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 00924d7f  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00924d82  8908                 mov dword ptr [eax], ecx
// 00924d84  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00924d87  8955cc               mov dword ptr [ebp - 0x34], edx
// 00924d8a  eb07                 jmp 0x924d93
// 00924d8c  c745cc00000000       mov dword ptr [ebp - 0x34], 0
// 00924d93  8b45cc               mov eax, dword ptr [ebp - 0x34]
// 00924d96  8945e0               mov dword ptr [ebp - 0x20], eax
// 00924d99  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00924d9c  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00924d9f  8911                 mov dword ptr [ecx], edx
// 00924da1  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00924da8  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 00924dab  8945c8               mov dword ptr [ebp - 0x38], eax
// 00924dae  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00924db1  894dc4               mov dword ptr [ebp - 0x3c], ecx
// 00924db4  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 00924db7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00924dba  64890d00000000       mov dword ptr fs:[0], ecx
// 00924dc1  8be5                 mov esp, ebp
// 00924dc3  5d                   pop ebp
// 00924dc4  c20400               ret 4
// copied from an identical function in another client (function ??0?$_List_ptr@PAVListener@Resource@Ogre@@V?$allocator@PAVListener@Resource@Ogre@@@std@@@std@@IAE@V?$allocator@PAVListener@Resource@Ogre@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp