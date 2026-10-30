// roc 2009-06 005b6240  unit: seg_005b0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6240
//
// 005b6240  55                   push ebp
// 005b6241  8bec                 mov ebp, esp
// 005b6243  83ec08               sub esp, 8
// 005b6246  894df8               mov dword ptr [ebp - 8], ecx
// 005b6249  8b4508               mov eax, dword ptr [ebp + 8]
// 005b624c  8945fc               mov dword ptr [ebp - 4], eax
// 005b624f  eb06                 jmp 0x5b6257
// 005b6251  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6254  894d08               mov dword ptr [ebp + 8], ecx
// 005b6257  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b625a  52                   push edx
// 005b625b  e880f1ffff           call 0x5b53e0
// 005b6260  83c404               add esp, 4
// 005b6263  0fbe00               movsx eax, byte ptr [eax]
// 005b6266  85c0                 test eax, eax
// 005b6268  754a                 jne 0x5b62b4
// 005b626a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b626d  51                   push ecx
// 005b626e  e8fdb70000           call 0x5c1a70
// 005b6273  83c404               add esp, 4
// 005b6276  8b10                 mov edx, dword ptr [eax]
// 005b6278  52                   push edx
// 005b6279  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b627c  e8bfffffff           call 0x5b6240
// 005b6281  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b6284  50                   push eax
// 005b6285  e8c6b70000           call 0x5c1a50
// 005b628a  83c404               add esp, 4
// 005b628d  8b08                 mov ecx, dword ptr [eax]
// 005b628f  894dfc               mov dword ptr [ebp - 4], ecx
// 005b6292  8b5508               mov edx, dword ptr [ebp + 8]
// 005b6295  52                   push edx
// 005b6296  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b6299  83c10c               add ecx, 0xc
// 005b629c  e81f030000           call 0x5b65c0
// 005b62a1  6a01                 push 1
// 005b62a3  8b4508               mov eax, dword ptr [ebp + 8]
// 005b62a6  50                   push eax
// 005b62a7  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b62aa  83c10c               add ecx, 0xc
// 005b62ad  e8ee7b0000           call 0x5bdea0
// 005b62b2  eb9d                 jmp 0x5b6251
// 005b62b4  8be5                 mov esp, ebp
// 005b62b6  5d                   pop ebp
// 005b62b7  c20400               ret 4
// copied from an identical function in another client (function ?_Erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp