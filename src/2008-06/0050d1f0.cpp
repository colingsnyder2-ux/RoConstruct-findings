// from server: 100% by auto
// roc 2008-06 0050d1f0  unit: G3D::Log  size: 422 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050d1f0
//
// 0050d1f0  64a100000000         mov eax, dword ptr fs:[0]
// 0050d1f6  6aff                 push -1
// 0050d1f8  6809e77c00           push 0x7ce709
// 0050d1fd  50                   push eax
// 0050d1fe  64892500000000       mov dword ptr fs:[0], esp
// 0050d205  83ec24               sub esp, 0x24
// 0050d208  56                   push esi
// 0050d209  8bf1                 mov esi, ecx
// 0050d20b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d20e  8d4801               lea ecx, [eax + 1]
// 0050d211  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050d214  7e0f                 jle 0x50d225
// 0050d216  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050d219  6a01                 push 1
// 0050d21b  03d0                 add edx, eax
// 0050d21d  52                   push edx
// 0050d21e  8bce                 mov ecx, esi
// 0050d220  e8ab850000           call 0x5157d0
// 0050d225  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d228  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050d22b  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050d22e  0fbed1               movsx edx, cl
// 0050d231  57                   push edi
// 0050d232  8b3d84278000         mov edi, dword ptr [0x802784]
// 0050d238  40                   inc eax
// 0050d239  52                   push edx
// 0050d23a  884c240c             mov byte ptr [esp + 0xc], cl
// 0050d23e  894644               mov dword ptr [esi + 0x44], eax
// 0050d241  ffd7                 call edi
// 0050d243  83c404               add esp, 4
// 0050d246  85c0                 test eax, eax
// 0050d248  743e                 je 0x50d288
// 0050d24a  8d9b00000000         lea ebx, [ebx]
// 0050d250  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d253  8d4801               lea ecx, [eax + 1]
// 0050d256  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050d259  7e0f                 jle 0x50d26a
// 0050d25b  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050d25e  6a01                 push 1
// 0050d260  03d0                 add edx, eax
// 0050d262  52                   push edx
// 0050d263  8bce                 mov ecx, esi
// 0050d265  e866850000           call 0x5157d0
// 0050d26a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d26d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050d270  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050d273  0fbed1               movsx edx, cl
// 0050d276  40                   inc eax
// 0050d277  52                   push edx
// 0050d278  884c240c             mov byte ptr [esp + 0xc], cl
// 0050d27c  894644               mov dword ptr [esi + 0x44], eax
// 0050d27f  ffd7                 call edi
// 0050d281  83c404               add esp, 4
// 0050d284  85c0                 test eax, eax
// 0050d286  75c8                 jne 0x50d250
// 0050d288  8d4c2410             lea ecx, [esp + 0x10]
// 0050d28c  ff1560248000         call dword ptr [0x802460]
// 0050d292  8b442408             mov eax, dword ptr [esp + 8]
// 0050d296  50                   push eax
// 0050d297  8d4c2414             lea ecx, [esp + 0x14]
// 0050d29b  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0050d2a3  ff15b4248000         call dword ptr [0x8024b4]
// 0050d2a9  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d2ac  8d4801               lea ecx, [eax + 1]
// 0050d2af  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050d2b2  7e0f                 jle 0x50d2c3
// 0050d2b4  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050d2b7  6a01                 push 1
// 0050d2b9  03d0                 add edx, eax
// 0050d2bb  52                   push edx
// 0050d2bc  8bce                 mov ecx, esi
// 0050d2be  e80d850000           call 0x5157d0
// 0050d2c3  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d2c6  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050d2c9  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050d2cc  0fbed1               movsx edx, cl
// 0050d2cf  40                   inc eax
// 0050d2d0  52                   push edx
// 0050d2d1  884c240c             mov byte ptr [esp + 0xc], cl
// 0050d2d5  894644               mov dword ptr [esi + 0x44], eax
// 0050d2d8  ffd7                 call edi
// 0050d2da  83c404               add esp, 4
// 0050d2dd  85c0                 test eax, eax
// 0050d2df  7547                 jne 0x50d328
// 0050d2e1  8b442408             mov eax, dword ptr [esp + 8]
// 0050d2e5  50                   push eax
// 0050d2e6  8d4c2414             lea ecx, [esp + 0x14]
// 0050d2ea  ff15b4248000         call dword ptr [0x8024b4]
// 0050d2f0  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d2f3  8d4801               lea ecx, [eax + 1]
// 0050d2f6  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050d2f9  7e0f                 jle 0x50d30a
// 0050d2fb  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050d2fe  6a01                 push 1
// 0050d300  03d0                 add edx, eax
// 0050d302  52                   push edx
// 0050d303  8bce                 mov ecx, esi
// 0050d305  e8c6840000           call 0x5157d0
// 0050d30a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d30d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050d310  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050d313  0fbed1               movsx edx, cl
// 0050d316  40                   inc eax
// 0050d317  52                   push edx
// 0050d318  884c240c             mov byte ptr [esp + 0xc], cl
// 0050d31c  894644               mov dword ptr [esi + 0x44], eax
// 0050d31f  ffd7                 call edi
// 0050d321  83c404               add esp, 4
// 0050d324  85c0                 test eax, eax
// 0050d326  74b9                 je 0x50d2e1
// 0050d328  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050d32b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050d32e  8d4401ff             lea eax, [ecx + eax - 1]
// 0050d332  2bc1                 sub eax, ecx
// 0050d334  894644               mov dword ptr [esi + 0x44], eax
// 0050d337  5f                   pop edi
// 0050d338  7805                 js 0x50d33f
// 0050d33a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0050d33d  7e0c                 jle 0x50d34b
// 0050d33f  03c1                 add eax, ecx
// 0050d341  6a00                 push 0
// 0050d343  50                   push eax
// 0050d344  8bce                 mov ecx, esi
// 0050d346  e885840000           call 0x5157d0
// 0050d34b  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 0050d350  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050d354  7304                 jae 0x50d35a
// 0050d356  8d442410             lea eax, [esp + 0x10]
// 0050d35a  8d4c2408             lea ecx, [esp + 8]
// 0050d35e  51                   push ecx
// 0050d35f  68d0358100           push 0x8135d0
// 0050d364  50                   push eax
// 0050d365  ff1580278000         call dword ptr [0x802780]
// 0050d36b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050d36f  83c40c               add esp, 0xc
// 0050d372  8d4c240c             lea ecx, [esp + 0xc]
// 0050d376  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0050d37e  ff1568248000         call dword ptr [0x802468]
// 0050d384  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0050d388  8bc6                 mov eax, esi
// 0050d38a  5e                   pop esi
// 0050d38b  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d392  83c430               add esp, 0x30
// 0050d395  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?scanUInt@G3D@@YAHAAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
