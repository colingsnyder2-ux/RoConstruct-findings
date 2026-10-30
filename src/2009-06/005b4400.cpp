// roc 2009-06 005b4400  unit: seg_005b0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4400
//
// 005b4400  55                   push ebp
// 005b4401  8bec                 mov ebp, esp
// 005b4403  51                   push ecx
// 005b4404  894dfc               mov dword ptr [ebp - 4], ecx
// 005b4407  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b440a  50                   push eax
// 005b440b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b440e  e86dcc0000           call 0x5c1080
// 005b4413  8b08                 mov ecx, dword ptr [eax]
// 005b4415  51                   push ecx
// 005b4416  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b4419  e8d2d00000           call 0x5c14f0
// 005b441e  8b4508               mov eax, dword ptr [ebp + 8]
// 005b4421  8be5                 mov esp, ebp
// 005b4423  5d                   pop ebp
// 005b4424  c20400               ret 4
// copied from an identical function in another client (function ?begin@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp