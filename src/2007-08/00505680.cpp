// roc 2007-08 00505680  unit: G3D::Log  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00505680
//
// 00505680  6aff                 push -1
// 00505682  6804f77400           push 0x74f704
// 00505687  64a100000000         mov eax, dword ptr fs:[0]
// 0050568d  50                   push eax
// 0050568e  81eca8000000         sub esp, 0xa8
// 00505694  a188518b00           mov eax, dword ptr [0x8b5188]
// 00505699  33c4                 xor eax, esp
// 0050569b  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 005056a2  56                   push esi
// 005056a3  a188518b00           mov eax, dword ptr [0x8b5188]
// 005056a8  33c4                 xor eax, esp
// 005056aa  50                   push eax
// 005056ab  8d8424b0000000       lea eax, [esp + 0xb0]
// 005056b2  64a300000000         mov dword ptr fs:[0], eax
// 005056b8  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 005056bf  6a00                 push 0
// 005056c1  6a01                 push 1
// 005056c3  56                   push esi
// 005056c4  8d4c246c             lea ecx, [esp + 0x6c]
// 005056c8  e8c36a0000           call 0x50c190
// 005056cd  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 005056d4  85c0                 test eax, eax
// 005056d6  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 005056e1  7f35                 jg 0x505718
// 005056e3  6888057a00           push 0x7a0588
// 005056e8  8d4c2410             lea ecx, [esp + 0x10]
// 005056ec  ff1598e67700         call dword ptr [0x77e698]
// 005056f2  56                   push esi
// 005056f3  8d442410             lea eax, [esp + 0x10]
// 005056f7  50                   push eax
// 005056f8  8d4c2430             lea ecx, [esp + 0x30]
// 005056fc  c68424c000000001     mov byte ptr [esp + 0xc0], 1
// 00505704  e8679ef6ff           call 0x46f570
// 00505709  68a4b48400           push 0x84b4a4
// 0050570e  8d4c242c             lea ecx, [esp + 0x2c]
// 00505712  51                   push ecx
// 00505713  e886b41200           call 0x630b9e
// 00505718  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 00505720  7617                 jbe 0x505739
// 00505722  6808c58400           push 0x84c508
// 00505727  8d54240c             lea edx, [esp + 0xc]
// 0050572b  52                   push edx
// 0050572c  c7442410c8a47900     mov dword ptr [esp + 0x10], 0x79a4c8
// 00505734  e865b41200           call 0x630b9e
// 00505739  6a08                 push 8
// 0050573b  50                   push eax
// 0050573c  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00505743  50                   push eax
// 00505744  56                   push esi
// 00505745  e8f6f6ffff           call 0x504e40
// 0050574a  83c410               add esp, 0x10
// 0050574d  8d4c2460             lea ecx, [esp + 0x60]
// 00505751  8bf0                 mov esi, eax
// 00505753  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 0050575e  e87d670000           call 0x50bee0
// 00505763  8bc6                 mov eax, esi
// 00505765  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0050576c  64890d00000000       mov dword ptr fs:[0], ecx
// 00505773  59                   pop ecx
// 00505774  5e                   pop esi
// 00505775  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0050577c  33cc                 xor ecx, esp
// 0050577e  e89bb21200           call 0x630a1e
// 00505783  81c4b4000000         add esp, 0xb4
// 00505789  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?resolveFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
