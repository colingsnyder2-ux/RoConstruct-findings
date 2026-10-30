// roc 2009-06 005c6910  unit: seg_005c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c6910
//
// 005c6910  55                   push ebp
// 005c6911  8bec                 mov ebp, esp
// 005c6913  51                   push ecx
// 005c6914  894dfc               mov dword ptr [ebp - 4], ecx
// 005c6917  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c691a  33c9                 xor ecx, ecx
// 005c691c  83781c00             cmp dword ptr [eax + 0x1c], 0
// 005c6920  0f94c1               sete cl
// 005c6923  8ac1                 mov al, cl
// 005c6925  8be5                 mov esp, ebp
// 005c6927  5d                   pop ebp
// 005c6928  c3                   ret 
// copied from an identical function in another client (function ?empty@?$deque@VTriangle@VETMesh@Wml@@V?$allocator@VTriangle@VETMesh@Wml@@@std@@@std@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Meshes/WmlVETMesh.cpp