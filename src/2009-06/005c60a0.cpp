// roc 2009-06 005c60a0  unit: seg_005c0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c60a0
//
// 005c60a0  55                   push ebp
// 005c60a1  8bec                 mov ebp, esp
// 005c60a3  51                   push ecx
// 005c60a4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c60a7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c60aa  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c60ad  8b4010               mov eax, dword ptr [eax + 0x10]
// 005c60b0  2b410c               sub eax, dword ptr [ecx + 0xc]
// 005c60b3  c1f802               sar eax, 2
// 005c60b6  8be5                 mov esp, ebp
// 005c60b8  5d                   pop ebp
// 005c60b9  c3                   ret 
// copied from an identical function in another client (function ?size@?$vector@HV?$allocator@H@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp