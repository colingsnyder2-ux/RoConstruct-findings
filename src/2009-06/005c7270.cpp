// roc 2009-06 005c7270  unit: seg_005c0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7270
//
// 005c7270  55                   push ebp
// 005c7271  8bec                 mov ebp, esp
// 005c7273  51                   push ecx
// 005c7274  894dfc               mov dword ptr [ebp - 4], ecx
// 005c7277  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c727a  50                   push eax
// 005c727b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c727e  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c7281  52                   push edx
// 005c7282  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c7285  e8a6060000           call 0x5c7930
// 005c728a  8b4508               mov eax, dword ptr [ebp + 8]
// 005c728d  8be5                 mov esp, ebp
// 005c728f  5d                   pop ebp
// 005c7290  c20400               ret 4
// copied from an identical function in another client (function ?end@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp