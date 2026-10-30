// roc 2010-06 0065be00  unit: RBX::VInstance::?$NonFactoryProduct  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065be00
//
// 0065be00  6aff                 push -1
// 0065be02  6889009a00           push 0x9a0089
// 0065be07  64a100000000         mov eax, dword ptr fs:[0]
// 0065be0d  50                   push eax
// 0065be0e  64892500000000       mov dword ptr fs:[0], esp
// 0065be15  51                   push ecx
// 0065be16  56                   push esi
// 0065be17  57                   push edi
// 0065be18  8bf9                 mov edi, ecx
// 0065be1a  8b4714               mov eax, dword ptr [edi + 0x14]
// 0065be1d  8b30                 mov esi, dword ptr [eax]
// 0065be1f  8900                 mov dword ptr [eax], eax
// 0065be21  8b4714               mov eax, dword ptr [edi + 0x14]
// 0065be24  894004               mov dword ptr [eax + 4], eax
// 0065be27  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0065be2e  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0065be31  743e                 je 0x65be71
// 0065be33  53                   push ebx
// 0065be34  55                   push ebp
// 0065be35  8b1e                 mov ebx, dword ptr [esi]
// 0065be37  8d6e08               lea ebp, [esi + 8]
// 0065be3a  896c2410             mov dword ptr [esp + 0x10], ebp
// 0065be3e  8d4d1c               lea ecx, [ebp + 0x1c]
// 0065be41  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0065be49  ff1500a49e00         call dword ptr [0x9ea400]
// 0065be4f  8bcd                 mov ecx, ebp
// 0065be51  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0065be59  ff1500a49e00         call dword ptr [0x9ea400]
// 0065be5f  56                   push esi
// 0065be60  e835bb1400           call 0x7a799a
// 0065be65  83c404               add esp, 4
// 0065be68  8bf3                 mov esi, ebx
// 0065be6a  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 0065be6d  75c6                 jne 0x65be35
// 0065be6f  5d                   pop ebp
// 0065be70  5b                   pop ebx
// 0065be71  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065be75  5f                   pop edi
// 0065be76  5e                   pop esi
// 0065be77  64890d00000000       mov dword ptr fs:[0], ecx
// 0065be7e  83c410               add esp, 0x10
// 0065be81  c3                   ret 
// copied from an identical function in another client (function ?clear@?$list@UProfileInstance@Profiler@Ogre@@V?$allocator@UProfileInstance@Profiler@Ogre@@@std@@@std@@QAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreProfiler.cpp