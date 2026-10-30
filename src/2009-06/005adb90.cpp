// roc 2009-06 005adb90  unit: RBX::Mesh  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005adb90
//
// 005adb90  55                   push ebp
// 005adb91  8bec                 mov ebp, esp
// 005adb93  83ec0c               sub esp, 0xc
// 005adb96  894df4               mov dword ptr [ebp - 0xc], ecx
// 005adb99  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005adb9c  50                   push eax
// 005adb9d  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005adba0  51                   push ecx
// 005adba1  8d4df8               lea ecx, [ebp - 8]
// 005adba4  e847390100           call 0x5c14f0
// 005adba9  8b10                 mov edx, dword ptr [eax]
// 005adbab  8b4004               mov eax, dword ptr [eax + 4]
// 005adbae  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005adbb1  8911                 mov dword ptr [ecx], edx
// 005adbb3  894104               mov dword ptr [ecx + 4], eax
// 005adbb6  8b4508               mov eax, dword ptr [ebp + 8]
// 005adbb9  8be5                 mov esp, ebp
// 005adbbb  5d                   pop ebp
// 005adbbc  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Make_iter@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QBE?AViterator@12@Vconst_iterator@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp