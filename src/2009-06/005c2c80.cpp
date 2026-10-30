// roc 2009-06 005c2c80  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c2c80
//
// 005c2c80  55                   push ebp
// 005c2c81  8bec                 mov ebp, esp
// 005c2c83  51                   push ecx
// 005c2c84  894dfc               mov dword ptr [ebp - 4], ecx
// 005c2c87  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2c8a  e851150000           call 0x5c41e0
// 005c2c8f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2c92  894118               mov dword ptr [ecx + 0x18], eax
// 005c2c95  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c2c98  8b4218               mov eax, dword ptr [edx + 0x18]
// 005c2c9b  50                   push eax
// 005c2c9c  e85fa4feff           call 0x5ad100
// 005c2ca1  83c404               add esp, 4
// 005c2ca4  c60001               mov byte ptr [eax], 1
// 005c2ca7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2caa  e8f1e3ffff           call 0x5c10a0
// 005c2caf  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2cb2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c2cb5  8910                 mov dword ptr [eax], edx
// 005c2cb7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2cba  e8c1e3ffff           call 0x5c1080
// 005c2cbf  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2cc2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c2cc5  8910                 mov dword ptr [eax], edx
// 005c2cc7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2cca  e8a1f5ffff           call 0x5c2270
// 005c2ccf  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2cd2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c2cd5  8910                 mov dword ptr [eax], edx
// 005c2cd7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c2cda  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005c2ce1  8be5                 mov esp, ebp
// 005c2ce3  5d                   pop ebp
// 005c2ce4  c3                   ret 
// copied from an identical function in another client (function ?_Init@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp