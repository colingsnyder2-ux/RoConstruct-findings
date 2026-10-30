// roc 2009-06 005c43a0  unit: seg_005c0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c43a0
//
// 005c43a0  55                   push ebp
// 005c43a1  8bec                 mov ebp, esp
// 005c43a3  83ec0c               sub esp, 0xc
// 005c43a6  894df4               mov dword ptr [ebp - 0xc], ecx
// 005c43a9  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c43ac  8b08                 mov ecx, dword ptr [eax]
// 005c43ae  8b5004               mov edx, dword ptr [eax + 4]
// 005c43b1  894df8               mov dword ptr [ebp - 8], ecx
// 005c43b4  8955fc               mov dword ptr [ebp - 4], edx
// 005c43b7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c43ba  e8b1ceffff           call 0x5c1270
// 005c43bf  8b4508               mov eax, dword ptr [ebp + 8]
// 005c43c2  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c43c5  8908                 mov dword ptr [eax], ecx
// 005c43c7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c43ca  895004               mov dword ptr [eax + 4], edx
// 005c43cd  8b4508               mov eax, dword ptr [ebp + 8]
// 005c43d0  8be5                 mov esp, ebp
// 005c43d2  5d                   pop ebp
// 005c43d3  c20800               ret 8
// copied from an identical function in another client (function ??Eiterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AV012@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp