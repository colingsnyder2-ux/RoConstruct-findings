// roc 2009-06 005c5a60  unit: seg_005c0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5a60
//
// 005c5a60  55                   push ebp
// 005c5a61  8bec                 mov ebp, esp
// 005c5a63  51                   push ecx
// 005c5a64  8d4508               lea eax, [ebp + 8]
// 005c5a67  50                   push eax
// 005c5a68  8d4dff               lea ecx, [ebp - 1]
// 005c5a6b  51                   push ecx
// 005c5a6c  e8ef220000           call 0x5c7d60
// 005c5a71  83c408               add esp, 8
// 005c5a74  0fb610               movzx edx, byte ptr [eax]
// 005c5a77  52                   push edx
// 005c5a78  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005c5a7b  50                   push eax
// 005c5a7c  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005c5a7f  51                   push ecx
// 005c5a80  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c5a83  52                   push edx
// 005c5a84  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c5a87  50                   push eax
// 005c5a88  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c5a8b  51                   push ecx
// 005c5a8c  e83f230000           call 0x5c7dd0
// 005c5a91  83c418               add esp, 0x18
// 005c5a94  8be5                 mov esp, ebp
// 005c5a96  5d                   pop ebp
// 005c5a97  c3                   ret 
// copied from an identical function in another client (function ??$_Distance@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@0@0AAI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp