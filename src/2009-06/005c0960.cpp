// roc 2009-06 005c0960  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c0960
//
// 005c0960  55                   push ebp
// 005c0961  8bec                 mov ebp, esp
// 005c0963  83ec2c               sub esp, 0x2c
// 005c0966  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 005c0969  8d45f0               lea eax, [ebp - 0x10]
// 005c096c  50                   push eax
// 005c096d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c0970  e8bb3affff           call 0x5b4430
// 005c0975  8b08                 mov ecx, dword ptr [eax]
// 005c0977  8b5004               mov edx, dword ptr [eax + 4]
// 005c097a  894df8               mov dword ptr [ebp - 8], ecx
// 005c097d  8955fc               mov dword ptr [ebp - 4], edx
// 005c0980  8d45e0               lea eax, [ebp - 0x20]
// 005c0983  50                   push eax
// 005c0984  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c0987  e8743affff           call 0x5b4400
// 005c098c  8b08                 mov ecx, dword ptr [eax]
// 005c098e  8b5004               mov edx, dword ptr [eax + 4]
// 005c0991  894de8               mov dword ptr [ebp - 0x18], ecx
// 005c0994  8955ec               mov dword ptr [ebp - 0x14], edx
// 005c0997  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c099a  50                   push eax
// 005c099b  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c099e  51                   push ecx
// 005c099f  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005c09a2  52                   push edx
// 005c09a3  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005c09a6  50                   push eax
// 005c09a7  8d4dd8               lea ecx, [ebp - 0x28]
// 005c09aa  51                   push ecx
// 005c09ab  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c09ae  e89d120000           call 0x5c1c50
// 005c09b3  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005c09b6  8b4218               mov eax, dword ptr [edx + 0x18]
// 005c09b9  50                   push eax
// 005c09ba  e891100000           call 0x5c1a50
// 005c09bf  83c404               add esp, 4
// 005c09c2  50                   push eax
// 005c09c3  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c09c6  83c110               add ecx, 0x10
// 005c09c9  e8b23bffff           call 0x5b4580
// 005c09ce  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c09d1  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c09d4  52                   push edx
// 005c09d5  e886100000           call 0x5c1a60
// 005c09da  83c404               add esp, 4
// 005c09dd  50                   push eax
// 005c09de  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c09e1  83c110               add ecx, 0x10
// 005c09e4  e8973bffff           call 0x5b4580
// 005c09e9  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 005c09ec  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005c09ef  51                   push ecx
// 005c09f0  e87b100000           call 0x5c1a70
// 005c09f5  83c404               add esp, 4
// 005c09f8  50                   push eax
// 005c09f9  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c09fc  83c110               add ecx, 0x10
// 005c09ff  e87c3bffff           call 0x5b4580
// 005c0a04  6a01                 push 1
// 005c0a06  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005c0a09  8b4218               mov eax, dword ptr [edx + 0x18]
// 005c0a0c  50                   push eax
// 005c0a0d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c0a10  83c10c               add ecx, 0xc
// 005c0a13  e888d4ffff           call 0x5bdea0
// 005c0a18  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c0a1b  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 005c0a22  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005c0a25  c7421c00000000       mov dword ptr [edx + 0x1c], 0
// 005c0a2c  8be5                 mov esp, ebp
// 005c0a2e  5d                   pop ebp
// 005c0a2f  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp