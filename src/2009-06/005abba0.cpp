// roc 2009-06 005abba0  unit: RBX::Mesh  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005abba0
//
// 005abba0  55                   push ebp
// 005abba1  8bec                 mov ebp, esp
// 005abba3  51                   push ecx
// 005abba4  894dfc               mov dword ptr [ebp - 4], ecx
// 005abba7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005abbaa  50                   push eax
// 005abbab  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005abbae  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005abbb1  52                   push edx
// 005abbb2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005abbb5  e8560a0000           call 0x5ac610
// 005abbba  8b4508               mov eax, dword ptr [ebp + 8]
// 005abbbd  8be5                 mov esp, ebp
// 005abbbf  5d                   pop ebp
// 005abbc0  c20400               ret 4
// copied from an identical function in another client (function ?end@?$vector@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp