// roc 2009-06 005b61c0  unit: seg_005b0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b61c0
//
// 005b61c0  55                   push ebp
// 005b61c1  8bec                 mov ebp, esp
// 005b61c3  51                   push ecx
// 005b61c4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b61c7  8b4508               mov eax, dword ptr [ebp + 8]
// 005b61ca  8b08                 mov ecx, dword ptr [eax]
// 005b61cc  8b5004               mov edx, dword ptr [eax + 4]
// 005b61cf  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b61d2  8908                 mov dword ptr [eax], ecx
// 005b61d4  895004               mov dword ptr [eax + 4], edx
// 005b61d7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b61da  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005b61dd  8a02                 mov al, byte ptr [edx]
// 005b61df  884108               mov byte ptr [ecx + 8], al
// 005b61e2  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b61e5  8be5                 mov esp, ebp
// 005b61e7  5d                   pop ebp
// 005b61e8  c20800               ret 8
// copied from an identical function in another client (function ??0?$pair@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@_N@std@@QAE@ABViterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@1@AB_N@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp