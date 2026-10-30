// roc 2009-06 005c1d00  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c1d00
//
// 005c1d00  55                   push ebp
// 005c1d01  8bec                 mov ebp, esp
// 005c1d03  51                   push ecx
// 005c1d04  894dfc               mov dword ptr [ebp - 4], ecx
// 005c1d07  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c1d0a  e8c1210000           call 0x5c3ed0
// 005c1d0f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c1d12  894118               mov dword ptr [ecx + 0x18], eax
// 005c1d15  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c1d18  8b4218               mov eax, dword ptr [edx + 0x18]
// 005c1d1b  50                   push eax
// 005c1d1c  e81ffdffff           call 0x5c1a40
// 005c1d21  83c404               add esp, 4
// 005c1d24  c60001               mov byte ptr [eax], 1
// 005c1d27  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c1d2a  e871f3ffff           call 0x5c10a0
// 005c1d2f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c1d32  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c1d35  8910                 mov dword ptr [eax], edx
// 005c1d37  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c1d3a  e841f3ffff           call 0x5c1080
// 005c1d3f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c1d42  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c1d45  8910                 mov dword ptr [eax], edx
// 005c1d47  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c1d4a  e821050000           call 0x5c2270
// 005c1d4f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c1d52  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c1d55  8910                 mov dword ptr [eax], edx
// 005c1d57  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c1d5a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005c1d61  8be5                 mov esp, ebp
// 005c1d63  5d                   pop ebp
// 005c1d64  c3                   ret 
// copied from an identical function in another client (function ?_Init@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp