// from server: 100% by auto
// roc 2008-06 00514190  unit: G3D::GCamera  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514190
//
// 00514190  6aff                 push -1
// 00514192  6802c57c00           push 0x7cc502
// 00514197  64a100000000         mov eax, dword ptr fs:[0]
// 0051419d  50                   push eax
// 0051419e  64892500000000       mov dword ptr fs:[0], esp
// 005141a5  83ec44               sub esp, 0x44
// 005141a8  53                   push ebx
// 005141a9  57                   push edi
// 005141aa  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 005141ae  6a01                 push 1
// 005141b0  6a00                 push 0
// 005141b2  8d442410             lea eax, [esp + 0x10]
// 005141b6  50                   push eax
// 005141b7  8bcf                 mov ecx, edi
// 005141b9  c64424145c           mov byte ptr [esp + 0x14], 0x5c
// 005141be  ff1598248000         call dword ptr [0x802498]
// 005141c4  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 005141ca  8bd8                 mov ebx, eax
// 005141cc  3b19                 cmp ebx, dword ptr [ecx]
// 005141ce  7513                 jne 0x5141e3
// 005141d0  5f                   pop edi
// 005141d1  32c0                 xor al, al
// 005141d3  5b                   pop ebx
// 005141d4  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005141d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005141df  83c450               add esp, 0x50
// 005141e2  c3                   ret 
// 005141e3  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005141e7  56                   push esi
// 005141e8  7205                 jb 0x5141ef
// 005141ea  8b7704               mov esi, dword ptr [edi + 4]
// 005141ed  eb03                 jmp 0x5141f2
// 005141ef  8d7704               lea esi, [edi + 4]
// 005141f2  55                   push ebp
// 005141f3  e888fcffff           call 0x513e80
// 005141f8  8be8                 mov ebp, eax
// 005141fa  85ed                 test ebp, ebp
// 005141fc  0f8472010000         je 0x514374
// 00514202  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 00514208  8b02                 mov eax, dword ptr [edx]
// 0051420a  6a01                 push 1
// 0051420c  50                   push eax
// 0051420d  8d442418             lea eax, [esp + 0x18]
// 00514211  50                   push eax
// 00514212  8bcf                 mov ecx, edi
// 00514214  c644241c5c           mov byte ptr [esp + 0x1c], 0x5c
// 00514219  ff159c248000         call dword ptr [0x80249c]
// 0051421f  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 00514225  8bf0                 mov esi, eax
// 00514227  3b31                 cmp esi, dword ptr [ecx]
// 00514229  0f8445010000         je 0x514374
// 0051422f  8bd6                 mov edx, esi
// 00514231  2bd3                 sub edx, ebx
// 00514233  4a                   dec edx
// 00514234  52                   push edx
// 00514235  43                   inc ebx
// 00514236  53                   push ebx
// 00514237  8d442440             lea eax, [esp + 0x40]
// 0051423b  50                   push eax
// 0051423c  8bcf                 mov ecx, edi
// 0051423e  ff15e0238000         call dword ptr [0x8023e0]
// 00514244  8b4714               mov eax, dword ptr [edi + 0x14]
// 00514247  2bc6                 sub eax, esi
// 00514249  50                   push eax
// 0051424a  46                   inc esi
// 0051424b  56                   push esi
// 0051424c  8d4c2424             lea ecx, [esp + 0x24]
// 00514250  51                   push ecx
// 00514251  33db                 xor ebx, ebx
// 00514253  8bcf                 mov ecx, edi
// 00514255  895c2468             mov dword ptr [esp + 0x68], ebx
// 00514259  ff15e0238000         call dword ptr [0x8023e0]
// 0051425f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00514263  be10000000           mov esi, 0x10
// 00514268  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0051426d  39742450             cmp dword ptr [esp + 0x50], esi
// 00514271  7304                 jae 0x514277
// 00514273  8d44243c             lea eax, [esp + 0x3c]
// 00514277  8d542418             lea edx, [esp + 0x18]
// 0051427b  52                   push edx
// 0051427c  683f000f00           push 0xf003f
// 00514281  53                   push ebx
// 00514282  50                   push eax
// 00514283  55                   push ebp
// 00514284  ff1510208000         call dword ptr [0x802010]
// 0051428a  3bc3                 cmp eax, ebx
// 0051428c  0f85c1000000         jne 0x514353
// 00514292  8b442420             mov eax, dword ptr [esp + 0x20]
// 00514296  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051429a  39742434             cmp dword ptr [esp + 0x34], esi
// 0051429e  7304                 jae 0x5142a4
// 005142a0  8d442420             lea eax, [esp + 0x20]
// 005142a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005142a8  8d4c2414             lea ecx, [esp + 0x14]
// 005142ac  51                   push ecx
// 005142ad  53                   push ebx
// 005142ae  53                   push ebx
// 005142af  53                   push ebx
// 005142b0  8b1d20208000         mov ebx, dword ptr [0x802020]
// 005142b6  50                   push eax
// 005142b7  52                   push edx
// 005142b8  ffd3                 call ebx
// 005142ba  8bf0                 mov esi, eax
// 005142bc  85f6                 test esi, esi
// 005142be  754d                 jne 0x51430d
// 005142c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005142c4  50                   push eax
// 005142c5  e86642ffff           call 0x508530
// 005142ca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005142ce  51                   push ecx
// 005142cf  8bf8                 mov edi, eax
// 005142d1  56                   push esi
// 005142d2  57                   push edi
// 005142d3  e85847ffff           call 0x508a30
// 005142d8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005142dc  83c410               add esp, 0x10
// 005142df  837c243410           cmp dword ptr [esp + 0x34], 0x10
// 005142e4  7304                 jae 0x5142ea
// 005142e6  8d442420             lea eax, [esp + 0x20]
// 005142ea  8d542414             lea edx, [esp + 0x14]
// 005142ee  52                   push edx
// 005142ef  57                   push edi
// 005142f0  6a00                 push 0
// 005142f2  6a00                 push 0
// 005142f4  50                   push eax
// 005142f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005142f9  50                   push eax
// 005142fa  ffd3                 call ebx
// 005142fc  8bf0                 mov esi, eax
// 005142fe  85f6                 test esi, esi
// 00514300  750b                 jne 0x51430d
// 00514302  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00514306  57                   push edi
// 00514307  ff154c248000         call dword ptr [0x80244c]
// 0051430d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00514311  51                   push ecx
// 00514312  ff1508208000         call dword ptr [0x802008]
// 00514318  85f6                 test esi, esi
// 0051431a  8d4c241c             lea ecx, [esp + 0x1c]
// 0051431e  0f94c3               sete bl
// 00514321  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00514326  ff1568248000         call dword ptr [0x802468]
// 0051432c  8d4c2438             lea ecx, [esp + 0x38]
// 00514330  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00514338  ff1568248000         call dword ptr [0x802468]
// 0051433e  5d                   pop ebp
// 0051433f  5e                   pop esi
// 00514340  5f                   pop edi
// 00514341  8ac3                 mov al, bl
// 00514343  5b                   pop ebx
// 00514344  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00514348  64890d00000000       mov dword ptr fs:[0], ecx
// 0051434f  83c450               add esp, 0x50
// 00514352  c3                   ret 
// 00514353  8d4c241c             lea ecx, [esp + 0x1c]
// 00514357  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0051435c  ff1568248000         call dword ptr [0x802468]
// 00514362  8d4c2438             lea ecx, [esp + 0x38]
// 00514366  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0051436e  ff1568248000         call dword ptr [0x802468]
// 00514374  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00514378  5d                   pop ebp
// 00514379  5e                   pop esi
// 0051437a  5f                   pop edi
// 0051437b  32c0                 xor al, al
// 0051437d  5b                   pop ebx
// 0051437e  64890d00000000       mov dword ptr fs:[0], ecx
// 00514385  83c450               add esp, 0x50
// 00514388  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?readString@RegistryUtil@G3D@@SA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
