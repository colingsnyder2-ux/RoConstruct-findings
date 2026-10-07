// roc 2009-06 00571b50  unit: seg_00570000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00571b50
//
// 00571b50  6aff                 push -1
// 00571b52  6828048600           push 0x860428
// 00571b57  64a100000000         mov eax, dword ptr fs:[0]
// 00571b5d  50                   push eax
// 00571b5e  64892500000000       mov dword ptr fs:[0], esp
// 00571b65  83ec48               sub esp, 0x48
// 00571b68  56                   push esi
// 00571b69  57                   push edi
// 00571b6a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00571b6e  6a01                 push 1
// 00571b70  8bf1                 mov esi, ecx
// 00571b72  57                   push edi
// 00571b73  8d4c2410             lea ecx, [esp + 0x10]
// 00571b77  e8f4b60000           call 0x57d270
// 00571b7c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00571b80  8d442408             lea eax, [esp + 8]
// 00571b84  50                   push eax
// 00571b85  51                   push ecx
// 00571b86  6a00                 push 0
// 00571b88  6a00                 push 0
// 00571b8a  57                   push edi
// 00571b8b  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 00571b93  e808ebffff           call 0x5706a0
// 00571b98  83c410               add esp, 0x10
// 00571b9b  50                   push eax
// 00571b9c  8bce                 mov ecx, esi
// 00571b9e  e85dfeffff           call 0x571a00
// 00571ba3  6a00                 push 0
// 00571ba5  8d4c240c             lea ecx, [esp + 0xc]
// 00571ba9  e882b80000           call 0x57d430
// 00571bae  8d4c2408             lea ecx, [esp + 8]
// 00571bb2  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00571bba  e891b50000           call 0x57d150
// 00571bbf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00571bc3  5f                   pop edi
// 00571bc4  5e                   pop esi
// 00571bc5  64890d00000000       mov dword ptr fs:[0], ecx
// 00571bcc  83c454               add esp, 0x54
// 00571bcf  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?save@GImage@G3D@@QBEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
