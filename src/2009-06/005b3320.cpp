// roc 2009-06 005b3320  unit: RBX::RenderNew::TextureProxy  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b3320
//
// 005b3320  55                   push ebp
// 005b3321  8bec                 mov ebp, esp
// 005b3323  51                   push ecx
// 005b3324  894dfc               mov dword ptr [ebp - 4], ecx
// 005b3327  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b332a  50                   push eax
// 005b332b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b332e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005b3331  52                   push edx
// 005b3332  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b3335  e8960e0000           call 0x5b41d0
// 005b333a  8b4508               mov eax, dword ptr [ebp + 8]
// 005b333d  8be5                 mov esp, ebp
// 005b333f  5d                   pop ebp
// 005b3340  c20400               ret 4
// copied from an identical function in another client (function ?end@?$vector@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp