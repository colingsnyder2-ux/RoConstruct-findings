// roc 2008-06 00652310  unit: RBX::ScoreHud  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00652310
//
// 00652310  55                   push ebp
// 00652311  8bec                 mov ebp, esp
// 00652313  6aff                 push -1
// 00652315  6861b87d00           push 0x7db861
// 0065231a  64a100000000         mov eax, dword ptr fs:[0]
// 00652320  50                   push eax
// 00652321  64892500000000       mov dword ptr fs:[0], esp
// 00652328  83ec0c               sub esp, 0xc
// 0065232b  53                   push ebx
// 0065232c  56                   push esi
// 0065232d  57                   push edi
// 0065232e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00652331  6a34                 push 0x34
// 00652333  e8e8e50400           call 0x6a0920
// 00652338  8bf0                 mov esi, eax
// 0065233a  83c404               add esp, 4
// 0065233d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00652340  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00652347  8975e8               mov dword ptr [ebp - 0x18], esi
// 0065234a  c645fc01             mov byte ptr [ebp - 4], 1
// 0065234e  85f6                 test esi, esi
// 00652350  742f                 je 0x652381
// 00652352  8b4508               mov eax, dword ptr [ebp + 8]
// 00652355  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00652358  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0065235b  8906                 mov dword ptr [esi], eax
// 0065235d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00652360  894e04               mov dword ptr [esi + 4], ecx
// 00652363  895608               mov dword ptr [esi + 8], edx
// 00652366  8b08                 mov ecx, dword ptr [eax]
// 00652368  83c004               add eax, 4
// 0065236b  894e0c               mov dword ptr [esi + 0xc], ecx
// 0065236e  8d4e10               lea ecx, [esi + 0x10]
// 00652371  50                   push eax
// 00652372  e869f2ffff           call 0x6515e0
// 00652377  8a5518               mov dl, byte ptr [ebp + 0x18]
// 0065237a  885630               mov byte ptr [esi + 0x30], dl
// 0065237d  c6463100             mov byte ptr [esi + 0x31], 0
// 00652381  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00652384  5f                   pop edi
// 00652385  8bc6                 mov eax, esi
// 00652387  5e                   pop esi
// 00652388  64890d00000000       mov dword ptr fs:[0], ecx
// 0065238f  5b                   pop ebx
// 00652390  8be5                 mov esp, ebp
// 00652392  5d                   pop ebp
// 00652393  c21400               ret 0x14
// library rbxgs/roc_scorehud_compile_board_59229c00dc6d423a.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@PAVTeam@RBX@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@U?$less@PAVTeam@RBX@@@4@V?$allocator@U?$pair@QAVTeam@RBX@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVTeam@RBX@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@U?$less@PAVTeam@RBX@@@4@V?$allocator@U?$pair@QAVTeam@RBX@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@QAVTeam@RBX@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_scorehud_compile_board_59229c00dc6d423a.cpp
