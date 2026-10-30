// roc 2009-06 005b3390  unit: RBX::RenderNew::TextureProxy  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b3390
//
// 005b3390  55                   push ebp
// 005b3391  8bec                 mov ebp, esp
// 005b3393  51                   push ecx
// 005b3394  894dfc               mov dword ptr [ebp - 4], ecx
// 005b3397  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b339a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b339d  8b4010               mov eax, dword ptr [eax + 0x10]
// 005b33a0  2b410c               sub eax, dword ptr [ecx + 0xc]
// 005b33a3  99                   cdq 
// 005b33a4  b948000000           mov ecx, 0x48
// 005b33a9  f7f9                 idiv ecx
// 005b33ab  8be5                 mov esp, ebp
// 005b33ad  5d                   pop ebp
// 005b33ae  c3                   ret 
// copied from an identical function in another client (function ?size@?$vector@VFace@?$ConvexClipper@N@Wml@@V?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp