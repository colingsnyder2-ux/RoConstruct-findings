// roc 2009-12 005f0c50  unit: seg_005f0000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f0c50
//
// 005f0c50  6aff                 push -1
// 005f0c52  6868f39300           push 0x93f368
// 005f0c57  64a100000000         mov eax, dword ptr fs:[0]
// 005f0c5d  50                   push eax
// 005f0c5e  64892500000000       mov dword ptr fs:[0], esp
// 005f0c65  83ec48               sub esp, 0x48
// 005f0c68  56                   push esi
// 005f0c69  57                   push edi
// 005f0c6a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 005f0c6e  6a01                 push 1
// 005f0c70  8bf1                 mov esi, ecx
// 005f0c72  57                   push edi
// 005f0c73  8d4c2410             lea ecx, [esp + 0x10]
// 005f0c77  e8d4e30000           call 0x5ff050
// 005f0c7c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005f0c80  8d442408             lea eax, [esp + 8]
// 005f0c84  50                   push eax
// 005f0c85  51                   push ecx
// 005f0c86  6a00                 push 0
// 005f0c88  6a00                 push 0
// 005f0c8a  57                   push edi
// 005f0c8b  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 005f0c93  e8d8e9ffff           call 0x5ef670
// 005f0c98  83c410               add esp, 0x10
// 005f0c9b  50                   push eax
// 005f0c9c  8bce                 mov ecx, esi
// 005f0c9e  e85dfeffff           call 0x5f0b00
// 005f0ca3  6a00                 push 0
// 005f0ca5  8d4c240c             lea ecx, [esp + 0xc]
// 005f0ca9  e862e50000           call 0x5ff210
// 005f0cae  8d4c2408             lea ecx, [esp + 8]
// 005f0cb2  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 005f0cba  e871e20000           call 0x5fef30
// 005f0cbf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005f0cc3  5f                   pop edi
// 005f0cc4  5e                   pop esi
// 005f0cc5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f0ccc  83c454               add esp, 0x54
// 005f0ccf  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?save@GImage@G3D@@QBEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
