// from server: 100% by auto
// roc 2008-06 00513fe0  unit: G3D::GCamera  size: 426 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513fe0
//
// 00513fe0  6aff                 push -1
// 00513fe2  6802c57c00           push 0x7cc502
// 00513fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00513fed  50                   push eax
// 00513fee  64892500000000       mov dword ptr fs:[0], esp
// 00513ff5  83ec44               sub esp, 0x44
// 00513ff8  53                   push ebx
// 00513ff9  57                   push edi
// 00513ffa  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00513ffe  6a01                 push 1
// 00514000  6a00                 push 0
// 00514002  8d442410             lea eax, [esp + 0x10]
// 00514006  50                   push eax
// 00514007  8bcf                 mov ecx, edi
// 00514009  c64424145c           mov byte ptr [esp + 0x14], 0x5c
// 0051400e  ff1598248000         call dword ptr [0x802498]
// 00514014  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 0051401a  8bd8                 mov ebx, eax
// 0051401c  3b19                 cmp ebx, dword ptr [ecx]
// 0051401e  7513                 jne 0x514033
// 00514020  5f                   pop edi
// 00514021  32c0                 xor al, al
// 00514023  5b                   pop ebx
// 00514024  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00514028  64890d00000000       mov dword ptr fs:[0], ecx
// 0051402f  83c450               add esp, 0x50
// 00514032  c3                   ret 
// 00514033  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00514037  56                   push esi
// 00514038  7205                 jb 0x51403f
// 0051403a  8b7704               mov esi, dword ptr [edi + 4]
// 0051403d  eb03                 jmp 0x514042
// 0051403f  8d7704               lea esi, [edi + 4]
// 00514042  55                   push ebp
// 00514043  e838feffff           call 0x513e80
// 00514048  8be8                 mov ebp, eax
// 0051404a  85ed                 test ebp, ebp
// 0051404c  0f8423010000         je 0x514175
// 00514052  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 00514058  8b02                 mov eax, dword ptr [edx]
// 0051405a  6a01                 push 1
// 0051405c  50                   push eax
// 0051405d  8d442418             lea eax, [esp + 0x18]
// 00514061  50                   push eax
// 00514062  8bcf                 mov ecx, edi
// 00514064  c644241c5c           mov byte ptr [esp + 0x1c], 0x5c
// 00514069  ff159c248000         call dword ptr [0x80249c]
// 0051406f  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 00514075  8bf0                 mov esi, eax
// 00514077  3b31                 cmp esi, dword ptr [ecx]
// 00514079  0f84f6000000         je 0x514175
// 0051407f  8bd6                 mov edx, esi
// 00514081  2bd3                 sub edx, ebx
// 00514083  4a                   dec edx
// 00514084  52                   push edx
// 00514085  43                   inc ebx
// 00514086  53                   push ebx
// 00514087  8d442440             lea eax, [esp + 0x40]
// 0051408b  50                   push eax
// 0051408c  8bcf                 mov ecx, edi
// 0051408e  ff15e0238000         call dword ptr [0x8023e0]
// 00514094  8b4714               mov eax, dword ptr [edi + 0x14]
// 00514097  2bc6                 sub eax, esi
// 00514099  50                   push eax
// 0051409a  46                   inc esi
// 0051409b  56                   push esi
// 0051409c  8d4c2424             lea ecx, [esp + 0x24]
// 005140a0  51                   push ecx
// 005140a1  8bcf                 mov ecx, edi
// 005140a3  c744246800000000     mov dword ptr [esp + 0x68], 0
// 005140ab  ff15e0238000         call dword ptr [0x8023e0]
// 005140b1  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005140b5  be10000000           mov esi, 0x10
// 005140ba  39742450             cmp dword ptr [esp + 0x50], esi
// 005140be  7304                 jae 0x5140c4
// 005140c0  8d44243c             lea eax, [esp + 0x3c]
// 005140c4  8d542414             lea edx, [esp + 0x14]
// 005140c8  52                   push edx
// 005140c9  683f000f00           push 0xf003f
// 005140ce  6a00                 push 0
// 005140d0  50                   push eax
// 005140d1  55                   push ebp
// 005140d2  ff1510208000         call dword ptr [0x802010]
// 005140d8  85c0                 test eax, eax
// 005140da  7578                 jne 0x514154
// 005140dc  8b442420             mov eax, dword ptr [esp + 0x20]
// 005140e0  c744241804000000     mov dword ptr [esp + 0x18], 4
// 005140e8  39742434             cmp dword ptr [esp + 0x34], esi
// 005140ec  7304                 jae 0x5140f2
// 005140ee  8d442420             lea eax, [esp + 0x20]
// 005140f2  8b542468             mov edx, dword ptr [esp + 0x68]
// 005140f6  8d4c2418             lea ecx, [esp + 0x18]
// 005140fa  51                   push ecx
// 005140fb  52                   push edx
// 005140fc  6a00                 push 0
// 005140fe  6a00                 push 0
// 00514100  50                   push eax
// 00514101  8b442428             mov eax, dword ptr [esp + 0x28]
// 00514105  50                   push eax
// 00514106  ff1520208000         call dword ptr [0x802020]
// 0051410c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00514110  51                   push ecx
// 00514111  8bf0                 mov esi, eax
// 00514113  ff1508208000         call dword ptr [0x802008]
// 00514119  85f6                 test esi, esi
// 0051411b  8d4c241c             lea ecx, [esp + 0x1c]
// 0051411f  0f94c3               sete bl
// 00514122  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00514127  ff1568248000         call dword ptr [0x802468]
// 0051412d  8d4c2438             lea ecx, [esp + 0x38]
// 00514131  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00514139  ff1568248000         call dword ptr [0x802468]
// 0051413f  5d                   pop ebp
// 00514140  5e                   pop esi
// 00514141  5f                   pop edi
// 00514142  8ac3                 mov al, bl
// 00514144  5b                   pop ebx
// 00514145  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00514149  64890d00000000       mov dword ptr fs:[0], ecx
// 00514150  83c450               add esp, 0x50
// 00514153  c3                   ret 
// 00514154  8d4c241c             lea ecx, [esp + 0x1c]
// 00514158  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0051415d  ff1568248000         call dword ptr [0x802468]
// 00514163  8d4c2438             lea ecx, [esp + 0x38]
// 00514167  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0051416f  ff1568248000         call dword ptr [0x802468]
// 00514175  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00514179  5d                   pop ebp
// 0051417a  5e                   pop esi
// 0051417b  5f                   pop edi
// 0051417c  32c0                 xor al, al
// 0051417e  5b                   pop ebx
// 0051417f  64890d00000000       mov dword ptr fs:[0], ecx
// 00514186  83c450               add esp, 0x50
// 00514189  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?readInt32@RegistryUtil@G3D@@SA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
