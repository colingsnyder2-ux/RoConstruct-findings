// roc 2009-06 005b6090  unit: seg_005b0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6090
//
// 005b6090  55                   push ebp
// 005b6091  8bec                 mov ebp, esp
// 005b6093  83ec08               sub esp, 8
// 005b6096  894dfc               mov dword ptr [ebp - 4], ecx
// 005b6099  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b609c  83780c00             cmp dword ptr [eax + 0xc], 0
// 005b60a0  7509                 jne 0x5b60ab
// 005b60a2  c745f800000000       mov dword ptr [ebp - 8], 0
// 005b60a9  eb17                 jmp 0x5b60c2
// 005b60ab  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b60ae  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b60b1  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005b60b4  2b420c               sub eax, dword ptr [edx + 0xc]
// 005b60b7  99                   cdq 
// 005b60b8  b948000000           mov ecx, 0x48
// 005b60bd  f7f9                 idiv ecx
// 005b60bf  8945f8               mov dword ptr [ebp - 8], eax
// 005b60c2  8b45f8               mov eax, dword ptr [ebp - 8]
// 005b60c5  8be5                 mov esp, ebp
// 005b60c7  5d                   pop ebp
// 005b60c8  c3                   ret 
// copied from an identical function in another client (function ?capacity@?$vector@VFace@?$ConvexClipper@N@Wml@@V?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp