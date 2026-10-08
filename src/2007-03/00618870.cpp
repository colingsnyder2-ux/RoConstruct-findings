// roc 2007-03 00618870  unit: seg_00610000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00618870
//
// 00618870  53                   push ebx
// 00618871  56                   push esi
// 00618872  57                   push edi
// 00618873  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00618877  807f0e00             cmp byte ptr [edi + 0xe], 0
// 0061887b  8bd9                 mov ebx, ecx
// 0061887d  8bf7                 mov esi, edi
// 0061887f  751e                 jne 0x61889f
// 00618881  8b4608               mov eax, dword ptr [esi + 8]
// 00618884  50                   push eax
// 00618885  8bcb                 mov ecx, ebx
// 00618887  e8e4ffffff           call 0x618870
// 0061888c  8b36                 mov esi, dword ptr [esi]
// 0061888e  57                   push edi
// 0061888f  e85c580000           call 0x61e0f0
// 00618894  83c404               add esp, 4
// 00618897  807e0e00             cmp byte ptr [esi + 0xe], 0
// 0061889b  8bfe                 mov edi, esi
// 0061889d  74e2                 je 0x618881
// 0061889f  5f                   pop edi
// 006188a0  5e                   pop esi
// 006188a1  5b                   pop ebx
// 006188a2  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
