// roc 2009-12 00803cb0  unit: CXTPPaintManager  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00803cb0
//
// 00803cb0  6aff                 push -1
// 00803cb2  68a8949500           push 0x9594a8
// 00803cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00803cbd  50                   push eax
// 00803cbe  83ec20               sub esp, 0x20
// 00803cc1  53                   push ebx
// 00803cc2  55                   push ebp
// 00803cc3  56                   push esi
// 00803cc4  57                   push edi
// 00803cc5  a10052b600           mov eax, dword ptr [0xb65200]
// 00803cca  33c4                 xor eax, esp
// 00803ccc  50                   push eax
// 00803ccd  8d442434             lea eax, [esp + 0x34]
// 00803cd1  64a300000000         mov dword ptr fs:[0], eax
// 00803cd7  8bf9                 mov edi, ecx
// 00803cd9  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00803cde  0f85bb000000         jne 0x803d9f
// 00803ce4  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00803ce8  53                   push ebx
// 00803ce9  8d4c2418             lea ecx, [esp + 0x18]
// 00803ced  e8de750400           call 0x84b2d0
// 00803cf2  8b742444             mov esi, dword ptr [esp + 0x44]
// 00803cf6  8d87bc000000         lea eax, [edi + 0xbc]
// 00803cfc  50                   push eax
// 00803cfd  56                   push esi
// 00803cfe  8d4c242c             lea ecx, [esp + 0x2c]
// 00803d02  e859790400           call 0x84b660
// 00803d07  6a18                 push 0x18
// 00803d09  8bcf                 mov ecx, edi
// 00803d0b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00803d13  e82899ffff           call 0x7fd640
// 00803d18  50                   push eax
// 00803d19  8d4c2418             lea ecx, [esp + 0x18]
// 00803d1d  51                   push ecx
// 00803d1e  8bce                 mov ecx, esi
// 00803d20  e8d908ffff           call 0x7f45fe
// 00803d25  8b2dd8ca9800         mov ebp, dword ptr [0x98cad8]
// 00803d2b  6a10                 push 0x10
// 00803d2d  ffd5                 call ebp
// 00803d2f  50                   push eax
// 00803d30  6a10                 push 0x10
// 00803d32  ffd5                 call ebp
// 00803d34  50                   push eax
// 00803d35  8d54241c             lea edx, [esp + 0x1c]
// 00803d39  52                   push edx
// 00803d3a  8bce                 mov ecx, esi
// 00803d3c  e8b708ffff           call 0x7f45f8
// 00803d41  6a01                 push 1
// 00803d43  8bce                 mov ecx, esi
// 00803d45  e846271200           call 0x926490
// 00803d4a  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00803d4d  8b16                 mov edx, dword ptr [esi]
// 00803d4f  f7d8                 neg eax
// 00803d51  1bc0                 sbb eax, eax
// 00803d53  83e006               and eax, 6
// 00803d56  83c011               add eax, 0x11
// 00803d59  50                   push eax
// 00803d5a  8bcf                 mov ecx, edi
// 00803d5c  e8df98ffff           call 0x7fd640
// 00803d61  8b5238               mov edx, dword ptr [edx + 0x38]
// 00803d64  50                   push eax
// 00803d65  8bce                 mov ecx, esi
// 00803d67  ffd2                 call edx
// 00803d69  8d7b54               lea edi, [ebx + 0x54]
// 00803d6c  8b1e                 mov ebx, dword ptr [esi]
// 00803d6e  6a25                 push 0x25
// 00803d70  8d442418             lea eax, [esp + 0x18]
// 00803d74  50                   push eax
// 00803d75  8bcf                 mov ecx, edi
// 00803d77  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00803d7d  50                   push eax
// 00803d7e  8bcf                 mov ecx, edi
// 00803d80  ff1580de9800         call dword ptr [0x98de80]
// 00803d86  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00803d89  50                   push eax
// 00803d8a  8bce                 mov ecx, esi
// 00803d8c  ffd2                 call edx
// 00803d8e  8d4c2424             lea ecx, [esp + 0x24]
// 00803d92  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00803d9a  e841790400           call 0x84b6e0
// 00803d9f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00803da3  64890d00000000       mov dword ptr fs:[0], ecx
// 00803daa  59                   pop ecx
// 00803dab  5f                   pop edi
// 00803dac  5e                   pop esi
// 00803dad  5d                   pop ebp
// 00803dae  5b                   pop ebx
// 00803daf  83c42c               add esp, 0x2c
// 00803db2  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp