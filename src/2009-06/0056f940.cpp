// from server: 100% by auto
// roc 2009-06 0056f940  unit: G3D::Log  size: 422 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056f940
//
// 0056f940  64a100000000         mov eax, dword ptr fs:[0]
// 0056f946  6aff                 push -1
// 0056f948  68d9b88500           push 0x85b8d9
// 0056f94d  50                   push eax
// 0056f94e  64892500000000       mov dword ptr fs:[0], esp
// 0056f955  83ec24               sub esp, 0x24
// 0056f958  56                   push esi
// 0056f959  8bf1                 mov esi, ecx
// 0056f95b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056f95e  8d4801               lea ecx, [eax + 1]
// 0056f961  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056f964  7e0f                 jle 0x56f975
// 0056f966  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056f969  6a01                 push 1
// 0056f96b  03d0                 add edx, eax
// 0056f96d  52                   push edx
// 0056f96e  8bce                 mov ecx, esi
// 0056f970  e8db4d0000           call 0x574750
// 0056f975  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056f978  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056f97b  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056f97e  0fbed1               movsx edx, cl
// 0056f981  57                   push edi
// 0056f982  8b3df4e88900         mov edi, dword ptr [0x89e8f4]
// 0056f988  40                   inc eax
// 0056f989  52                   push edx
// 0056f98a  884c240c             mov byte ptr [esp + 0xc], cl
// 0056f98e  894644               mov dword ptr [esi + 0x44], eax
// 0056f991  ffd7                 call edi
// 0056f993  83c404               add esp, 4
// 0056f996  85c0                 test eax, eax
// 0056f998  743e                 je 0x56f9d8
// 0056f99a  8d9b00000000         lea ebx, [ebx]
// 0056f9a0  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056f9a3  8d4801               lea ecx, [eax + 1]
// 0056f9a6  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056f9a9  7e0f                 jle 0x56f9ba
// 0056f9ab  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056f9ae  6a01                 push 1
// 0056f9b0  03d0                 add edx, eax
// 0056f9b2  52                   push edx
// 0056f9b3  8bce                 mov ecx, esi
// 0056f9b5  e8964d0000           call 0x574750
// 0056f9ba  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056f9bd  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056f9c0  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056f9c3  0fbed1               movsx edx, cl
// 0056f9c6  40                   inc eax
// 0056f9c7  52                   push edx
// 0056f9c8  884c240c             mov byte ptr [esp + 0xc], cl
// 0056f9cc  894644               mov dword ptr [esi + 0x44], eax
// 0056f9cf  ffd7                 call edi
// 0056f9d1  83c404               add esp, 4
// 0056f9d4  85c0                 test eax, eax
// 0056f9d6  75c8                 jne 0x56f9a0
// 0056f9d8  8d4c2410             lea ecx, [esp + 0x10]
// 0056f9dc  ff15c0e48900         call dword ptr [0x89e4c0]
// 0056f9e2  8b442408             mov eax, dword ptr [esp + 8]
// 0056f9e6  50                   push eax
// 0056f9e7  8d4c2414             lea ecx, [esp + 0x14]
// 0056f9eb  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0056f9f3  ff1558e58900         call dword ptr [0x89e558]
// 0056f9f9  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056f9fc  8d4801               lea ecx, [eax + 1]
// 0056f9ff  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056fa02  7e0f                 jle 0x56fa13
// 0056fa04  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056fa07  6a01                 push 1
// 0056fa09  03d0                 add edx, eax
// 0056fa0b  52                   push edx
// 0056fa0c  8bce                 mov ecx, esi
// 0056fa0e  e83d4d0000           call 0x574750
// 0056fa13  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056fa16  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056fa19  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056fa1c  0fbed1               movsx edx, cl
// 0056fa1f  40                   inc eax
// 0056fa20  52                   push edx
// 0056fa21  884c240c             mov byte ptr [esp + 0xc], cl
// 0056fa25  894644               mov dword ptr [esi + 0x44], eax
// 0056fa28  ffd7                 call edi
// 0056fa2a  83c404               add esp, 4
// 0056fa2d  85c0                 test eax, eax
// 0056fa2f  7547                 jne 0x56fa78
// 0056fa31  8b442408             mov eax, dword ptr [esp + 8]
// 0056fa35  50                   push eax
// 0056fa36  8d4c2414             lea ecx, [esp + 0x14]
// 0056fa3a  ff1558e58900         call dword ptr [0x89e558]
// 0056fa40  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056fa43  8d4801               lea ecx, [eax + 1]
// 0056fa46  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056fa49  7e0f                 jle 0x56fa5a
// 0056fa4b  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056fa4e  6a01                 push 1
// 0056fa50  03d0                 add edx, eax
// 0056fa52  52                   push edx
// 0056fa53  8bce                 mov ecx, esi
// 0056fa55  e8f64c0000           call 0x574750
// 0056fa5a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056fa5d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056fa60  8a0c08               mov cl, byte ptr [eax + ecx]
// 0056fa63  0fbed1               movsx edx, cl
// 0056fa66  40                   inc eax
// 0056fa67  52                   push edx
// 0056fa68  884c240c             mov byte ptr [esp + 0xc], cl
// 0056fa6c  894644               mov dword ptr [esi + 0x44], eax
// 0056fa6f  ffd7                 call edi
// 0056fa71  83c404               add esp, 4
// 0056fa74  85c0                 test eax, eax
// 0056fa76  74b9                 je 0x56fa31
// 0056fa78  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056fa7b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056fa7e  8d4401ff             lea eax, [ecx + eax - 1]
// 0056fa82  2bc1                 sub eax, ecx
// 0056fa84  894644               mov dword ptr [esi + 0x44], eax
// 0056fa87  5f                   pop edi
// 0056fa88  7805                 js 0x56fa8f
// 0056fa8a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0056fa8d  7e0c                 jle 0x56fa9b
// 0056fa8f  03c1                 add eax, ecx
// 0056fa91  6a00                 push 0
// 0056fa93  50                   push eax
// 0056fa94  8bce                 mov ecx, esi
// 0056fa96  e8b54c0000           call 0x574750
// 0056fa9b  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 0056faa0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056faa4  7304                 jae 0x56faaa
// 0056faa6  8d442410             lea eax, [esp + 0x10]
// 0056faaa  8d4c2408             lea ecx, [esp + 8]
// 0056faae  51                   push ecx
// 0056faaf  68683b8b00           push 0x8b3b68
// 0056fab4  50                   push eax
// 0056fab5  ff151ce98900         call dword ptr [0x89e91c]
// 0056fabb  8b742414             mov esi, dword ptr [esp + 0x14]
// 0056fabf  83c40c               add esp, 0xc
// 0056fac2  8d4c240c             lea ecx, [esp + 0xc]
// 0056fac6  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0056face  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056fad4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056fad8  8bc6                 mov eax, esi
// 0056fada  5e                   pop esi
// 0056fadb  64890d00000000       mov dword ptr fs:[0], ecx
// 0056fae2  83c430               add esp, 0x30
// 0056fae5  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?scanUInt@G3D@@YAHAAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
