// roc 2008-06 00561490  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00561490
//
// 00561490  55                   push ebp
// 00561491  8bec                 mov ebp, esp
// 00561493  6aff                 push -1
// 00561495  68e1ed7c00           push 0x7cede1
// 0056149a  64a100000000         mov eax, dword ptr fs:[0]
// 005614a0  50                   push eax
// 005614a1  64892500000000       mov dword ptr fs:[0], esp
// 005614a8  83ec08               sub esp, 8
// 005614ab  53                   push ebx
// 005614ac  56                   push esi
// 005614ad  57                   push edi
// 005614ae  8965f0               mov dword ptr [ebp - 0x10], esp
// 005614b1  6a40                 push 0x40
// 005614b3  e868f41300           call 0x6a0920
// 005614b8  8bf0                 mov esi, eax
// 005614ba  83c404               add esp, 4
// 005614bd  8975ec               mov dword ptr [ebp - 0x14], esi
// 005614c0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005614c7  85f6                 test esi, esi
// 005614c9  7405                 je 0x5614d0
// 005614cb  8b4508               mov eax, dword ptr [ebp + 8]
// 005614ce  8906                 mov dword ptr [esi], eax
// 005614d0  8d4604               lea eax, [esi + 4]
// 005614d3  85c0                 test eax, eax
// 005614d5  7405                 je 0x5614dc
// 005614d7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005614da  8908                 mov dword ptr [eax], ecx
// 005614dc  8d4e08               lea ecx, [esi + 8]
// 005614df  894d08               mov dword ptr [ebp + 8], ecx
// 005614e2  894d0c               mov dword ptr [ebp + 0xc], ecx
// 005614e5  c645fc01             mov byte ptr [ebp - 4], 1
// 005614e9  85c9                 test ecx, ecx
// 005614eb  7409                 je 0x5614f6
// 005614ed  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005614f0  52                   push edx
// 005614f1  e8aaf9ffff           call 0x560ea0
// 005614f6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005614f9  5f                   pop edi
// 005614fa  8bc6                 mov eax, esi
// 005614fc  5e                   pop esi
// 005614fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00561504  5b                   pop ebx
// 00561505  8be5                 mov esp, ebp
// 00561507  5d                   pop ebp
// 00561508  c20c00               ret 0xc
// library ogre-1.7.0/OgreScriptTranslator.cpp (function ?_Buynode@?$list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@2@PAU342@0ABU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
