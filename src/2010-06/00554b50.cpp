// from server: 100% by auto
// roc 2010-06 00554b50  unit: seg_00550000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00554b50
//
// 00554b50  6aff                 push -1
// 00554b52  68c8119900           push 0x9911c8
// 00554b57  64a100000000         mov eax, dword ptr fs:[0]
// 00554b5d  50                   push eax
// 00554b5e  64892500000000       mov dword ptr fs:[0], esp
// 00554b65  83ec48               sub esp, 0x48
// 00554b68  56                   push esi
// 00554b69  57                   push edi
// 00554b6a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00554b6e  6a01                 push 1
// 00554b70  8bf1                 mov esi, ecx
// 00554b72  57                   push edi
// 00554b73  8d4c2410             lea ecx, [esp + 0x10]
// 00554b77  e844be0000           call 0x5609c0
// 00554b7c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00554b80  8d442408             lea eax, [esp + 8]
// 00554b84  50                   push eax
// 00554b85  51                   push ecx
// 00554b86  6a00                 push 0
// 00554b88  6a00                 push 0
// 00554b8a  57                   push edi
// 00554b8b  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 00554b93  e8d8e9ffff           call 0x553570
// 00554b98  83c410               add esp, 0x10
// 00554b9b  50                   push eax
// 00554b9c  8bce                 mov ecx, esi
// 00554b9e  e85dfeffff           call 0x554a00
// 00554ba3  6a00                 push 0
// 00554ba5  8d4c240c             lea ecx, [esp + 0xc]
// 00554ba9  e8d2bf0000           call 0x560b80
// 00554bae  8d4c2408             lea ecx, [esp + 8]
// 00554bb2  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00554bba  e8e1bc0000           call 0x5608a0
// 00554bbf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00554bc3  5f                   pop edi
// 00554bc4  5e                   pop esi
// 00554bc5  64890d00000000       mov dword ptr fs:[0], ecx
// 00554bcc  83c454               add esp, 0x54
// 00554bcf  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?save@GImage@G3D@@QBEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
