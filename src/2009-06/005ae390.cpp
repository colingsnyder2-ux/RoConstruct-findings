// roc 2009-06 005ae390  unit: RBX::Mesh  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ae390
//
// 005ae390  55                   push ebp
// 005ae391  8bec                 mov ebp, esp
// 005ae393  51                   push ecx
// 005ae394  894dfc               mov dword ptr [ebp - 4], ecx
// 005ae397  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae39a  e8012d0100           call 0x5c10a0
// 005ae39f  8b00                 mov eax, dword ptr [eax]
// 005ae3a1  50                   push eax
// 005ae3a2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae3a5  e8c6030000           call 0x5ae770
// 005ae3aa  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae3ad  e8ee2c0100           call 0x5c10a0
// 005ae3b2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae3b5  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005ae3b8  8910                 mov dword ptr [eax], edx
// 005ae3ba  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ae3bd  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005ae3c4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae3c7  e8b42c0100           call 0x5c1080
// 005ae3cc  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae3cf  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005ae3d2  8910                 mov dword ptr [eax], edx
// 005ae3d4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae3d7  e8943e0100           call 0x5c2270
// 005ae3dc  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae3df  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005ae3e2  8910                 mov dword ptr [eax], edx
// 005ae3e4  8be5                 mov esp, ebp
// 005ae3e6  5d                   pop ebp
// 005ae3e7  c3                   ret 
// copied from an identical function in another client (function ?clear@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp