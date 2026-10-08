// roc 2012-06 007de090  unit: RBX::VInstance::?$NonFactoryProduct  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007de090
//
// 007de090  55                   push ebp
// 007de091  8bec                 mov ebp, esp
// 007de093  6aff                 push -1
// 007de095  68e18bac00           push 0xac8be1
// 007de09a  64a100000000         mov eax, dword ptr fs:[0]
// 007de0a0  50                   push eax
// 007de0a1  64892500000000       mov dword ptr fs:[0], esp
// 007de0a8  83ec08               sub esp, 8
// 007de0ab  53                   push ebx
// 007de0ac  56                   push esi
// 007de0ad  57                   push edi
// 007de0ae  8965f0               mov dword ptr [ebp - 0x10], esp
// 007de0b1  6a6c                 push 0x6c
// 007de0b3  e862401a00           call 0x98211a
// 007de0b8  8bf0                 mov esi, eax
// 007de0ba  83c404               add esp, 4
// 007de0bd  8975ec               mov dword ptr [ebp - 0x14], esi
// 007de0c0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007de0c7  85f6                 test esi, esi
// 007de0c9  7405                 je 0x7de0d0
// 007de0cb  8b4508               mov eax, dword ptr [ebp + 8]
// 007de0ce  8906                 mov dword ptr [esi], eax
// 007de0d0  8d4604               lea eax, [esi + 4]
// 007de0d3  85c0                 test eax, eax
// 007de0d5  7405                 je 0x7de0dc
// 007de0d7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007de0da  8908                 mov dword ptr [eax], ecx
// 007de0dc  8d4e08               lea ecx, [esi + 8]
// 007de0df  894d08               mov dword ptr [ebp + 8], ecx
// 007de0e2  894d0c               mov dword ptr [ebp + 0xc], ecx
// 007de0e5  c645fc01             mov byte ptr [ebp - 4], 1
// 007de0e9  85c9                 test ecx, ecx
// 007de0eb  7409                 je 0x7de0f6
// 007de0ed  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007de0f0  52                   push edx
// 007de0f1  e88af4ffff           call 0x7dd580
// 007de0f6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007de0f9  5f                   pop edi
// 007de0fa  8bc6                 mov eax, esi
// 007de0fc  5e                   pop esi
// 007de0fd  64890d00000000       mov dword ptr fs:[0], ecx
// 007de104  5b                   pop ebx
// 007de105  8be5                 mov esp, ebp
// 007de107  5d                   pop ebp
// 007de108  c20c00               ret 0xc
// library ogre-1.7.0/OgreResourceManager.cpp (function ?_Buynode@?$list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@@std@@@2@@stdext@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@@std@@@2@@stdext@@@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@@std@@@2@@stdext@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@@std@@@2@@stdext@@@std@@@2@@2@PAU342@0ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@@std@@@2@@stdext@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreResourceManager.cpp
