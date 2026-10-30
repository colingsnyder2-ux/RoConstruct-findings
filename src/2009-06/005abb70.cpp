// roc 2009-06 005abb70  unit: RBX::Mesh  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005abb70
//
// 005abb70  55                   push ebp
// 005abb71  8bec                 mov ebp, esp
// 005abb73  51                   push ecx
// 005abb74  894dfc               mov dword ptr [ebp - 4], ecx
// 005abb77  8b45fc               mov eax, dword ptr [ebp - 4]
// 005abb7a  50                   push eax
// 005abb7b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005abb7e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005abb81  52                   push edx
// 005abb82  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005abb85  e8860a0000           call 0x5ac610
// 005abb8a  8b4508               mov eax, dword ptr [ebp + 8]
// 005abb8d  8be5                 mov esp, ebp
// 005abb8f  5d                   pop ebp
// 005abb90  c20400               ret 4
// copied from an identical function in another client (function ?begin@?$vector@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp