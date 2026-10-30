// roc 2009-06 005acd80  unit: RBX::Mesh  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005acd80
//
// 005acd80  55                   push ebp
// 005acd81  8bec                 mov ebp, esp
// 005acd83  83ec2c               sub esp, 0x2c
// 005acd86  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 005acd89  8d45f0               lea eax, [ebp - 0x10]
// 005acd8c  50                   push eax
// 005acd8d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005acd90  e89b760000           call 0x5b4430
// 005acd95  8b08                 mov ecx, dword ptr [eax]
// 005acd97  8b5004               mov edx, dword ptr [eax + 4]
// 005acd9a  894df8               mov dword ptr [ebp - 8], ecx
// 005acd9d  8955fc               mov dword ptr [ebp - 4], edx
// 005acda0  8d45e0               lea eax, [ebp - 0x20]
// 005acda3  50                   push eax
// 005acda4  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005acda7  e854760000           call 0x5b4400
// 005acdac  8b08                 mov ecx, dword ptr [eax]
// 005acdae  8b5004               mov edx, dword ptr [eax + 4]
// 005acdb1  894de8               mov dword ptr [ebp - 0x18], ecx
// 005acdb4  8955ec               mov dword ptr [ebp - 0x14], edx
// 005acdb7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005acdba  50                   push eax
// 005acdbb  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005acdbe  51                   push ecx
// 005acdbf  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005acdc2  52                   push edx
// 005acdc3  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005acdc6  50                   push eax
// 005acdc7  8d4dd8               lea ecx, [ebp - 0x28]
// 005acdca  51                   push ecx
// 005acdcb  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005acdce  e81d050000           call 0x5ad2f0
// 005acdd3  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005acdd6  8b4218               mov eax, dword ptr [edx + 0x18]
// 005acdd9  50                   push eax
// 005acdda  e8714c0100           call 0x5c1a50
// 005acddf  83c404               add esp, 4
// 005acde2  50                   push eax
// 005acde3  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005acde6  83c110               add ecx, 0x10
// 005acde9  e892770000           call 0x5b4580
// 005acdee  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005acdf1  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005acdf4  52                   push edx
// 005acdf5  e8664c0100           call 0x5c1a60
// 005acdfa  83c404               add esp, 4
// 005acdfd  50                   push eax
// 005acdfe  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005ace01  83c110               add ecx, 0x10
// 005ace04  e877770000           call 0x5b4580
// 005ace09  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 005ace0c  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005ace0f  51                   push ecx
// 005ace10  e85b4c0100           call 0x5c1a70
// 005ace15  83c404               add esp, 4
// 005ace18  50                   push eax
// 005ace19  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005ace1c  83c110               add ecx, 0x10
// 005ace1f  e85c770000           call 0x5b4580
// 005ace24  6a01                 push 1
// 005ace26  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005ace29  8b4218               mov eax, dword ptr [edx + 0x18]
// 005ace2c  50                   push eax
// 005ace2d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005ace30  83c10c               add ecx, 0xc
// 005ace33  e868100100           call 0x5bdea0
// 005ace38  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005ace3b  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 005ace42  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005ace45  c7421c00000000       mov dword ptr [edx + 0x1c], 0
// 005ace4c  8be5                 mov esp, ebp
// 005ace4e  5d                   pop ebp
// 005ace4f  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp