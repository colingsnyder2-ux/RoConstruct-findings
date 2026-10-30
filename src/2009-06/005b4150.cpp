// roc 2009-06 005b4150  unit: seg_005b0000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4150
//
// 005b4150  55                   push ebp
// 005b4151  8bec                 mov ebp, esp
// 005b4153  51                   push ecx
// 005b4154  894dfc               mov dword ptr [ebp - 4], ecx
// 005b4157  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b415a  83780c00             cmp dword ptr [eax + 0xc], 0
// 005b415e  743f                 je 0x5b419f
// 005b4160  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4163  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005b4166  52                   push edx
// 005b4167  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b416a  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005b416d  51                   push ecx
// 005b416e  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4171  e88a0b0000           call 0x5b4d00
// 005b4176  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b4179  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b417c  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005b417f  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005b4182  8bc1                 mov eax, ecx
// 005b4184  99                   cdq 
// 005b4185  b948000000           mov ecx, 0x48
// 005b418a  f7f9                 idiv ecx
// 005b418c  50                   push eax
// 005b418d  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b4190  8b420c               mov eax, dword ptr [edx + 0xc]
// 005b4193  50                   push eax
// 005b4194  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4197  83c108               add ecx, 8
// 005b419a  e8019d0000           call 0x5bdea0
// 005b419f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b41a2  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 005b41a9  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b41ac  c7421000000000       mov dword ptr [edx + 0x10], 0
// 005b41b3  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b41b6  c7401400000000       mov dword ptr [eax + 0x14], 0
// 005b41bd  8be5                 mov esp, ebp
// 005b41bf  5d                   pop ebp
// 005b41c0  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$vector@VFace@?$ConvexClipper@N@Wml@@V?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp