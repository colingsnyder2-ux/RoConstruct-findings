// roc 2009-12 005eea50  unit: G3D::Log  size: 422 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eea50
//
// 005eea50  64a100000000         mov eax, dword ptr fs:[0]
// 005eea56  6aff                 push -1
// 005eea58  68a9e59200           push 0x92e5a9
// 005eea5d  50                   push eax
// 005eea5e  64892500000000       mov dword ptr fs:[0], esp
// 005eea65  83ec24               sub esp, 0x24
// 005eea68  56                   push esi
// 005eea69  8bf1                 mov esi, ecx
// 005eea6b  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eea6e  8d4801               lea ecx, [eax + 1]
// 005eea71  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005eea74  7e0f                 jle 0x5eea85
// 005eea76  8b5634               mov edx, dword ptr [esi + 0x34]
// 005eea79  6a01                 push 1
// 005eea7b  03d0                 add edx, eax
// 005eea7d  52                   push edx
// 005eea7e  8bce                 mov ecx, esi
// 005eea80  e83b670000           call 0x5f51c0
// 005eea85  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eea88  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005eea8b  8a0c08               mov cl, byte ptr [eax + ecx]
// 005eea8e  0fbed1               movsx edx, cl
// 005eea91  57                   push edi
// 005eea92  8b3d24b89800         mov edi, dword ptr [0x98b824]
// 005eea98  40                   inc eax
// 005eea99  52                   push edx
// 005eea9a  884c240c             mov byte ptr [esp + 0xc], cl
// 005eea9e  894644               mov dword ptr [esi + 0x44], eax
// 005eeaa1  ffd7                 call edi
// 005eeaa3  83c404               add esp, 4
// 005eeaa6  85c0                 test eax, eax
// 005eeaa8  743e                 je 0x5eeae8
// 005eeaaa  8d9b00000000         lea ebx, [ebx]
// 005eeab0  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eeab3  8d4801               lea ecx, [eax + 1]
// 005eeab6  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005eeab9  7e0f                 jle 0x5eeaca
// 005eeabb  8b5634               mov edx, dword ptr [esi + 0x34]
// 005eeabe  6a01                 push 1
// 005eeac0  03d0                 add edx, eax
// 005eeac2  52                   push edx
// 005eeac3  8bce                 mov ecx, esi
// 005eeac5  e8f6660000           call 0x5f51c0
// 005eeaca  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eeacd  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005eead0  8a0c08               mov cl, byte ptr [eax + ecx]
// 005eead3  0fbed1               movsx edx, cl
// 005eead6  40                   inc eax
// 005eead7  52                   push edx
// 005eead8  884c240c             mov byte ptr [esp + 0xc], cl
// 005eeadc  894644               mov dword ptr [esi + 0x44], eax
// 005eeadf  ffd7                 call edi
// 005eeae1  83c404               add esp, 4
// 005eeae4  85c0                 test eax, eax
// 005eeae6  75c8                 jne 0x5eeab0
// 005eeae8  8d4c2410             lea ecx, [esp + 0x10]
// 005eeaec  ff15e8b69800         call dword ptr [0x98b6e8]
// 005eeaf2  8b442408             mov eax, dword ptr [esp + 8]
// 005eeaf6  50                   push eax
// 005eeaf7  8d4c2414             lea ecx, [esp + 0x14]
// 005eeafb  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005eeb03  ff154cb59800         call dword ptr [0x98b54c]
// 005eeb09  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eeb0c  8d4801               lea ecx, [eax + 1]
// 005eeb0f  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005eeb12  7e0f                 jle 0x5eeb23
// 005eeb14  8b5634               mov edx, dword ptr [esi + 0x34]
// 005eeb17  6a01                 push 1
// 005eeb19  03d0                 add edx, eax
// 005eeb1b  52                   push edx
// 005eeb1c  8bce                 mov ecx, esi
// 005eeb1e  e89d660000           call 0x5f51c0
// 005eeb23  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eeb26  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005eeb29  8a0c08               mov cl, byte ptr [eax + ecx]
// 005eeb2c  0fbed1               movsx edx, cl
// 005eeb2f  40                   inc eax
// 005eeb30  52                   push edx
// 005eeb31  884c240c             mov byte ptr [esp + 0xc], cl
// 005eeb35  894644               mov dword ptr [esi + 0x44], eax
// 005eeb38  ffd7                 call edi
// 005eeb3a  83c404               add esp, 4
// 005eeb3d  85c0                 test eax, eax
// 005eeb3f  7547                 jne 0x5eeb88
// 005eeb41  8b442408             mov eax, dword ptr [esp + 8]
// 005eeb45  50                   push eax
// 005eeb46  8d4c2414             lea ecx, [esp + 0x14]
// 005eeb4a  ff154cb59800         call dword ptr [0x98b54c]
// 005eeb50  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eeb53  8d4801               lea ecx, [eax + 1]
// 005eeb56  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005eeb59  7e0f                 jle 0x5eeb6a
// 005eeb5b  8b5634               mov edx, dword ptr [esi + 0x34]
// 005eeb5e  6a01                 push 1
// 005eeb60  03d0                 add edx, eax
// 005eeb62  52                   push edx
// 005eeb63  8bce                 mov ecx, esi
// 005eeb65  e856660000           call 0x5f51c0
// 005eeb6a  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eeb6d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005eeb70  8a0c08               mov cl, byte ptr [eax + ecx]
// 005eeb73  0fbed1               movsx edx, cl
// 005eeb76  40                   inc eax
// 005eeb77  52                   push edx
// 005eeb78  884c240c             mov byte ptr [esp + 0xc], cl
// 005eeb7c  894644               mov dword ptr [esi + 0x44], eax
// 005eeb7f  ffd7                 call edi
// 005eeb81  83c404               add esp, 4
// 005eeb84  85c0                 test eax, eax
// 005eeb86  74b9                 je 0x5eeb41
// 005eeb88  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005eeb8b  8b4644               mov eax, dword ptr [esi + 0x44]
// 005eeb8e  8d4401ff             lea eax, [ecx + eax - 1]
// 005eeb92  2bc1                 sub eax, ecx
// 005eeb94  894644               mov dword ptr [esi + 0x44], eax
// 005eeb97  5f                   pop edi
// 005eeb98  7805                 js 0x5eeb9f
// 005eeb9a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005eeb9d  7e0c                 jle 0x5eebab
// 005eeb9f  03c1                 add eax, ecx
// 005eeba1  6a00                 push 0
// 005eeba3  50                   push eax
// 005eeba4  8bce                 mov ecx, esi
// 005eeba6  e815660000           call 0x5f51c0
// 005eebab  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 005eebb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005eebb4  7304                 jae 0x5eebba
// 005eebb6  8d442410             lea eax, [esp + 0x10]
// 005eebba  8d4c2408             lea ecx, [esp + 8]
// 005eebbe  51                   push ecx
// 005eebbf  68d4689a00           push 0x9a68d4
// 005eebc4  50                   push eax
// 005eebc5  ff15fcb79800         call dword ptr [0x98b7fc]
// 005eebcb  8b742414             mov esi, dword ptr [esp + 0x14]
// 005eebcf  83c40c               add esp, 0xc
// 005eebd2  8d4c240c             lea ecx, [esp + 0xc]
// 005eebd6  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005eebde  ff15e4b69800         call dword ptr [0x98b6e4]
// 005eebe4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005eebe8  8bc6                 mov eax, esi
// 005eebea  5e                   pop esi
// 005eebeb  64890d00000000       mov dword ptr fs:[0], ecx
// 005eebf2  83c430               add esp, 0x30
// 005eebf5  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?scanUInt@G3D@@YAHAAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
