// roc 2009-06 005b3720  unit: seg_005b0000  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b3720
//
// 005b3720  55                   push ebp
// 005b3721  8bec                 mov ebp, esp
// 005b3723  83ec2c               sub esp, 0x2c
// 005b3726  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 005b3729  8d45f0               lea eax, [ebp - 0x10]
// 005b372c  50                   push eax
// 005b372d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b3730  e8fb0c0000           call 0x5b4430
// 005b3735  8b08                 mov ecx, dword ptr [eax]
// 005b3737  8b5004               mov edx, dword ptr [eax + 4]
// 005b373a  894df8               mov dword ptr [ebp - 8], ecx
// 005b373d  8955fc               mov dword ptr [ebp - 4], edx
// 005b3740  8d45e0               lea eax, [ebp - 0x20]
// 005b3743  50                   push eax
// 005b3744  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b3747  e8b40c0000           call 0x5b4400
// 005b374c  8b08                 mov ecx, dword ptr [eax]
// 005b374e  8b5004               mov edx, dword ptr [eax + 4]
// 005b3751  894de8               mov dword ptr [ebp - 0x18], ecx
// 005b3754  8955ec               mov dword ptr [ebp - 0x14], edx
// 005b3757  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b375a  50                   push eax
// 005b375b  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b375e  51                   push ecx
// 005b375f  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005b3762  52                   push edx
// 005b3763  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005b3766  50                   push eax
// 005b3767  8d4dd8               lea ecx, [ebp - 0x28]
// 005b376a  51                   push ecx
// 005b376b  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b376e  e8ed0c0000           call 0x5b4460
// 005b3773  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005b3776  8b4218               mov eax, dword ptr [edx + 0x18]
// 005b3779  50                   push eax
// 005b377a  e8d1e20000           call 0x5c1a50
// 005b377f  83c404               add esp, 4
// 005b3782  50                   push eax
// 005b3783  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b3786  83c110               add ecx, 0x10
// 005b3789  e8f20d0000           call 0x5b4580
// 005b378e  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b3791  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005b3794  52                   push edx
// 005b3795  e8c6e20000           call 0x5c1a60
// 005b379a  83c404               add esp, 4
// 005b379d  50                   push eax
// 005b379e  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b37a1  83c110               add ecx, 0x10
// 005b37a4  e8d70d0000           call 0x5b4580
// 005b37a9  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 005b37ac  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005b37af  51                   push ecx
// 005b37b0  e8bbe20000           call 0x5c1a70
// 005b37b5  83c404               add esp, 4
// 005b37b8  50                   push eax
// 005b37b9  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b37bc  83c110               add ecx, 0x10
// 005b37bf  e8bc0d0000           call 0x5b4580
// 005b37c4  6a01                 push 1
// 005b37c6  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005b37c9  8b4218               mov eax, dword ptr [edx + 0x18]
// 005b37cc  50                   push eax
// 005b37cd  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b37d0  83c10c               add ecx, 0xc
// 005b37d3  e8c8a60000           call 0x5bdea0
// 005b37d8  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005b37db  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 005b37e2  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005b37e5  c7421c00000000       mov dword ptr [edx + 0x1c], 0
// 005b37ec  8be5                 mov esp, ebp
// 005b37ee  5d                   pop ebp
// 005b37ef  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp