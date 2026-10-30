// roc 2009-06 005c4870  unit: seg_005c0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4870
//
// 005c4870  55                   push ebp
// 005c4871  8bec                 mov ebp, esp
// 005c4873  83ec08               sub esp, 8
// 005c4876  894df8               mov dword ptr [ebp - 8], ecx
// 005c4879  8b4508               mov eax, dword ptr [ebp + 8]
// 005c487c  8945fc               mov dword ptr [ebp - 4], eax
// 005c487f  eb06                 jmp 0x5c4887
// 005c4881  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c4884  894d08               mov dword ptr [ebp + 8], ecx
// 005c4887  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c488a  52                   push edx
// 005c488b  e8b0d1ffff           call 0x5c1a40
// 005c4890  83c404               add esp, 4
// 005c4893  0fbe00               movsx eax, byte ptr [eax]
// 005c4896  85c0                 test eax, eax
// 005c4898  754a                 jne 0x5c48e4
// 005c489a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c489d  51                   push ecx
// 005c489e  e8cdd1ffff           call 0x5c1a70
// 005c48a3  83c404               add esp, 4
// 005c48a6  8b10                 mov edx, dword ptr [eax]
// 005c48a8  52                   push edx
// 005c48a9  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c48ac  e8bfffffff           call 0x5c4870
// 005c48b1  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c48b4  50                   push eax
// 005c48b5  e896d1ffff           call 0x5c1a50
// 005c48ba  83c404               add esp, 4
// 005c48bd  8b08                 mov ecx, dword ptr [eax]
// 005c48bf  894dfc               mov dword ptr [ebp - 4], ecx
// 005c48c2  8b5508               mov edx, dword ptr [ebp + 8]
// 005c48c5  52                   push edx
// 005c48c6  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c48c9  83c10c               add ecx, 0xc
// 005c48cc  e8ef000000           call 0x5c49c0
// 005c48d1  6a01                 push 1
// 005c48d3  8b4508               mov eax, dword ptr [ebp + 8]
// 005c48d6  50                   push eax
// 005c48d7  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c48da  83c10c               add ecx, 0xc
// 005c48dd  e8be95ffff           call 0x5bdea0
// 005c48e2  eb9d                 jmp 0x5c4881
// 005c48e4  8be5                 mov esp, ebp
// 005c48e6  5d                   pop ebp
// 005c48e7  c20400               ret 4
// copied from an identical function in another client (function ?_Erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp