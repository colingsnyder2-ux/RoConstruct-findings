// roc 2009-06 005c6e60  unit: seg_005c0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c6e60
//
// 005c6e60  55                   push ebp
// 005c6e61  8bec                 mov ebp, esp
// 005c6e63  83ec0c               sub esp, 0xc
// 005c6e66  894df4               mov dword ptr [ebp - 0xc], ecx
// 005c6e69  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c6e6c  8b08                 mov ecx, dword ptr [eax]
// 005c6e6e  8b5004               mov edx, dword ptr [eax + 4]
// 005c6e71  894df8               mov dword ptr [ebp - 8], ecx
// 005c6e74  8955fc               mov dword ptr [ebp - 4], edx
// 005c6e77  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c6e7a  e8f1cefeff           call 0x5b3d70
// 005c6e7f  8b4508               mov eax, dword ptr [ebp + 8]
// 005c6e82  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c6e85  8908                 mov dword ptr [eax], ecx
// 005c6e87  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c6e8a  895004               mov dword ptr [eax + 4], edx
// 005c6e8d  8b4508               mov eax, dword ptr [ebp + 8]
// 005c6e90  8be5                 mov esp, ebp
// 005c6e92  5d                   pop ebp
// 005c6e93  c20800               ret 8
// copied from an identical function in another client (function ??Eiterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AV012@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp