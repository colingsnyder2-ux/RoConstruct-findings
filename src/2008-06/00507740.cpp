// roc 2008-06 00507740  unit: G3D::Shader  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507740
//
// 00507740  6aff                 push -1
// 00507742  6898b97c00           push 0x7cb998
// 00507747  64a100000000         mov eax, dword ptr fs:[0]
// 0050774d  50                   push eax
// 0050774e  64892500000000       mov dword ptr fs:[0], esp
// 00507755  83ec40               sub esp, 0x40
// 00507758  56                   push esi
// 00507759  8bf1                 mov esi, ecx
// 0050775b  89742408             mov dword ptr [esp + 8], esi
// 0050775f  c70600000000         mov dword ptr [esi], 0
// 00507765  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0050776d  c7460400000000       mov dword ptr [esi + 4], 0
// 00507774  c7460800000000       mov dword ptr [esi + 8], 0
// 0050777b  803d88ee960000       cmp byte ptr [0x96ee88], 0
// 00507782  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00507787  0f84a1000000         je 0x50782e
// 0050778d  803d89ee960000       cmp byte ptr [0x96ee89], 0
// 00507794  0f8494000000         je 0x50782e
// 0050779a  803d79ee960000       cmp byte ptr [0x96ee79], 0
// 005077a1  0f8487000000         je 0x50782e
// 005077a7  68f0748200           push 0x8274f0
// 005077ac  8d4c242c             lea ecx, [esp + 0x2c]
// 005077b0  ff1558248000         call dword ptr [0x802458]
// 005077b6  6816b78000           push 0x80b716
// 005077bb  8d4c2410             lea ecx, [esp + 0x10]
// 005077bf  c644245003           mov byte ptr [esp + 0x50], 3
// 005077c4  ff1558248000         call dword ptr [0x802458]
// 005077ca  6a00                 push 0
// 005077cc  8d44242c             lea eax, [esp + 0x2c]
// 005077d0  50                   push eax
// 005077d1  8d4c2414             lea ecx, [esp + 0x14]
// 005077d5  51                   push ecx
// 005077d6  8d542410             lea edx, [esp + 0x10]
// 005077da  52                   push edx
// 005077db  c644245c04           mov byte ptr [esp + 0x5c], 4
// 005077e0  e89bfeffff           call 0x507680
// 005077e5  83c410               add esp, 0x10
// 005077e8  8b00                 mov eax, dword ptr [eax]
// 005077ea  50                   push eax
// 005077eb  8bce                 mov ecx, esi
// 005077ed  c644245005           mov byte ptr [esp + 0x50], 5
// 005077f2  e8a9170900           call 0x598fa0
// 005077f7  8d4c2404             lea ecx, [esp + 4]
// 005077fb  c644244c04           mov byte ptr [esp + 0x4c], 4
// 00507800  e86bb2ffff           call 0x502a70
// 00507805  8d4c240c             lea ecx, [esp + 0xc]
// 00507809  c644244c03           mov byte ptr [esp + 0x4c], 3
// 0050780e  ff1568248000         call dword ptr [0x802468]
// 00507814  8d4c2428             lea ecx, [esp + 0x28]
// 00507818  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0050781d  ff1568248000         call dword ptr [0x802468]
// 00507823  8b0e                 mov ecx, dword ptr [esi]
// 00507825  8b11                 mov edx, dword ptr [ecx]
// 00507827  8b4204               mov eax, dword ptr [edx + 4]
// 0050782a  6a00                 push 0
// 0050782c  ffd0                 call eax
// 0050782e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00507832  8bc6                 mov eax, esi
// 00507834  5e                   pop esi
// 00507835  64890d00000000       mov dword ptr fs:[0], ecx
// 0050783c  83c44c               add esp, 0x4c
// 0050783f  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??0DepthBlur@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
