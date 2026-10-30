// roc 2009-06 005b5bc0  unit: seg_005b0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b5bc0
//
// 005b5bc0  55                   push ebp
// 005b5bc1  8bec                 mov ebp, esp
// 005b5bc3  51                   push ecx
// 005b5bc4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b5bc7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b5bca  e8d1b40000           call 0x5c10a0
// 005b5bcf  8b00                 mov eax, dword ptr [eax]
// 005b5bd1  50                   push eax
// 005b5bd2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b5bd5  e866060000           call 0x5b6240
// 005b5bda  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b5bdd  e8beb40000           call 0x5c10a0
// 005b5be2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b5be5  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005b5be8  8910                 mov dword ptr [eax], edx
// 005b5bea  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b5bed  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005b5bf4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b5bf7  e884b40000           call 0x5c1080
// 005b5bfc  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b5bff  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005b5c02  8910                 mov dword ptr [eax], edx
// 005b5c04  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b5c07  e864c60000           call 0x5c2270
// 005b5c0c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b5c0f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005b5c12  8910                 mov dword ptr [eax], edx
// 005b5c14  8be5                 mov esp, ebp
// 005b5c16  5d                   pop ebp
// 005b5c17  c3                   ret 
// copied from an identical function in another client (function ?clear@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp