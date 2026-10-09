// roc 2009-12 00913eb0  unit: Ogre::RbxMeshLoader  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00913eb0
//
// 00913eb0  6aff                 push -1
// 00913eb2  687f719600           push 0x96717f
// 00913eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00913ebd  50                   push eax
// 00913ebe  64892500000000       mov dword ptr fs:[0], esp
// 00913ec5  81ec94000000         sub esp, 0x94
// 00913ecb  53                   push ebx
// 00913ecc  55                   push ebp
// 00913ecd  56                   push esi
// 00913ece  57                   push edi
// 00913ecf  6856fd9900           push 0x99fd56
// 00913ed4  8d4c241c             lea ecx, [esp + 0x1c]
// 00913ed8  ff15f4b69800         call dword ptr [0x98b6f4]
// 00913ede  33ed                 xor ebp, ebp
// 00913ee0  683046a200           push 0xa24630
// 00913ee5  8d4c2438             lea ecx, [esp + 0x38]
// 00913ee9  89ac24b0000000       mov dword ptr [esp + 0xb0], ebp
// 00913ef0  ff15f4b69800         call dword ptr [0x98b6f4]
// 00913ef6  8b3d80b69800         mov edi, dword ptr [0x98b680]
// 00913efc  688043a200           push 0xa24380
// 00913f01  50                   push eax
// 00913f02  8d442458             lea eax, [esp + 0x58]
// 00913f06  50                   push eax
// 00913f07  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 00913f0f  ffd7                 call edi
// 00913f11  55                   push ebp
// 00913f12  50                   push eax
// 00913f13  8d4c242c             lea ecx, [esp + 0x2c]
// 00913f17  51                   push ecx
// 00913f18  8d542428             lea edx, [esp + 0x28]
// 00913f1c  b302                 mov bl, 2
// 00913f1e  52                   push edx
// 00913f1f  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 00913f26  e8f55fcdff           call 0x5e9f20
// 00913f2b  83c41c               add esp, 0x1c
// 00913f2e  8b30                 mov esi, dword ptr [eax]
// 00913f30  a1a41cba00           mov eax, dword ptr [0xba1ca4]
// 00913f35  c68424ac00000003     mov byte ptr [esp + 0xac], 3
// 00913f3d  3bf0                 cmp esi, eax
// 00913f3f  7449                 je 0x913f8a
// 00913f41  3bc5                 cmp eax, ebp
// 00913f43  7431                 je 0x913f76
// 00913f45  83c004               add eax, 4
// 00913f48  50                   push eax
// 00913f49  ff1508b29800         call dword ptr [0x98b208]
// 00913f4f  85c0                 test eax, eax
// 00913f51  751d                 jne 0x913f70
// 00913f53  8b0da41cba00         mov ecx, dword ptr [0xba1ca4]
// 00913f59  e8c270b3ff           call 0x44b020
// 00913f5e  8b0da41cba00         mov ecx, dword ptr [0xba1ca4]
// 00913f64  3bcd                 cmp ecx, ebp
// 00913f66  7408                 je 0x913f70
// 00913f68  8b01                 mov eax, dword ptr [ecx]
// 00913f6a  8b10                 mov edx, dword ptr [eax]
// 00913f6c  6a01                 push 1
// 00913f6e  ffd2                 call edx
// 00913f70  892da41cba00         mov dword ptr [0xba1ca4], ebp
// 00913f76  3bf5                 cmp esi, ebp
// 00913f78  7410                 je 0x913f8a
// 00913f7a  8935a41cba00         mov dword ptr [0xba1ca4], esi
// 00913f80  83c604               add esi, 4
// 00913f83  56                   push esi
// 00913f84  ff150cb29800         call dword ptr [0x98b20c]
// 00913f8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00913f8e  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 00913f95  3bc5                 cmp eax, ebp
// 00913f97  742b                 je 0x913fc4
// 00913f99  83c004               add eax, 4
// 00913f9c  50                   push eax
// 00913f9d  ff1508b29800         call dword ptr [0x98b208]
// 00913fa3  85c0                 test eax, eax
// 00913fa5  7519                 jne 0x913fc0
// 00913fa7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00913fab  e87070b3ff           call 0x44b020
// 00913fb0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00913fb4  3bcd                 cmp ecx, ebp
// 00913fb6  7408                 je 0x913fc0
// 00913fb8  8b01                 mov eax, dword ptr [ecx]
// 00913fba  8b10                 mov edx, dword ptr [eax]
// 00913fbc  6a01                 push 1
// 00913fbe  ffd2                 call edx
// 00913fc0  896c2410             mov dword ptr [esp + 0x10], ebp
// 00913fc4  8d4c2450             lea ecx, [esp + 0x50]
// 00913fc8  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 00913fd0  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913fd6  8d4c2434             lea ecx, [esp + 0x34]
// 00913fda  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 00913fe2  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913fe8  83ceff               or esi, 0xffffffff
// 00913feb  8d4c2418             lea ecx, [esp + 0x18]
// 00913fef  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 00913ff6  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913ffc  6856fd9900           push 0x99fd56
// 00914001  8d4c241c             lea ecx, [esp + 0x1c]
// 00914005  ff15f4b69800         call dword ptr [0x98b6f4]
// 0091400b  682842a200           push 0xa24228
// 00914010  8d4c2454             lea ecx, [esp + 0x54]
// 00914014  c78424b000000004000000 mov dword ptr [esp + 0xb0], 4
// 0091401f  ff15f4b69800         call dword ptr [0x98b6f4]
// 00914025  68b03fa200           push 0xa23fb0
// 0091402a  50                   push eax
// 0091402b  8d44243c             lea eax, [esp + 0x3c]
// 0091402f  50                   push eax
// 00914030  c68424b800000005     mov byte ptr [esp + 0xb8], 5
// 00914038  ffd7                 call edi
// 0091403a  55                   push ebp
// 0091403b  50                   push eax
// 0091403c  8d4c242c             lea ecx, [esp + 0x2c]
// 00914040  51                   push ecx
// 00914041  8d542428             lea edx, [esp + 0x28]
// 00914045  b306                 mov bl, 6
// 00914047  52                   push edx
// 00914048  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 0091404f  e8cc5ecdff           call 0x5e9f20
// 00914054  83c41c               add esp, 0x1c
// 00914057  8b00                 mov eax, dword ptr [eax]
// 00914059  50                   push eax
// 0091405a  b9a81cba00           mov ecx, 0xba1ca8
// 0091405f  c68424b000000007     mov byte ptr [esp + 0xb0], 7
// 00914067  e8047bb3ff           call 0x44bb70
// 0091406c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00914070  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 00914077  3bc5                 cmp eax, ebp
// 00914079  742b                 je 0x9140a6
// 0091407b  83c004               add eax, 4
// 0091407e  50                   push eax
// 0091407f  ff1508b29800         call dword ptr [0x98b208]
// 00914085  85c0                 test eax, eax
// 00914087  7519                 jne 0x9140a2
// 00914089  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0091408d  e88e6fb3ff           call 0x44b020
// 00914092  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00914096  3bcd                 cmp ecx, ebp
// 00914098  7408                 je 0x9140a2
// 0091409a  8b11                 mov edx, dword ptr [ecx]
// 0091409c  8b02                 mov eax, dword ptr [edx]
// 0091409e  6a01                 push 1
// 009140a0  ffd0                 call eax
// 009140a2  896c2410             mov dword ptr [esp + 0x10], ebp
// 009140a6  8d4c2434             lea ecx, [esp + 0x34]
// 009140aa  c68424ac00000005     mov byte ptr [esp + 0xac], 5
// 009140b2  ff15e4b69800         call dword ptr [0x98b6e4]
// 009140b8  8d4c2450             lea ecx, [esp + 0x50]
// 009140bc  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 009140c4  ff15e4b69800         call dword ptr [0x98b6e4]
// 009140ca  8d4c2418             lea ecx, [esp + 0x18]
// 009140ce  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 009140d5  ff15e4b69800         call dword ptr [0x98b6e4]
// 009140db  68703da200           push 0xa23d70
// 009140e0  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009140e7  ff15f4b69800         call dword ptr [0x98b6f4]
// 009140ed  6856fd9900           push 0x99fd56
// 009140f2  8d4c2470             lea ecx, [esp + 0x70]
// 009140f6  c78424b000000008000000 mov dword ptr [esp + 0xb0], 8
// 00914101  ff15f4b69800         call dword ptr [0x98b6f4]
// 00914107  55                   push ebp
// 00914108  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0091410f  51                   push ecx
// 00914110  8d542474             lea edx, [esp + 0x74]
// 00914114  52                   push edx
// 00914115  8d442420             lea eax, [esp + 0x20]
// 00914119  b309                 mov bl, 9
// 0091411b  50                   push eax
// 0091411c  889c24bc000000       mov byte ptr [esp + 0xbc], bl
// 00914123  e8f85dcdff           call 0x5e9f20
// 00914128  83c410               add esp, 0x10
// 0091412b  8b08                 mov ecx, dword ptr [eax]
// 0091412d  51                   push ecx
// 0091412e  b9ac1cba00           mov ecx, 0xba1cac
// 00914133  c68424b00000000a     mov byte ptr [esp + 0xb0], 0xa
// 0091413b  e8307ab3ff           call 0x44bb70
// 00914140  8b442414             mov eax, dword ptr [esp + 0x14]
// 00914144  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 0091414b  3bc5                 cmp eax, ebp
// 0091414d  742b                 je 0x91417a
// 0091414f  83c004               add eax, 4
// 00914152  50                   push eax
// 00914153  ff1508b29800         call dword ptr [0x98b208]
// 00914159  85c0                 test eax, eax
// 0091415b  7519                 jne 0x914176
// 0091415d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00914161  e8ba6eb3ff           call 0x44b020
// 00914166  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0091416a  3bcd                 cmp ecx, ebp
// 0091416c  7408                 je 0x914176
// 0091416e  8b11                 mov edx, dword ptr [ecx]
// 00914170  8b02                 mov eax, dword ptr [edx]
// 00914172  6a01                 push 1
// 00914174  ffd0                 call eax
// 00914176  896c2414             mov dword ptr [esp + 0x14], ebp
// 0091417a  8d4c246c             lea ecx, [esp + 0x6c]
// 0091417e  c68424ac00000008     mov byte ptr [esp + 0xac], 8
// 00914186  ff15e4b69800         call dword ptr [0x98b6e4]
// 0091418c  8d8c2488000000       lea ecx, [esp + 0x88]
// 00914193  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 0091419a  ff15e4b69800         call dword ptr [0x98b6e4]
// 009141a0  bea41cba00           mov esi, 0xba1ca4
// 009141a5  8b0e                 mov ecx, dword ptr [esi]
// 009141a7  8b11                 mov edx, dword ptr [ecx]
// 009141a9  8b4204               mov eax, dword ptr [edx + 4]
// 009141ac  55                   push ebp
// 009141ad  ffd0                 call eax
// 009141af  83c604               add esi, 4
// 009141b2  81feb01cba00         cmp esi, 0xba1cb0
// 009141b8  7ceb                 jl 0x9141a5
// 009141ba  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 009141c1  5f                   pop edi
// 009141c2  5e                   pop esi
// 009141c3  5d                   pop ebp
// 009141c4  5b                   pop ebx
// 009141c5  64890d00000000       mov dword ptr fs:[0], ecx
// 009141cc  81c4a0000000         add esp, 0xa0
// 009141d2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS20@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
