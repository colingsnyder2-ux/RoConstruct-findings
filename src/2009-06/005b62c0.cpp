// roc 2009-06 005b62c0  unit: seg_005b0000  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b62c0
//
// 005b62c0  55                   push ebp
// 005b62c1  8bec                 mov ebp, esp
// 005b62c3  83ec08               sub esp, 8
// 005b62c6  56                   push esi
// 005b62c7  894df8               mov dword ptr [ebp - 8], ecx
// 005b62ca  8b4508               mov eax, dword ptr [ebp + 8]
// 005b62cd  50                   push eax
// 005b62ce  e89db70000           call 0x5c1a70
// 005b62d3  83c404               add esp, 4
// 005b62d6  8b08                 mov ecx, dword ptr [eax]
// 005b62d8  894dfc               mov dword ptr [ebp - 4], ecx
// 005b62db  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b62de  52                   push edx
// 005b62df  e86cb70000           call 0x5c1a50
// 005b62e4  83c404               add esp, 4
// 005b62e7  8bf0                 mov esi, eax
// 005b62e9  8b4508               mov eax, dword ptr [ebp + 8]
// 005b62ec  50                   push eax
// 005b62ed  e87eb70000           call 0x5c1a70
// 005b62f2  83c404               add esp, 4
// 005b62f5  8b0e                 mov ecx, dword ptr [esi]
// 005b62f7  8908                 mov dword ptr [eax], ecx
// 005b62f9  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b62fc  52                   push edx
// 005b62fd  e84eb70000           call 0x5c1a50
// 005b6302  83c404               add esp, 4
// 005b6305  8b00                 mov eax, dword ptr [eax]
// 005b6307  50                   push eax
// 005b6308  e8d3f0ffff           call 0x5b53e0
// 005b630d  83c404               add esp, 4
// 005b6310  0fbe08               movsx ecx, byte ptr [eax]
// 005b6313  85c9                 test ecx, ecx
// 005b6315  751c                 jne 0x5b6333
// 005b6317  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b631a  52                   push edx
// 005b631b  e830b70000           call 0x5c1a50
// 005b6320  83c404               add esp, 4
// 005b6323  8b00                 mov eax, dword ptr [eax]
// 005b6325  50                   push eax
// 005b6326  e835b70000           call 0x5c1a60
// 005b632b  83c404               add esp, 4
// 005b632e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b6331  8908                 mov dword ptr [eax], ecx
// 005b6333  8b5508               mov edx, dword ptr [ebp + 8]
// 005b6336  52                   push edx
// 005b6337  e824b70000           call 0x5c1a60
// 005b633c  83c404               add esp, 4
// 005b633f  8bf0                 mov esi, eax
// 005b6341  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b6344  50                   push eax
// 005b6345  e816b70000           call 0x5c1a60
// 005b634a  83c404               add esp, 4
// 005b634d  8b0e                 mov ecx, dword ptr [esi]
// 005b634f  8908                 mov dword ptr [eax], ecx
// 005b6351  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b6354  e847ad0000           call 0x5c10a0
// 005b6359  8b5508               mov edx, dword ptr [ebp + 8]
// 005b635c  3b10                 cmp edx, dword ptr [eax]
// 005b635e  750f                 jne 0x5b636f
// 005b6360  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b6363  e838ad0000           call 0x5c10a0
// 005b6368  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b636b  8908                 mov dword ptr [eax], ecx
// 005b636d  eb58                 jmp 0x5b63c7
// 005b636f  8b5508               mov edx, dword ptr [ebp + 8]
// 005b6372  52                   push edx
// 005b6373  e8e8b60000           call 0x5c1a60
// 005b6378  83c404               add esp, 4
// 005b637b  8b00                 mov eax, dword ptr [eax]
// 005b637d  50                   push eax
// 005b637e  e8cdb60000           call 0x5c1a50
// 005b6383  83c404               add esp, 4
// 005b6386  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b6389  3b08                 cmp ecx, dword ptr [eax]
// 005b638b  751e                 jne 0x5b63ab
// 005b638d  8b5508               mov edx, dword ptr [ebp + 8]
// 005b6390  52                   push edx
// 005b6391  e8cab60000           call 0x5c1a60
// 005b6396  83c404               add esp, 4
// 005b6399  8b00                 mov eax, dword ptr [eax]
// 005b639b  50                   push eax
// 005b639c  e8afb60000           call 0x5c1a50
// 005b63a1  83c404               add esp, 4
// 005b63a4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b63a7  8908                 mov dword ptr [eax], ecx
// 005b63a9  eb1c                 jmp 0x5b63c7
// 005b63ab  8b5508               mov edx, dword ptr [ebp + 8]
// 005b63ae  52                   push edx
// 005b63af  e8acb60000           call 0x5c1a60
// 005b63b4  83c404               add esp, 4
// 005b63b7  8b00                 mov eax, dword ptr [eax]
// 005b63b9  50                   push eax
// 005b63ba  e8b1b60000           call 0x5c1a70
// 005b63bf  83c404               add esp, 4
// 005b63c2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b63c5  8908                 mov dword ptr [eax], ecx
// 005b63c7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b63ca  52                   push edx
// 005b63cb  e880b60000           call 0x5c1a50
// 005b63d0  83c404               add esp, 4
// 005b63d3  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b63d6  8908                 mov dword ptr [eax], ecx
// 005b63d8  8b5508               mov edx, dword ptr [ebp + 8]
// 005b63db  52                   push edx
// 005b63dc  e87fb60000           call 0x5c1a60
// 005b63e1  83c404               add esp, 4
// 005b63e4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b63e7  8908                 mov dword ptr [eax], ecx
// 005b63e9  5e                   pop esi
// 005b63ea  8be5                 mov esp, ebp
// 005b63ec  5d                   pop ebp
// 005b63ed  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp