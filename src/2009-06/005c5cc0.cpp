// roc 2009-06 005c5cc0  unit: seg_005c0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5cc0
//
// 005c5cc0  55                   push ebp
// 005c5cc1  8bec                 mov ebp, esp
// 005c5cc3  83ec0c               sub esp, 0xc
// 005c5cc6  8b4508               mov eax, dword ptr [ebp + 8]
// 005c5cc9  8945fc               mov dword ptr [ebp - 4], eax
// 005c5ccc  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c5ccf  51                   push ecx
// 005c5cd0  6a04                 push 4
// 005c5cd2  e829b3e3ff           call 0x401000
// 005c5cd7  83c408               add esp, 8
// 005c5cda  8945f8               mov dword ptr [ebp - 8], eax
// 005c5cdd  837df800             cmp dword ptr [ebp - 8], 0
// 005c5ce1  7412                 je 0x5c5cf5
// 005c5ce3  8b55f8               mov edx, dword ptr [ebp - 8]
// 005c5ce6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c5ce9  8b08                 mov ecx, dword ptr [eax]
// 005c5ceb  890a                 mov dword ptr [edx], ecx
// 005c5ced  8b55f8               mov edx, dword ptr [ebp - 8]
// 005c5cf0  8955f4               mov dword ptr [ebp - 0xc], edx
// 005c5cf3  eb07                 jmp 0x5c5cfc
// 005c5cf5  c745f400000000       mov dword ptr [ebp - 0xc], 0
// 005c5cfc  8be5                 mov esp, ebp
// 005c5cfe  5d                   pop ebp
// 005c5cff  c3                   ret 
// copied from an identical function in another client (function ??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@0@ABQAU120@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp