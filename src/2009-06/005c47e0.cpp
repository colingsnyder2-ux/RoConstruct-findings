// roc 2009-06 005c47e0  unit: seg_005c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c47e0
//
// 005c47e0  55                   push ebp
// 005c47e1  8bec                 mov ebp, esp
// 005c47e3  51                   push ecx
// 005c47e4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c47e7  8b4508               mov eax, dword ptr [ebp + 8]
// 005c47ea  8b08                 mov ecx, dword ptr [eax]
// 005c47ec  8b5004               mov edx, dword ptr [eax + 4]
// 005c47ef  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c47f2  8908                 mov dword ptr [eax], ecx
// 005c47f4  895004               mov dword ptr [eax + 4], edx
// 005c47f7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c47fa  8b11                 mov edx, dword ptr [ecx]
// 005c47fc  8b4104               mov eax, dword ptr [ecx + 4]
// 005c47ff  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c4802  895108               mov dword ptr [ecx + 8], edx
// 005c4805  89410c               mov dword ptr [ecx + 0xc], eax
// 005c4808  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c480b  8be5                 mov esp, ebp
// 005c480d  5d                   pop ebp
// 005c480e  c20800               ret 8
// copied from an identical function in another client (function ??0?$pair@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@V123@@std@@QAE@ABViterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@1@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp