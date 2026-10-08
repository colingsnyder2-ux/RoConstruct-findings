// from server: 100% by auto
// roc 2009-06 006e25c0  unit: RBX::ScoreHud  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e25c0
//
// 006e25c0  55                   push ebp
// 006e25c1  8bec                 mov ebp, esp
// 006e25c3  6aff                 push -1
// 006e25c5  68401c8700           push 0x871c40
// 006e25ca  64a100000000         mov eax, dword ptr fs:[0]
// 006e25d0  50                   push eax
// 006e25d1  64892500000000       mov dword ptr fs:[0], esp
// 006e25d8  83ec0c               sub esp, 0xc
// 006e25db  53                   push ebx
// 006e25dc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006e25df  807b2d00             cmp byte ptr [ebx + 0x2d], 0
// 006e25e3  56                   push esi
// 006e25e4  8bf1                 mov esi, ecx
// 006e25e6  8b4618               mov eax, dword ptr [esi + 0x18]
// 006e25e9  57                   push edi
// 006e25ea  8965f0               mov dword ptr [ebp - 0x10], esp
// 006e25ed  8975e8               mov dword ptr [ebp - 0x18], esi
// 006e25f0  8945ec               mov dword ptr [ebp - 0x14], eax
// 006e25f3  7547                 jne 0x6e263c
// 006e25f5  0fb64b2c             movzx ecx, byte ptr [ebx + 0x2c]
// 006e25f9  51                   push ecx
// 006e25fa  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006e25fd  8d530c               lea edx, [ebx + 0xc]
// 006e2600  52                   push edx
// 006e2601  50                   push eax
// 006e2602  51                   push ecx
// 006e2603  50                   push eax
// 006e2604  8bce                 mov ecx, esi
// 006e2606  e80517d9ff           call 0x473d10
// 006e260b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 006e260e  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 006e2612  8bf8                 mov edi, eax
// 006e2614  7403                 je 0x6e2619
// 006e2616  897dec               mov dword ptr [ebp - 0x14], edi
// 006e2619  8b03                 mov eax, dword ptr [ebx]
// 006e261b  57                   push edi
// 006e261c  50                   push eax
// 006e261d  8bce                 mov ecx, esi
// 006e261f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006e2626  e895ffffff           call 0x6e25c0
// 006e262b  8907                 mov dword ptr [edi], eax
// 006e262d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006e2630  57                   push edi
// 006e2631  51                   push ecx
// 006e2632  8bce                 mov ecx, esi
// 006e2634  e887ffffff           call 0x6e25c0
// 006e2639  894708               mov dword ptr [edi + 8], eax
// 006e263c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006e263f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006e2642  5f                   pop edi
// 006e2643  5e                   pop esi
// 006e2644  64890d00000000       mov dword ptr fs:[0], ecx
// 006e264b  5b                   pop ebx
// 006e264c  8be5                 mov esp, ebp
// 006e264e  5d                   pop ebp
// 006e264f  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
