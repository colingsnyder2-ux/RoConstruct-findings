// roc 2009-06 005df020  unit: RBX::VContentProvider::?$BoundFuncDesc  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005df020
//
// 005df020  55                   push ebp
// 005df021  8bec                 mov ebp, esp
// 005df023  6aff                 push -1
// 005df025  68b1398600           push 0x8639b1
// 005df02a  64a100000000         mov eax, dword ptr fs:[0]
// 005df030  50                   push eax
// 005df031  64892500000000       mov dword ptr fs:[0], esp
// 005df038  83ec08               sub esp, 8
// 005df03b  53                   push ebx
// 005df03c  56                   push esi
// 005df03d  57                   push edi
// 005df03e  8965f0               mov dword ptr [ebp - 0x10], esp
// 005df041  6a40                 push 0x40
// 005df043  e8f0991300           call 0x718a38
// 005df048  8bf0                 mov esi, eax
// 005df04a  83c404               add esp, 4
// 005df04d  8975ec               mov dword ptr [ebp - 0x14], esi
// 005df050  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005df057  85f6                 test esi, esi
// 005df059  7405                 je 0x5df060
// 005df05b  8b4508               mov eax, dword ptr [ebp + 8]
// 005df05e  8906                 mov dword ptr [esi], eax
// 005df060  8d4604               lea eax, [esi + 4]
// 005df063  85c0                 test eax, eax
// 005df065  7405                 je 0x5df06c
// 005df067  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005df06a  8908                 mov dword ptr [eax], ecx
// 005df06c  8d4e08               lea ecx, [esi + 8]
// 005df06f  894d08               mov dword ptr [ebp + 8], ecx
// 005df072  894d0c               mov dword ptr [ebp + 0xc], ecx
// 005df075  c645fc01             mov byte ptr [ebp - 4], 1
// 005df079  85c9                 test ecx, ecx
// 005df07b  7409                 je 0x5df086
// 005df07d  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005df080  52                   push edx
// 005df081  e8baf2ffff           call 0x5de340
// 005df086  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005df089  5f                   pop edi
// 005df08a  8bc6                 mov eax, esi
// 005df08c  5e                   pop esi
// 005df08d  64890d00000000       mov dword ptr fs:[0], ecx
// 005df094  5b                   pop ebx
// 005df095  8be5                 mov esp, ebp
// 005df097  5d                   pop ebp
// 005df098  c20c00               ret 0xc
// library ogre-1.7.0/OgreScriptTranslator.cpp (function ?_Buynode@?$list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@2@PAU342@0ABU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
