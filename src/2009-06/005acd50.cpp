// roc 2009-06 005acd50  unit: RBX::Mesh  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005acd50
//
// 005acd50  55                   push ebp
// 005acd51  8bec                 mov ebp, esp
// 005acd53  51                   push ecx
// 005acd54  894dfc               mov dword ptr [ebp - 4], ecx
// 005acd57  8b45fc               mov eax, dword ptr [ebp - 4]
// 005acd5a  50                   push eax
// 005acd5b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005acd5e  51                   push ecx
// 005acd5f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005acd62  e8a90a0000           call 0x5ad810
// 005acd67  50                   push eax
// 005acd68  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005acd6b  e880470100           call 0x5c14f0
// 005acd70  8b4508               mov eax, dword ptr [ebp + 8]
// 005acd73  8be5                 mov esp, ebp
// 005acd75  5d                   pop ebp
// 005acd76  c20800               ret 8
// copied from an identical function in another client (function ?lower_bound@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@ABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp