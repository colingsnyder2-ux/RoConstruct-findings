// roc 2009-06 005b61f0  unit: seg_005b0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b61f0
//
// 005b61f0  55                   push ebp
// 005b61f1  8bec                 mov ebp, esp
// 005b61f3  83ec0c               sub esp, 0xc
// 005b61f6  894df4               mov dword ptr [ebp - 0xc], ecx
// 005b61f9  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005b61fc  8b08                 mov ecx, dword ptr [eax]
// 005b61fe  8b5004               mov edx, dword ptr [eax + 4]
// 005b6201  894df8               mov dword ptr [ebp - 8], ecx
// 005b6204  8955fc               mov dword ptr [ebp - 4], edx
// 005b6207  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005b620a  e8e1070000           call 0x5b69f0
// 005b620f  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6212  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b6215  8908                 mov dword ptr [eax], ecx
// 005b6217  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b621a  895004               mov dword ptr [eax + 4], edx
// 005b621d  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6220  8be5                 mov esp, ebp
// 005b6222  5d                   pop ebp
// 005b6223  c20800               ret 8
// copied from an identical function in another client (function ??Eiterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AV012@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp