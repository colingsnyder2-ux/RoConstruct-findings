// roc 2009-06 005c4970  unit: seg_005c0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4970
//
// 005c4970  55                   push ebp
// 005c4971  8bec                 mov ebp, esp
// 005c4973  83ec0c               sub esp, 0xc
// 005c4976  894df8               mov dword ptr [ebp - 8], ecx
// 005c4979  c745fcffffff0f       mov dword ptr [ebp - 4], 0xfffffff
// 005c4980  837dfc00             cmp dword ptr [ebp - 4], 0
// 005c4984  7608                 jbe 0x5c498e
// 005c4986  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c4989  8945f4               mov dword ptr [ebp - 0xc], eax
// 005c498c  eb07                 jmp 0x5c4995
// 005c498e  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 005c4995  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c4998  8be5                 mov esp, ebp
// 005c499a  5d                   pop ebp
// 005c499b  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$allocator@V?$Plane3@M@Wml@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp