// roc 2009-06 005c3bd0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c3bd0
//
// 005c3bd0  55                   push ebp
// 005c3bd1  8bec                 mov ebp, esp
// 005c3bd3  51                   push ecx
// 005c3bd4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c3bd7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3bda  e8c1d4ffff           call 0x5c10a0
// 005c3bdf  8b00                 mov eax, dword ptr [eax]
// 005c3be1  50                   push eax
// 005c3be2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3be5  e8860c0000           call 0x5c4870
// 005c3bea  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3bed  e8aed4ffff           call 0x5c10a0
// 005c3bf2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3bf5  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c3bf8  8910                 mov dword ptr [eax], edx
// 005c3bfa  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c3bfd  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005c3c04  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3c07  e874d4ffff           call 0x5c1080
// 005c3c0c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3c0f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c3c12  8910                 mov dword ptr [eax], edx
// 005c3c14  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3c17  e854e6ffff           call 0x5c2270
// 005c3c1c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3c1f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c3c22  8910                 mov dword ptr [eax], edx
// 005c3c24  8be5                 mov esp, ebp
// 005c3c26  5d                   pop ebp
// 005c3c27  c3                   ret 
// copied from an identical function in another client (function ?clear@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp