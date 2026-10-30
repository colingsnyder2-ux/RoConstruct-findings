// roc 2009-06 005ae770  unit: RBX::Mesh  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ae770
//
// 005ae770  55                   push ebp
// 005ae771  8bec                 mov ebp, esp
// 005ae773  83ec08               sub esp, 8
// 005ae776  894df8               mov dword ptr [ebp - 8], ecx
// 005ae779  8b4508               mov eax, dword ptr [ebp + 8]
// 005ae77c  8945fc               mov dword ptr [ebp - 4], eax
// 005ae77f  eb06                 jmp 0x5ae787
// 005ae781  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae784  894d08               mov dword ptr [ebp + 8], ecx
// 005ae787  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ae78a  52                   push edx
// 005ae78b  e870e9ffff           call 0x5ad100
// 005ae790  83c404               add esp, 4
// 005ae793  0fbe00               movsx eax, byte ptr [eax]
// 005ae796  85c0                 test eax, eax
// 005ae798  754a                 jne 0x5ae7e4
// 005ae79a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae79d  51                   push ecx
// 005ae79e  e8cd320100           call 0x5c1a70
// 005ae7a3  83c404               add esp, 4
// 005ae7a6  8b10                 mov edx, dword ptr [eax]
// 005ae7a8  52                   push edx
// 005ae7a9  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005ae7ac  e8bfffffff           call 0x5ae770
// 005ae7b1  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ae7b4  50                   push eax
// 005ae7b5  e896320100           call 0x5c1a50
// 005ae7ba  83c404               add esp, 4
// 005ae7bd  8b08                 mov ecx, dword ptr [eax]
// 005ae7bf  894dfc               mov dword ptr [ebp - 4], ecx
// 005ae7c2  8b5508               mov edx, dword ptr [ebp + 8]
// 005ae7c5  52                   push edx
// 005ae7c6  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005ae7c9  83c10c               add ecx, 0xc
// 005ae7cc  e8af5d0000           call 0x5b4580
// 005ae7d1  6a01                 push 1
// 005ae7d3  8b4508               mov eax, dword ptr [ebp + 8]
// 005ae7d6  50                   push eax
// 005ae7d7  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005ae7da  83c10c               add ecx, 0xc
// 005ae7dd  e8bef60000           call 0x5bdea0
// 005ae7e2  eb9d                 jmp 0x5ae781
// 005ae7e4  8be5                 mov esp, ebp
// 005ae7e6  5d                   pop ebp
// 005ae7e7  c20400               ret 4
// copied from an identical function in another client (function ?_Erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp